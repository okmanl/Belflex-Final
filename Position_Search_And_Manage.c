Position_Search_And_Manage()
{
 
	web_set_sockets_option("SSL_VERSION", "2&3");
 

	lr_start_transaction("1_Navigate To Position Search Tab");

	web_url("position", 
		"URL=https://staff.belflex.com//Search/position/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t334.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/amd-base-url-marker.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/koBindings.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/cooltipKoBridge.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/bundles-config.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout-3.1.0.debug.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/tableSorter.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/LocalizationService.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchPage.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Tipped.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.time.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.dom.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.binding.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/Utils/internationalization.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/requirejs-plugins/json.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/moment/moment.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/LinqJS/linq.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/api.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/accounting/accounting.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/seq.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/keys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dynamic.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/userSettings.js", ENDITEM, 
		"Url=/Mvc/Content/require/css.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Frame/container.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchResults.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize.js", ENDITEM, 
		"Url=/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.common.min.css", ENDITEM, 
		"Url=/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/number.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/currency.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/plural.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/date.js", ENDITEM, 
		"Url=/Mvc/Content/require/text.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/autobind.js", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/InfoBox.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Help.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/LiveFilterService.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Criterion.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/event.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/supplemental.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Base.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/js-debug/kendo.web.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/stylesheet.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Popup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Select.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SidebarButtonsTab.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/Columns.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FtsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Status.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/Filter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/TextFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Location.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AdSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Templates/Location.SearchFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Candidate/Candidate.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Position/Position.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/PositionType.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CheckboxFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/DateRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Recruiter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Department.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SemanticSearchFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Industry.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/NotesFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ScheduledItemsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FolderGroupsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Attachment.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ComplexRecruiterFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/Company.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Contact/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Opportunity/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ClientProject.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/MoneyRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SelectFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/PastStatusFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/SkillsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ShiftsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CommunicationMethodsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ParentCompany.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/CompanyDepartmentFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/DivisionMarketFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/DropDownFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/TimeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/common.js", ENDITEM, 
		"Url=/Mvc/Position/Statuses-all", ENDITEM, 
		"Url=/Mvc/adSource/list-all?aboutType=4", ENDITEM, 
		"Url=/Mvc/industry/list-all", ENDITEM, 
		"Url=/Mvc/adsource/allCategories", ENDITEM, 
		"Url=/Mvc/department/all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagView.js", ENDITEM, 
		"Url=//Mvc/List/GenericList_no?key=entity:Division", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedSearchButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/FolderGroup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/ResourceKeys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Search/sidebarButton.js", ENDITEM, 
		"Url=/Mvc/location/states-all", ENDITEM, 
		"Url=/Mvc/location/regions-all", ENDITEM, 
		"Url=/api/tags/getVisibleTags?aboutType=4", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/LegacyCooltipButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ExportButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Requirement/AddRequirementSidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/MailingListButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ScheduledItemButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Base/DeclareDataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleLinkSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout.mapping-latest.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/DateTimePicker.js", ENDITEM, 
		"Url=/Mvc/position/CloseReasons-all", ENDITEM, 
		"Url=/Mvc/ClientProject/all", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Slider.js", ENDITEM, 
		"Url=/Mvc/positionType/AllForEntities", ENDITEM, 
		"Url=/Mvc/Content/js/BL/NoteAction.js", ENDITEM, 
		"Url=/Mvc/candidate/ClearanceLevels-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/User.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ListRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItem.js", ENDITEM, 
		"Url=/Mvc/Content/js/Currency/CurrencyService.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/Templates/ManageScheduledItem.css", ENDITEM, 
		"Url=/Mvc/noteaction/List-all", ENDITEM, 
		"Url=/Mvc/Currency/CurrencyModel", ENDITEM, 
		"Url=/Mvc/Company/DivisionMarkets-all", ENDITEM, 
		"Url=/Mvc/company/Types-all", ENDITEM, 
		"Url=/Mvc/currency/forLookup-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/Skill.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Shift.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/FlagListControl.js", ENDITEM, 
		"Url=/Mvc/skill/all", ENDITEM, 
		"Url=/Mvc/shift/Statuses-all", ENDITEM, 
		"Url=/Mvc/shift/CancellationReasons-all", ENDITEM, 
		"Url=/Mvc/shift/TravelStatuses-all", ENDITEM, 
		"Url=/Mvc/shift/FolderGroups-all", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedShareableItemList.js", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationCategories", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationtypes", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/PopupSidebarButtonBase.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Styles/SavedShareableItemList.css", ENDITEM, 
		"Url=/Mvc/folderGroup/all", ENDITEM, 
		"Url=/Mvc/folderGroup/allCategories", ENDITEM, 
		"Url=/Mvc/folderGroup/getStatuses?aboutType=4", ENDITEM, 
		"Url=/Mvc/folderGroup/allSubcategories", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/sendSurveyDialog.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItemModels.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/sendSurveyDialog.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagsSelector.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Editor.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tasks/Sharing.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Actions.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ChoosePeople.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Sharing/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/SharedPopup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/designer.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/designer.css", ENDITEM, 
		"Url=/Mvc/candidate/Statuses-all", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Email/Template.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AboutTypeLookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/MultiSelect.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/ReorderableList.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Ace.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/mode-less.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/ace.js", ENDITEM, 
		"Url=/Mvc/scheduledItem/AllTypes", ENDITEM, 
		"Url=/Mvc/forms/list-all", ENDITEM, 
		"Url=/Mvc/Email/Templates-all", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/matches_open_disabled.png", ENDITEM, 
		LAST);

	web_url("SearchResults.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t335.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_2", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t336.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t337.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t338.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/select2.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://staff.belflex.com/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/search/icon-menu.svg", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_url("Buttons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Buttons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t339.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Columns.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t340.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FtsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FtsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t341.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Status.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/Status.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t342.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Filter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/Filter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t343.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t344.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TextFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/TextFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t345.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Location.SearchFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/Location.SearchFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t346.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AdsourceFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AdsourceFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t347.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t348.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("PositionTypesList.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/PositionTypesList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t349.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CheckboxFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t350.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t351.inf", 
		"Mode=HTML", 
		LAST);

	web_url("RecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/RecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t352.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DepartmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/DepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t353.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SemanticSearchFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SemanticSearchFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t354.inf", 
		"Mode=HTML", 
		LAST);

	web_url("IndustryFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/IndustryFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t355.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NotesFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/NotesFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t356.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroupsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/FolderGroupsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t357.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ScheduledItemsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ScheduledItemsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t358.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AttachmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/AttachmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t359.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ComplexRecruiterFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t360.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MoneyRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/MoneyRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t361.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SkillsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Skill/Templates/SkillsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t362.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t363.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t364.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PastStatusFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/PastStatusFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t365.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ShiftsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ShiftsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t366.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CommunicationMethodsFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/CommunicationMethodsFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t367.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ParentCompanyFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/ParentCompanyFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t368.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DivisionMarketFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Company/Templates/DivisionMarketFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t369.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CompanyDepartmentFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Company/Templates/CompanyDepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t370.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t371.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/TimeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_2", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=PrimaryDepartmentSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t373.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_custom_request("set_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t374.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("TagView.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t375.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SavedSearchButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedSearchButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t376.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FolderGroup.MassManageButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Templates/FolderGroup.MassManageButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t377.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tip_3", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=LocationSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t378.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Search/Templates/sidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t379.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_3", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t380.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("LegacyCooltipButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/LegacyCooltipButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t381.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ExportButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ExportButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t382.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AddRequirementSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Requirement/Templates/AddRequirementSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t383.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MailingListButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/MailingListButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t384.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SimpleSidebarButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleSidebarButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t385.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZqo4aQRk7oQcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZJfVC8FxtArQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtVvXr4CQjLZsjW_wkIy2loFNaJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("ScheduledItemButtons.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/ScheduledItemButtons.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t386.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZKNUN27vX8MkjLZFhlU4kIy2UkJL6JCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("SimpleLinkSidebarButton.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Components/Templates/SimpleLinkSidebarButton.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t387.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateTimePicker.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t388.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ListSlider.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/ListSlider.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t389.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZfznSSdwFfasjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("ListRangeFilter.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/Filters/Templates/ListRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t390.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ManageScheduledItem.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/ScheduledItem/Templates/ManageScheduledItem.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t391.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ4i6MPWZrWd8jLZFhlU4kIy2UkJL6JBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("FlagListControl.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/FlagListControl.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t392.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_4", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t393.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("Tip_4", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=CommunicationMethodSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t394.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ-iXOYDUAe-wjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZWr0W7XUFtJcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);

	web_url("SavedShareableItemList.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Search/SavedShareableItemList/Templates/SavedShareableItemList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t395.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_5", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t396.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("sendSurveyDialog.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/sendSurveyDialog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t397.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRgCQ_LD6NPojLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtlJCS-iQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("TagsSelector.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/Tags/Templates/TagsSelector.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t398.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZRNtuVwgB1_sjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLQXlFLMkIy2eXcoFJCMtkWGVTiQjLZFhlU4kIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		LAST);

	web_url("ChoosePeople.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/BL/ScheduledItem/Templates/ChoosePeople.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t399.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t400.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-field.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-field.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t401.inf", 
		"Mode=HTML", 
		LAST);

	web_url("designer-pageBreak.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Forms/Templates/designer-pageBreak.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t402.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ6cQCxopIXnwjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		LAST);

	web_url("MultiSelect.html", 
		"URL=https://staff.belflex.com/Mvc/Content/js/Controls/Templates/MultiSelect.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t403.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://staff.belflex.com/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZuIzT8NwPF9kjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLbpCQJwkIy3gKm2lJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZFhlU4kFA==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t404.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		LAST);

	web_custom_request("set_6", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t405.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);
 
	lr_end_transaction("1_Navigate To Position Search Tab",LR_AUTO);

	lr_start_transaction("1_Search Position");
	web_reg_find("Text=Financial Services", LAST);

	web_custom_request("Search-FetchData", 
		"URL=https://staff.belflex.com/Search/position/Search-FetchData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t407.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":null,\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"Software Developer\",\"SearchIndexes\":[],\"SearchRecord\":true,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,1,3,18],\"DimensionValueID\":null,\"DimensionStatuses\":null}},{\"DataSource\":\"erecruit Internal Database\",\""
		"Parameter\":\"Industry\",\"Value\":{\"IndustryIds\":[]}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"Position\"},{\"ID\":\"Company\"},{\"ID\":\"OpenMatchCount\"},{\"ID\":\"SubmittalMatchCount\"},{\"ID\":\"FullPlacementMatchCount\"},{\"ID\":\"Status\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"Position\",\"Direction\":0}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
	 
		LAST);

	lr_end_transaction("1_Search Position",LR_AUTO);
 

	lr_start_transaction("1_Position_Click_On_Record");

	web_url("manage.aspx", 
		"URL=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t1698.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a6a6d718d%3ae330518b%3a1e771326%3a8e6f0d33%3a7165f74", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		//"Url=/mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583859913205", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		LAST);

	web_custom_request("addrecent", 
		"URL=https://staff.belflex.com/api/bookmark/addrecent", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1699.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"abouttypeid\":4,\"referenceid\":251460,\"name\":\"<li>TECH: Software Developer C#, ASP.net </li> (251460)\",\"userinfo\":\"%7b%22UserID%22%3a%2208b5c73d-8e4d-467c-82be-0c6789f8f6a5%22%2c%22EntityID%22%3a%2200000000-0000-0000-0000-000000000e01%22%2c%22LoggedInAsMode%22%3a1%2c%22TimeZone%22%3a%22Eastern+Standard+Time%22%7d\"}", 
		LAST);

	web_custom_request("GetWidget", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1700.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/status','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidgetWithSession", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1701.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'tags/tags','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		LAST);

	web_custom_request("GetWidget_2", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1702.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/general','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_3", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1703.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/description','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_4", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1704.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/people','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_5", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1705.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/jobdetails','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_6", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1706.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/taxinfo','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_7", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1707.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/accounting','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_8", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1708.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/timesheets','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidget_9", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1709.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'position/rates','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		LAST);

	web_custom_request("ListRateGroups", 
		"URL=https://staff.belflex.com/MVC/Rate/ListRateGroups?ReferenceID=251460&AboutTypeID=4", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1710.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_custom_request("GetObjectTransactions", 
		"URL=https://staff.belflex.com/Mvc/ObjectTransaction/GetObjectTransactions?abouttypeid=4&refid=251460", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1711.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_custom_request("GetWidgetWithSession_2", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1712.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'notelist','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20Mode%3A%20%27Sidebar%27%2C%20ShowTitle%3A%20false%2C%20ShowReferences%3A%20false%2C%20LastNoteProvider%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51b"
		"GwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlIjpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDc"
		"tMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmciOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4N"
		"zc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwMTciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1"
		"wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnRhZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ"
		"2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlLCJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCB"
		"vZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZ"
		"WQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50cyI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFw"
		"iPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlb"
		"G9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDw"
		"vUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlc"
		"XVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx"
		"0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlb"
		"G9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlnaGx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGk"
		"mZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQ"
		"VxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuVE1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFx"
		"uUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1pDXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU"
		"0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZVdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1p"
		"TUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUxaU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZ"
		"W1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pbkJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWU"
		"iOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydmlzb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6O"
		"Dc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROYW1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1"
		"hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsI"
		"lRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0YXR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9"
		"uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGwsIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlY"
		"XRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hbnNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGV"
		"wYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWdhbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsb"
		"CwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lIjoienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamV"
		"jdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsI"
		"lB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiOiI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk"
		"2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJhY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiI"
		"EVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgKE1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCI"
		"vPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiM"
		"TE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZXRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL09"
		"0aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1Z"
		"T48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTaGlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXV"
		"lTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWNjb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9za"
		"XRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pdE5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJ"
		"jZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGwsIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%7D\"}'}", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583860241502", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_10", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1713.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'contactmethods','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Name%27%3A%20%27%27%2C%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJBUiIsIlN0YXRlTmFtZSI6IkFya2Fuc2FzIiwiQ291bnRyeU5hbWUiOiJVbml0ZWQgU3RhdGVzIG9mIEFtZXJpY2EiLCJSZWdpb25OYW1lIjoiIiwiQ29tbXVuaWNhdGlvblR5cGVJZCI6NDAwLCJOYW1lIjoiTWFzdGVyIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjYyNTQyNDgsIkFkZHJlc3NMaW5lMSI6IjgwNCBFZGd3b29kIERyaXZlIiwiQWRkcmVzc0xpbmUyIjoiIiwiQ2l0eSI6Ik1hdW1lbGxlIiwiU3RhdGVJRCI6NSwiQ291bnRyeUlEIjoyMjAsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiUmVnaW9uSUQiOm51bGx9%2"
		"7%2C%20%27AddressID%27%3A%206254248%2C%20%27NrOfAddresses%27%3A%201%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/requirements.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/20.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/form.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/attachment.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_11", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1714.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'relatedlinks','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Position%27%3A%20%27eyJQb3NpdGlvbklEIjoyNTE0NjAsIlBvc2l0aW9uVGl0bGUiOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bIiwiVGltZXN0YW1wIjoiQUFBQUFDYzc1Kzg9IiwiT3duZXJVc2VySUQiOiI1MjgxODNlYy1kNzc0LTRmMDctOTE2OC1hNWRmZWY4MTNjN2IiLCJDbGllbnRSZWZOdW1iZXIiOm51bGwsIlllYXJzRXhwZXJpZW5jZSI6bnVsbCwiQWRTb3VyY2UiOiJPVEhFUiIsIkFkc291cmNlQWRkaXRpb25hbEluZm8iOm51bGwsIkNsZWFyYW5jZUxldmVsSUQiOm51bGwsIlllYXJseU1heCI6ODAwMDAuMDAwMCwiWWVhcmx5TWluIjo2MDAwMC4wMDAwLCJUcmF2ZWxQZXJjZW50YWdlI"
		"jpudWxsLCJIb3VybHlNaW4iOm51bGwsIkhvdXJseU1heCI6bnVsbCwiQ3VycmVuY3lJRCI6MSwiT3ZlcnRpbWVNdWx0aXBsaWVyIjpudWxsLCJEb3VibGV0aW1lTXVsdGlwbGllciI6bnVsbCwiRGVmYXVsdEJpbGxSYXRlTWFya3VwUGVyY2VudGFnZSI6MS41MDAwMDAsIkRlZmF1bHRWZW5kb3JSYXRlTWFya3VwUGVyY2VudGFnZSI6bnVsbCwiTnJPZlBvc2l0aW9ucyI6MSwiTWF4TnJPZlN1Ym1pdHRhbHMiOjAsIk5yT2ZSZW1haW5pbmdQb3NpdGlvbnMiOjEsIkNvbXBlbnNhdGlvbk5vdGUiOm51bGwsIlByb2plY3RlZFN0YXJ0RGF0ZSI6IjIwMDctMTEtMDZUMDA6MDA6MDAiLCJPcmRlckRhdGUiOiIyMDA3LTExLTA2VDE3OjE4OjAwIiwiUG9zaXRpb25SYXRpbmc"
		"iOm51bGwsIkJpbGxSYXRlTWluIjpudWxsLCJCaWxsUmF0ZU1heCI6bnVsbCwiTWluSG91cnNQZXJXZWVrIjo0MCwiTWF4SG91cnNQZXJXZWVrIjo0MCwiV29ya0hvdXJzIjpudWxsLCJDb250YWN0SUQiOjM5MTM4MywiQ29udGFjdEZpcnN0TmFtZSI6Inp6Sm9obiBQYXVsIiwiQ29udGFjdExhc3ROYW1lIjoiTWFpbnMiLCJBZ3JlZW1lbnRJRCI6bnVsbCwiQ29udGFjdE93bmVyVXNlcklEIjoiNTI4MTgzZWMtZDc3NC00ZjA3LTkxNjgtYTVkZmVmODEzYzdiIiwiQWdyZWVtZW50T3duZXJVc2VySUQiOm51bGwsIldvcmtpbmdQb3NpdGlvbklEIjo4Nzc1MDUsIlN1cGVydmlzb3JDb250YWN0SUQiOjM5MTM4MywiU3VwZXJ2aXNvclBob25lIjoiKDUwMSkgNzM0LTAwM"
		"TciLCJXb3JraW5nQ3JlZGl0UGN0IjowLjAsIkNvbXBhbnlJRCI6MTQxODc0LCJDb21wYW55TmFtZSI6IlNvZnR3eXJlIC0gU29mdHd5cmUiLCJDb21wYW55T3duZXJFbnRpdHlJRCI6IjAwMDAwMDAwLTAwMDAtMDAwMC0wMDAwLTAwMDAwMDAwMGUwMSIsIkNvbXBhbnlSZXF1aXJlc0FncmVlbWVudCI6dHJ1ZSwiSW52b2ljZUJhdGNoSUQiOjc3LCJJbnZvaWNlQmF0Y2hOYW1lIjoiNDkwLUxpdHRsZSBSb2NrIEFSIiwiVGltZXNoZWV0QmF0Y2hJRCI6NzgsIlRpbWVzaGVldEJhdGNoTmFtZSI6IjQ5MC1MaXR0bGUgUm9jayBBUiIsIkludm9pY2VUZW1wbGF0ZUlEIjoxLCJJbnZvaWNlVGVtcGxhdGVOYW1lIjoiQmVsZmxleFN0YW5kYXJkIiwiTGF0ZUZlZVBlcmNlbnR"
		"hZ2UiOm51bGwsIkNsaWVudFByb2plY3RJRCI6bnVsbCwiQXV0b1B1Ymxpc2hSdWxlSUQiOm51bGwsIkF1dG9QdWJsaXNoUnVsZU5hbWUiOm51bGwsIkRlZmF1bHRCaWxsVG8iOjM4MTU2NiwiQmlsbGluZ0NvbnRhY3RGaXJzdE5hbWUiOiJBY2NvdW50cyIsIkJpbGxpbmdDb250YWN0TGFzdE5hbWUiOiJQYXlhYmxlIiwiV29ya2Vyc0NvbXBJRCI6MTQ3NiwiSXNDb250cmFjdCI6dHJ1ZSwiSXNIb3VybHkiOmZhbHNlLCJUeXBlSWQiOjMsIk1pbk1pbGVzRm9yVHJhdmVsIjpudWxsLCJQb3NpdGlvbkR1cmF0aW9uIjpudWxsLCJTdGF0dXNJRCI6MCwiQ2l0aXplbnNoaXAiOm51bGwsIkludGVybmFsU291cmNlSUQiOm51bGwsIklzVmVuZG9yUG9zaXRpb24iOmZhbHNlL"
		"CJDbG9zZVJlYXNvbklEIjoxMywiQ2xvc2VSZWFzb25OYW1lIjoiRHVwbGljYXRlIFBvc2l0aW9uIiwiREVTQ1JJUFRJT04iOiI8bGk%252bVEVDSDogU29mdHdhcmUgRGV2ZWxvcGVyIEMjLCBBU1AubmV0IDwvbGk%252bPGJyPjxsaT5FRFU6IFJlbGF0ZWQgZGVncmVlIGhpZ2hseSBkZXNpcmVkLCBidXQgbm90IHJlcXVpcmVkIDwvbGk%252bPGJyPjxsaT5FWFA6IDUgb3IgbW9yZSB5ZWFycyAoYXQgbGVhc3QgMiB5ZWFycyByZWNlbnQpIG9mIGhhbmRzLW9uIGV4cGVyaWVuY2UgYXMgYSBTb2Z0d2FyZSBEZXZlbG9wZXIgaW4gYXQgbGVhc3QgNCBvZiB0aGUgZm9sbG93aW5nIHRlY2huaWNhbCBhcmVhczogQUpBWCwgWE1ML1hTTCwgU1FMIFNlcnZlciwgQVNQLm5"
		"ldCwgLk5FVCBGcmFtZXdvcmssIFdDRiwgV1BGLCBXU1MuIEV4cGVydCBsZXZlbCBwcm9maWNpZW5jeSBpbiBDIyByZXF1aXJlZCA8L2xpPjxicj48bGk%252bU0tJTExTOiBEZXNpcmVkLS1mdW5jdGlvbmFsIHByb2ZpY2llbmN5IGluIG9uZSBvciBtb3JlIG9mIHRoZSBmb2xsb3dpbmcgYXJlYXM6IEhUVFAsIFNPQVAsIFJTUywgV1NETCwgVC1TUUwsIE1TU1FMIFNlcnZlciwgT09BL09PRCwgTU9TUy9TaGFyZVBvaW50LCBPZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbCA8L2xpPjxicj48bGk%252bQVRUOiBQYXNzaW9uYXRlLCB3ZWxsLXJvdW5kZWQsIHN0cm9uZyBwcm9ibGVtIHNvbHZpbmcgc2tpbGxzIDwvbGk%252bPEJSPkJSPiIsIkdlbmVyYWxDb21tZW50c"
		"yI6IjxCPkFzc2lnbm1lbnQgUHJvY2VkdXJlIDo8L0I%252bIEVtYWlsIHNlZW1zIHRvIHdvcmsgYmV0dGVyIHRoYW4gcGhvbmUuPEJSLz48QlIvPjxCPkp1ZGdpbmcgUXVhbGl0eSA6PC9CPiBOZWVkIHRvIHNlZSBzdHJvbmcgZXhwZXJpZW5jZS4uLndhbnQgdG8gaGlyZSBwcm9mZXNzaW9uYWxzLjxCUi8%252bPEJSLz48Qj5QcmUtZW1wbG95bWVudCBTY3JlZW5zIFJlcXVpcmVkIDo8L0I%252bICo8QlIvPjxCUi8%252bIiwiRW1haWxDQyI6bnVsbCwiU2VtYW50aWNYbWwiOiI8P3htbCB2ZXJzaW9uPVwiMS4wXCIgZW5jb2Rpbmc9XCJVVEYtOFwiPz5cbjxTb3ZyZW5EYXRhPlxuXHQ8Q3VycmVudEpvYklzTWdtdD5mYWxzZTwvQ3VycmVudEpvYklzTWdtdD5cblx"
		"0PEhpZ2hlc3RNYW5hZ2VtZW50U2NvcmU%252bMDwvSGlnaGVzdE1hbmFnZW1lbnRTY29yZT5cblx0PEV4ZWN1dGl2ZVR5cGU%252bTk9ORTwvRXhlY3V0aXZlVHlwZT5cblx0PEN1cnJlbnRKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0N1cnJlbnRKb2JUaXRsZT5cblx0PEpvYlRpdGxlcz5cblx0XHQ8TWFpbkpvYlRpdGxlPlNvZnR3YXJlIERldmVsb3BlciBDIywgQVNQLm5ldDwvTWFpbkpvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXI8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5EZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHRcdDxKb2JUaXRsZT5FeHBlcnQ8L0pvYlRpdGxlPlxuXHRcd"
		"DxKb2JUaXRsZT5Tb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQ8L0pvYlRpdGxlPlxuXHQ8L0pvYlRpdGxlcz5cblx0PEVtcGxveWVyTmFtZXM%252bXG5cdFx0PEVtcGxveWVyTmFtZT5PZmZpY2UgRXh0ZW5zaWJpbGl0eSBNb2RlbDwvRW1wbG95ZXJOYW1lPlxuXHQ8L0VtcGxveWVyTmFtZXM%252bXG5cdDxSZXF1aXJlZFNraWxscz5cblx0XHQ8UmVxdWlyZWRTa2lsbD4uTkVUPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkFKQVg8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bQVNQLk5FVDwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5DPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJ"
		"lZFNraWxsPkMjPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRhdGFiYXNlPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPkRldmVsb3BtZW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlJTUzwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5TaGFyZVBvaW50PC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNPQVA8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU29mdHdhcmU8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bU1FMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlNRTCBTZXJ2ZXI8L"
		"1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bVC1TUUw8L1JlcXVpcmVkU2tpbGw%252bXG5cdFx0PFJlcXVpcmVkU2tpbGw%252bV0NGPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPldQRjwvUmVxdWlyZWRTa2lsbD5cblx0XHQ8UmVxdWlyZWRTa2lsbD5XU0RMPC9SZXF1aXJlZFNraWxsPlxuXHRcdDxSZXF1aXJlZFNraWxsPlhNTDwvUmVxdWlyZWRTa2lsbD5cblx0PC9SZXF1aXJlZFNraWxscz5cblx0PFRheG9ub21pZXM%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJiZXN0IGZpdFwiPlxuXHRcdFx0PFBhcmVudFRheG9ub215SWQ%252bMTwvUGFyZW50VGF4b25vbXlJZD5cblx0XHRcdDxQYXJlbnRUYXhvbm9teU5"
		"hbWU%252bSW5mb3JtYXRpb24gVGVjaG5vbG9neTwvUGFyZW50VGF4b25vbXlOYW1lPlxuXHRcdDwvVGF4b25vbXk%252bXG5cdFx0PFRheG9ub215IHR5cGU9XCJzZWNvbmQgYmVzdCBmaXRcIj5cblx0XHQ8L1RheG9ub215PlxuXHQ8L1RheG9ub21pZXM%252bXG5cdDxNaW5pbXVtWWVhcnM%252bMjwvTWluaW11bVllYXJzPlxuXHQ8TWF4aW11bVllYXJzPjU8L01heGltdW1ZZWFycz5cblx0PFR5cGVPZlNvdXJjZT5zdEpvYk9yZGVyPC9UeXBlT2ZTb3VyY2U%252bXG5cdDxTb3VyY2VUZXh0PiZsdDtsaSZndDtURUNIOiBTb2Z0d2FyZSBEZXZlbG9wZXIgQyMsIEFTUC5uZXQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VEVTogUmVsYXRlZCBkZWdyZWUgaGlna"
		"Gx5IGRlc2lyZWQsIGJ1dCBub3QgcmVxdWlyZWQgJmx0Oy9saSZndDsgICAgJmx0O2xpJmd0O0VYUDogNSBvciBtb3JlIHllYXJzIChhdCBsZWFzdCAyIHllYXJzIHJlY2VudCkgb2YgaGFuZHMtb24gZXhwZXJpZW5jZSBhcyBhIFNvZnR3YXJlIERldmVsb3BlciBpbiBhdCBsZWFzdCA0IG9mIHRoZSBmb2xsb3dpbmcgdGVjaG5pY2FsIGFyZWFzOiBBSkFYLCBYTUwvWFNMLCBTUUwgU2VydmVyLCBBU1AubmV0LCAuTkVUIEZyYW1ld29yaywgV0NGLCBXUEYsIFdTUy4gRXhwZXJ0IGxldmVsIHByb2ZpY2llbmN5IGluIEMjIHJlcXVpcmVkICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtTS0lMTFM6IERlc2lyZWQtLWZ1bmN0aW9uYWwgcHJvZmljaWVuY3kgaW4gb25lIG9"
		"yIG1vcmUgb2YgdGhlIGZvbGxvd2luZyBhcmVhczogSFRUUCwgU09BUCwgUlNTLCBXU0RMLCBULVNRTCwgTVNTUUwgU2VydmVyLCBPT0EvT09ELCBNT1NTL1NoYXJlUG9pbnQsIE9mZmljZSBFeHRlbnNpYmlsaXR5IE1vZGVsICZsdDsvbGkmZ3Q7ICAgICZsdDtsaSZndDtBVFQ6IFBhc3Npb25hdGUsIHdlbGwtcm91bmRlZCwgc3Ryb25nIHByb2JsZW0gc29sdmluZyBza2lsbHMgJmx0Oy9saSZndDsgICAgQlImZ3Q7PC9Tb3VyY2VUZXh0PlxuXHQ8U2VhcmNoSGludHM%252bcmdOb0RhdGFcblRFTVpFXG5URU1aRlxuVEVNWkdcblRFTVpIXG5UTU1aQVxuVE1NWkJcblRNTVpDXG5UTU1aRFxuVE1NWkVcblRNTVpGXG5UTU1aR1xuVE1NWkhcblRNTVpJXG5UTU1aSlxuV"
		"E1NWktcblRNTVpMXG5UTU1aTVxuVE1NWk5cblRNTVpPXG5UTU1aUFxuVE1NWlFcblRNTVpVXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaU29mdHdhcmVcblBUWlNvZnR3YXJlWkNcblBUWlNvZnR3YXJlWkRldmVsb3BlclxuUFRaU29mdHdhcmVaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclxuUFRaRGV2ZWxvcGVyWkNcblBUWkRldmVsb3BlclpDI1xuUFRaRGV2ZWxvcGVyWkMjWkNcblBUWkMjWkFTUC5uZXRcblBUWkMjWkFTUC5uZXRaQ1xuUFRaQVNQLm5ldFxuUFRaQVNQLm5ldFpDXG5QVFpTb2Z0d2FyZVpEZXZlbG9wZXJaQyNcblBUWlNvZnR3YXJlWkRldmVsb3BlclpDI1p"
		"DXG5QVFpEZXZlbG9wZXJaQyNaQVNQLm5ldFxuUFRaRGV2ZWxvcGVyWkMjWkFTUC5uZXRaQ1xuUFRaRXhwZXJ0XG5aMEVNT2ZmaWNlWkV4dGVuc2liaWxpdHlaTW9kZWxcbkJGVFdaMVxuRVRaTk9ORVxuTk9aTUdNVFxuU0VaTk5cblNLWi5ORVRcblNLWi5ORVRaQ1xuU0taLk5FVFdRXG5TS1ouTkVUV1FRXG5TS1pBSkFYXG5TS1pBSkFYWkNcblNLWkFKQVhXUVxuU0taQUpBWFdRUVxuU0taQVNQLk5FVFxuU0taQVNQLk5FVFpDXG5TS1pBU1AuTkVUV1FcblNLWkFTUC5ORVRXUVFcblNLWkNcblNLWkNaQ1xuU0taQ1dRXG5TS1pDV1FRXG5TS1pDI1xuU0taQyNaQ1xuU0taQyNXUVxuU0taQyNXUVFcblNLWkRhdGFiYXNlXG5TS1pEYXRhYmFzZVpDXG5TS1pEYXRhYmFzZ"
		"VdRXG5TS1pEYXRhYmFzZVdRUVxuU0taRGV2ZWxvcG1lbnRcblNLWkRldmVsb3BtZW50WkNcblNLWkRldmVsb3BtZW50V1FcblNLWkRldmVsb3BtZW50V1FRXG5TS1pSU1NcblNLWlJTU1pDXG5TS1pSU1NXUVxuU0taUlNTV1FRXG5TS1pTaGFyZVBvaW50XG5TS1pTaGFyZVBvaW50WkNcblNLWlNoYXJlUG9pbnRXUVxuU0taU2hhcmVQb2ludFdRUVxuU0taU09BUFxuU0taU09BUFpDXG5TS1pTT0FQV1FcblNLWlNPQVBXUVFcblNLWlNvZnR3YXJlXG5TS1pTb2Z0d2FyZVpDXG5TS1pTb2Z0d2FyZVdRXG5TS1pTb2Z0d2FyZVdRUVxuU0taU1FMXG5TS1pTUUxaQ1xuU0taU1FMV1FcblNLWlNRTFdRUVxuU0taU1FMWlNlcnZlclxuU0taU1FMWlNlcnZlclpDXG5TS1pTUUx"
		"aU2VydmVyV1FcblNLWlNRTFpTZXJ2ZXJXUVFcblNLWlQtU1FMXG5TS1pULVNRTFpDXG5TS1pULVNRTFdRXG5TS1pULVNRTFdRUVxuU0taV0NGXG5TS1pXQ0ZaQ1xuU0taV0NGV1FcblNLWldDRldRUVxuU0taV1BGXG5TS1pXUEZaQ1xuU0taV1BGV1FcblNLWldQRldRUVxuU0taV1NETFxuU0taV1NETFpDXG5TS1pXU0RMV1FcblNLWldTRExXUVFcblNLWlhNTFxuU0taWE1MWkNcblNLWlhNTFdRXG5TS1pYTUxXUVE8L1NlYXJjaEhpbnRzPlxuXHQ8UmV2aXNpb25EYXRlPjIwMTgtMDctMjE8L1JldmlzaW9uRGF0ZT5cbjwvU292cmVuRGF0YT4iLCJTZW1hbnRpY1Byb2ZpbGUiOm51bGwsIk9wcG9ydHVuaXR5SUQiOm51bGwsIlZNU0J1cmRlbklEIjpudWxsLCJBZG1pb"
		"kJ1cmRlbklEIjoxNiwiRXhwZW5zZVR5cGVJRCI6MSwiT3ZlcnRpbWVUeXBlSUQiOjUsIlN0YXJ0VGltZSI6bnVsbCwiRW5kVGltZSI6bnVsbCwiUmVwb3J0c1RvQ29udGFjdElEIjpudWxsLCJSZXBvcnRzVG9Db250YWN0Rmlyc3ROYW1lIjpudWxsLCJSZXBvcnRzVG9Db250YWN0TGFzdE5hbWUiOm51bGwsIkZhY2lsaXR5Q29tcGFueUlEIjpudWxsLCJPcHBvcnR1bml0eU5hbWUiOm51bGwsIkVzdGltYXRlZEVuZERhdGUiOiIyMDExLTExLTA2VDAwOjAwOjAwIiwiQWxsb3dFbXB0eVRpbWVzaGVldHMiOnRydWUsIkZhY2lsaXR5Q29tcGFueU5hbWUiOm51bGwsIlBvc2l0aW9uVHlwZU5hbWUiOiJUZW1wIiwiU3VwZXJ2aXNvclJlcElEIjo4Nzc1MDUsIlN1cGVydml"
		"zb3JGaXJzdE5hbWUiOiJ6ekpvaG4gUGF1bCIsIlN1cGVydmlzb3JMYXN0TmFtZSI6Ik1haW5zIiwiQ29udGFjdE93bmVyUmVwSUQiOjg3NzUwNSwiQ29udGFjdE93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJDb250YWN0T3duZXJMYXN0TmFtZSI6IkNvbGxpbnMiLCJPd25lclJlcElEIjo4Nzc1MDUsIk93bmVyRmlyc3ROYW1lIjoiQWRyaWVubmUiLCJPd25lckxhc3ROYW1lIjoiQ29sbGlucyIsIkludGVybmFsU291cmNlRmlyc3ROYW1lIjpudWxsLCJJbnRlcm5hbFNvdXJjZUxhc3ROYW1lIjpudWxsLCJXb3JraW5nUG9zaXRpb25SZXBJRCI6ODc3NTA1LCJXb3JraW5nUG9zaXRpb25GaXJzdE5hbWUiOiJBZHJpZW5uZSIsIldvcmtpbmdQb3NpdGlvbkxhc3ROY"
		"W1lIjoiQ29sbGlucyIsIkFncmVlbWVudE93bmVyRmlyc3ROYW1lIjpudWxsLCJBZ3JlZW1lbnRPd25lckxhc3ROYW1lIjpudWxsLCJPdmVydGltZVR5cGVOYW1lIjoiQXV0by1DYWxjdWxhdGUiLCJBbGxvd092ZXJ0aW1lIjp0cnVlLCJBZ3JlZW1lbnROYW1lIjpudWxsLCJBZ3JlZW1lbnRTaWduYXR1cmVSZXF1aXJlZEJ5RGF0ZSI6bnVsbCwiQWdyZWVtZW50RXhwaXJhdGlvbkRhdGUiOm51bGwsIkFncmVlbWVudEV4cGlyZXMiOm51bGwsIkFncmVlbWVudFNpZ25lZERhdGUiOm51bGwsIkNsaWVudFByb2plY3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJJRCI6bnVsbCwiUmVzb3VyY2VNYW5hZ2VyRmlyc3ROYW1lIjpudWxsLCJSZXNvdXJjZU1hbmFnZXJMYXN"
		"0TmFtZSI6bnVsbCwiUmVzb3VyY2VBZG1pbmlzdHJhdG9ySUQiOm51bGwsIlJlc291cmNlQWRtaW5GaXJzdE5hbWUiOm51bGwsIlJlc291cmNlQWRtaW5MYXN0TmFtZSI6bnVsbCwiS2VlcFBvc2l0aW9uQXZhaWxhYmxlSW5IUm5ldCI6bnVsbCwiV29ya2Vyc0NvbXBOYW1lIjoiQVItQ2xlcmljYWwgb2ZmaWNlIGVtcGxveWVlcyBOT0MtQVI4ODEwIiwiQ2xlYXJhbmNlTGV2ZWxOYW1lIjpudWxsLCJWTVNCdXJkZW5OYW1lIjpudWxsLCJBZG1pbkJ1cmRlbk5hbWUiOiJOb25lIiwiRXhwZW5zZVR5cGVOYW1lIjoiTm8gRXhwZW5zZXMgQWxsb3dlZCIsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVOYW1lIjoiQ29tcGxleCAwIiwiU3RhdHVzTmFtZSI6IkNsb3NlZCIsIlN0Y"
		"XR1c0ljb25JRCI6OTksIlN0YXR1c0NvbG9yIjpudWxsLCJOb3Rlc1RvQmFja09mZmljZSI6bnVsbCwiU3VibWl0dGFsQmNjIjpudWxsLCJGcm9tU2VlZElEIjpudWxsLCJGcm9tU2VlZE5hbWUiOm51bGwsIkFkZHJlc3NJRCI6NjI1NDI0OCwiQ29tbXVuaWNhdGlvblR5cGVJRCI6NDAwLCJBZGRyZXNzTmFtZSI6Ik1hc3RlciBBZGRyZXNzIiwiQWRkcmVzc0xpbmUxIjoiODA0IEVkZ3dvb2QgRHJpdmUiLCJBZGRyZXNzTGluZTIiOm51bGwsIkNpdHkiOiJNYXVtZWxsZSIsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiU3RhdGVJRCI6NSwiUmVnaW9uSUQiOm51bGwsIkNvdW50cnlJRCI6MjIwLCJTdGF0ZU5hbWUiOiJBcmthbnNhcyIsIlJlZ2lvbk5hbWUiOm51bGw"
		"sIkNvdW50cnlOYW1lIjoiVW5pdGVkIFN0YXRlcyBvZiBBbWVyaWNhIiwiTGFzdE5vdGVJRCI6MTAyNzE4MjIsIkxhc3ROb3RlQm9keSI6IndvdWxkIG5vdCByZXR1cm4gcGhvbmUgY2FsbHM8QlIvPjxCUi8%252bQ3JlYXRlZCBieSBTYXJhaCBTenltYW5za2kgb24gMTIvMTQvMjAwNyAxNTowNjowMzxCUi8%252bTGFzdCB1cGRhdGVkIGJ5IFNhcmFoIFN6eW1hbnNraSBvbiAxMi8xNC8yMDA3IDE1OjA2OjAzPEJSLz4iLCJMYXN0Tm90ZUNyZWF0ZWRCeSI6ImRmNzdmY2YwLWI0MjYtNDEyOS05NGRjLWYzZmI1MmI2NGY2YyIsIkxhc3ROb3RlQ3JlYXRlZE9uIjoiMjAwNy0xMi0xNFQxNTowNTowMCIsIkxhc3ROb3RlQ3JlYXRlZEJ5TmFtZSI6IlNhcmFoIFN6eW1hb"
		"nNraSIsIkxhc3ROb3RlSURCeVVzZXIiOm51bGwsIkxhc3ROb3RlQm9keUJ5VXNlciI6bnVsbCwiTGFzdE5vdGVDcmVhdGVkT25CeVVzZXIiOm51bGwsIlRpbWVzaGVldEVudHJ5VGVtcGxhdGVJRCI6NiwiQ29tcGFueURlcGFydG1lbnRJRCI6bnVsbCwiUGF5bWVudFRlcm1zSUQiOjEsIlBheW1lbnRUZXJtc05hbWUiOiJEdWUgb24gUmVjaWVwdCIsIkRlcGFydG1lbnRJRCI6NTMxLCJEb05vdFNob3J0bGlzdFN1Ym1pdHRhbHMiOmZhbHNlLCJEZXBhcnRtZW50TmFtZSI6IkxpdHRsZSBSb2NrIEFSIiwiRGVwYXJ0bWVudEZlZGVyYWxJRCI6MSwiRGVwYXJ0bWVudEZlZGVyYWxJRE5hbWUiOiJCZWxGbGV4IiwiQ29tcGFueURlcGFydG1lbnROYW1lIjpudWxsLCJMZWd"
		"hbENhc2VJRCI6bnVsbCwiTGVnYWxDYXNlTmFtZSI6bnVsbCwiSXNGYWNpbGl0eURlcGFydG1lbnRSZXF1aXJlZCI6ZmFsc2UsIkNyZWF0aW9uUmVhc29uSUQiOm51bGwsIkNyZWF0aW9uUmVhc29uTmFtZSI6bnVsbCwiQ3JlYXRpb25SZWFzb25SZXF1aXJlc05vdGUiOm51bGwsIkNyZWF0aW9uUmVhc29uTm90ZSI6bnVsbCwiQ2xvc2VSZWFzb25Ob3RlIjoiZmlsbGVkIGl0IHRoZW1zZWx2ZXMiLCJDb3VudHlJRCI6bnVsbCwiQ291bnR5TmFtZSI6bnVsbCwiTXVuaWNpcGFsaXR5TmFtZSI6bnVsbCwiSW52b2ljZURpc2NvdW50UGVyY2VudCI6bnVsbCwiVGltZXNoZWV0QXBwcm92ZUNvbnRhY3RJRDEiOjM5MTM4MywiVGltZXNoZWV0QXBwcm92ZXIxRmlyc3ROYW1lI"
		"joienpKb2huIFBhdWwiLCJUaW1lc2hlZXRBcHByb3ZlcjFMYXN0TmFtZSI6Ik1haW5zIiwiVGltZXNoZWV0Tm90aWZpY2F0aW9uT3B0aW9ucyI6NywiVGltZXNoZWV0Q3JlYXRpb25PcHRpb24iOjEwLCJUaW1lc2hlZXRSYW5nZUNhbGVuZGFySUQiOjMsIlRpbWVzaGVldFJhbmdlQ2FsZW5kYXJOYW1lIjoiU3VuZGF5IFRpbWVzaGVldHMgV2Vla2x5IiwiU2FsZXNUYXhJRCI6bnVsbCwiU2FsZXNUYXhOYW1lIjpudWxsLCJDb21wYW55U2FsZXNUYXhFeGVtcHRTdGF0ZXMiOm51bGwsIklzTWlsZXN0b25lQmlsbGluZyI6bnVsbCwiQ2xpZW50UHJvamVjdFNhbGVzVGF4TmFtZSI6bnVsbCwiRXN0aW1hdGVkQ29tbWl0dGVkU3BlbmQiOm51bGwsIkFkZHJlc3NDb3VudCI"
		"6MSwiTWF0Y2hDb3VudCI6MCwiT3Blbk1hdGNoQ291bnQiOjAsIkF0dGFjaG1lbnRDb3VudCI6MCwiRm9sZGVyR3JvdXBDb3VudCI6MiwiSW5kdXN0cnlDb3VudCI6MSwiTGlzdENvdW50IjowLCJSZWxhdGlvbnNoaXBDb3VudCI6MCwiTm90ZUNvdW50IjoxMSwiU2tpbGxDb3VudCI6MCwiUmVxdWlyZW1lbnRDb3VudCI6MCwiQ2FuZGlkYXRlQXBwbGljYXRpb25Db3VudCI6MCwiT3BlbkNhbmRpZGF0ZUFwcGxpY2F0aW9uQ291bnQiOjAsIkFkZGl0aW9uYWxPd25lckNvdW50IjowLCJUaW1lc2hlZXRDb3VudCI6MCwiTGVnYWxDYXNlQ291bnQiOjAsIlB1Ymxpc2hlZFZlbmRvcnNDb3VudCI6MCwiVHJhbnNhY3Rpb25Db3VudCI6MCwiQ3VzdG9tRmllbGRWYWx1ZXMiO"
		"iI8RmllbGRzPjxGaWVsZCBJRD1cIjEwODlcIiBUeXBlSUQ9XCI2XCIgTmFtZT1cIkVkdWNhdGlvblwiIFVuaXF1ZU5hbWU9XCJFZHVjYXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJqb2JkZXRhaWxzLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiXCIgQ2FuRWRpdD1cIjFcIj48VmFsdWU%252bPC9WYWx1ZT48TGlzdEl0ZW1zPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI1XCIgRW51bVRleHQ9XCJBc3NvY2lhdGUgKEFBLCBBUy4uLilcIiBSZWNvcmRJRD1cIjk2XCIgRW51bVNvcnRPcmRlcj1cIjVcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjZcIiBFbnVtVGV4dD1cIkJ"
		"hY2hlbG9yIChCQSwgQlMuLi4pXCIgUmVjb3JkSUQ9XCI5N1wiIEVudW1Tb3J0T3JkZXI9XCI2XCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI4XCIgRW51bVRleHQ9XCJEb2N0b3IgKFBoRCwgTExELi4uKVwiIFJlY29yZElEPVwiOTlcIiBFbnVtU29ydE9yZGVyPVwiOFwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiR0VEXCIgUmVjb3JkSUQ9XCI5NFwiIEVudW1Tb3J0T3JkZXI9XCIzXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIyXCIgRW51bVRleHQ9XCJIaWdoIFNjaG9vbCBEaXBsb21hXCIgUmVjb3JkSUQ9XCI5M1wiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI3XCIgRW51bVRleHQ9XCJNYXN0ZXIgK"
		"E1BLCBNUy4uLilcIiBSZWNvcmRJRD1cIjk4XCIgRW51bVNvcnRPcmRlcj1cIjdcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIk5vbmVcIiBSZWNvcmRJRD1cIjkyXCIgRW51bVNvcnRPcmRlcj1cIjFcIi8%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjlcIiBFbnVtVGV4dD1cIk90aGVyXCIgUmVjb3JkSUQ9XCIxMDBcIiBFbnVtU29ydE9yZGVyPVwiOVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMTBcIiBFbnVtVGV4dD1cIlNvbWUgQ29sbGVnZVwiIFJlY29yZElEPVwiNDQ2XCIgRW51bVNvcnRPcmRlcj1cIjEwXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCI0XCIgRW51bVRleHQ9XCJUcmFkZSBTY2hvb2wgRGlwbG9tYVwiIFJlY29"
		"yZElEPVwiOTVcIiBFbnVtU29ydE9yZGVyPVwiNFwiLz48L0xpc3RJdGVtcz48L0ZpZWxkPjxGaWVsZCBJRD1cIjExODRcIiBUeXBlSUQ9XCIzXCIgTmFtZT1cIlJlZmVycmVkIFBvc2l0aW9uXCIgVW5pcXVlTmFtZT1cIlJlZmVycmVkUG9zaXRpb25cIiBJc1JlcXVpcmVkPVwiMFwiIFBsYWNlSG9sZGVySUQ9XCJhY2NvdW50aW5nLmFzY3hcIiBTb3J0T3JkZXI9XCIxXCIgVmlzaWJsZVRvPVwiUmVjcnVpdGVyXCIgRGVmYXVsdFZhbHVlPVwiZmFsc2VcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjwvRmllbGQ%252bPEZpZWxkIElEPVwiMTE3MFwiIFR5cGVJRD1cIjZcIiBOYW1lPVwiVGltZXNoZWV0IFNvdXJjZVwiIFVuaXF1ZU5hbWU9XCJUaW1lc2hlZ"
		"XRTb3VyY2UyXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwidGltZXNoZWV0cy5hc2N4XCIgU29ydE9yZGVyPVwiMVwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIwXCI%252bPFZhbHVlPjwvVmFsdWU%252bPExpc3RJdGVtcz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMVwiIEVudW1UZXh0PVwiRXJlY3J1aXQgUG9ydGFsIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjJcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiM1wiIEVudW1UZXh0PVwiTWFudWFsL090aGVyIEVudHJ5XCIgUmVjb3JkSUQ9XCI1MjRcIiBFbnVtU29ydE9yZGVyPVwiM1wiLz48TGlzdEl0ZW0gRW51bVZ"
		"hbHVlPVwiMlwiIEVudW1UZXh0PVwiVGltZWNsb2NrIEltcG9ydFwiIFJlY29yZElEPVwiNTIzXCIgRW51bVNvcnRPcmRlcj1cIjJcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMDg4XCIgVHlwZUlEPVwiNlwiIE5hbWU9XCJXb3JrIFNoaWZ0XCIgVW5pcXVlTmFtZT1cIldvcmtTaGlmdFwiIElzUmVxdWlyZWQ9XCIwXCIgUGxhY2VIb2xkZXJJRD1cImpvYmRldGFpbHMuYXNjeFwiIFNvcnRPcmRlcj1cIjFcIiBWaXNpYmxlVG89XCJSZWNydWl0ZXJcIiBEZWZhdWx0VmFsdWU9XCJcIiBDYW5FZGl0PVwiMVwiPjxWYWx1ZT48L1ZhbHVlPjxMaXN0SXRlbXM%252bPExpc3RJdGVtIEVudW1WYWx1ZT1cIjFcIiBFbnVtVGV4dD1cIjFzdCBTa"
		"GlmdFwiIFJlY29yZElEPVwiODlcIiBFbnVtU29ydE9yZGVyPVwiMVwiLz48TGlzdEl0ZW0gRW51bVZhbHVlPVwiMlwiIEVudW1UZXh0PVwiMm5kIFNoaWZ0XCIgUmVjb3JkSUQ9XCI5MFwiIEVudW1Tb3J0T3JkZXI9XCIyXCIvPjxMaXN0SXRlbSBFbnVtVmFsdWU9XCIzXCIgRW51bVRleHQ9XCIzcmQgU2hpZnRcIiBSZWNvcmRJRD1cIjkxXCIgRW51bVNvcnRPcmRlcj1cIjNcIi8%252bPC9MaXN0SXRlbXM%252bPC9GaWVsZD48RmllbGQgSUQ9XCIxMTg1XCIgVHlwZUlEPVwiMVwiIE5hbWU9XCJQb3NpdGlvbiBSZWZlcnJlciBOYW1lXCIgVW5pcXVlTmFtZT1cIlBvc2l0aW9uUmVmZXJyZXJOYW1lXCIgSXNSZXF1aXJlZD1cIjBcIiBQbGFjZUhvbGRlcklEPVwiYWN"
		"jb3VudGluZy5hc2N4XCIgU29ydE9yZGVyPVwiMlwiIFZpc2libGVUbz1cIlJlY3J1aXRlclwiIERlZmF1bHRWYWx1ZT1cIlwiIENhbkVkaXQ9XCIxXCI%252bPFZhbHVlPjwvVmFsdWU%252bPC9GaWVsZD48L0ZpZWxkcz4iLCJEaXN0cmlidXRpb25MaXN0SURzIjpudWxsLCJEaXN0cmlidXRpb25MaXN0TmFtZXMiOm51bGwsIkRlcGFydG1lbnRJRHMiOm51bGwsIkRlcGFydG1lbnROYW1lcyI6bnVsbCwiRGVmYXVsdERlcGFydG1lbnRJRCI6NDQsIkRlZmF1bHREZXBhcnRtZW50TmFtZSI6IkhRIiwiQWRkaXRpb25hbE93bmVycyI6bnVsbCwiUG9zaXRpb25EdXJhdGlvbkFtb3VudCI6bnVsbCwiUG9zaXRpb25EdXJhdGlvblVuaXQiOm51bGwsIkR1cmF0aW9uVW5pd"
		"E5hbWUiOm51bGwsIkVzdGltYXRlZFNwZW5kIjpudWxsLCJBcHByb3ZlZEVzdGltYXRlZFRvdGFsU3BlbmQiOm51bGwsIlRvdGFsRXN0aW1hdGVkU3BlbmQiOm51bGwsIlN1Ym1pdHRhbExpbWl0UGVyVmVuZG9yIjpudWxsLCJWZW5kb3JTdWJtaXR0YWxMaW1pdCI6bnVsbCwiVmVuZG9yUmVtYWluaW5nU3VibWl0dGFscyI6bnVsbCwiVGFyZ2V0QmlsbFJhdGUiOm51bGwsIk9yaWdpbmFsQmlsbFJhdGUiOm51bGwsIlJlcXVlc3RGdW5kaW5nVHlwZSI6bnVsbCwiUmVxdWVzdEZ1bmRpbmdEZXRhaWxzIjpudWxsLCJSZXF1ZXN0QXBwcm92YWxSZXNvdXJjZXMiOjEsIkludm9pY2VNb2RlSUQiOjEsIkludm9pY2VNb2RlTmFtZSI6IlByaW50IiwiTWF0Y2hJRHMiOm51bGw"
		"sIkd1YXJhbnRlZWRIb3VycyI6NDAsIkN1cnJlbmN5SVNPQ29kZSI6IlVTRCJ9%27%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/abouttypes/8.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/match.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/1.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/print.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/email.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_custom_request("GetWidget_12", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidget", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1715.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'address/address','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\""
		"%7B%20%27Address%27%3A%20%27eyJDb21tdW5pY2F0aW9uVHlwZSI6NDAwLCJTdGF0ZUNvZGUiOiJBUiIsIlN0YXRlTmFtZSI6IkFya2Fuc2FzIiwiQ291bnRyeU5hbWUiOiJVbml0ZWQgU3RhdGVzIG9mIEFtZXJpY2EiLCJSZWdpb25OYW1lIjoiIiwiQ29tbXVuaWNhdGlvblR5cGVJZCI6NDAwLCJOYW1lIjoiTWFzdGVyIEFkZHJlc3MiLCJBZGRyZXNzSUQiOjYyNTQyNDgsIkFkZHJlc3NMaW5lMSI6IjgwNCBFZGd3b29kIERyaXZlIiwiQWRkcmVzc0xpbmUyIjoiIiwiQ2l0eSI6Ik1hdW1lbGxlIiwiU3RhdGVJRCI6NSwiQ291bnRyeUlEIjoyMjAsIlBvc3RhbENvZGUiOiI3MjExMy02MjczIiwiUmVnaW9uSUQiOm51bGx9%27%2C%20%27AddressID%27%3A%20"
		"6254248%2C%20%27NrOfAddresses%27%3A%201%20%20%20%7D\"}'}", 
		LAST);

	web_custom_request("GetWidgetWithSession_3", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1716.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'communicationlist','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"%7B%20Mode%3A%20%27Sidebar%27%2C%20%27Email%27%20%3A%20%27%27%2C%20%27FullName%27%20%3A%20%27%27%20%20%7D\"}'}", 
		EXTRARES, 
		"Url=/Mvc/Content/Images/icons/abouttypes/12.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/note.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/folder_closed.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/positionexport.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/positionmatching.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/skill.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/RightBarSettings/RightBarSettings.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/autobind.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/abouttypes/2.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/communicationtypes/2.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/house.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/edit.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/houses.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/14/link.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_custom_request("get", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1717.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionlinks_section\",\"ContainerID\":\"RightBar.SectionsOrder\"}", 
		EXTRARES, 
		"Url=../Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_custom_request("get_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/get", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1718.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"RightBar.notes_sectioncontact_sectionrelated_sectionactions_sectionlinks_section\",\"ContainerID\":\"RightBar.CollapsedSections\"}", 
		EXTRARES, 
		"Url=../Content/Images/icons/profile.png", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Position/CostCenters.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("CostCentersList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Position/Templates/CostCentersList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1719.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CostCenters.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Position/Templates/CostCenters.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1720.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetFieldList.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/CreditDistribution/CreditDistributions.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/TimeAndLaborSetup.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("TimesheetFieldList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetFieldList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1721.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimesheetFieldForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetFieldForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1722.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CreditDistributions.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/CreditDistribution/Templates/CreditDistributions.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1723.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TimeAndLaborSetup.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimeAndLabor/Templates/TimeAndLaborSetup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1724.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Tags/TagsView.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/CostCenters.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Select.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Base/dataSource.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("TagsView.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1725.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TagsGridCell.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagsGridCell.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1726.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CostCenters.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/CostCenters.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1727.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Controls/PagedList.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/External/Knockout/knockout.mapping-latest.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("Pager.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Pager.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1728.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetFieldForm.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimesheetFields/TimesheetValueForm.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("TimesheetValueForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetValueForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1729.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../TimesheetPOValueForm.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/External/rubaxa/knockout-sortable.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/CreditDistribution/Templates/CreditDistributions.css", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/Templates/TimeAndLabor.css", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=TimesheetFields.css", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Recruiter.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("TimesheetPOValueForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/TimesheetFields/Templates/TimesheetPOValueForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1730.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Controls/DateTimePicker.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Currency/CurrencyService.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("RecruiterFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Templates/RecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1731.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateTimePicker.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1732.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/common.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Currency/CurrencyModel", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/formatter.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupTRCList", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/Timesheet/TimeRecordingCodes-All", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupRuleType", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupRuleCategory", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupCalculationKind", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupRuleset", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupGroupingCriteria", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/TimeAndLabor/LookupWeekday", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/common.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Tags/TagView.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("TagView.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Tags/Templates/TagView.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1733.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/EmbeddedSearch.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/BL/Company/CostCenterForm.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Help.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/External/rubaxa/Sortable.min.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("CostCenterForm.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Company/Templates/CostCenterForm.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1734.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1735.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1736.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Search/DropDownFilter.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Search/Filters/SelectFilter.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("SelectFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1737.inf", 
		"Mode=HTML", 
		LAST);

	/* Job Details */

	web_url("SelectFilter.WithExclusion.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1738.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1739.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/params.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=../SearchResults.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/department/all", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("SearchResults.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1740.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Contact/Lookup.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/objecttransaction/AllCreditTypes?aboutType=Position&referenceID=251460", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_custom_request("GetCurrentCreditDistributions", 
		"URL=https://staff.belflex.com/Mvc/ObjectTransaction/GetCurrentCreditDistributions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1741.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"aboutType\":\"Position\",\"referenceID\":\"251460\"}", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/TimeAndLabor/editors.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Search/LiveFilterService.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/MVC/Content/js/Search/Criterion.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=../TimeAndLabor/GetSetup?AboutType=4&ReferenceID=251460", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("Criterion.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1742.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/External/Kendo/js-debug/kendo.web.js", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/CostCenter/ForPosition?positionId=251460", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		"Url=/Mvc/timesheetfield/fieldtypes/", "Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", ENDITEM, 
		LAST);

	web_url("Tip_5", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=TimesheetFieldForm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1743.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetTimesheetFields", 
		"URL=https://staff.belflex.com/Mvc/TimesheetField/GetTimesheetFields", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1744.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"page\":0,\"aboutType\":\"Position\",\"referenceID\":\"251460\"}", 
		LAST);

	lr_end_transaction("1_Position_Click_On_Record",LR_AUTO);

	lr_start_transaction("1_Position_Click_On_Timesheet");

	/* Timesheet Fields */

	lr_end_transaction("1_Position_Click_On_Timesheet",LR_AUTO);

	lr_start_transaction("1_Position_Click_On_Notes");

	web_reg_find("Text=References", LAST);
	web_url("LoadUserControl.aspx", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1745.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../MVC/Content/js/BL/Note/NotesList.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		LAST);

	web_url("InfoBox.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1746.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NotesList.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Note/Templates/NotesList.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1747.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SearchResults.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1748.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Help.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1749.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1750.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Search/note/by/record?aboutType=Position&referenceID=251460", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../Filters/ComplexRecruiterFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../Filters/DateRangeFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../Components/Columns.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/NoteAction.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=/MVC/Content/js/BL/Note/NoteCommandsColumn.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../Filters/Templates/ComplexRecruiterFilter.css", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		LAST);

	web_url("ComplexRecruiterFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1751.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Columns.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1752.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DateRangeFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/DateRangeFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1753.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1754.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NoteCommandsColumn.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Note/Templates/NoteCommandsColumn.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1755.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/BL/Department.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		LAST);

	web_url("DateTimePicker.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/DateTimePicker.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1756.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DepartmentFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/BL/Templates/DepartmentFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1757.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Base/DeclareDataSource.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../User.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		LAST);

	web_url("SelectFilter.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1758.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.WithExclusion.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1759.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("set_7", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1760.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Note.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"CreatedBy\",\"DateCreated\",\"Action.Id\",\"AboutItem\"],\"RecentParameters\":[]}}", 
		EXTRARES, 
		"Url=../noteaction/List-all", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		"Url=../department/all", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", ENDITEM, 
		LAST);

	web_custom_request("set_8", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Notes", 
		"Snapshot=t1761.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Note.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"CreatedBy\",\"DateCreated\",\"Action.Id\",\"AboutItem\"],\"RecentParameters\":[]}}", 
		LAST);

	/* References */

	lr_end_transaction("1_Position_Click_On_Notes",LR_AUTO);

	lr_start_transaction("1_Position_Click_On_Industries");

	web_reg_find("Text=Folder Groups", LAST);
	web_url("LoadUserControl.aspx_2", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1762.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", ENDITEM, 
		LAST);

	web_custom_request("251460", 
		"URL=https://staff.belflex.com/MVC/FolderGroups/List/4/251460/", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", 
		"Snapshot=t1763.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("251460_2", 
		"URL=https://staff.belflex.com/MVC/Industries/List/4/251460/", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", 
		"Snapshot=t1764.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583860419496", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", ENDITEM, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1583860419497", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=FolderGroupsNew", ENDITEM, 
		"Url=/Mvc/Content/Images/bits/bg_sectionmenu.png", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		LAST);

	/* Folder Groups */

	lr_end_transaction("1_Position_Click_On_Industries",LR_AUTO);

	lr_start_transaction("1_Position_Click_On_Posting");

	web_reg_find("Text=Web Title", LAST);
	web_url("LoadUserControl.aspx_3", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1765.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=8fyBX1N3F6Fxh_wpDJVDq992YGqGLQ8eDMUCeQVUQJV9jFK09depyPEj2xbAgyeKZYiWucXm93Gru_wy0RVxd-mdzv6BCZri2le-CTsPOKoBjeV6GlRw4XJUEhDusYO4WPpS1n-FcbeOuBrKQgou5BpT7B01&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=JnDN5slnA9RHTR3pPsgejTuQcoKT_ZgDn49I93gHl6yqfheoIZKOckjvLQkjgZ3YyOErBxZTYvGOgoyCqKnwBMR_B7TtgakJQZm5migZzPnevelUDunwbvf94HqiHN-Oa4n-uhW1Ywpm-5-xOY4PHued-lU1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=k9Zd5Mv7tH4b-TGUAcGiMUeZJRQ5y_NdLXF9K7Zd1Pgo_QdyQE8Supvfqms-Xbl1xGlPN2HQ5DJanWCFHiVHwvQEjw16eskpWYNK1RZF0_8VqUR3Jb9H5R1rRDQ4OLAVE3d7fA2&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=Xl5lWc6sg17n98PdwjAOomKQd4z3i8Orm4bfnB_RVdnMKxkr0YwVTLxW50q1B2iHWH8GPiiMGZ4ZMhGkkHn14oj3HcL3nJHyALhL8H1YKlt1-2FZ-nc0vDzMb3T3OPW25xmlt5X1sYH7ttImIVKmxoYjc2ts5MQ_1JKzHCI_Ii7fGUB70&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=iL7wXsd21-rN3RAI8RuqT4X_pgImrnS3yWOLs5AJ-fYfz0We825ycj62lUB6krYIvEKOucezEhu6qwIuEAv3aeH3KCGjP_SZ7J3ZD2wD-PHaEQfGmQ84cIGbxIJ3PWknFxijU4QH9wbATyFXkbEjQaZkMJo1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=HxGefeHrWmHKWMhF9g2gHfEKoYg2jhQ4tldZrKeH6uJIQUzoj-M_HkewnelcsMY8M7M8QsOfZwcYXeQRGajI_dVHeoCgMbuTWyW4_O4Ps8OqjXQltgUCQ4UWhZokWHr4juL3T1s_F2U0ZXZAyFuXl92oCQfvc3sGKhCcfHLxafB8ACPj0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=17XOHoYBe6zxALbemCxNCwCRZxGnbXRytNNMr4DmOBqzjk8GxonMd-P6JJ_t6rd8QUuORMErIxJTmMN1lsDdfMQCfOE6UosKL4Vkzt9IPN2UYMzoElzbY7RdeiiVljIhZrqmB2MW4uDv1wR3nc8itOhsRwY1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=AIWveLUky907hhHoUBOhhVLbZAT_T5pljkzWPQtjzlbdFiJLfHMT2AkCA1ygAB_-1TLXOJho54r_y9EZYiSE_oPHFKfnyPMDodawAfhAB1BizCKhdPZ5rMBsRzglcNCYjGdOOKnDnFjrf4RPvB7dYFpYkvs1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=ypCGC_Q45gPLeh5TMw95KWKz0zzqXu0jNbLbVgn2D8uK0K-nLyE17UpNZrC0lqco21D_YucGUta2CcVZ8JpCUv0hkkjpsEAD7o2X2rCPtWENpOyleTvzjGHB2MySeyL2ZRV4mEgjZiWk9wJW0hl1fsWNwZxYzyHqqvnx5U3812iTS40o0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=djb3R4zBp5Tv3wjBpjxDckn6UJJT2-YPsoT_1MXLIu4JAsNWOg_Z5jurJs8ulAdL1Pyl4uMY_zYlTJUFDl7wJ4XBYcH3W8Ql-Qv-5jt6WMyxrxS3mK6Wd3b5xixVxp5jBMMa-XJIqC21LpODs7bgpu8E_FgMredneeUzsI-2qPexWlff0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../ScriptResource.axd?d=hFgOcXKvaJmbMdIFXv5Hhm8sUo9R9_6jY9P-ruDgbWtvxQJEEu4AWiZ3lTNnUosVx5s5nFq3lKNykjt3t-DsbXZJFSPonj5j0QGnW5O5weqSA8USGU2Y3kG715saziCuaG9lSGdstHX8zUa9qmTjjo5VTtI1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../WebResource.axd?d=6YuIDG46wSgW6nKHl05_bCfEsM7nmIwYUk_y0PyOovtUYaBC6fAist_vXXhunhwapmvBcEv3Om12ND3vZqfYytyffubgpZb9OZ9idrgr9x6fM8qkVecJWu2taZy0NK25q0J1zch8HhsyZVBe3zywxe-AmVf-tPPDYgbbZfUiNT696wb30&t=635004147360000000", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../Mvc/Content/Images/icons/info.png", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Posting", ENDITEM, 
		"Url=../WebResource.axd?d=5klBmH3H-4Nj_AFcw1-aAPvD6V9dZYX5w-25SZ8TbjksyjJ01XwQJatV0GFipt4VmggjxyW41qgE1PNfN8QbOh3ersnPdEsdOddFiexDQ8llt2kNSfPojLzWgyeAiiSgZZefXek92iuBqwCmTUM-S5-Zime6z2ulpJuaUuD8Vkb_lZa30&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=TeIkX7mnkWXJXFaric2-Ve_Kh5RW2gp0en6g5Dba7Ki3mDYMCyM6ChWCcMU72LnQxCMR46bH1kBImPtmsFKMh4n5isdV0bmXMdj_dlXMq3IYWsoIctlI7a04DdiZC-WsKSHKgek11s2_KClgpigyNCDZZLGYuIsypx8A03mr5TaHKQWr0&t=635004147360000000", ENDITEM, 
		"Url=../WebResource.axd?d=64C0VaNdKRY1bMCw6Aoqr-QhNs-krAz8d6bnefuB-_BJC9KdTaZicbr4t6_oWlrXjXWQE4I1GLrBYgVarn0bz863yjzpsAljPmhgnanugtgdplpsYGa3FgYJGPJlDr05paJI_7ap6Ini0JGFZMqz_eSvtOdn0PZBmUbhGxLXw2HuM0je0&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=TeIkX7mnkWXJXFaric2-Ve_Kh5RW2gp0en6g5Dba7Ki3mDYMCyM6ChWCcMU72LnQxCMR46bH1kBImPtmsFKMh4n5isdV0bmXMdj_dlXMq3IYWsoIctlI7a04DdiZC-WsKSHKgek11s2_KClgpigyNCDZZLGYuIsypx8A03mr5TaHKQWr0&t=635004147360000000", ENDITEM, 
		"Url=../WebResource.axd?d=FqHzK4IsLF4rixlN2lCm0lu29jLEtn9QfXuS63aZFXMD3N_quzdlN1r_UV0bWgv1F9A7oIVeDzPdXxYwSDlUn5ztf5GpjmjeY_F4USiODqPwBRHe2HyKR6q17PfT7f-639I7pyfV3syvMPlcl3axIS4AhYTwvQramQKvRPGsojk5zuozU7QlaKQ9k294UPfxR8ovBg2&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=TeIkX7mnkWXJXFaric2-Ve_Kh5RW2gp0en6g5Dba7Ki3mDYMCyM6ChWCcMU72LnQxCMR46bH1kBImPtmsFKMh4n5isdV0bmXMdj_dlXMq3IYWsoIctlI7a04DdiZC-WsKSHKgek11s2_KClgpigyNCDZZLGYuIsypx8A03mr5TaHKQWr0&t=635004147360000000", ENDITEM, 
		"Url=../WebResource.axd?d=QXaUkdTIdfaQHDuUgBIBXa7geiuoy4o_HqF-R1JphE3Ysw_YQqAZhD-IhMKJfJKOO1Usidz4n5aYQK5PY1jR549VlDHLfo7QbYK_k-qlNX9_ZhqPOycvpOv6C5CGgUFFA9DJoCpToUk-5z1TMYgiDZ3tHBs1&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=4gEFWcsuqiAHb67EecfHPQGpxoeMr2Xx5D31Qvp9aTHiEQIl-D11Nckg1Q12uJGwmXeIQSeGYOYjUHWbwE60J2LhglRt9Eja8PZ9uwHMe3-r0PfE0-9tjcM9iU3C6hALbmsSdw2&t=635004147360000000", ENDITEM, 
		LAST);

	/* Web Title */

	lr_end_transaction("1_Position_Click_On_Posting",LR_AUTO);

	lr_start_transaction("1_Position_Click_Candidate_Matching");
 

	lr_end_transaction("1_Position_Click_Candidate_Matching",LR_AUTO);

	lr_start_transaction("1_Position_Click_Skills");

	web_reg_find("Text=Category", LAST);
	web_url("LoadUserControl.aspx_4", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1766.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=VquIpJopB8WdSAujtTNDllRpkw1mpzaqK72opZqY0h1xT_OFF0vA1wL4CzbxwgyJq0hFEd6waxhfjnWW-BvBqxz_wD-j00FjwVAWLNpmiJ_olAIcVDBNeWg5sICHyH1aH9QmFIwS6nJbVFs3KnKFR8CTA0RoeoaWUGzCDP0g41ymE0Hh0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=dmjnQMHQMm7NaDH95Wh5Y1IKEhO6aFhHU2D9KgmCr2iVXPsrB4nb793ypKhLi53dWPZiX4KAVaj1YwCZsv2dI563kvQJBjxALy900OC1yHIyjGrj6g2hU3RyKBEJrSWtPmMNnxwozm9Cu7oKoV1CzWVTDWDdPbx_826kqkyagyVoBKBv0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=89cyUC7OOiuHXPMVTWesFKVvDYVab8lNiT2DxciPaPsm0V-bFbOmrm7cLMjPCJHeTIIy1TdGlxE9PFgaHhyoUSXw89XZlo-Rj3870_BemTBOOLt_2VeI3rpj9ydpEVXaLHC25TMXHReKF3VkLXw0d3mNcW01&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=MSyFMy1cYzlATtau9NY94jaI2InpdyIqJF5YvPweeQjnmfw1i7_slIWj32fjl--QA7QICaWVTFPwxOq2nTV9XMZAMMaF6-HK5X4Q9gUhBO5ooxSEpzLZcamy9AYJTE6I4hjW9NYsEuK7mBJdWeZhszaUkfQ1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=L_Iit2Ph_5Df1Gw1vih333fB_yN2disFiRulDSFBTdpHWq5SVvwlqkiUqyEW8jECfWCv7ovgW0HIvs78sq6-fgiNnkU_oMDnp4FtefN1IueJda0tD7aGHamZ9zZpxWkhho4eSBEUJzGrxCwpuDXY2thPChs1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=AylIygQIaxjqL9fSaLIGsAIWNWhTFchELyXC2tshsI2m-YEIOJXqrtAoSiONSYCDmJvDYb13LVFubUCrmp9XruulYTM5F30jaaafMXikVEKieAqJF2WVQz3tj5mqI4KEb1h88eUZHMZo0WccZ4kJh5qe9eg1&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=LwbTHUwgxB-ax1QLgGvGIYdf42hG9K9vsulhB6lI6nZJfA7BjE746M4iHhA4i4jA7jLxd8XCEzXUWujrnXIJD-8iC5TZlatn4l_clm2QWqnlGi0hjCtKErNlQmaJLewOIirscwYe0OQ4RwZW85eaO1oJ7B9tHrnZ6SHAqWASMTbLPEW_0&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../ScriptResource.axd?d=c_z8PZJKUZrgSZIrx1IoPJMXIl9nhNeiQo6sUXVJho-mo6FtwCkQZahQBGzwQa6SvtL4xddvkJwYuYc3ZScaS6bqKGdV5Nd-Sn4zuHaiXMjFZ_eObyA_HpTlTMUt2dN61DoDjWrDwukumkOO8avCDHCG3aaPtx42vLlu7WfU5K4eqvdq0&t=596f116c", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=Skills", ENDITEM, 
		"Url=../Mvc/User/CheckExpiration", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		//"Url=../mvc/dispatch/ping?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&_=1583859913206", "Referer=https://staff.belflex.com/Recruiter/", ENDITEM, 
		LAST);

	/* Category */

	lr_end_transaction("1_Position_Click_Skills",LR_AUTO);

	lr_start_transaction("1_Position_Click_Schedule");

	web_reg_find("Text=Add Time", LAST);
	web_url("LoadUserControl.aspx_5", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1767.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../ScriptResource.axd?d=6Ze7HZFJPB6mTsk4quIGV7tCSwJtCmiwyvZ0IQ676EHW3pRe357aa1IyOgLN6_B-7pRstwKZPCVYzkR62X4G7lxht8_EAXfe-_Yr2JRH908XzMa71jnSY6teflZHcP0PCFwICv35rnG0G27gjTtYg7AT5CeI13Bkutm8J5P4VZ4u8VV30&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=e97Vl9D4HvAXaL03oNDWKDOtN0RyeGw3X7s9ZqxhykeRUcBWkTzFIGve2twZZky6GZ77wd9Wu7Vp_nMOFEB4Wskzo0tQfWrL5_uWVGZPQq40KrF1wRr04fc-FOAacSkjv5ec5Run3VLjJafAPfaFiLRvG241&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=My2a2YthW1W1cW4tceHH_EN9vdGWZRG06N0Flyn-ltA71B3zxmF-9eOWnI3MiPB5eycbOkZLelVd_hjRhKz5pVaso_pS40oAh0dfN50XqpuUKzvxdDJ3j2bCTupPt7oXz5-ADMNNWTWJIp2dwM102YmldA3dScqdk5VTj_y5DrPuUiNQ0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=vypF8dSlmNUaAEoY94yJgVMbdhu1Pt36kUPbgu32V2AoitsRJ1KHbD7vgy2Zpj0dlBpaPSqvF6Urq0cMVfz2iIv4Z2BEL2FhElXpDK2akfTPqOgPtJ-MMWI0yIBj8f5KTSNd96ak9gOaf1HZnVPOPwSo9s3069pHeaKqkNMmIj_hLhCQ0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=b7Bgzqo29eh9a_hhQcDIDZRXEn3GN_PUewEWE2AsEvQ5_d_RsansZ7WnpepGbIIdLoovSzXEBiW3IceZr1kSMHf5A2KA_-l1Q1E-W4dpq95q5FkdViGui40F2YPtoovby7jiEZl1BqUiTlGb63_B-t_7YYQ1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=Cz2OeGZKBXcMZqlNyOpl7B0i3WfueRLbY6qcVysAmA-LtOuCTO5eot_uAKVhpMQwp0T2HY0fSy26kJBTlbKHCMzzgTQYrHCdr7XQHNo0P7vlDQyXJFjx_frKBnon1BY-rCjFojm7ZU8K511IF5qWmmvCPuY1&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=tbe5Hb8yw16_2I_c5IRIvbUVEwmSqGGUK5RiPUMoM2OOumoqre3b1POxbsyPG2MlVae4FVlA_HltVNWcBu0cl0CW8yuzi5sAJlQWKj8X4swFUyJlLWUK6bv9qAlVAroswOd16ZoTok8sWKbrDYvTXR-amCvQQkj2lMOCqpMTeGd8hOsA0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=MPbOEJwkb_ucDwCytB7Fpib4r8N0tX5DGCcZHNrkZYQdlSQ3TOLzl1Gn2Zrl84jRxvNnFRyVy0dae4b9uiesxEkmyUKgDfbc2GK133D1gYjB-wX3hqt9IGA349qPk8-HQRg2fljiaJfgzkmJp4SAKueLNc81&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../ScriptResource.axd?d=ewMBSKGe-_nKF5NkR_hBVPyiAAv_vQlnhVJxsO3CuHpc_Y3SVcFAA-k1B8F6S9VcZgbL29jW25Da1KCgoaxQoezo2ZxBVIUxOMNbrZq5YIfZD7CC7U_UA6LDHZkNAw9pKtzPj5owQD5TICUfR0jRy9IwRb22rNKGRGGVO4g4RpGl4ZcZ0&t=3967d01", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=PositionSchedule", ENDITEM, 
		"Url=../WebResource.axd?d=J3IVMxpdATZZweonZP1zyM24t7D1abNl5W_3-hkFMjs0Duq20NaTlgzCchPpFr0KCkxh0P19-DBqo7cRkcbX8Yi-Tr2TmrbzXUsyuVXbVOkgB82_4lAVaBZQU7aTcVwazdxc3BxRHkQ-siMF2aCufjosjzZyEbx8CXKh_2DP62mzL6Gk0&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=XO4BcZalKwaX00FgIvbXwgPPKwm0d5tpg-VWWhT2ka6XGxXKEvUiq1ubRE_QYIb8n5gfLyrjDkcjIGoTXvNnvaZ46OIrkivMLe4hCaFAflgyfasHPRUbGR56D_oYaNkMGKvc9QOEOnRQutJtP1f_GWgGGEBIYAncjO-toNPlY_bnr1mp0&t=635004147360000000", ENDITEM, 
		"Url=../Mvc/Content/Images/calendarscheduling.gif", "Referer=https://staff.belflex.com/MVC/Content/css/erecruit.css", ENDITEM, 
		LAST);

	/* Add Time */

	lr_end_transaction("1_Position_Click_Schedule",LR_AUTO);

	lr_start_transaction("1_Position_Click_History");

	web_url("LoadUserControl.aspx_6", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1768.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_custom_request("GetWidgetWithSession_4", 
		"URL=https://staff.belflex.com/Services/CoolTipService.asmx/GetWidgetWithSession", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1769.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={'widgetname':'aboutitemhistory','data':'{\"AboutType\":\"Position\",\"ReferenceID\":251460,\"LoggedInAsMode\":\"Recruiter\",\"CurrentUserID\":\"08b5c73d-8e4d-467c-82be-0c6789f8f6a5\",\"CurrentEntityID\":\"00000000-0000-0000-0000-000000000e01\",\"AdditionalData\":\"undefined\"}'}", 
		EXTRARES, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/jqueryui/ui-bg_glass_65_ffffff_1x400.png", "Referer=https://staff.belflex.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/Audit/ChangeHistory.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		"Url=/MVC/Content/js/Audit/StatusTransitions.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_reg_find("Text=Change History", LAST);
	web_url("ChangeHistory.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/ChangeHistory.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1770.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=ChangeHistory.css", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_url("StatusTransitions.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/StatusTransitions.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1771.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Pager.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Pager.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1772.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InfoBox.html_5", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/InfoBox.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1773.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SearchResults.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/SearchResults.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1774.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("StatusTransitions", 
		"URL=https://staff.belflex.com/Mvc/Audit/StatusTransitions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1775.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"record\":{\"AboutType\":\"Position\",\"ReferenceId\":\"251460\"},\"page\":0}", 
		LAST);

	web_url("Help.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Controls/Templates/Help.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1776.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Criterion.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/Criterion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1777.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/js/Audit/AccessLog.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_url("AccessLog.html", 
		"URL=https://staff.belflex.com/MVC/Content/js/Audit/Templates/AccessLog.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1778.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/MVC/Content/images/icons/refresh.png", "Referer=https://staff.belflex.com/MVC/Content/js/Audit/Templates/ChangeHistory.css", ENDITEM, 
		"Url=/Search/Audit/By/History?aboutType=Position&referenceID=251460", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_custom_request("AccessLog", 
		"URL=https://staff.belflex.com/Mvc/Audit/AccessLog", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1779.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"record\":{\"AboutType\":\"Position\",\"ReferenceId\":\"251460\"},\"page\":0}", 
		LAST);

	web_url("Columns.html_3", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Components/Templates/Columns.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1780.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SelectFilter.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1781.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../CheckboxFilter.js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_url("SelectFilter.WithExclusion.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/SelectFilter.WithExclusion.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1782.inf", 
		"Mode=HTML", 
		LAST);

	web_url("DropDownFilter.html_4", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Templates/DropDownFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1783.inf", 
		"Mode=HTML", 
		LAST);

	web_url("CheckboxFilter.html_2", 
		"URL=https://staff.belflex.com/MVC/Content/js/Search/Filters/Templates/CheckboxFilter.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1784.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=//Mvc/List/GenericList_nvp?key=entity:User", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", ENDITEM, 
		LAST);

	web_custom_request("set_9", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=History", 
		"Snapshot=t1785.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.erecruit.Mvc.Search.AuditController+AuditPropertyTransition.Embedded\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"ShowEmptyChanges\"],\"RecentParameters\":[]}}", 
		LAST);

	/* Change History */

	lr_end_transaction("1_Position_Click_History",LR_AUTO);

	lr_start_transaction("1_Position_Click_Saved_Searches");
	web_reg_find("Text=Pages", LAST);

	web_url("LoadUserControl.aspx_7", 
		"URL=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=SavedSearches", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Pages/position/manage.aspx?refid=251460&null", 
		"Snapshot=t1786.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../Services/LookupService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=SavedSearches", ENDITEM, 
		"Url=../Services/UpdateService.asmx/js", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=SavedSearches", ENDITEM, 
		"Url=../Mvc/Localization/LocalizationModel", "Referer=https://staff.belflex.com/Pages/LoadUserControl.aspx?abouttypeid=4&refid=251460&control=SavedSearches", ENDITEM, 
		"Url=../WebResource.axd?d=ISC7n5gPZg9F-TzOXS3vnp6qeO3Soa4sNSyznK_XKjKPQ1dNgQlgGC0L71TIKSr-QYj9t9jeYZyDMcbAHeCcz3lU74D33KQSLXPLegrg8bMj1N380TNGdtEzf8OqrH-SEogueBVnKFxCQJQBW1XxeMOcvLD1SLjWMEZ_cbWxZcq2ztpW0&t=635004147360000000", "Referer=https://staff.belflex.com/WebResource.axd?d=ZXJRyIGdwm55NX2u-Cl2xj7NhU-5Mh7vODS_j6AEwLsXVsvxF2GHcxUi-_J2qWmyMbWnE4IZHpgfSaEozXJrxAETevU05mtmPoZX-vctAprCDnMx0WKOvzzTS89QWU_nJ5IiLzbJ8MgtEI9PakBrH8_8a3sSyfgV6zP5BLX5Ofu7yQ8-0&t=635004147360000000", ENDITEM, 
		LAST);

	/* Pages */

	lr_end_transaction("1_Position_Click_Saved_Searches",LR_AUTO);

	return 0;
}