Company_Search_And_Manage()
{
 
	web_set_sockets_option("SSL_VERSION", "2&3");
 

	lr_start_transaction("1_Navigate To Company Search Tab"); 

    
	web_url("SearchResults.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t252.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_2", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t253.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t254.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t255.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/select2.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/icon-menu.svg", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ4i6MPWZrWd8jLZFhlU4kIy2UkJL6JBQ=", "Referer=", ENDITEM, 
		//"Url=/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583610063667", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		LAST);

	web_url("Buttons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Buttons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t256.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Columns.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t257.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FtsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FtsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Status.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/Status.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t259.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ-iXOYDUAe-wjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("Filter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/Filter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t260.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TextFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/TextFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZqo4aQRk7oQcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("CheckboxFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AdsourceFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AdsourceFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t264.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Company.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("DateRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		LAST);

	web_url("IndustryFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/IndustryFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Location.SearchFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/Location.SearchFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NotesFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/NotesFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t269.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroupsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FolderGroupsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t270.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t271.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t272.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CustomField.Search.SimpleRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/CustomField.Search.SimpleRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t273.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AttachmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AttachmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t274.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ComplexRecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t275.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ParentCompanyFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/ParentCompanyFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t276.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CommunicationMethodsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CommunicationMethodsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DivisionMarketFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Company/Templates/DivisionMarketFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t278.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedSearchButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedSearchButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t279.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroup.MassManageButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/FolderGroup.MassManageButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t280.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Search/Templates/sidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t281.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AddRequirementSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Requirement/Templates/AddRequirementSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t282.inf", 
		"Mode=HTML", 
		LAST);

	web_url("LegacyCooltipButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/LegacyCooltipButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t283.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ExportButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ExportButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t284.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ScheduledItemButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ScheduledItemButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t285.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MailingListButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/MailingListButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t286.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleSidebarButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t287.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t288.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZcQHrpMZ_d50jLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("TagView.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t289.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateTimePicker.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t290.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZfznSSdwFfasjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("Tip_2", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=LocationSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_url("ListRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ListRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t292.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DepartmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/DepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t293.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FlagListControl.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/FlagListControl.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t294.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedShareableItemList.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedShareableItemList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t295.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_3", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=CommunicationMethodSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t296.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZWr0W7XUFtJcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("set_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t297.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Company.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("sendSurveyDialog.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/sendSurveyDialog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t298.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleLinkSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleLinkSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		LAST);

	web_url("RecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/RecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRNtuVwgB1_sjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLbkGb-gkIy04VOCHJCMtkWGVTiQjLZFhlU4kIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("designer-field.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-field.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-pageBreak.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-pageBreak.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t303.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZuIzT8NwPF9kjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLUFdWlUkIy1-xuI1JCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		LAST);
	lr_end_transaction("1_Navigate To Company Search Tab",LR_AUTO);


	lr_start_transaction("1_Perform Company Search");
    web_reg_find("Text=Wilson", LAST);

	web_custom_request("Search-FetchData", 
		"URL=https://staff.belflex.com/Search/company/Search-FetchData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t305.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":null,\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"Apple\",\"SearchIndexes\":[{\"IndexName\":\"Notes\",\"LocalizedValue\":\"Search Notes\",\"Value\":0}],\"SearchRecord\":false,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,130,136,144,147],\"DimensionValueID\":null,\""
		"DimensionStatuses\":null}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Industry\",\"Value\":{\"IndustryIds\":[]}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"Company\"},{\"ID\":\"CurrentLocation\"},{\"ID\":\"LastNote\"},{\"ID\":\"ContactCount\"},{\"ID\":\"PositionCount\"},{\"ID\":\"Status\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"Company\",\"Direction\":0}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
		EXTRARES, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/4.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/statusicons/5.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST); 

	lr_end_transaction("1_Perform Company Search",LR_AUTO);

	lr_start_transaction("1_Click On Company");

	web_url("SimpleLinkSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleLinkSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t1297.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/js/BL/Sharing/interfaces.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Candidate/Candidate.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Recruiter.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/SharedPopup.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		LAST);

	web_url("RecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/RecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t1298.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/js/Forms/designer.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/interfaces.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/folderGroup/all", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/designer.css", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/candidate/Statuses-all", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		LAST);

	web_url("designer.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t1299.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-field.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-field.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t1300.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-pageBreak.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-pageBreak.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t1301.inf", 
		"Mode=HTML", 
		LAST);

	web_url("manage.aspx", 
		"URL=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t1302.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/js/BL/Email/Template.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AboutTypeLookup.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a6a6d718d%3a58366029%3ae330518b%3a1e771326%3a8e6f0d33%3a7165f74", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetWidget", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1303.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'company/status','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Company%27%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2"
		"hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1l"
		"IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50VGVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb2"
		"1wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpu"
		"dWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZXJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudW"
		"xsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGlvbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlw"
		"ZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudW"
		"xsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWdpb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8i"
		"Om51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT2"
		"4iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGllbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENv"
		"dW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcm"
		"VkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVk"
		"aXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPV"
		"wiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1"
		"c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZXNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPE"
		"ZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNo"
		"ZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW"
		"51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJlY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBF"
		"bnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZm"
		"Zpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1"
		"ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVG"
		"V4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVl"
		"TmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%25"
		"2bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMi"
		"Om51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcH"
		"Byb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidgetWithSession", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1304.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'tags/tags','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		LAST);

	web_custom_request("GetWidget_2", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1305.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'company/general','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Company%27%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2"
		"hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1l"
		"IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50VGVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb2"
		"1wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpu"
		"dWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZXJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudW"
		"xsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGlvbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlw"
		"ZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudW"
		"xsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWdpb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8i"
		"Om51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT2"
		"4iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGllbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENv"
		"dW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcm"
		"VkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVk"
		"aXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPV"
		"wiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1"
		"c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZXNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPE"
		"ZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNo"
		"ZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW"
		"51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJlY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBF"
		"bnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZm"
		"Zpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1"
		"ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVG"
		"V4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVl"
		"TmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%25"
		"2bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMi"
		"Om51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcH"
		"Byb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_3", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1306.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'relationship/managesinglerelationship','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20%27DeletePermission%27%3A%27ChangeParentCompany%27%2C%20%27Title%27%3A%27Parent%20Company%27%2C%20%27RelationshipType%27%3A%272%27%2C%20%27AboutTypeTo%27%3A%27Company%27%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_4", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1307.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'company/people','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Company%27%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2"
		"hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1l"
		"IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50VGVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb2"
		"1wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpu"
		"dWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZXJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudW"
		"xsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGlvbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlw"
		"ZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudW"
		"xsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWdpb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8i"
		"Om51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT2"
		"4iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGllbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENv"
		"dW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcm"
		"VkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVk"
		"aXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPV"
		"wiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1"
		"c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZXNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPE"
		"ZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNo"
		"ZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW"
		"51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJlY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBF"
		"bnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZm"
		"Zpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1"
		"ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVG"
		"V4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVl"
		"TmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%25"
		"2bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMi"
		"Om51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcH"
		"Byb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_5", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1308.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'company/description','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Company%27%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2"
		"hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1l"
		"IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50VGVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb2"
		"1wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpu"
		"dWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZXJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudW"
		"xsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGlvbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlw"
		"ZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudW"
		"xsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWdpb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8i"
		"Om51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT2"
		"4iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGllbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENv"
		"dW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcm"
		"VkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVk"
		"aXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPV"
		"wiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1"
		"c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZXNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPE"
		"ZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNo"
		"ZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW"
		"51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJlY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBF"
		"bnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZm"
		"Zpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1"
		"ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVG"
		"V4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVl"
		"TmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%25"
		"2bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMi"
		"Om51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcH"
		"Byb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_6", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1309.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'company/accounting','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Company%27%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2"
		"hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1l"
		"IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50VGVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb2"
		"1wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpu"
		"dWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZXJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudW"
		"xsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGlvbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlw"
		"ZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudW"
		"xsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWdpb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8i"
		"Om51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT2"
		"4iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGllbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENv"
		"dW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcm"
		"VkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVk"
		"aXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPV"
		"wiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1"
		"c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZXNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPE"
		"ZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNo"
		"ZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW"
		"51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJlY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBF"
		"bnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZm"
		"Zpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1"
		"ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVG"
		"V4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVl"
		"TmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%25"
		"2bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMi"
		"Om51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcH"
		"Byb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_7", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1310.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'company/timesheets','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Company%27%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2"
		"hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1l"
		"IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50VGVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb2"
		"1wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpu"
		"dWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZXJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudW"
		"xsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGlvbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlw"
		"ZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudW"
		"xsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWdpb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8i"
		"Om51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT2"
		"4iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGllbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENv"
		"dW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcm"
		"VkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVk"
		"aXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPV"
		"wiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1"
		"c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZXNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPE"
		"ZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNo"
		"ZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW"
		"51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJlY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBF"
		"bnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZm"
		"Zpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1"
		"ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVG"
		"V4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVl"
		"TmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%25"
		"2bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMi"
		"Om51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcH"
		"Byb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidgetWithSession_2", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1311.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'notelist','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20Mode%3A%20%27Sidebar%27%2C%20ShowTitle%3A%20false%2C%20ShowReferences%3A%20false%2C%20LastNoteProvider%3A%20%27eyJDb21wYW55SUQiOjE0NTg2MSwiTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkxlZ2FsTmFtZSI6IkFjdGlvbiBTdGFmZmluZyIsIkFkU291cmNlIjoiTmV0d29ya2luZyIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOiIiLCJDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjI5OjMwLjUzNyIsIkRlc2NyaXB0aW9uIjoiIiwiR2VuZXJhbENvbW1lbnRzIjpudWxsLCJDb250YWN0UG9ydGFsSW5mbyI6bnVsbCwiRGVmYXVsdEFncmVlbWVudElEIjpudWxsLCJEZWZhdWx0QWdyZWVtZW50TmFtZSI6bnVsbCwiSXNBZ"
		"3JlZW1lbnRSZXF1aXJlZCI6ZmFsc2UsIklzT3duZXJzaGlwUGVybWFuZW50Ijp0cnVlLCJQcm9wYWdhdGVUaW1lc2hlZXRGaWVsZFZhbHVlcyI6dHJ1ZSwiU3RhdHVzSUQiOjEzNiwiU3RhdHVzTmFtZSI6IlVucXVhbGlmaWVkIiwiU3RhdHVzSWNvbklEIjo0LCJTdGF0dXNDb2xvciI6bnVsbCwiT3duZXJJRCI6IjhjZWEyZGU2LTM4ZGMtNDk5ZS05NmNmLTdjZDhkNWQ4OWUxOCIsIk93bmVyUmVwSUQiOjg3NzA0MywiT3duZXJGaXJzdE5hbWUiOiJDcmFpZyIsIk93bmVyTGFzdE5hbWUiOiJIb3Bld2VsbCIsIkRvTm90Q2FsbCI6ZmFsc2UsIkluZHVzdHJ5IjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdElEIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdEZpcnN"
		"0TmFtZSI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3RJRCI6bnVsbCwiRGVmYXVsdENsaWVudFByb2plY3ROYW1lIjpudWxsLCJEZWZhdWx0QmlsbFRvQ29udGFjdExhc3ROYW1lIjpudWxsLCJEZWZhdWx0Q29udGFjdElEIjpudWxsLCJEZWZhdWx0Q29udGFjdEZpcnN0TmFtZSI6bnVsbCwiRGVmYXVsdENvbnRhY3RMYXN0TmFtZSI6bnVsbCwiT3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkludm9pY2VCYXRjaElEIjpudWxsLCJJbnZvaWNlQmF0Y2hOYW1lIjpudWxsLCJUaW1lc2hlZXRCYXRjaElEIjpudWxsLCJUaW1lc2hlZXRCYXRjaE5hbWUiOm51bGwsIlBheW1lbnRUZXJtc0lEIjpudWxsLCJQYXltZW50V"
		"GVybXNOYW1lIjpudWxsLCJBdXRvQ3JlYXRlVGltZXNoZWV0cyI6ZmFsc2UsIkNvbXBhbnlUeXBlSUQiOjE5LCJDb21wYW55VHlwZU5hbWUiOiJDb21wZXRpdG9yIiwiRmlzY2FsWWVhckVuZE1vbnRoIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRCI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZSI6bnVsbCwiT3Bwb3J0dW5pdHlJRCI6bnVsbCwiT3Bwb3J0dW5pdHlOYW1lIjpudWxsLCJWTVNCdXJkZW5JRCI6bnVsbCwiVk1TQnVyZGVuTmFtZSI6bnVsbCwiQWRtaW5CdXJkZW5JRCI6MTYsIkFkbWluQnVyZGVuTmFtZSI6Ik5vbmUiLCJFeHBlbnNlVHlwZUlEIjoxLCJFeHBlbnNlVHlwZU5hbWUiOiJObyBFeHBlbnNlcyBBbGxvd2VkIiwiVGltZXNoZWV0Q3JlYXRpb25"
		"PcHRpb24iOjEwLCJJbnZvaWNlVGVtcGxhdGVJRFBlcm0iOm51bGwsIkludm9pY2VUZW1wbGF0ZU5hbWVQZXJtIjpudWxsLCJJbnZvaWNlVGVtcGxhdGVJRE1pbGVzdG9uZSI6bnVsbCwiSW52b2ljZVRlbXBsYXRlTmFtZU1pbGVzdG9uZSI6bnVsbCwiVGltZXNoZWV0RW50cnlUZW1wbGF0ZUlEIjo1LCJUaW1lc2hlZXRFbnRyeVRlbXBsYXRlTmFtZSI6IlNpbXBsZSAtIEhycyIsIkFsbG93RW1wdHlUaW1lc2hlZXRzIjp0cnVlLCJFbWFpbENDIjpudWxsLCJTYWxlc1RheEV4ZW1wdFN0YXRlcyI6bnVsbCwiRXh0ZXJuYWxWZW5kb3JJRCI6bnVsbCwiRXh0ZXJuYWxDdXN0b21lcklEIjpudWxsLCJWQVRJRCI6bnVsbCwiRGlyZWN0aW9ucyI6bnVsbCwiTG9hZFZvdWNoZ"
		"XJzQXNPbkhvbGQiOmZhbHNlLCJBUkNvbGxlY3RvclVzZXJJRCI6bnVsbCwiQVJDb2xsZWN0b3JIclJlcElEIjpudWxsLCJBUkNvbGxlY3RvckZpcnN0TmFtZSI6bnVsbCwiQVJDb2xsZWN0b3JMYXN0TmFtZSI6bnVsbCwiVGltZXNoZWV0UmFuZ2VDYWxlbmRhcklEIjozLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFyTmFtZSI6IlN1bmRheSBUaW1lc2hlZXRzIFdlZWtseSIsIlRpbWVzaGVldE5vdGlmaWNhdGlvbk9wdGlvbnMiOjcsIlNob3dUaW1lc2hlZXRCaWxsaW5nVG90YWxUb0NvbnRhY3QiOmZhbHNlLCJXb3JrZXJzQ29tcENvZGUiOiIiLCJDcmVkaXRTY29yZSI6bnVsbCwiQ3JlZGl0TGltaXQiOm51bGwsIkludm9pY2VNb2RlSUQiOm51bGwsIkNhbmNlbGxhdGl"
		"vbkRheXMiOm51bGwsIkludm9pY2VNb2RlTmFtZSI6bnVsbCwiT3ZlcnRpbWVUeXBlSUQiOjIsIk92ZXJ0aW1lVHlwZU5hbWUiOiIxLjV4IE92ZXJ0aW1lIiwiT3ZlcnRpbWVNdWx0aXBsaWVyIjoxLjUwMDAsIkRvdWJsZXRpbWVNdWx0aXBsaWVyIjoyLjAwMDAsIkRlZmF1bHRCaWxsUmF0ZU1hcmt1cFBlcmNlbnRhZ2UiOm51bGwsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIlRvdGFsSG91cnNXb3JrZWQiOjAuMDAwMDAwLCJUb3RhbFByb2ZpdEdlbmVyYXRlZCI6MC4wMDAwLCJQZXJtUmV2ZW51ZSI6MC4wMDAwMDAwMDAwLCJNYXJnaW5QZXJjZW50YWdlIjowLjAwMDAsIkRpdmlzaW9uTWFya"
		"2V0SUQiOm51bGwsIkRpdmlzaW9uTWFya2V0TmFtZSI6bnVsbCwiRGVmYXVsdFJhdGVIb2xpZGF5TGlzdElEIjpudWxsLCJEZWZhdWx0UmF0ZUhvbGlkYXlMaXN0TmFtZSI6bnVsbCwiUm91dGluZ0ZsYWdJRCI6bnVsbCwiUm91dGluZ0ZsYWdOYW1lIjpudWxsLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkNvbW11bmljYXRpb25UeXBlSUQiOjQwMCwiQWRkcmVzc05hbWUiOiJNYXN0ZXIgQWRkcmVzcyIsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24gIiwiUG9zdGFsQ29kZSI6IjI3ODIyIiwiU3RhdGVJRCI6NDIsIlJlZ2lvbklEIjpudWxsLCJDb3VudHJ5SUQiOjIyMCwiU3RhdGVOYW1lIjoiTm9ydGggQ2Fyb2xpbmEiLCJSZWd"
		"pb25OYW1lIjpudWxsLCJDb3VudHJ5TmFtZSI6IlVuaXRlZCBTdGF0ZXMgb2YgQW1lcmljYSIsIklzTWVyZ2VkVG8iOm51bGwsIk1lcmdlZFRvTmFtZSI6bnVsbCwiTGFzdE5vdGVJRCI6MTE5MTA4NjUsIkxhc3ROb3RlQm9keSI6IkNvbnNlbnN1cywgZm9yIG5vdywgYXQgbGVhc3QgYXMgb2YgZWFybHkgMjAxOSBpcyB0aGF0IHRoaXMgaXMgdG9vIG1lc3N5IGFuZCBsb2NhdGlvbiBub3QgZ3JlYXQuIE1hbnkgcmV2aXNpdCBhcyBOQyBzdHJhdGVneSBzb2xpZGlmaWVzLiBTY2hhZmVyIGFuZCBIb3Bld2VsbCBib3RoIGtub3cgR2F1c3Mgd2VsbC4uLmhlIGlzIHZlcnkgYWNjZXNpYmxlIGlmIFdpc29uJmx0OyBOQyBnZXRzIG9uIG91ciByYWRhciIsIkxhc3ROb3RlQ"
		"3JlYXRlZEJ5IjoiOGNlYTJkZTYtMzhkYy00OTllLTk2Y2YtN2NkOGQ1ZDg5ZTE4IiwiTGFzdE5vdGVDcmVhdGVkT24iOiIyMDE5LTA2LTI2VDE0OjM1OjQ1LjMyNyIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IkNyYWlnIEhvcGV3ZWxsIiwiTGFzdE5vdGVJREJ5VXNlciI6bnVsbCwiTGFzdE5vdGVCb2R5QnlVc2VyIjpudWxsLCJMYXN0Tm90ZUNyZWF0ZWRPbkJ5VXNlciI6bnVsbCwiRnJvbVNlZWRJRCI6bnVsbCwiRnJvbVNlZWROYW1lIjpudWxsLCJJbnZvaWNlRGlzY291bnRQZXJjZW50IjpudWxsLCJBZGRyZXNzQ291bnQiOjEsIkFncmVlbWVudENvdW50IjowLCJNYXRjaENvdW50IjowLCJEb05vdFNlbmRDb3VudCI6MCwiQ29udGFjdENvdW50IjoxLCJDbGl"
		"lbnRQcm9qZWN0Q291bnQiOjAsIlBvc2l0aW9uQ291bnQiOjAsIkludm9pY2VDb3VudCI6MCwiQXR0YWNobWVudENvdW50IjowLCJGb2xkZXJHcm91cENvdW50IjowLCJJbmR1c3RyeUNvdW50IjoxLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoyLCJTa2lsbENvdW50IjowLCJSZXF1aXJlbWVudENvdW50IjoyLCJBZGRpdGlvbmFsT3duZXJzQ291bnQiOjAsIk9wcG9ydHVuaXR5Q291bnQiOjAsIlNlZWRDb3VudCI6MCwiTGlzdENvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiRXhwZW5zZUNvdW50IjowLCJBZGRpdGlvbmFsT3duZXJDb3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjExNzdcIiBUeXBlSUQ9X"
		"CI2XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkXCIgVW5pcXVlTmFtZT1cIkNyZWRpdEluc3VyZWRcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJOb1wiIFJlY29yZElEPVwiODc3XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIlllc1wiIFJlY29yZElEPVwiODc2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252"
		"bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTc4XCIgVHlwZUlEPVwiNFwiIE5hbWU9XCJDcmVkaXQgSW5zdXJlZCBBbW91bnRcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZEFtb3VudFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4N1wiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkNyZWRpdCBJbnN1cmVkIERhdGVcIiBVbmlxdWVOYW1lPVwiQ3JlZGl0SW5zdXJlZERhdGVcIiBJc1JlcXVpcmVkP"
		"VwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTZcIiBUeXBlSUQ9XCIxMlwiIE5hbWU9XCJDdXN0b21lci1yZXF1aXJlZCBTY3JlZW5pbmdcIiBVbmlxdWVOYW1lPVwiQ3VzdG9tZXJyZXF1aXJlZFNjcmVlbmluZ1wiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImFjY291bnRpbmcuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx"
		"1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMlwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiTmV3IEJ1c2luZXNzXCIgVW5pcXVlTmFtZT1cIk5ld0J1c2luZXNzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiTm9cIiBSZWNvcmRJRD1cIjM2OVwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIxXCIgRW51bVRleHQ9XCJZZ"
		"XNcIiBSZWNvcmRJRD1cIjM2OFwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTExNFwiIFR5cGVJRD1cIjE1XCIgTmFtZT1cIk9uc2l0ZSBNYW5hZ2VyXCIgVW5pcXVlTmFtZT1cIk9uc2l0ZU1hbmFnZXJcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjxGaWVsZCBJRD1cIjExNzlcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZnJlc2ggVGltZXNoZWV0IFZhbHVlc1wiIFVuaXF1ZU5hbWU"
		"9XCJSZWZyZXNoVGltZXNoZWV0VmFsdWVzXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDgzXCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJTdGFmZmluZyBUYXJnZXQgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWY"
		"Wx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiQS4gMjYgK1wiIFJlY29yZElEPVwiODgyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIkIuIDExIHRvIDI1XCIgUmVjb3JkSUQ9XCI4ODNcIiBFbnVtU29ydE9yZGVyPVwiMlwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiQy4gMyB0byAxMFwiIFJlY29yZElEPVwiODg0XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjRcIiBFbnVtVGV4dD1cIkQuIDIgb3IgbGVzc1wiIFJ"
		"lY29yZElEPVwiODg1XCIgRW51bVNvcnRPcmRlcj1cIjRcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjVcIiBFbnVtVGV4dD1cIkUuIEhpZ2ggVm9sdW1lL0xvdyBNYXJnaW5cIiBSZWNvcmRJRD1cIjg4NlwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCJGLiBEbyBOb3QgQ2FsbFwiIFJlY29yZElEPVwiODg3XCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIkcuIFJQTy9EaXJlY3QgSGlyZSBPTkxZXCIgUmVjb3JkSUQ9XCI4ODhcIiBFbnVtU29ydE9yZGVyPVwiN1wiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjEwOTVcI"
		"iBUeXBlSUQ9XCI2XCIgTmFtZT1cIlN0YWZmaW5nIFpvbmUgRGVzaWduYXRpb25cIiBVbmlxdWVOYW1lPVwiU3RhZmZpbmdab25lRGVzaWduYXRpb25cIiBJc1JlcXVpcmVkPVwiMVwiIFBsYWNlSG9sZGVySUQ9XCJkZXNjcmlwdGlvbi5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiMS4gWm9uZSBPbmVcIiBSZWNvcmRJRD1cIjcwNVwiIEVudW1Tb3J0T3JkZXI9XCIxXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCIyLiBab25"
		"lIFR3b1wiIFJlY29yZElEPVwiNzA2XCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtVGV4dD1cIjMuIFpvbmUgVGhyZWVcIiBSZWNvcmRJRD1cIjcwN1wiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCI0LiBab25lIEZvdXJcIiBSZWNvcmRJRD1cIjcwOFwiIEVudW1Tb3J0T3JkZXI9XCI0XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCI1LiBab25lIEZpdmVcIiBSZWNvcmRJRD1cIjcwOVwiIEVudW1Tb3J0T3JkZXI9XCI1XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI2XCIgRW51bVRleHQ9XCI2LiBab25lIFNpeFwiIFJlY29yZ"
		"ElEPVwiNzEwXCIgRW51bVNvcnRPcmRlcj1cIjZcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjdcIiBFbnVtVGV4dD1cIjcuIFpvbmUgU2V2ZW5cIiBSZWNvcmRJRD1cIjcxMVwiIEVudW1Tb3J0T3JkZXI9XCI3XCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTEyMVwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIlN0YXJ0IERhdGVcIiBVbmlxdWVOYW1lPVwiU3RhcnREYXRlXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWV"
		"sZD48RmllbGQgSUQ9XCIxMTY5XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJUaW1lc2hlZXQgU291cmNlXCIgVW5pcXVlTmFtZT1cIlRpbWVzaGVldFNvdXJjZVwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cInRpbWVzaGVldHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMFwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIkVyZWNydWl0IFBvcnRhbCBFbnRyeVwiIFJlY29yZElEPVwiNTE2XCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjNcIiBFbnVtV"
		"GV4dD1cIk1hbnVhbC9PdGhlciBFbnRyeVwiIFJlY29yZElEPVwiNTE4XCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjJcIiBFbnVtVGV4dD1cIlRpbWVjbG9jayBJbXBvcnRcIiBSZWNvcmRJRD1cIjUxN1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjwvTGlzdEl0ZW1zPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE4NlwiIFR5cGVJRD1cIjE0XCIgTmFtZT1cIkxlZ2FjeSBCb29rXCIgVW5pcXVlTmFtZT1cIkxlZ2FjeUJvb2tcIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCI1XCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2F"
		"uRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48L0ZpZWxkPjwvRmllbGRzPiIsIkFkZGl0aW9uYWxPd25lcnMiOm51bGwsIkRpbWVuc2lvblN0YXR1c2VzIjoiPERpbWVuc2lvblN0YXR1c2VzPjxEaW1lbnNpb25TdGF0dXMgRGltZW5zaW9uVmFsdWVJRD1cIjlcIiBEaW1lbnNpb25WYWx1ZU5hbWU9XCJMaWdodCBJbmR1c3RyaWFsXCIgU3RhdHVzSUQ9XCIwXCIgU3RhdHVzTmFtZT1cIlwiIFN0YXR1c0NvbG9yPVwiXCIgU3RhdHVzSWNvbklEPVwiMFwiLz48RGltZW5zaW9uU3RhdHVzIERpbWVuc2lvblZhbHVlSUQ9XCIxMlwiIERpbWVuc2lvblZhbHVlTmFtZT1cIlByb2Zlc3Npb25hbFwiIFN0YXR1c0lEPVwiMFwiIFN0YXR1c05hbWU9XCJcIiBTdGF0dXNDb"
		"2xvcj1cIlwiIFN0YXR1c0ljb25JRD1cIjBcIi8%252bPC9EaW1lbnNpb25TdGF0dXNlcz4iLCJUaW1lc2hlZXRBcHByb3ZlcjFJRCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjpudWxsLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6bnVsbCwiTWlsZXN0b25lVHJhbnNhY3Rpb25UeXBlSUQiOm51bGwsIk1pbGVzdG9uZVRyYW5zYWN0aW9uVHlwZSI6bnVsbCwiUE9OdW1iZXJDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MH0%253d%27%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_8", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1312.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'contactmethods','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Name%27%3A%20%27%27%2C%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJOQyIsIlN0YXRlTmFtZSI6Ik5vcnRoIENhcm9saW5hIiwiQ291bnRyeU5hbWUiOiJVbml0ZWQgU3RhdGVzIG9mIEFtZXJpY2EiLCJSZWdpb25OYW1lIjoiIiwiQ29tbXVuaWNhdGlvblR5cGVJZCI6NDAwLCJOYW1lIjoiTWFzdGVyIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24iLCJTdGF0ZUlEIjo0MiwiQ291bnRyeUlEIjoyMjAsIlBvc3RhbENvZGUiOiIyNzgyMiIsIlJlZ2lvbklEIjpudWxsfQ%253d%253d%27%2C%20%27Ad"
		"dressID%27%3A%206409764%2C%20%27NrOfAddresses%27%3A%201%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/disk.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/task_add.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/printer.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/note_add.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_custom_request("ManagePositionTemplates", 
		"URL=https://staff.belflex.com/MVC/PositionTemplate/ManagePositionTemplates?companyID=145861&canEdit=true", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1313.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_custom_request("ListRateGroups", 
		"URL=https://staff.belflex.com/MVC/Rate/ListRateGroups?ReferenceID=145861&AboutTypeID=1&IsReadOnly=false", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1314.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583809798045", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/calendar_add.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/apps/linkedin.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_custom_request("GetObjectTransactions", 
		"URL=https://staff.belflex.com/Mvc/ObjectTransaction/GetObjectTransactions?abouttypeid=1&refid=145861", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1315.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		EXTRARES, 
		"Url=../Content/Images/icons/arrowjoin.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/info.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583809798046", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/edit.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/barchart.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/calendar.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/phone.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=../Content/Images/icons/abouttypes/21.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/abouttypes/20.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/agreement.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/abouttypes/2.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/match.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/attachment.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/requirements.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/abouttypes/3.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/abouttypes/90.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/phone_ok.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/phone_nok.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/print.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_9", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1316.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'address/address','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJOQyIsIlN0YXRlTmFtZSI6Ik5vcnRoIENhcm9saW5hIiwiQ291bnRyeU5hbWUiOiJVbml0ZWQgU3RhdGVzIG9mIEFtZXJpY2EiLCJSZWdpb25OYW1lIjoiIiwiQ29tbXVuaWNhdGlvblR5cGVJZCI6NDAwLCJOYW1lIjoiTWFzdGVyIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjY0MDk3NjQsIkFkZHJlc3NMaW5lMSI6IiIsIkFkZHJlc3NMaW5lMiI6IiIsIkNpdHkiOiJXaWxzb24iLCJTdGF0ZUlEIjo0MiwiQ291bnRyeUlEIjoyMjAsIlBvc3RhbENvZGUiOiIyNzgyMiIsIlJlZ2lvbklEIjpudWxsfQ%253d%253d%27%2C%20%27AddressID%27%3A%206409764%2C%2"
		"0%27NrOfAddresses%27%3A%201%20%20%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidgetWithSession_3", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1317.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'communicationlist','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20Mode%3A%20%27Sidebar%27%2C%20%27Email%27%20%3A%20%27%27%2C%20%27FullName%27%20%3A%20%27%27%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/abouttypes/1.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/note.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/ReorderableList.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Ace.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/mode-less.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/folder_closed.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/money.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/12.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/skill.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/zoom.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/form.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/ace.js", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		"Url=/MVC/Content/js/BL/RightBarSettings/RightBarSettings.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/autobind.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Help.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/forms/list-all", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		LAST);

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/company/", 
		"Snapshot=t1318.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		EXTRARES, 
		"Url=../Email/Templates-all", "Referer=https://staff.belflex.com//Search/company/", ENDITEM, 
		LAST);

	web_url("Help.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1319.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/add.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_custom_request("get", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1320.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionlinks_section\",\"ContainerID\":\"RightBar.SectionsOrder\"}", 
		EXTRARES, 
		"Url=../Content/Images/icons/house.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/14/edit.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/14/houses.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Content/Images/icons/14/link.png", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_custom_request("get_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1321.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionlinks_section\",\"ContainerID\":\"RightBar.CollapsedSections\"}", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/UserList/StaticUserLists.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/AttendancePoints.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/CompanyDepartments.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/CostCenters.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/EINMappings.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("StaticUserLists.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/UserList/Templates/StaticUserLists.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1322.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AttendancePoints.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/AttendancePoints.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1323.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CompanyDepartments.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/CompanyDepartments.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1324.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CostCenters.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/CostCenters.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1325.inf", 
		"Mode=HTML", 
		LAST);

	web_url("EINMappings.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/EINMappings.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1326.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetFieldList.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Approval/ApprovalPathList.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("TimesheetFieldList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetFieldList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1327.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimesheetFieldForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetFieldForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1328.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ApprovalPathList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Approval/Templates/ApprovalPathList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1329.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/UserList/interfaces.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/TimeAndLaborSetup.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagsView.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/Templates/AttendancePoints.css", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/Templates/CompanyDepartments.css", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/Templates/TimeAndLabor.css", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_custom_request("GetStaticLists", 
		"URL=https://staff.belflex.com/Mvc/UserList/GetStaticLists", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1330.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Contexts\":[{\"AboutType\":1,\"ReferenceId\":\"145861\"}],\"Usage\":1}", 
		LAST);

	web_url("TagsView.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1331.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimeAndLaborSetup.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimeAndLabor/Templates/TimeAndLaborSetup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1332.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TagsGridCell.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsGridCell.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1333.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/External/Knockout/knockout.mapping-latest.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/dataSource.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Select.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/Company.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Search/EmbeddedSearch.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/CostCenterForm.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/EINMappingForm.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/PagedList.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetFieldForm.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("CostCenterForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/CostCenterForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1334.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Pager.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Pager.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1335.inf", 
		"Mode=HTML", 
		LAST);

	web_url("EINMappingForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/EINMappingForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1336.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetValueForm.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetPOValueForm.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/External/rubaxa/knockout-sortable.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetFields.css", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("TimesheetValueForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetValueForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1337.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimesheetPOValueForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetPOValueForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1338.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Approval/interfaces.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/common.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/formatter.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupTRCList", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Approval/ApprovalPaths?companyId=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Timesheet/TimeRecordingCodes-All", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupRuleCategory", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupCalculationKind", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupRuleType", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupRuleset", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupGroupingCriteria", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupWeekday", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/common.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagView.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("InfoBox.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1339.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Base/DeclareDataSource.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/ListRangeFilter.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/SelectFilter.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("TagView.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1340.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/SearchResults.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("ListRangeFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/ListRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1341.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Contact/Lookup.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("SelectFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1342.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1343.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/PositionType/Lookup.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("SearchResults.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1344.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/EntityFederalID/Lookup.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/External/rubaxa/Sortable.min.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/params.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../DropDownFilter.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Criterion.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../LiveFilterService.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/js-debug/kendo.web.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("DropDownFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1345.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1346.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/company/companyDepartments-all?companyID=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/Company/GetAttendancePoints?companyID=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Search/CompanyDepartment/By/Company?companyID=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/editors.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=../Components/Columns.js", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/GetSetup?AboutType=1&ReferenceID=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("Columns.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1347.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/timesheetfield/fieldtypes/", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Mvc/location/states-all", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Search/CostCenter/By/Company?companyID=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		"Url=/Search/EINMapping/By/Company?companyID=145861", "Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", ENDITEM, 
		LAST);

	web_url("Tip_4", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=TimesheetFieldForm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1348.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetTimesheetFields", 
		"URL=https://staff.belflex.com/Mvc/TimesheetField/GetTimesheetFields", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1349.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"page\":0,\"aboutType\":\"Company\",\"referenceID\":\"145861\"}", 
		LAST);

	lr_end_transaction("1_Click On Company",LR_AUTO);

	lr_start_transaction("1_Notes Click");

    web_reg_find("Text=Company Description", LAST);
	web_url("LoadUserControl.aspx", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1350.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=../MVC/Content/js/BL/Note/NotesList.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		LAST);

	web_url("NotesList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Note/Templates/NotesList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1351.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1352.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SearchResults.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1353.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1354.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1355.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Search/note/by/record?aboutType=Company&referenceID=145861", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		LAST);

	web_url("Columns.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1356.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/Filters/ComplexRecruiterFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/DateRangeFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/NoteAction.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/Note/NoteCommandsColumn.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		LAST);

	web_url("ComplexRecruiterFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1357.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateRangeFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1358.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1359.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NoteCommandsColumn.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Note/Templates/NoteCommandsColumn.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1360.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Department.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/User.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		LAST);

	web_url("DepartmentFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Templates/DepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1361.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1362.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1363.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Controls/DateTimePicker.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/Mvc/noteaction/List-all", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		"Url=/Mvc/department/all", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", ENDITEM, 
		LAST);

	web_url("DateTimePicker.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1364.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_5", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Notes", 
		"Snapshot=t1365.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Note.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"CreatedBy\",\"DateCreated\",\"Action.Id\",\"AboutItem\"],\"RecentParameters\":[]}}", 
		LAST);

	lr_end_transaction("1_Notes Click",LR_AUTO);

	lr_start_transaction("1_Company_Click_Folder");

	web_url("LoadUserControl.aspx_2", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1366.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", ENDITEM, 
		LAST);

	web_custom_request("145861", 
		"URL=https://staff.belflex.com/MVC/Industries/List/1/145861/", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", 
		"Snapshot=t1367.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("145861_2", 
		"URL=https://staff.belflex.com/MVC/FolderGroups/List/1/145861/", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", 
		"Snapshot=t1368.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583809939519", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583809939520", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=FolderGroupsNew", ENDITEM, 
		"Url=/Mvc/Content/Images/bits/bg_sectionmenu.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		//"Url=/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583809682602", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/add.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		LAST);

	lr_end_transaction("1_Company_Click_Folder",LR_AUTO);
 

	lr_start_transaction("1_Company_Click_Skills");

    web_reg_find("Text=Level", LAST);


	web_url("LoadUserControl.aspx_3", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1369.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=k9Zd5Mv7tH4b-TGUAcGiMUeZJRQ5y_NdLXF9K7Zd1Pgo_QdyQE8Supvfqms-Xbl1xGlPN2HQ5DJanWCFHiVHwvQEjw16eskpWYNK1RZF0_8VqUR3Jb9H5R1rRDQ4OLAVE3d7fA2&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=dmjnQMHQMm7NaDH95Wh5Y1IKEhO6aFhHU2D9KgmCr2iVXPsrB4nb793ypKhLi53dWPZiX4KAVaj1YwCZsv2dI563kvQJBjxALy900OC1yHIyjGrj6g2hU3RyKBEJrSWtPmMNnxwozm9Cu7oKoV1CzWVTDWDdPbx_826kqkyagyVoBKBv0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=VquIpJopB8WdSAujtTNDllRpkw1mpzaqK72opZqY0h1xT_OFF0vA1wL4CzbxwgyJq0hFEd6waxhfjnWW-BvBqxz_wD-j00FjwVAWLNpmiJ_olAIcVDBNeWg5sICHyH1aH9QmFIwS6nJbVFs3KnKFR8CTA0RoeoaWUGzCDP0g41ymE0Hh0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=89cyUC7OOiuHXPMVTWesFKVvDYVab8lNiT2DxciPaPsm0V-bFbOmrm7cLMjPCJHeTIIy1TdGlxE9PFgaHhyoUSXw89XZlo-Rj3870_BemTBOOLt_2VeI3rpj9ydpEVXaLHC25TMXHReKF3VkLXw0d3mNcW01&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=8fyBX1N3F6Fxh_wpDJVDq992YGqGLQ8eDMUCeQVUQJV9jFK09depyPEj2xbAgyeKZYiWucXm93Gru_wy0RVxd-mdzv6BCZri2le-CTsPOKoBjeV6GlRw4XJUEhDusYO4WPpS1n-FcbeOuBrKQgou5BpT7B01&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=MSyFMy1cYzlATtau9NY94jaI2InpdyIqJF5YvPweeQjnmfw1i7_slIWj32fjl--QA7QICaWVTFPwxOq2nTV9XMZAMMaF6-HK5X4Q9gUhBO5ooxSEpzLZcamy9AYJTE6I4hjW9NYsEuK7mBJdWeZhszaUkfQ1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=L_Iit2Ph_5Df1Gw1vih333fB_yN2disFiRulDSFBTdpHWq5SVvwlqkiUqyEW8jECfWCv7ovgW0HIvs78sq6-fgiNnkU_oMDnp4FtefN1IueJda0tD7aGHamZ9zZpxWkhho4eSBEUJzGrxCwpuDXY2thPChs1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=AylIygQIaxjqL9fSaLIGsAIWNWhTFchELyXC2tshsI2m-YEIOJXqrtAoSiONSYCDmJvDYb13LVFubUCrmp9XruulYTM5F30jaaafMXikVEKieAqJF2WVQz3tj5mqI4KEb1h88eUZHMZo0WccZ4kJh5qe9eg1&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=LwbTHUwgxB-ax1QLgGvGIYdf42hG9K9vsulhB6lI6nZJfA7BjE746M4iHhA4i4jA7jLxd8XCEzXUWujrnXIJD-8iC5TZlatn4l_clm2QWqnlGi0hjCtKErNlQmaJLewOIirscwYe0OQ4RwZW85eaO1oJ7B9tHrnZ6SHAqWASMTbLPEW_0&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=c_z8PZJKUZrgSZIrx1IoPJMXIl9nhNeiQo6sUXVJho-mo6FtwCkQZahQBGzwQa6SvtL4xddvkJwYuYc3ZScaS6bqKGdV5Nd-Sn4zuHaiXMjFZ_eObyA_HpTlTMUt2dN61DoDjWrDwukumkOO8avCDHCG3aaPtx42vLlu7WfU5K4eqvdq0&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=Skills", ENDITEM, 
		LAST);

	lr_end_transaction("1_Company_Click_Skills",LR_AUTO);

	lr_start_transaction("1_Company_Click_History");

	web_url("LoadUserControl.aspx_4", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/company/manage.aspx?refid=145861&null", 
		"Snapshot=t1370.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_4", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1371.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'aboutitemhistory','data':'{\"AboutType\":\"Company\",\"ReferenceID\":145861,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		EXTRARES, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/Audit/ChangeHistory.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		"Url=/MVC/Content/js/Audit/StatusTransitions.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		"Url=/MVC/Content/js/Audit/Templates/ChangeHistory.css", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		LAST);

    web_reg_find("Text=Change History", LAST);
	web_url("ChangeHistory.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/ChangeHistory.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1372.inf", 
		"Mode=HTML", 
		LAST);

	web_url("StatusTransitions.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/StatusTransitions.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1373.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_5", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1374.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SearchResults.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1375.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Pager.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Pager.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1376.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1377.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("StatusTransitions", 
		"URL=https://staff.belflex.com/Mvc/Audit/StatusTransitions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1378.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"record\":{\"AboutType\":\"Company\",\"ReferenceId\":\"145861\"},\"page\":0}", 
		LAST);

	web_url("Criterion.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1379.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Audit/AccessLog.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		"Url=/MVC/Content/images/icons/refresh.png", "Referer=https://staff.belflex.com/MVC/Content/js/Audit/Templates/ChangeHistory.css", ENDITEM, 
		"Url=/Search/Audit/By/History?aboutType=Company&referenceID=145861", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		LAST);

	web_url("AccessLog.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/AccessLog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1380.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Columns.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1381.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1382.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1383.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AccessLog", 
		"URL=https://staff.belflex.com/Mvc/Audit/AccessLog", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1384.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"record\":{\"AboutType\":\"Company\",\"ReferenceId\":\"145861\"},\"page\":0}", 
		LAST);

	web_url("DropDownFilter.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1385.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Filters/CheckboxFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		LAST);

	web_url("CheckboxFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1386.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=//Mvc/List/GenericList_nvp?key=entity:User", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", ENDITEM, 
		LAST);

	web_custom_request("set_6", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=1&refid=145861&control=History", 
		"Snapshot=t1387.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.erecruit.Mvc.Search.AuditController+AuditPropertyTransition.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"ShowEmptyChanges\"],\"RecentParameters\":[]}}", 
		LAST);

	lr_end_transaction("1_Company_Click_History",LR_AUTO);

	return 0;
}