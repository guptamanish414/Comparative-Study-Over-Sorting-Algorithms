var isCompatible=function(){if(navigator.appVersion.indexOf('MSIE')!==-1&&parseFloat(navigator.appVersion.split('MSIE')[1])<6){return false;}return true;};var startUp=function(){mw.config=new mw.Map(true);mw.loader.register([["site","1330621287",[],"site"],["noscript","1330621287",[],"noscript"],["startup","1359931418",[],"startup"],["user","1330621287",[],"user"],["user.groups","1330621287",[],"user"],["user.options","1330621287",[],"private"],["user.tokens","1330621287",[],"private"],["filepage","1330621287",[]],["skins.vector","1330621287",[]],["skins.monobook","1330621287",[]],["skins.simple","1330621287",[]],["skins.chick","1330621287",[]],["skins.modern","1330621287",[]],["skins.cologneblue","1330621287",[]],["skins.nostalgia","1330621287",[]],["skins.standard","1330621287",[]],["jquery","1330621287",[]],["jquery.async","1330621287",[]],["jquery.appear","1330621287",[]],["jquery.autoEllipsis","1330621287",["jquery.highlightText"]],["jquery.byteLength","1330621287",[]],[
"jquery.byteLimit","1330621287",["jquery.byteLength"]],["jquery.checkboxShiftClick","1330621287",[]],["jquery.client","1330621287",[]],["jquery.collapsibleTabs","1330621287",[]],["jquery.colorUtil","1330621287",[]],["jquery.color","1330621287",["jquery.colorUtil"]],["jquery.cookie","1330621287",[]],["jquery.delayedBind","1330621287",[]],["jquery.expandableField","1330621287",["jquery.delayedBind"]],["jquery.form","1330621287",[]],["jquery.getAttrs","1330621287",[]],["jquery.highlightText","1330621287",[]],["jquery.hoverIntent","1330621287",[]],["jquery.messageBox","1330621287",[]],["jquery.placeholder","1330621287",[]],["jquery.json","1330621287",[]],["jquery.localize","1330621287",[]],["jquery.makeCollapsible","1358107839",[]],["jquery.mwPrototypes","1330621287",[]],["jquery.qunit","1330621287",[]],["jquery.suggestions","1330621287",["jquery.autoEllipsis"]],["jquery.tabIndex","1330621287",[]],["jquery.tablesorter","1358109272",[]],["jquery.textSelection","1330621287",[]],[
"jquery.tipsy","1330621287",[]],["jquery.ui.core","1330621287",["jquery"],"jquery.ui"],["jquery.ui.widget","1330621287",[],"jquery.ui"],["jquery.ui.mouse","1330621287",["jquery.ui.widget"],"jquery.ui"],["jquery.ui.position","1330621287",[],"jquery.ui"],["jquery.ui.draggable","1330621287",["jquery.ui.core","jquery.ui.mouse","jquery.ui.widget"],"jquery.ui"],["jquery.ui.droppable","1330621287",["jquery.ui.core","jquery.ui.mouse","jquery.ui.widget","jquery.ui.draggable"],"jquery.ui"],["jquery.ui.resizable","1330621287",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.selectable","1330621287",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.sortable","1330621287",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.accordion","1330621287",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.ui.autocomplete","1330621287",["jquery.ui.core","jquery.ui.widget","jquery.ui.position"],"jquery.ui"],[
"jquery.ui.button","1330621287",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.ui.datepicker","1330621287",["jquery.ui.core"],"jquery.ui"],["jquery.ui.dialog","1330621287",["jquery.ui.core","jquery.ui.widget","jquery.ui.button","jquery.ui.draggable","jquery.ui.mouse","jquery.ui.position","jquery.ui.resizable"],"jquery.ui"],["jquery.ui.progressbar","1330621287",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.ui.slider","1330621287",["jquery.ui.core","jquery.ui.widget","jquery.ui.mouse"],"jquery.ui"],["jquery.ui.tabs","1330621287",["jquery.ui.core","jquery.ui.widget"],"jquery.ui"],["jquery.effects.core","1330621287",["jquery"],"jquery.ui"],["jquery.effects.blind","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.bounce","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.clip","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.drop","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.explode",
"1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.fold","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.highlight","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.pulsate","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.scale","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.shake","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.slide","1330621287",["jquery.effects.core"],"jquery.ui"],["jquery.effects.transfer","1330621287",["jquery.effects.core"],"jquery.ui"],["mediawiki","1330621287",[]],["mediawiki.Title","1330621287",["mediawiki.util"]],["mediawiki.Uri","1330621287",[]],["mediawiki.htmlform","1330621287",[]],["mediawiki.user","1330621287",["jquery.cookie"]],["mediawiki.page.startup","1330621287",["jquery.client"]],["mediawiki.page.ready","1330621287",["jquery.checkboxShiftClick","jquery.makeCollapsible","jquery.placeholder"]],["mediawiki.util","1330621287",["jquery.client"
,"jquery.cookie","jquery.messageBox","jquery.mwPrototypes"]],["mediawiki.libs.jpegmeta","1330621287",[]],["mediawiki.action.history","1330621287",["jquery.ui.button"],"mediawiki.action.history"],["mediawiki.action.history.diff","1330621287",[],"mediawiki.action.history"],["mediawiki.action.edit","1330621287",["jquery.textSelection","jquery.byteLimit"]],["mediawiki.action.view.rightClickEdit","1330621287",[]],["mediawiki.action.view.metadata","1330621287",[]],["mediawiki.action.watch.ajax","1358133073",[]],["mediawiki.special","1330621287",[]],["mediawiki.special.preferences","1359931418",[]],["mediawiki.special.changeslist","1330621287",["jquery.makeCollapsible"]],["mediawiki.special.search","1330621287",[]],["mediawiki.special.block","1330621287",[]],["mediawiki.special.undelete","1330621287",[]],["mediawiki.special.movePage","1330621287",["jquery.byteLimit"]],["mediawiki.special.recentchanges","1330621287",["mediawiki.special"]],["mediawiki.special.upload","1358672049",[
"mediawiki.libs.jpegmeta"]],["mediawiki.language","1330621287",[]],["mediawiki.legacy.ajax","1330621287",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.commonPrint","1330621287",[]],["mediawiki.legacy.config","1330621287",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.IEFixes","1330621287",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.mwsuggest","1358107839",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.preview","1330621287",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.protect","1330621287",["mediawiki.legacy.wikibits","jquery.byteLimit"]],["mediawiki.legacy.shared","1330621287",[]],["mediawiki.legacy.oldshared","1330621287",[]],["mediawiki.legacy.upload","1330621287",["mediawiki.legacy.wikibits"]],["mediawiki.legacy.wikibits","1358107839",["mediawiki.language"]],["mediawiki.legacy.wikiprintable","1330621287",[]]]);mw.config.set({"wgLoadScript":"/load.php","debug":false,"skin":"vector","stylepath":"/skins","wgUrlProtocols":
"http\\:\\/\\/|https\\:\\/\\/|ftp\\:\\/\\/|irc\\:\\/\\/|ircs\\:\\/\\/|gopher\\:\\/\\/|telnet\\:\\/\\/|nntp\\:\\/\\/|worldwind\\:\\/\\/|mailto\\:|news\\:|svn\\:\\/\\/|git\\:\\/\\/|mms\\:\\/\\/|\\/\\/","wgArticlePath":"/index.php/$1","wgScriptPath":"","wgScriptExtension":".php","wgScript":"/index.php","wgVariantArticlePath":false,"wgActionPaths":[],"wgServer":"http://www.algorithmist.com","wgUserLanguage":"en","wgContentLanguage":"en","wgVersion":"1.18.1","wgEnableAPI":true,"wgEnableWriteAPI":true,"wgDefaultDateFormat":"dmy","wgMonthNames":["","January","February","March","April","May","June","July","August","September","October","November","December"],"wgMonthNamesShort":["","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"],"wgSeparatorTransformTable":["",""],"wgDigitTransformTable":["",""],"wgMainPageTitle":"Main Page","wgFormattedNamespaces":{"-2":"Media","-1":"Special","0":"","1":"Talk","2":"User","3":"User talk","4":"Algorithmist","5":"Algorithmist talk","6":
"File","7":"File talk","8":"MediaWiki","9":"MediaWiki talk","10":"Template","11":"Template talk","12":"Help","13":"Help talk","14":"Category","15":"Category talk"},"wgNamespaceIds":{"media":-2,"special":-1,"":0,"talk":1,"user":2,"user_talk":3,"algorithmist":4,"algorithmist_talk":5,"file":6,"file_talk":7,"mediawiki":8,"mediawiki_talk":9,"template":10,"template_talk":11,"help":12,"help_talk":13,"category":14,"category_talk":15,"image":6,"image_talk":7,"project":4,"project_talk":5},"wgSiteName":"Algorithmist","wgFileExtensions":["png","jpg","jpeg","pdf","tgz","tar.gz"],"wgDBname":"wikidb","wgFileCanRotate":true,"wgAvailableSkins":{"myskin":"MySkin","cologneblue":"CologneBlue","monobook":"MonoBook","modern":"Modern","nostalgia":"Nostalgia","simple":"Simple","chick":"Chick","vector":"Vector","standard":"Standard"},"wgExtensionAssetsPath":"/extensions","wgCookiePrefix":"wikidb","wgResourceLoaderMaxQueryLength":-1,"wgLegacyJavaScriptGlobals":true,"wgCaseSensitiveNamespaces":[],
"wgMWSuggestTemplate":"http://www.algorithmist.com/api.php?action=opensearch\x26search={searchTerms}\x26namespace={namespaces}\x26suggest"});};if(isCompatible()){document.write("\x3cscript src=\"/load.php?debug=false\x26amp;lang=en\x26amp;modules=jquery%2Cmediawiki\x26amp;only=scripts\x26amp;skin=vector\x26amp;version=20120222T151331Z\"\x3e\x3c/script\x3e");}delete isCompatible;;

/* cache key: wikidb:resourceloader:filter:minify-js:4:9ab21e9f67deca1fb3320e00cfa70c28 */
