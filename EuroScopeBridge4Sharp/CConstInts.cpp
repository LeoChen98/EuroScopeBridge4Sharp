#include "pch.h"
#include <string>
#include <map>

#include "CConstInts.h"

using namespace std;

map<string, int> CConstInts::ConstIntsMap;

int CConstInts::GetValue(string var_name)
{
	return CConstInts::ConstIntsMap[var_name];
}

void CConstInts::InitMap()
{
	

	CConstInts::ConstIntsMap = {

		{"COMPATIBILITY_CODE", 16},

		{"FLIGHT_PLAN_STATE_NOT_STARTED", 0},
		{"FLIGHT_PLAN_STATE_SIMULATED", 1},
		{"FLIGHT_PLAN_STATE_TERMINATED", 2},

		{"FLIGHT_PLAN_STATE_NON_CONCERNED", 0},
		{"FLIGHT_PLAN_STATE_NOTIFIED", 1},
		{"FLIGHT_PLAN_STATE_COORDINATED", 2},
		{"FLIGHT_PLAN_STATE_TRANSFER_TO_ME_INITIATED", 3},
		{"FLIGHT_PLAN_STATE_TRANSFER_FROM_ME_INITIATED", 4},
		{"FLIGHT_PLAN_STATE_ASSUMED", 5},
		{"FLIGHT_PLAN_STATE_REDUNDANT", 7},

		{"AIRWAY_CLASS_VALID", 0},
		{"AIRWAY_CLASS_DIRECTION_ERROR", 1},
		{"AIRWAY_CLASS_UNCONNECTED", 2},
		{"AIRWAY_CLASS_NO_DATA_DIRECT", 3},

		{"CTR_DATA_TYPE_SQUAWK", 1},
		{"CTR_DATA_TYPE_FINAL_ALTITUDE", 2},
		{"CTR_DATA_TYPE_TEMPORARY_ALTITUDE", 3},
		{"CTR_DATA_TYPE_COMMUNICATION_TYPE", 4},
		{"CTR_DATA_TYPE_SCRATCH_PAD_STRING", 5},
		{"CTR_DATA_TYPE_GROUND_STATE", 6},
		{"CTR_DATA_TYPE_CLEARENCE_FLAG", 7},
		{"CTR_DATA_TYPE_DEPARTURE_SEQUENCE", 8},
		{"CTR_DATA_TYPE_SPEED", 9},
		{"CTR_DATA_TYPE_MACH", 10},
		{"CTR_DATA_TYPE_RATE", 11},
		{"CTR_DATA_TYPE_HEADING", 12},
		{"CTR_DATA_TYPE_DIRECT_TO", 13},

		{"REFRESH_PHASE_BACK_BITMAP", 0},
		{"REFRESH_PHASE_BEFORE_TAGS", 1},
		{"REFRESH_PHASE_AFTER_TAGS", 2},
		{"REFRESH_PHASE_AFTER_LISTS", 3},

		{"TAG_COLOR_DEFAULT", 0},
		{"TAG_COLOR_RGB_DEFINED", 1},
		{"TAG_COLOR_NON_CONCERNED", 2},
		{"TAG_COLOR_NOTIFIED", 3},
		{"TAG_COLOR_ASSUMED", 4},
		{"TAG_COLOR_TRANSFER_TO_ME_INITIATED", 5},
		{"TAG_COLOR_REDUNDANT", 6},
		{"TAG_COLOR_INFORMATION", 7},
		{"TAG_COLOR_ONGOING_REQUEST_FROM_ME", 8},
		{"TAG_COLOR_ONGOING_REQUEST_TO_ME", 9},
		{"TAG_COLOR_ONGOING_REQUEST_ACCEPTED", 10},
		{"TAG_COLOR_ONGOING_REQUEST_REFUSED", 11},
		{"TAG_COLOR_EMERGENCY", 12},

		{"TAG_TYPE_UNTAGGED", 0},
		{"TAG_TYPE_TAGGED", 1},
		{"TAG_TYPE_DETAILED", 2},
		{"TAG_TYPE_TSSR", 3},

		{"TAG_ITEM_TYPE_NEXT_LINE", 0},
		{"TAG_ITEM_TYPE_STATIC_STRING", 1},
		{"TAG_ITEM_TYPE_SQUAWK", 2},
		{"TAG_ITEM_TYPE_VERTICAL_SPEED_INDICATOR", 3},
		{"TAG_ITEM_TYPE_ALTITUDE", 4},
		{"TAG_ITEM_TYPE_EMERGENCY_INDICATOR", 5},
		{"TAG_ITEM_TYPE_RADIO_FAILURE_INDICATOR", 6},
		{"TAG_ITEM_TYPE_HIJACK_INDICATOR", 7},
		{"TAG_ITEM_TYPE_COLLOSION_ALERT", 8},
		{"TAG_ITEM_TYPE_CALLSIGN", 9},
		{"TAG_ITEM_TYPE_AIRCRAFT_CATEGORY", 10},
		{"TAG_ITEM_TYPE_COMMUNICATION_TYPE", 11},
		{"TAG_ITEM_TYPE_VERTICAL_SPEED", 12},
		{"TAG_ITEM_TYPE_GROUND_SPEED_WITH_N", 13},
		{"TAG_ITEM_TYPE_HANDOFF_TARGET", 14},
		{"TAG_ITEM_TYPE_OWNER", 15},
		{"TAG_ITEM_TYPE_PLANE_TYPE", 16},
		{"TAG_ITEM_TYPE_DESTINATION", 17},
		{"TAG_ITEM_TYPE_SQUAWK_ERROR", 18},
		{"TAG_ITEM_TYPE_INFO_STRING", 19},
		{"TAG_ITEM_TYPE_TEMP_ALTITUDE", 20},
		{"TAG_ITEM_TYPE_INFO_INDICATOR", 21},
		{"TAG_ITEM_TYPE_FINAL_ALTITUDE", 22},
		{"TAG_ITEM_TYPE_ASSIGNED_SPEED", 23},
		{"TAG_ITEM_TYPE_ASSIGNED_RATE", 24},
		{"TAG_ITEM_TYPE_ASSIGNED_HEADING", 25},
		{"TAG_ITEM_TYPE_SECTOR_INDICATOR", 26},
		{"TAG_ITEM_TYPE_DUPLICATED_SQUAWK", 27},
		{"TAG_ITEM_TYPE_COPN_COPX_NAME", 28},
		{"TAG_ITEM_TYPE_COPN_COPX_ALTITUDE", 29},
		{"TAG_ITEM_TYPE_FIR_COPX_NAME", 30},
		{"TAG_ITEM_TYPE_COPX_NOT_CLEARED_ALTITUDE", 31},
		{"TAG_ITEM_TYPE_COPX_AWERE_TEMP_ALTITUDE", 32},
		{"TAG_ITEM_TYPE_NEXT_LINE_IF_NOT_EMPTY", 33},
		{"TAG_ITEM_TYPE_DIRECT", 34},
		{"TAG_ITEM_TYPE_GROUND_SPEED_OPTIONAL_WITH_N", 35},
		{"TAG_ITEM_TYPE_FIR_COPX_NAME_OPTIONAL", 36},
		{"TAG_ITEM_TYPE_DESTINATION_OPTIONAL", 37},
		{"TAG_ITEM_TYPE_PLANE_TYPE_OPTIONAL", 38},
		{"TAG_ITEM_TYPE_TSSR", 39},
		{"TAG_ITEM_TYPE_GROUND_SPEED_WOUT_N", 40},
		{"TAG_ITEM_TYPE_GROUND_SPEED_OPTIONAL_WOUT_N", 41},
		{"TAG_ITEM_TYPE_COMPOUND_WARNING", 42},
		{"TAG_ITEM_TYPE_TEMP_IFSET", 43},
		{"TAG_ITEM_TYPE_ASSIGNED_SPEED_IFSET", 44},
		{"TAG_ITEM_TYPE_ASSIGNED_RATE_IFSET", 45},
		{"TAG_ITEM_TYPE_ASSIGNED_HEADING_IFSET", 46},
		{"TAG_ITEM_TYPE_ASSIGNED_RUNWAY", 47},
		{"TAG_ITEM_TYPE_COPN_NAME", 48},
		{"TAG_ITEM_TYPE_COPN_ALTITUDE", 49},
		{"TAG_ITEM_TYPE_COPN_TIME", 50},
		{"TAG_ITEM_TYPE_COPX_NAME", 51},
		{"TAG_ITEM_TYPE_COPX_ALTITUDE", 52},
		{"TAG_ITEM_TYPE_COPX_TIME", 53},
		{"TAG_ITEM_TYPE_ETA", 54},
		{"TAG_ITEM_TYPE_ASSIGNED_STAR", 55},
		{"TAG_ITEM_TYPE_ASSIGNED_SID", 56},
		{"TAG_ITEM_TYPE_DEPARTURE_ORDER", 57},
		{"TAG_ITEM_TYPE_CLEARENCE", 58},
		{"TAG_ITEM_TYPE_GROUND_STATUS", 59},
		{"TAG_ITEM_TYPE_ASSIGNED_SQUAWK", 60},
		{"TAG_ITEM_TYPE_ORIGIN", 61},
		{"TAG_ITEM_TYPE_RVSM_FLAG", 62},
		{"TAG_ITEM_TYPE_FLIGHT_RULE", 63},
		{"TAG_ITEM_TYPE_SECTOR_INDICATOR_FIX", 64},
		{"TAG_ITEM_TYPE_MANUAL_COORDINATION", 65},
		{"TAG_ITEM_TYPE_INFO_ALWAYS", 66},
		{"TAG_ITEM_TYPE_CLAM_WARNING", 67},
		{"TAG_ITEM_TYPE_RAM_WARNING", 68},
		{"TAG_ITEM_TYPE_SQ_OR_CALLSIGN", 69},
		{"TAG_ITEM_TYPE_TWO_LETTER_GS", 70},
		{"TAG_ITEM_TYPE_TWO_LETTER_GS_OPTIONAL", 71},
		{"TAG_ITEM_TYPE_TWO_LETTER_ASSIGNED_SPEED", 72},
		{"TAG_ITEM_TYPE_TWO_LETTER_ASSIGNED_SPEED_IFSET", 73},
		{"TAG_ITEM_TYPE_NOT_REACHED_TEMPORARY", 74},
		{"TAG_ITEM_TYPE_NOT_CLEARED_COPN_COPX_ALT", 75},
		{"TAG_ITEM_TYPE_AIRCRAFT_CATEGORY_WITH_SLASH", 76},
		{"TAG_ITEM_TYPE_NON_RVSM_FLAG", 77},
		{"TAG_ITEM_TYPE_AC_TYPE_CATEGORY", 78},
		{"TAG_ITEM_TYPE_AC_TYPE_CATEGORY_OPTIONAL", 79},
		{"TAG_ITEM_TYPE_COMMUNICATION_TYPE_REDUCED", 80},
		{"TAG_ITEM_TYPE_AIRLINE", 81},
		{"TAG_ITEM_TYPE_FP_STATUS", 82},
		{"TAG_ITEM_TYPE_ESTIMATE", 83},
		{"TAG_ITEM_TYPE_ESTIMATE_ALWAYS", 84},
		{"TAG_ITEM_TYPE_CONFLICTING_AC_CALLSING", 85},
		{"TAG_ITEM_TYPE_CONFLICT_START", 86},
		{"TAG_ITEM_TYPE_CONFLICT_END", 87},
		{"TAG_ITEM_TYPE_CONFLICT_TYPE", 88},
		{"TAG_ITEM_TYPE_MSAW_INDICATOR", 89},
		{"TAG_ITEM_TYPE_SIMULATION_INDICATOR", 90},
		{"TAG_ITEM_TYPE_SIMULATION_WAYPOINT", 91},

		{"TAG_ITEM_FUNCTION_NO", 0},
		{"TAG_ITEM_FUNCTION_TOGGLE_ROUTE_DRAW", 1},
		{"TAG_ITEM_FUNCTION_TOGGLE_ITEM_DISPLAY", 2},
		{"TAG_ITEM_FUNCTION_TOGGLE_FIR_COPX_DISPLAY", 3},
		{"TAG_ITEM_FUNCTION_TOGGLE_DEST_DISPLAY", 4},
		{"TAG_ITEM_FUNCTION_TOGGLE_PLANE_TYPE_DISPLAY", 5},
		{"TAG_ITEM_FUNCTION_TOGGLE_SI_STYLE", 6},
		{"TAG_ITEM_FUNCTION_OPEN_FP_DIALOG", 7},
		{"TAG_ITEM_FUNCTION_HANDOFF_POPUP_MENU", 8},
		{"TAG_ITEM_FUNCTION_TAKE_HANDOFF", 9},
		{"TAG_ITEM_FUNCTION_NEXT_ROUTE_POINTS_POPUP", 10},
		{"TAG_ITEM_FUNCTION_TEMP_ALTITUDE_POPUP", 11},
		{"TAG_ITEM_FUNCTION_ASSIGNED_SPEED_POPUP", 12},
		{"TAG_ITEM_FUNCTION_ASSIGNED_RATE_POPUP", 13},
		{"TAG_ITEM_FUNCTION_ASSIGNED_HEADING_POPUP", 14},
		{"TAG_ITEM_FUNCTION_ASSIGNED_MACH_POPUP", 15},
		{"TAG_ITEM_FUNCTION_TOGGLE_PREDICTION_DRAW", 16},
		{"TAG_ITEM_FUNCTION_ASSIGNED_SID", 17},
		{"TAG_ITEM_FUNCTION_ASSIGNED_STAR", 18},
		{"TAG_ITEM_FUNCTION_ASSIGNED_RUNWAY", 19},
		{"TAG_ITEM_FUNCTION_ASSIGNED_NEXT_CONTROLLER", 20},
		{"TAG_ITEM_FUNCTION_COPN_NAME", 21},
		{"TAG_ITEM_FUNCTION_COPX_NAME", 22},
		{"TAG_ITEM_FUNCTION_COPN_ALTITUDE", 23},
		{"TAG_ITEM_FUNCTION_COPX_ALTITUDE", 24},
		{"TAG_ITEM_FUNCTION_ACCEPT_MANUAL_COORDINATION", 25},
		{"TAG_ITEM_FUNCTION_COPN_COPX_ALTITUDE", 26},
		{"TAG_ITEM_FUNCTION_SET_CLEARED_FLAG", 27},
		{"TAG_ITEM_FUNCTION_SET_GROUND_STATUS", 28},
		{"TAG_ITEM_FUNCTION_EDIT_SCRATCH_PAD", 29},
		{"TAG_ITEM_FUNCTION_RFL_POPUP", 30},
		{"TAG_ITEM_FUNCTION_SQUAWK_POPUP", 31},
		{"TAG_ITEM_FUNCTION_COMMUNICATION_POPUP", 32},
		{"TAG_ITEM_FUNCTION_CORRELATE_POPUP", 33},
		{"TAG_ITEM_FUNCTION_SET_FP_STATUS", 34},
		{"TAG_ITEM_FUNCTION_SET_ESTIMATE", 35},
		{"TAG_ITEM_FUNCTION_SIMUL_TO_POPUP", 37},
		{"TAG_ITEM_FUNCTION_SIMUL_LAND_VACATE_POPUP", 38},
		{"TAG_ITEM_FUNCTION_SIMUL_TAXI_POPUP", 39},
		{"TAG_ITEM_FUNCTION_SIMUL_TAXI_BEHIND", 40},
		{"TAG_ITEM_FUNCTION_SIMULATION_POPUP", 41},
		{"TAG_ITEM_FUNCTION_SIMUL_NEXT_WAYPOINTS", 42},
		{"TAG_ITEM_FUNCTION_SIMUL_HOLDING_POINTS", 43},

		{"TAG_DATA_UNCORRELATED_RADAR", 1},
		{"TAG_DATA_FLIGHT_PLAN_TRACK", 2},
		{"TAG_DATA_CORRELATED", 3},

		{"BUTTON_LEFT", 1},
		{"BUTTON_MIDDLE", 2},
		{"BUTTON_RIGHT", 3},

		{"POPUP_ELEMENT_UNCHECKED", 0},
		{"POPUP_ELEMENT_CHECKED", 1},
		{"POPUP_ELEMENT_NO_CHECKBOX", 2},

		{"CONNECTION_TYPE_NO", 0},
		{"CONNECTION_TYPE_DIRECT", 1},
		{"CONNECTION_TYPE_VIA_PROXY", 2},
		{"CONNECTION_TYPE_SIMULATOR_SERVER", 3},
		{"CONNECTION_TYPE_PLAYBACK", 4},
		{"CONNECTION_TYPE_SIMULATOR_CLIENT", 5},
		{"CONNECTION_TYPE_SWEATBOX", 6},

		{"COORDINATION_STATE_NONE", 1},
		{"COORDINATION_STATE_REQUESTED_BY_ME", 2},
		{"COORDINATION_STATE_REQUESTED_BY_OTHER", 3},
		{"COORDINATION_STATE_ACCEPTED", 4},
		{"COORDINATION_STATE_REFUSED", 5},
		{"COORDINATION_STATE_MANUAL_ACCEPTED", 6},

		{"SECTOR_ELEMENT_INFO", 0},
		{"SECTOR_ELEMENT_VOR", 1},
		{"SECTOR_ELEMENT_NDB", 2},
		{"SECTOR_ELEMENT_AIRPORT", 3},
		{"SECTOR_ELEMENT_RUNWAY", 4},
		{"SECTOR_ELEMENT_FIX", 5},
		{"SECTOR_ELEMENT_STAR", 6},
		{"SECTOR_ELEMENT_SID", 7},
		{"SECTOR_ELEMENT_LOW_AIRWAY", 8},
		{"SECTOR_ELEMENT_HIGH_AIRWAY", 9},
		{"SECTOR_ELEMENT_HIGH_ARTC", 10},
		{"SECTOR_ELEMENT_ARTC", 11},
		{"SECTOR_ELEMENT_LOW_ARTC", 12},
		{"SECTOR_ELEMENT_GEO", 13},
		{"SECTOR_ELEMENT_FREE_TEXT", 14},
		{"SECTOR_ELEMENT_AIRSPACE", 15},
		{"SECTOR_ELEMENT_POSITION", 16},
		{"SECTOR_ELEMENT_SIDS_STARS", 17},
		{"SECTOR_ELEMENT_RADARS", 18},
		{"SECTOR_ELEMENT_REGIONS", 19},

		{"SECTOR_ELEMENT_NUMBER", 20},
		{"SECTOR_ELEMENT_ALL", -1},

		{"RADAR_POSITION_NONE", 0},
		{"RADAR_POSITION_PRIMARY", 1},
		{"RADAR_POSITION_SECONDARY_C", 2},
		{"RADAR_POSITION_SECONDARY_S", 4},
		{"RADAR_POSITION_ALL", 7} };
}