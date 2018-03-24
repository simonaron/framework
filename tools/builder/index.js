var swig  = require('swig');
var fs = require('fs');

console.log(process.argv[2])

const config = require(process.argv[2] + 'builder-config.json');

console.log("#################################################################");
console.log("### HOSTS                                                     ###");
console.log("#################################################################");

for (let hostname in config.hosts) {
	var host = config.hosts[hostname];
	console.log("### hostname: ", hostname);
	console.log("### arch: ", host.arch);	

	if (config.archs[host.arch] == undefined) {
		console.log("### error: No builder for arch: " + host.arch);
	} else {
		console.log("### builder: " + config.archs[host.arch].builder);
	} 
	console.log("#################################################################");
}


var services = [];

for (let ctrlname in config.ctrls) {
	ctrl = config.ctrls[ctrlname];
	var service = {
		name: ctrlname,
		device: ctrl.host,
		repository: config.repository,
		image_name: config.projectname,
		arch: config.hosts[ctrl.host].arch
	};
	
	if (ctrl.mc) {
		service.command = "mctr " + ctrl.mc.config;
	}
	if (ctrl.hc) {
		var mc = config.ctrls[ctrl.hc.mc].mc;
		service.command = mc.bin + " " + ctrl.hc.mc + " " + mc.port;

		if(ctrl.interface_type == "raspberry") {
			service.volumes = [{
				source: "/sys", target: "/sys"	
			}]
		}
	}

	services.push(service);
}


fs.writeFileSync(
process.argv[2] + 'docker-compose.yml',
swig.renderFile('./templates/docker-compose.t.yml', {
    services: services
})
)


