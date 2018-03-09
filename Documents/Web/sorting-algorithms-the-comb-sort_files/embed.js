var DISQUS=function(e){var h=e.DISQUS||{};h.AssertionError=function(d){this.message=d};h.AssertionError.prototype.toString=function(){return"Assertion Error: "+(this.message||"[no message]")};h.assert=function(d,b,f){if(!d)if(f)e.console&&e.console.log("DISQUS assertion failed: "+b);else throw new h.AssertionError(b);};var b=[];h.define=function(d,l){typeof d==="function"&&(l=d,d="");for(var f=d.split("."),a=f.shift(),c=h,m=(l||function(){return{}}).call({overwrites:function(a){a.__overwrites__=!0;
return a}},e);a;)c=c[a]?c[a]:c[a]={},a=f.shift();for(var g in m)m.hasOwnProperty(g)&&(!m.__overwrites__&&c[g]!==null&&h.assert(!c.hasOwnProperty(g),"Unsafe attempt to redefine existing module: "+g,!0),c[g]=m[g],b.push(function(a,c){return function(){delete a[c]}}(c,g)));return c};h.use=function(d){return h.define(d)};h.cleanup=function(){for(var d=0;d<b.length;d++)b[d]()};return h}(window);
DISQUS.define(function(e,h){var b=e.DISQUS,d=e.document,l=d.getElementsByTagName("head")[0]||d.body,f={running:!1,timer:null,queue:[]};b.defer=function(a,c){function d(){var a=f.queue;if(a.length===0)f.running=!1,clearInterval(f.timer);for(var c=0,b;b=a[c];c++)b[0]()&&(a.splice(c--,1),b[1]())}f.queue.push([a,c]);d();if(!f.running)f.running=!0,f.timer=setInterval(d,100)};b.each=function(a,c){var d=a.length,b=Array.prototype.forEach;if(isNaN(d))for(var e in a)a.hasOwnProperty(e)&&c(a[e],e,a);else if(b)b.call(a,
c);else for(b=0;b<d;b++)c(a[b],b,a)};b.extend=function(a){b.each(Array.prototype.slice.call(arguments,1),function(c){for(var b in c)a[b]=c[b]});return a};b.serializeArgs=function(a){var c=[];b.each(a,function(a,b){a!==h&&c.push(b+(a!==null?"="+encodeURIComponent(a):""))});return c.join("&")};b.isString=function(a){return Object.prototype.toString.call(a)==="[object String]"};b.serialize=function(a,c,d){c&&(a+=~a.indexOf("?")?a.charAt(a.length-1)=="&"?"":"&":"?",a+=b.serializeArgs(c));if(d)return c=
{},c[(new Date).getTime()]=null,b.serialize(a,c);c=a.length;return a.charAt(c-1)=="&"?a.slice(0,c-1):a};b.require=function(a,c,e,g,f){function h(a){if(a.type=="load"||/^(complete|loaded)$/.test(a.target.readyState))g&&g(),n&&clearTimeout(n),b.bean.remove(a.target,r,h)}var j=d.createElement("script"),r=j.addEventListener?"load":"readystatechange",n=null;j.src=b.serialize(a,c,e);j.async=!0;j.charset="UTF-8";(g||f)&&b.bean.add(j,r,h);f&&(n=setTimeout(function(){f()},2E4));l.appendChild(j);return b};
b.requireStylesheet=function(a,c,e){var g=d.createElement("link");g.rel="stylesheet";g.type="text/css";g.href=b.serialize(a,c,e);l.appendChild(g);return b};b.requireSet=function(a,c,d){var g=a.length;b.each(a,function(a){b.require(a,{},c,function(){--g===0&&d()})})};b.injectCss=function(a){var c=d.createElement("style");c.setAttribute("type","text/css");a=a.replace(/\}/g,"}\n");e.location.href.match(/^https/)&&(a=a.replace(/http:\/\//g,"https://"));c.styleSheet?c.styleSheet.cssText=a:c.appendChild(d.createTextNode(a));
l.appendChild(c)}});
DISQUS.define("JSON",function(){function e(a){return a<10?"0"+a:a}function h(c){a.lastIndex=0;return a.test(c)?'"'+c.replace(a,function(a){var c=g[a];return typeof c==="string"?c:"\\u"+("0000"+a.charCodeAt(0).toString(16)).slice(-4)})+'"':'"'+c+'"'}function b(a,d){var g,i,e,f,j=c,q,o=d[a];o&&typeof o==="object"&&typeof o.toJSON==="function"&&!l&&(o=o.toJSON(a));typeof p==="function"&&(o=p.call(d,a,o));switch(typeof o){case "string":return h(o);case "number":return isFinite(o)?String(o):"null";case "boolean":case "null":return String(o);
case "object":if(!o)return"null";c+=m;q=[];if(Object.prototype.toString.apply(o)==="[object Array]"){f=o.length;for(g=0;g<f;g+=1)q[g]=b(g,o)||"null";e=q.length===0?"[]":c?"[\n"+c+q.join(",\n"+c)+"\n"+j+"]":"["+q.join(",")+"]";c=j;return e}if(p&&typeof p==="object"){f=p.length;for(g=0;g<f;g+=1)i=p[g],typeof i==="string"&&(e=b(i,o))&&q.push(h(i)+(c?": ":":")+e)}else for(i in o)Object.hasOwnProperty.call(o,i)&&(e=b(i,o))&&q.push(h(i)+(c?": ":":")+e);e=q.length===0?"{}":c?"{\n"+c+q.join(",\n"+c)+"\n"+
j+"}":"{"+q.join(",")+"}";c=j;return e}}var d={},l=!1;if(typeof Date.prototype.toJSON!=="function")Date.prototype.toJSON=function(){return isFinite(this.valueOf())?this.getUTCFullYear()+"-"+e(this.getUTCMonth()+1)+"-"+e(this.getUTCDate())+"T"+e(this.getUTCHours())+":"+e(this.getUTCMinutes())+":"+e(this.getUTCSeconds())+"Z":null},String.prototype.toJSON=Number.prototype.toJSON=Boolean.prototype.toJSON=function(){return this.valueOf()};var f=/[\u0000\u00ad\u0600-\u0604\u070f\u17b4\u17b5\u200c-\u200f\u2028-\u202f\u2060-\u206f\ufeff\ufff0-\uffff]/g,
a=/[\\\"\x00-\x1f\x7f-\x9f\u00ad\u0600-\u0604\u070f\u17b4\u17b5\u200c-\u200f\u2028-\u202f\u2060-\u206f\ufeff\ufff0-\uffff]/g,c,m,g={"\u0008":"\\b","\t":"\\t","\n":"\\n","\u000c":"\\f","\r":"\\r",'"':'\\"',"\\":"\\\\"},p;d.stringify=function(a,d,g){var i;m=c="";if(typeof g==="number")for(i=0;i<g;i+=1)m+=" ";else typeof g==="string"&&(m=g);if((p=d)&&typeof d!=="function"&&(typeof d!=="object"||typeof d.length!=="number"))throw Error("JSON.stringify");return b("",{"":a})};d.parse=function(a,c){function d(a,
b){var g,i,n=a[b];if(n&&typeof n==="object")for(g in n)Object.hasOwnProperty.call(n,g)&&(i=d(n,g),i!==void 0?n[g]=i:delete n[g]);return c.call(a,b,n)}var b,a=String(a);f.lastIndex=0;f.test(a)&&(a=a.replace(f,function(a){return"\\u"+("0000"+a.charCodeAt(0).toString(16)).slice(-4)}));if(/^[\],:{}\s]*$/.test(a.replace(/\\(?:["\\\/bfnrt]|u[0-9a-fA-F]{4})/g,"@").replace(/"[^"\\\n\r]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?/g,"]").replace(/(?:^|:|,)(?:\s*\[)+/g,"")))return b=eval("("+a+")"),
typeof c==="function"?d({"":b},""):b;throw new SyntaxError("JSON.parse");};var k={a:[1,2,3]},j,r;if(Object.toJSON&&Object.toJSON(k).replace(/\s/g,"")==='{"a":[1,2,3]}')j=Object.toJSON;typeof String.prototype.evalJSON==="function"&&(k='{"a":[1,2,3]}'.evalJSON(),k.a&&k.a.length===3&&k.a[2]===3&&(r=function(a){return a.evalJSON()}));(function(){var a=[1,2,3];typeof a.toJSON==="function"&&(a=a.toJSON(),l=!(a&&a.length===3&&a[2]===3))})();if(l||!j||!r)return{stringify:d.stringify,parse:d.parse};return{stringify:j,
parse:r}});
DISQUS.define(function(){function e(c){for(a=1;c=h.shift();)c()}var h=[],b,d=document,l=d.documentElement,f=l.doScroll,a=/^loade|c/.test(d.readyState),c;d.addEventListener&&d.addEventListener("DOMContentLoaded",b=function(){d.removeEventListener("DOMContentLoaded",b,!1);e()},!1);f&&d.attachEvent("onreadystatechange",b=function(){/^c/.test(d.readyState)&&(d.detachEvent("onreadystatechange",b),e())});c=f?function(b){self!=top?a?b():h.push(b):function(){try{l.doScroll("left")}catch(a){return setTimeout(function(){c(b)},50)}b()}()}:
function(c){a?c():h.push(c)};return{domready:c}});
DISQUS.define("Events",function(){var e=/\s+/,h={on:function(b,d,h){var f,a;if(!d)return this;b=b.split(e);for(f=this._callbacks||(this._callbacks={});a=b.shift();)a=f[a]||(f[a]=[]),a.push(d),a.push(h);return this},off:function(b,d,h){var f,a,c;if(!(a=this._callbacks))return this;if(!b&&!d&&!h)return delete this._callbacks,this;for(b=b?b.split(e):_.keys(a);f=b.shift();)if(!(c=a[f])||!d&&!h)delete a[f];else for(f=c.length-2;f>=0;f-=2)d&&c[f]!==d||h&&c[f+1]!==h||c.splice(f,2);return this},trigger:function(b){var d,
h,f,a,c,m,g;if(!(h=this._callbacks))return this;g=[];b=b.split(e);a=1;for(c=arguments.length;a<c;a++)g[a-1]=arguments[a];for(;d=b.shift();){if(m=h.all)m=m.slice();if(f=h[d])f=f.slice();if(f){a=0;for(c=f.length;a<c;a+=2)f[a].apply(f[a+1]||this,g)}if(m){d=[d].concat(g);a=0;for(c=m.length;a<c;a+=2)m[a].apply(m[a+1]||this,d)}}return this}};h.bind=h.on;h.unbind=h.off;return h});
DISQUS.define(function(e){function h(){throw Error(Array.prototype.join.call(arguments," "));}function b(a,c,b){if(a.addEventListener)a.addEventListener(c,b,!1);else if(a.attachEvent)a.attachEvent("on"+c,b);else throw Error("No event support.");}function d(a,c,b){b||(b=0);var d,g,e,h,f=0,j=function(){f=new Date;e=null;h=a.apply(d,g)};return function(){var k=new Date,l=c-(k-f);d=this;g=arguments;l<=0?(clearTimeout(e),e=null,f=k,h=a.apply(d,g)):e||(e=setTimeout(j,l+b));return h}}var l=e.document,f=
DISQUS.use("JSON"),a={},c={},m=0;if(!(DISQUS.version&&DISQUS.version()==="2")){b(e,"message",function(a){var b,d;for(d in c)if(Object.prototype.hasOwnProperty.call(c,d)&&a.origin==c[d].origin){b=!0;break}if(b)switch(b=f.parse(a.data),(d=c[b.sender])||h("Message from our server but with invalid sender UID:",b.sender),b.scope){case "host":d.trigger(b.name,b.data);break;case "global":DISQUS.trigger(b.name,b.data);break;default:h("Message",b.scope,"not supported. Sender:",a.origin)}},!1);b(e,"hashchange",
function(){DISQUS.trigger("window.hashchange",{hash:e.location.hash})},!1);b(e,"resize",function(){DISQUS.trigger("window.resize")},!1);b(e,"scroll",d(function(){DISQUS.trigger("window.scroll")},250,50));b(l,"click",function(){DISQUS.trigger("window.click")});var g=function(){this.uid=m++;a[this.uid]=this};DISQUS.extend(g.prototype,DISQUS.Events);g.prototype.destroy=function(){delete a[this.uid]};DISQUS.extend(g,{listByKey:function(){var b={},c;for(c in a)Object.prototype.hasOwnProperty.call(a,c)&&
(b[c]=a[c]);return b},list:function(){var c=[],b;for(b in a)Object.prototype.hasOwnProperty.call(a,b)&&c.push(a[b]);return c},get:function(b){if(Object.prototype.hasOwnProperty.call(a,b))return a[b];return null}});var p=function(a){a=a||{};this.isReady=!1;this.uid=a.uid||m++;this.elem=null;this.styles={};this.role=a.role||"application"};p.prototype.load=function(){var a=this.elem=l.createElement("iframe");a.setAttribute("id","dsq"+this.uid);a.setAttribute("data-disqus-uid",this.uid);a.setAttribute("allowTransparency",
"true");a.setAttribute("frameBorder","0");a.setAttribute("role",this.role);for(var b in this.styles)this.styles.hasOwnProperty(b)&&(a.style[b]=this.styles[b])};p.prototype.destroy=function(){this.elem&&this.elem.parentNode.removeChild(this.elem)};var k=function(a){var b=this;p.call(b,a);b.listeners={};b.origin=a.origin;b.target=a.target;b.container=a.container;b.styles=DISQUS.extend({width:"100%",border:"none",overflow:"hidden",display:"none"},a.styles||{});c[b.uid]=b;b.on("ready",function(){b.isReady=
!0})};DISQUS.extend(k.prototype,DISQUS.Events);k.prototype.load=function(a){p.prototype.load.call(this);var c=this.elem;c.setAttribute("width","100%");c.setAttribute("src",this.target+"#"+this.uid);b(c,"load",function(){c.style.display="";a&&a()});(l.getElementById(this.container)||l.body).appendChild(c);this.elem=c};k.prototype.sendMessage=function(a,b){var c=function(a,b,c){return function(){c.elem.contentWindow.postMessage(a,b)}}(f.stringify({scope:"client",data:{eventName:a,data:b}}),this.origin,
this);if(this.isReady)c();else this.on("ready",c)};k.prototype.getPosition=function(){for(var a=this.elem,b=0,c=0;a;)b+=a.offsetLeft,c+=a.offsetTop,a=a.offsetParent;return{top:c,left:b}};k.prototype.destroy=function(){this.off();p.prototype.destroy.call(this)};var j=function(a){p.call(this,a);this.contents=a.contents;this.container=a.container;this.styles={width:"100%",border:"none",overflow:"hidden"};a.styles=a.styles||{};for(var b in a.styles)a.styles.hasOwnProperty(b)&&(this.styles[b]=a.styles[b])};
j.prototype.load=function(){p.prototype.load.call(this);var a=this.elem;a.setAttribute("scrolling","no");(l.getElementById(this.container)||l.body).appendChild(a);this.element=a;this.window=a.contentWindow;try{this.window.document.open()}catch(b){a.src="javascript:var d=document.open();d.domain='"+l.domain+"';void(0);"}this.document=this.window.document;this.document.write(this.contents);this.document.close();if(a=this.document.body){var c=this.element.style;c.height=c.minHeight=c.maxHeight=a.offsetHeight+
"px"}};j.prototype.exec=function(a){a.call(this,this.window,this.document)};j.prototype.hide=function(){var a=this.element.style.display;if(a!=="none")this._display=a;this.element.style.display="none"};j.prototype.show=function(){this.element.style.display=this._display||"block"};j.prototype.click=function(a){b(this.document.body,"click",function(b){a(b)})};j.prototype.destroy=p.prototype.destroy;var r=DISQUS.extend({},DISQUS.Events);return{IFRAME:"__widget_iframe__",log:function(a){var b=l.getElementById("messages");
if(b){var c=l.createElement("p");c.innerHTML=a;b.appendChild(c)}},version:function(){return"2"},on:r.on,off:r.off,trigger:r.trigger,throttle:d,Channel:k,Sandbox:j,App:g}}});
DISQUS.define("next.publisher",function(e){function h(a,b,d){var g,d=d||b;if(a===f)return"";e.getComputedStyle?g=f.defaultView.getComputedStyle(a,null).getPropertyValue(b):a.currentStyle&&(g=a.currentStyle[b]?a.currentStyle[b]:a.currentStyle[d]);return g=="transparent"||g===""||g=="rgba(0, 0, 0, 0)"?h(a.parentNode,b,d):g||null}function b(a){function b(a){a=Number(a).toString(16);return a.length==1?"0"+a:a}if(a.substr(0,1)==="#")return a;var d=/.*?rgb\((\d+),\s*(\d+),\s*(\d+)\)/.exec(a);if(!d||d.length!==
4)return"";var a=b(d[1]),g=b(d[2]),d=b(d[3]);return"#"+a+g+d}function d(a,b,d,g){DISQUS.isString(b)&&(b=f.createElement(b));var e=null;b.style.visibility="hidden";a.appendChild(b);e=h(b,d,g);a.removeChild(b);return e}function l(a){return a.toLowerCase().replace(/^\s+|\s+$/g,"").replace(/['"]/g,"")}var f=e.document;return{getContrastYIQ:function(a){a.match("^rgb")&&(a=b(a).substr(1));var c=parseInt(a.substr(0,2),16),d=parseInt(a.substr(2,2),16),a=parseInt(a.substr(4,2),16);return(c*299+d*587+a*114)/
1E3},colorToHex:b,getElementStyle:d,getAnchorColor:function(a){var b=f.createElement("a");b.href=+new Date;return d(a,b,"color")},normalizeFontValue:l,isSerif:function(a){for(var a=d(a,"span","font-family","fontFamily").split(","),b={courier:1,times:1,"times new roman":1,georgia:1,palatino:1,serif:1},e,g=0;g<a.length;g++)if(e=l(a[g]),b.hasOwnProperty(e))return!0;return!1}}});
DISQUS.define(function(){function e(e){DISQUS.App.call(this);this.switches={};var b={target:e.useSSL?"https://securecdn.disqus.com/1363281563/build/next-switches/client_ssl.html":"http://mediacdn.disqus.com/1363281563/build/next-switches/client.html",container:e.container};b.origin=e.useSSL?"https://securecdn.disqus.com":"http://mediacdn.disqus.com";this.frame=new DISQUS.Channel(b);var d=this;this.frame.load(function(){d.frame.elem.style.display="none"})}e.prototype=DISQUS.extend({fetch:function(e){var b=
this,e=e||{},d=e.success;delete e.success;this.frame.on("switches.received",function(e){b.switches=e;DISQUS.trigger("switches.changed",e);d&&d(e)});this.frame.sendMessage("fetch",e)},enabled:function(e){return this.switches[e]?this.switches[e]:!1}},DISQUS.App.prototype);return{Switches:function(h){return new e(h)}}});
DISQUS.define(function(e){var h=function(b){DISQUS.App.call(this);this.settings=b;this.frame=null};DISQUS.extend(h.prototype,DISQUS.App.prototype);h.prototype.init=function(){var b=this.settings,d="http://disqus.com/embed/profile/",h="http://disqus.com";b.useSSL&&(d="https://disqus.com/embed/profile/",h="https://disqus.com");var f=this.frame=new DISQUS.Channel({origin:h,target:DISQUS.serialize(d,{f:b.forum}),container:b.container,uid:this.uid,styles:{height:"100%",position:"fixed",top:0,left:0,zIndex:999999}});
f.on("ready",function c(){f.off("ready",c);f.sendMessage("init",{referrer:e.location.href});this.trigger("loading.init")},this);f.on("close",function(){this.frame.elem.style.display="none";e.focus()},this);f.load();this.trigger("loading.start")};h.prototype.showProfile=function(b){var d=this.frame;if(!d.isReady)return void d.on("ready",function f(){d.off("ready",f);this.showProfile(b)},this);d.sendMessage("showProfile",b);d.elem.style.display="block"};h.prototype.destroy=function(){DISQUS.App.prototype.destroy.call(this)};
return{Profile:function(b){return new h(b)}}});
DISQUS.define("backplane",function(){var e;try{localStorage.setItem("disqus.localStorageTest","disqus"),localStorage.removeItem("disqus.localStorageTest"),e=!0}catch(h){e=!1}var b=function(b){this.frame=b;this.credentials="unset";var h=this;typeof Backplane==="function"&&typeof Backplane.version==="string"&&typeof Backplane.subscribe==="function"&&e&&Backplane(function(){h.initialize()})};DISQUS.extend(b.prototype,{frameEvents:{invalidate:"clearCredentials"},initialize:function(){var b=this;DISQUS.each(this.frameEvents,
function(e,f){b.frame.on("backplane."+f,typeof e==="function"?e:b[e],b)});this.credentialsFromLocalStorage()&&this.frame.sendMessage("login",{backplane:this.credentials});this.subscribe()},subscribe:function(){var b=this;Backplane.subscribe(function(e){var f=b.handlers[e.type];f&&f.call(b,e)})},handlers:{"identity/login":function(b){var e=b.messageURL,b=b.channel;this.credentials!=="unset"&&this.credentials!==null&&this.credentials.channel===b&&this.credentials.messageUrl===e||(this.setCredentials(b,
e),this.frame.sendMessage("login",{backplane:this.getCredentials()}))}},credentialsFromLocalStorage:function(){var b=localStorage.getItem("disqus.backplane.channel"),e=localStorage.getItem("disqus.backplane.messageUrl");this.setCredentials(b,e,!0);return this.credentials},setCredentials:function(b,e,f){if(!b||!e)return void this.clearCredentials();f||(localStorage.setItem("disqus.backplane.channel",b),localStorage.setItem("disqus.backplane.messageUrl",e));this.credentials={channel:b,messageUrl:e}},
getCredentials:function(){if(this.credentials!=="unset")return this.credentials;return this.credentialsFromLocalStorage()},clearCredentials:function(b){b=b||{};this.credentials=null;localStorage.removeItem("disqus.backplane.channel");localStorage.removeItem("disqus.backplane.messageUrl");if(b.redirectUrl)window.location=b.redirectUrl}});return{BackplaneIntegration:b}});
DISQUS.define(function(e,h){function b(a,b,c,e,d,f){return'<img width="'+a+'" height="'+b+'" alt="'+e+'" src="data:image/'+c+";base64,"+d+'"'+(f?' style="'+f+'"':"")+"/>"}function d(a){for(var b=DISQUS.App.list(),e=0,d=b.length,b=b[e];e<d;e++)b instanceof c&&a(b)}var l=e.document,f=["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","TkSuQmCC"],a=["R0lGODlhEAALAPQAAP///z2LqeLt8dvp7u7090GNqz2LqV+fuJ/F1IW2ycrf51aatHWs","waXJ14i4ys3h6FmctUCMqniuw+vz9eHs8fb5+meku+Tu8vT4+cfd5bbT3tbm7PH2+AAA","AAAAAAAAACH/C05FVFNDQVBFMi4wAwEAAAAh/hpDcmVhdGVkIHdpdGggYWpheGxvYWQu","aW5mbwAh+QQJCwAAACwAAAAAEAALAAAFLSAgjmRpnqSgCuLKAq5AEIM4zDVw03ve27if","DgfkEYe04kDIDC5zrtYKRa2WQgAh+QQJCwAAACwAAAAAEAALAAAFJGBhGAVgnqhpHIeR","vsDawqns0qeN5+y967tYLyicBYE7EYkYAgAh+QQJCwAAACwAAAAAEAALAAAFNiAgjoth",
"LOOIJAkiGgxjpGKiKMkbz7SN6zIawJcDwIK9W/HISxGBzdHTuBNOmcJVCyoUlk7CEAAh","+QQJCwAAACwAAAAAEAALAAAFNSAgjqQIRRFUAo3jNGIkSdHqPI8Tz3V55zuaDacDyIQ+","YrBH+hWPzJFzOQQaeavWi7oqnVIhACH5BAkLAAAALAAAAAAQAAsAAAUyICCOZGme1rJY","5kRRk7hI0mJSVUXJtF3iOl7tltsBZsNfUegjAY3I5sgFY55KqdX1GgIAIfkECQsAAAAs","AAAAABAACwAABTcgII5kaZ4kcV2EqLJipmnZhWGXaOOitm2aXQ4g7P2Ct2ER4AMul00k","j5g0Al8tADY2y6C+4FIIACH5BAkLAAAALAAAAAAQAAsAAAUvICCOZGme5ERRk6iy7qpy","HCVStA3gNa/7txxwlwv2isSacYUc+l4tADQGQ1mvpBAAIfkECQsAAAAsAAAAABAACwAA","BS8gII5kaZ7kRFGTqLLuqnIcJVK0DeA1r/u3HHCXC/aKxJpxhRz6Xi0ANAZDWa+kEAA7",
"AAAAAAAAAAAA"],c=function(a){DISQUS.App.call(this);this.settings=a;this.indicators={north:null,south:null};this._boundGlobalEvents=[];this.frame=null;this.wasNearViewport=this.wasInViewport=!1};DISQUS.extend(c.prototype,DISQUS.App.prototype);c.prototype.init=function(){function c(a,b,e){i.on("affiliateLink",function(c){var d=DISQUS.vglnk.$;if(!d)return void i.sendMessage("affiliateLink");d.request(a+"/click",{format:"jsonp",out:c.url,key:b,loc:i.target,subId:e},{fn:function(a){return function(b){var c=
{token:a};if(b)c.url=b;i.sendMessage("affiliateLink",c)}}(c.token),timeout:DISQUS.vglnk.opt("click_timeout")})})}function d(a,b){k._boundGlobalEvents.push(a);DISQUS.on(a,b,k)}var k=this,j=k.settings,m="http://disqus.com/embed/comments/",n="http://disqus.com";j.useSSL&&(m="https://disqus.com/embed/comments/",n="https://disqus.com");var t={f:j.forum,t_i:j.identifier,t_u:j.url||e.location.href,t_s:j.slug,t_t:j.title||j.documentTitle,t_e:j.title,t_d:j.documentTitle,t_c:j.category,s_o:j.sortOrder,c:j.useConman||
h};if(j.notSupported)t.n_s=1;var u=DISQUS.isString(j.container)?l.getElementById(j.container):j.container,i=k.frame=new DISQUS.Channel({origin:n,target:DISQUS.serialize(m,t),container:j.container,uid:this.uid});if(j.notSupported)i.styles.height="500px";var s,v;if(!j.notSupported)s=l.createElement("div"),s.innerHTML=b(71,17,"png","DISQUS",f.join(""))+b(16,11,"gif","...",a.join(""),"margin:0 0 3px 5px"),u.appendChild(s);i.on("ready",function q(a){i.off("ready",q);s&&s.parentNode===u&&u.removeChild(s);
e.clearTimeout(v);var b={permalink:j.permalink,anchorColor:j.anchorColor,referrer:e.location.href,colorScheme:j.colorScheme,language:j.language,typeface:j.typeface,remoteAuthS3:j.remoteAuthS3,apiKey:j.apiKey,sso:j.sso,parentWindowHash:e.location.hash};if(e.navigator.userAgent.match(/(iPad|iPhone|iPod)/))b.width=i.elem.offsetWidth;k.scrollListener();k.clientData=a;i.sendMessage("init",b);k.trigger("loading.init")});i.on("resize",function(a){i.elem.style.height=a.height+"px"});i.on("reload",function(){e.location.reload()});
i.on("reset",function(){DISQUS.reset({reload:!0})});i.on("session.identify",function(a){k.trigger("session.identify",a)});i.on("posts.paginate",function(){k.trigger("posts.paginate")});i.on("posts.create",function(a){k.trigger("posts.create",{id:a.id,text:a.raw_message})});i.on("scrollTo",function(a){var b=i.getPosition(),b=a.relative==="window"?a.top:b.top+a.top,c=k.getWindowYCoords();(a.force||!(b>c.pageYOffset&&b<c.pageYOffset+c.innerHeight))&&e.scrollTo(0,b)});i.on("fakeScroll",k.scrollListener,
k);i.on("realtime.init",function(a){for(var b=["north","south"],c,e,d=0;d<b.length;d++)e=b[d],c=new DISQUS.Sandbox({uid:"-indicator-"+e,container:k.settings.container,contents:a[e].contents,styles:a[e].styles}),c.load(),c.hide(),function(a){c.click(function(){i.sendMessage("realtime.click",a)})}(e),k.indicators[e]=c});i.on("realtime.showNorth",function(a){var b=k.indicators.north;b.document.getElementById("message").innerHTML=a;b.show()});i.on("realtime.hideNorth",function(){k.indicators.north.hide()});
i.on("realtime.showSouth",function(a){var b=k.indicators.south;b.document.getElementById("message").innerHTML=a;b.show()});i.on("realtime.hideSouth",function(){k.indicators.south.hide()});i.on("mainViewRendered",function(){DISQUS.trigger("lounge:mainViewRendered");k.trigger("loading.done")});i.on("profile.show",function(a){if(!k.profile)k.profile=DISQUS.Profile({container:j.container,useSSL:j.useSSL,forum:j.forum}),k.profile.init();k.profile.showProfile(a.username)});i.on("loadLinkAffiliator",function(a){i.off("loadLinkAffiliator");
if(!e.vglnk_self&&!e.vglnk&&!function(){for(var a in e)if(a.indexOf("skimlinks")===0||a.indexOf("skimwords")===0)return!0;return!1}()){var b=a.apiUrl,d=a.key,f=String(a.id);if(!(a.clientUrl==null||b==null||d==null||a.id==null))DISQUS.define("vglnk",function(){return{api_url:b,key:d,sub_id:f}}),e.vglnk_self="DISQUS.vglnk",DISQUS.require(a.clientUrl),DISQUS.defer(function(){return DISQUS.vglnk.opt},function(){i.sendMessage("affiliationOptions",{timeout:DISQUS.vglnk.opt("click_timeout")})}),c(b,d,f)}});
i.on("loadBackplane",function(){i.off("loadBackplane");k.backplane=new DISQUS.backplane.BackplaneIntegration(i)});v=e.setTimeout(function(){if(s)(new Image).src=DISQUS.serialize("//juggler.services.disqus.com/stat.gif",{event:"slow_embed"}),s.innerHTML+='<p>DISQUS seems to be taking longer than usual. <a href="#" onclick="DISQUS.reset({reload: true}); return false;">Reload</a>?</p>'},1E4);i.load(function(){j.notSupported?(i.elem.setAttribute("height","500px"),i.elem.setAttribute("scrolling","yes"),
i.elem.setAttribute("horizontalscrolling","no"),i.elem.setAttribute("verticalscrolling","yes")):(i.elem.setAttribute("scrolling","no"),i.elem.setAttribute("horizontalscrolling","no"),i.elem.setAttribute("verticalscrolling","no"))});d("window.hashchange",function(a){i.sendMessage("window.hashchange",a.hash)});d("window.resize",function(){i.sendMessage("window.resize")});d("window.scroll",k.scrollListener);d("window.click",function(){i.sendMessage("window.click")});d("switches.changed",function(a){i.sendMessage("switches.changed",
a)});k.trigger("loading.start")};c.prototype.destroy=function(){var a=this.indicators;this.off();if(this._boundGlobalEvents.length)DISQUS.off(this._boundGlobalEvents.join(" "),null,this),this._boundGlobalEvents=null;this.frame&&this.frame.destroy();if(a.north)a.north.destroy(),a.north=null;if(a.south)a.south.destroy(),a.south=null;DISQUS.App.prototype.destroy.call(this)};c.prototype.getWindowYCoords=function(){if(typeof e.pageYOffset=="number")this.getWindowScroll=function(){return e.pageYOffset},
this.getWindowHeight=function(){return e.innerHeight};else{var a=e.document,a=a.documentElement.clientHeight||a.documentElement.clientWidth?a.documentElement:a.body;this.getWindowScroll=function(){return a.scrollTop};this.getWindowHeight=function(){return a.clientHeight}}this.getWindowYCoords=function(){return{pageYOffset:this.getWindowScroll(),innerHeight:this.getWindowHeight()}};return this.getWindowYCoords()};c.prototype.scrollListener=function(){var a=this.frame,b=a.getPosition(),c=b.top,e=c+
a.elem.offsetHeight,d=this.getWindowYCoords(),f=d.pageYOffset,d=d.innerHeight,h=f+d,l=!1,i=!1;c<=h+d&&(i=(l=e>=f)&&c<=h);l&&(a.sendMessage("window.scroll",{frameOffset:b,pageOffset:f,height:d}),this.wasNearViewport||a.sendMessage("window.nearViewport"));this.wasNearViewport=l;if(i!==this.wasInViewport)a.sendMessage(i?"window.inViewport":"window.scrollOffViewport"),this.wasInViewport=i};var m=function(a){return new c(a)};DISQUS.extend(m,{listByKey:function(){var a={};d(function(b){a[b.uid]=b});return a},
list:function(){var a=[];d(function(b){a.push(b)});return a},get:function(a){a=DISQUS.App.get(a);return a instanceof c&&a}});return{Lounge:m}});
(function(e,h,b){function d(){function a(b){var b=b.getAttribute?b.getAttribute("src"):b.src,c=[/(https?:)\/\/(www\.)?disqus\.com\/forums\/([\w_\-]+)/i,/(https?:)\/\/(www\.)?([\w_\-]+)\.disqus\.com/i,/(https?:)\/\/(www\.)?dev\.disqus\.org\/forums\/([\w_\-]+)/i,/(https?:)\/\/(www\.)?([\w_\-]+)\.dev\.disqus\.org/i],e=c.length;if(!b||b.substring(b.length-8)!="embed.js")return null;for(var d=0;d<e;d++){var i=b.match(c[d]);if(i&&i.length&&i.length==4)return g=i[1]||null,i[3]}return null}for(var b=h.getElementsByTagName("script"),
c=b.length-1;c>=0;c--){var e=a(b[c]);if(e!==null)return e}return null}function l(){if(e.location.protocol==="https:")return!0;g===b&&d();return g==="https:"}function f(){for(var a=h.getElementsByTagName("h1"),c=h.title,e=c.length,d=c,f=0.6,g=0;g<a.length;g++)(function(a){var a=a.textContent||a.innerText,i;if(!(a===null||a===b)){i=0;for(var h=Array(c.length),g=0;g<=c.length;g++){h[g]=Array(a.length);for(var j=0;j<=a.length;j++)h[g][j]=0}for(g=0;g<c.length;g++)for(j=0;j<a.length;j++)c[g]==a[j]&&(h[g+
1][j+1]=h[g][j]+1,h[g+1][j+1]>i&&(i=h[g+1][j+1]));i/=e;i>f&&(f=i,d=a)}})(a[g]);return d}function a(){var a=h.getElementById(m);if(a){a.innerHTML="";var b=k.page;if(!e.postMessage||!e.JSON)t=!0;if(e.navigator.appName==="Microsoft Internet Explorer"&&(!h.documentMode||h.documentMode<8))t=!0;a={container:m,forum:j,sortOrder:"popular",permalink:p,useSSL:l(),language:k.language,typeface:c.isSerif(a)?"serif":"sans-serif",anchorColor:c.getAnchorColor(a),colorScheme:128<c.getContrastYIQ(c.getElementStyle(a,
"span","color"))?"dark":"light",url:b.url||e.location.href.replace(/#.*$/,""),title:b.title,documentTitle:f(),slug:b.slug,category:b.category_id,identifier:b.identifier,apiKey:b.api_key,remoteAuthS3:b.remote_auth_s3,sso:k.sso,useConman:e.disqus_demo,notSupported:t};n=DISQUS.Lounge(a);var d={onReady:"loading.done",onNewComment:"posts.create",onPaginate:"posts.paginate",onIdentify:"session.identify"};DISQUS.each(k.callbacks,function(a,b){d[b]&&DISQUS.each(a,function(a){n.on(d[b],a)})});n.init()}else(a=
e.console)&&typeof a.log==="function"&&a.log("DISQUS: Container (disqus_thread) element is missing.")}var c=DISQUS.use("next.publisher"),m=e.disqus_container_id||"disqus_thread",g,p=function(){var a=e.location.hash;return(a=a&&a.match(/comment\-([0-9]+)/))&&a[1]}(),k={page:{url:b,title:b,slug:b,category_id:b,identifier:b,language:b,api_key:b,remote_auth_s3:b,author_s3:b,developer:b},strings:b,sso:{},callbacks:{preData:[],preInit:[],onInit:[],afterRender:[],onReady:[],onNewComment:[],preReset:[],onPaginate:[],
onIdentify:[]}};DISQUS.each(["developer","shortname","identifier","url","title","category_id","language","slug"],function(a){var b=e["disqus_"+a];typeof b!=="undefined"&&(k.page[a]=b)});var j=e.disqus_shortname||d(),j=j.toLowerCase();if(typeof e.disqus_config==="function")try{e.disqus_config.call(k)}catch(r){}var n,t=!1;a();if(!t){var u=DISQUS.Switches({container:m,useSSL:l()});u.fetch({data:{forum:j}});DISQUS.domready(function(){if(h.getElementsByClassName){var a=h.getElementsByClassName("dsq-brlink");
a&&a.length&&a[0].parentNode.removeChild(a[0])}});DISQUS.request={get:function(a,b,c){DISQUS.require(a,b,c)}};DISQUS.reset=function(b){b=b||{};if(typeof b.config==="function")try{b.config.call(k)}catch(c){}n&&(n.destroy(),n=null);b.reload&&(a(),DISQUS.trigger("switches.changed",u.switches))}}})(this,this.document);