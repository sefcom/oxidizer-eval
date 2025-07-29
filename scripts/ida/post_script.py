from collections import defaultdict
import json

import idaapi
import idautils
import idc
import ida_hexrays
from ida_typeinf import *
import ida_lines
import ida_auto


def classify_type(tif):
    if not tif:
        return None
    if tif.is_ptr():
        pointed = tif.get_pointed_object()
        if pointed:
            return f"&{classify_type(pointed)}"
        else:
            return "&reference"
    elif tif.is_array():
        return "array"
    elif tif.is_struct() or tif.is_union():
        return "struct"
    else:
        return "primitive"


class CallCollector(ida_hexrays.ctree_visitor_t):
    def __init__(self):
        super().__init__(ida_hexrays.CV_FAST)
        self.counts = defaultdict(int)

    def visit_expr(self, expr):
        if expr.op == ida_hexrays.cot_call:
            callee = expr.x
            if callee.op == ida_hexrays.cot_obj:
                ea = callee.obj_ea
                fname = idc.get_func_name(ea)
                demangled = idaapi.demangle_name(fname, idaapi.MNG_SHORT_FORM) or fname
                self.counts[demangled] += 1
        return 0


def decompile(ea):
    func = idaapi.get_func(ea)
    if not func:
        return None
    try:
        cfunc = idaapi.decompile(func)
    except idaapi.DecompilationFailure:
        return None
    return cfunc


def get_variable_types(cfunc):
    lvars = cfunc.get_lvars()
    ident_to_types = defaultdict(list)

    for var in lvars:
        vtype = var.tif.dstr() if var.tif else "unknown"
        loc = var.location
        ident = None
        atype = loc.atype()

        if atype == ALOC_REG1:
            reg_off = loc.reg1()
            reg_name = ida_hexrays.get_mreg_name(reg_off, var.width)
            ident = f"reg_{reg_name}"

        elif atype == ALOC_STACK:
            offset = loc.stkoff()
            ident = f"stack_{offset}"

        if ident is not None:
            ty = classify_type(var.tif)
            size = var.width
            ident_to_types[ident].append((ty, size))
    return ident_to_types


def get_function_call_counts(cfunc):
    collector = CallCollector()
    collector.apply_to(cfunc.body, None)
    function_call_counts = collector.counts
    return function_call_counts


def get_pseudocode(cfunc):
    return "\n".join(ida_lines.tag_remove(line.line) for line in cfunc.get_pseudocode())


with open("1.json", "w", encoding="utf-8") as fd:
    json.dump({}, fd, indent=2)

