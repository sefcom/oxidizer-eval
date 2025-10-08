
  void* firecracker::api_server::parsed_request::_$LT$impl$u20$core..convert..From$LT$firecracker..api_server..parsed_request..RequestError$GT$$u20$for$u20$micro_http..response..Response$GT$::from::h6d9b414c67446cdb(int64_t arg1, char* arg2, uint64_t arg3)

{
    char* var_90 = arg2;
    int64_t (* var_88)(char* arg1, int64_t* arg2) = _$LT$firecracker..api_server..parsed_request..RequestError$u20$as$u20$core..fmt..Display$GT$::fmt::h9f45c28be512aa9f;
    void* const var_80 = &data_430b60;
    int64_t var_78 = 1;
    int64_t var_60 = 0;
    int64_t* var_70 = &var_90;
    int64_t var_68 = 1;
    void var_38;
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_38, 0, arg3, &var_80);
    void var_50;
    firecracker::api_server::ApiServer::json_fault_message::hfc3a57c57b134c30(&var_50, &var_38);
    char rsi_1 = 3;
    
    if (*arg2 == 1)
        rsi_1 = arg2[1];
    
    firecracker::api_server::ApiServer::json_response::h255598c4a3030406(arg1, rsi_1, &var_50);
    return core::ptr::drop_in_place$LT$firecracker..api_server..parsed_request..RequestError$GT$::h8c92b72a4c4e447a(arg2);
}
