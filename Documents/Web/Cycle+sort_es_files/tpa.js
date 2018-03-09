

function bkmk() {
	var url = "http://www.TutorGig.com";
	var cpt = "TutorGig.com - The Tutorial Website";
	var msg = "Bookmark Us!";

	var ver = navigator.appName;
	var num = parseInt(navigator.appVersion);
	if ((ver == "Microsoft Internet Explorer")&&(num >= 4)) {
   	document.write('<A class=sl HREF="javascript:window.external.AddFavorite(\'http://www.TutorGig.com\', \'TutorGig.com - The Tutorial Website\');" ');   	
   	document.write('><b>'+ msg + '</b></a>');
	}else{
   	txt += "  (Ctrl+D)";
   	document.write('<font class=sl ><b>' +msg+ '</b></font>');
	} 
}

function bkmks() {
	var url = "http://www.TutorGig.com";
	var cpt = "TutorGig.com - The Tutorial website";
	var msg = "Bookmark Us!";

	var ver = navigator.appName;
	var num = parseInt(navigator.appVersion);
	if ((ver == "Microsoft Internet Explorer")&&(num >= 4)) {
   	document.write('<A HREF="javascript:window.external.AddFavorite(\'http://www.TutorGig.com\', \'TutorGig.com - The Tutorial Website\');" ');   	
   	document.write('>'+ msg + '</a>');
	}else{
   	txt += "  (Ctrl+D)";
   	document.write(msg);
	} 
}


function se(href) {     		
	openNew = window.open('/email/emailreq.jsp?url='+href, 'EmailThis', 'directories=no,height=400,width=500,left=100,top=100,resizable=no,menubar=no,scrollbars=yes');
}

function openSendEmail(url) {
	openNew = window.open(url, 'EmailThis', 'directories=no,height=400,width=500,left=100,top=100,resizable=no,menubar=no,scrollbars=yes');
}
      
function openWin(url, name) {
	openNew = window.open(url, name, 'directories=no,height=400,width=500,left=100,top=100,resizable=no,menubar=no,scrollbars=yes');
}

function st(u){window.status=u;return true;}

function cl(){window.status='';}


function fc_pu_1_7_e() { 
var doc=document;  var url=escape(doc.location.href); var date_ob=new Date();
doc.cookie='h2=o; path=/;';var bust=date_ob.getSeconds();
if(doc.cookie.indexOf('e=llo') <= 0 && doc.cookie.indexOf('2=o') > 0){
doc.write('<scr'+'ipt language="javascript" src="http://media.fastclick.net');
doc.write('/w/pop.cgi?sid=10927&m=2&v=1.7e&u='+url+'&c='+bust+'"></scr'+'ipt>');
date_ob.setTime(date_ob.getTime()+43200000);
doc.cookie='he=llo; path=/; expires='+ date_ob.toGMTString();} // -->
}

function tf_468_60_h() {	
	
	google_ad_client = "pub-5649588507132071";
	/* 728x90, created 6/29/08 */
	google_ad_slot = "6588488999";
	google_ad_width = 728;
	google_ad_height = 90;
	//-->
	
	document.write('<scr'+'ipt type="text/javascript"');
	document.write('src="http://pagead2.googlesyndication.com/pagead/show_ads.js">');
	document.write('</scr'+'ipt>');
}

function tf_336_280_h() {	
}

function adv_com_125_125() {	
}

function tf_160_600_v() {	
}

function fc_160_600_v() {
	document.write('<script language="javascript" src="http://media.fastclick.net/w/get.media?sid=10927&m=3&tp=7&d=j&t=n"></script>');
}


function adv_com_180_150() {	
}

function goog_lang_inc() {
	var href=''+location.href;
	document.writeln('<p><font size="-1">Translate to - <a href="http://translate.google.com/translate?u='+href+'&langpair=en%7Ces" target="_top">Spanish</a> | <a href="http://translate.google.com/translate?u='+href+'&langpair=en%7Cde" target="_top">German</a> | <a href="http://translate.google.com/translate?u='+href+'&langpair=en%7Cfr" target="_top">French</a> | <a href="http://translate.google.com/translate?u='+href+'&langpair=en%7Cit" target="_top">Italian</a> | <a href="http://translate.google.com/translate?u='+href+'&langpair=en%7Cpt" target="_top">Portuguese</a></font></p>');
	document.close();
}

function goto(url) {
	window.open(url);
}

function change_link(el, url) 
{ 
el.href=url;
} 

function dehi(el) 
{ 
} 