if __name__ == "__main__":
    ida_auto.auto_wait()
    result = {
        "decompilation": {},
        "function_call_counts": {},
        "macro_call_counts": {},
        "variable_types": {},
    }
    for ea in idautils.Functions():
        func_name = idc.get_func_name(ea)
        demangled = idaapi.demangle_name(func_name, idaapi.MNG_SHORT_FORM) or func_name
        if func_name in [
            "_ZN7spyware13communication6server13send_response17h17eae7eef2507d79E",
            "_ZN7spyware13communication6server14handle_message17h02435bd595e8370dE",
            "_ZN7spyware13communication6server11get_message17hbc00a55f19d841bbE",
            "_ZN7spyware13communication6server13handle_client17hb99b66a85b0a9c88E",
            "_ZN7spyware13communication6server10run_server17hf575f6adb91dbfb6E",
            "_ZN7spyware13communication8messages1_95_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..ErrorInfo$GT$9serialize17h8c3fceac6ed6801fE",
            "_ZN7spyware13communication8messages1_96_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..ErrorInfo$GT$11deserialize17h16e2a26e495d2d09E",
            "_ZN7spyware13communication8messages1_103_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..RunCommandRequest$GT$9serialize17h05e636ca783c8b29E",
            "_ZN7spyware13communication8messages1_104_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..RunCommandRequest$GT$11deserialize17hf4107a861e3d2baeE",
            "_ZN7spyware13communication8messages1_104_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..RunCommandResponse$GT$9serialize17hc9c819935a81fe1bE",
            "_ZN7spyware13communication8messages1_105_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..RunCommandResponse$GT$11deserialize17h67b73dba800a3318E",
            "_ZN7spyware13communication8messages1_105_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..DownloadFileRequest$GT$9serialize17h54b8d5981f6378f4E",
            "_ZN7spyware13communication8messages1_106_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..DownloadFileRequest$GT$11deserialize17h40c06322ea6d693bE",
            "_ZN7spyware13communication8messages1_106_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..DownloadFileResponse$GT$9serialize17hacec97a4be0cc2f5E",
            "_ZN7spyware13communication8messages1_107_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..DownloadFileResponse$GT$11deserialize17h11c5c4e17211802eE",
            "_ZN7spyware13communication8messages1_105_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetBasicInfoRequest$GT$9serialize17h0b9495116de8f9c4E",
            "_ZN7spyware13communication8messages1_106_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..GetBasicInfoRequest$GT$11deserialize17hcdf93e6675e0bf2cE",
            "_ZN7spyware13communication8messages1_101_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..OperatingSystem$GT$9serialize17h8cffced7504157a5E",
            "_ZN7spyware13communication8messages1_102_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..OperatingSystem$GT$11deserialize17h4c0914be652651d6E",
            "_ZN7spyware13communication8messages1_98_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..Architecture$GT$9serialize17ha11211a0fbb1410aE",
            "_ZN7spyware13communication8messages1_99_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..Architecture$GT$11deserialize17h009a6242e6b769c4E",
            "_ZN7spyware13communication8messages1_98_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..PointerWidth$GT$9serialize17h41945df7b7138b6dE",
            "_ZN7spyware13communication8messages1_99_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..PointerWidth$GT$11deserialize17ha507b2eb88982b6aE",
            "_ZN7spyware13communication8messages1_106_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetBasicInfoResponse$GT$9serialize17h190e21248ceaec03E",
            "_ZN7spyware13communication8messages1_107_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..GetBasicInfoResponse$GT$11deserialize17hd883d2cf07aad750E",
            "_ZN7spyware13communication8messages1_100_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetLogsRequest$GT$9serialize17he6158cb9ea855423E",
            "_ZN7spyware13communication8messages1_101_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..GetLogsRequest$GT$11deserialize17hb5de4e1218b29ce4E",
            "_ZN7spyware13communication8messages1_101_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetLogsResponse$GT$9serialize17h0611f531c13c311fE",
            "_ZN7spyware13communication8messages1_102_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..GetLogsResponse$GT$11deserialize17hb2af3bb6c4c5294eE",
            "_ZN7spyware13communication8messages1_106_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetScreenshotRequest$GT$9serialize17hbb0030a4e5e27df6E",
            "_ZN7spyware13communication8messages1_107_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..GetScreenshotRequest$GT$11deserialize17h10c33b48cca6c544E",
            "_ZN7spyware13communication8messages1_103_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..DisplayScreenshot$GT$9serialize17h398c010cbc9d0042E",
            "_ZN7spyware13communication8messages1_104_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..DisplayScreenshot$GT$11deserialize17hc0278cfffef915f6E",
            "_ZN7spyware13communication8messages1_107_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetScreenshotResponse$GT$9serialize17h248e03f41e757f8aE",
            "_ZN7spyware13communication8messages1_108_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..GetScreenshotResponse$GT$11deserialize17h64523546e7252f88E",
            "_ZN7spyware13communication8messages7Message17RunCommandRequest17h075183aa725d84a0E",
            "_ZN7spyware13communication8messages7Message18RunCommandResponse17h87f1971d57af5fa1E",
            "_ZN7spyware13communication8messages7Message19DownloadFileRequest17hb5d1389eec76b978E",
            "_ZN7spyware13communication8messages7Message20DownloadFileResponse17ha7620692d046dc59E",
            "_ZN7spyware13communication8messages7Message19GetBasicInfoRequest17h8d9efe4a6a3d8bcfE",
            "_ZN7spyware13communication8messages7Message20GetBasicInfoResponse17he560e1b25a0d5b84E",
            "_ZN7spyware13communication8messages7Message14GetLogsRequest17he8fe873e6a6e4263E",
            "_ZN7spyware13communication8messages7Message15GetLogsResponse17hd97008268b60995eE",
            "_ZN7spyware13communication8messages7Message20GetScreenshotRequest17h748c79272499737bE",
            "_ZN7spyware13communication8messages7Message21GetScreenshotResponse17h672420867e6f6ff4E",
            "_ZN7spyware13communication8messages1_93_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..Message$GT$9serialize17h581434390f64cc04E",
            "_ZN7spyware13communication8messages1_94_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$spyware..communication..messages..Message$GT$11deserialize17h7721b036fb7eed9cE",
            "_ZN7spyware15run_server_loop17ha507d6dda312d1beE",
            "_ZN7spyware23run_cnc_connection_loop17h099cfaaaff629944E",
            "_ZN7spyware12init_logging17h71d90daabdd6a317E",
            "_ZN7spyware4main17h0c167b4c5fedcce2E",
            "_ZN7spyware7actions10basic_info19get_running_os_info17h2ac1d86b9171dd43E",
            "_ZN7spyware7actions10basic_info22get_basic_info_request17h37840dd4820167afE",
            "_ZN7spyware7actions10basic_info21download_file_message17h8a802bf593e1dd2fE",
            "_ZN7spyware7actions11log_actions16get_logs_request17h84eb7739ff3a4934E",
            "_ZN7spyware7logging4core12MemoryLogger6global17h99d7eb6ce0974984E",
            "_ZN7spyware7logging4core12MemoryLogger8get_logs17h68454e3110e201f1E",
            "_ZN7spyware7logging4core13setup_logging17hadfb9a3c25f8d0fbE",
            "_ZN7spyware7logging4core8get_logs17h979297f7bb1c44d2E",
            "_ZN7spyware7logging13memory_logger18compute_used_chars17h6cad6d693caf9651E",
            "_ZN7spyware7logging13memory_logger18CircularMemoryLogs9write_log17h24aec65a22a6ad29E",
            "_ZN7spyware7logging13memory_logger18CircularMemoryLogs12get_all_logs17hfa3a03f9a722fe3cE",
            "_ZN7spyware13communication13serialization27extract_msg_type_and_length17h40fb0f3bb65520f5E",
            "_ZN7spyware13communication13serialization17serialize_message17hd905e118d95099f9E",
            "_ZN7spyware7actions18screenshot_actions22get_screenshot_request17h77f87121c90614c4E",
            "_ZN7spyware7actions8commands11run_command17ha7c0eb7cdcbdbc69E",
            "_ZN7spyware7actions8commands19run_command_message17h528f548903eb1e39E",
        ]:
            cfunc = decompile(ea)
            if cfunc is not None:
                variable_types = get_variable_types(cfunc)
                function_call_counts = get_function_call_counts(cfunc)
                pseudocode = get_pseudocode(cfunc)
                result["decompilation"][demangled] = pseudocode
                result["function_call_counts"][demangled] = function_call_counts
                result["macro_call_counts"][demangled] = 0
                result["variable_types"] = variable_types
    with open("1.json", "w", encoding="utf-8") as fd:
        json.dump(result, fd, indent=2)
    idc.qexit(0)
