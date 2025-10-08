
  fn firecracker::api_server::parsed_request::_$LT$impl$u20$core..convert..From$LT$firecracker..api_server..parsed_request..RequestError$GT$$u20$for$u20$micro_http..response..Response$GT$::from::h6d9b414c67446cdb(arg1: i64, arg2: *mut i8, arg3: u64) -> *mut c_void

{
    let mut var_90: *mut i8 = arg2;
    let var_88: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$firecracker..api_server..parsed_request..RequestError$u20$as$u20$core..fmt..Display$GT$::fmt::h9f45c28be512aa9f;
    let mut var_80: *mut c_void = &data_430b60;
    let var_78: i64 = 1;
    let var_60: i64 = 0;
    let var_70: *mut i64 = &var_90;
    let var_68: i64 = 1;
    let mut var_38: ();
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_38, 0, arg3, &var_80);
    let mut var_50: ();
    firecracker::api_server::ApiServer::json_fault_message::hfc3a57c57b134c30(&var_50, &var_38);
    let mut rsi_1: i8 = 3;
    
    if *arg2 == 1
    {
        rsi_1 = arg2[1];
    }
    
    firecracker::api_server::ApiServer::json_response::h255598c4a3030406(arg1, rsi_1, &var_50);
    core::ptr::drop_in_place$LT$firecracker..api_server..parsed_request..RequestError$GT$::h8c92b72a4c4e447a(arg2)
}
