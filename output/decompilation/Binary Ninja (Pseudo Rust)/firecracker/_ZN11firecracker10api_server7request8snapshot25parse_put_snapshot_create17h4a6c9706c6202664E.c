
  fn firecracker::api_server::request::snapshot::parse_put_snapshot_create::h4a6c9706c6202664(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_c0: i64 = arg2;
    let var_b8: i64 = arg3;
    let var_b0: i64 = 0;
    let mut var_f8: i64;
    serde_json::de::from_trait::h73261200bcb5b6c7(&var_f8, &var_c0, arg3);
    let rcx: i64 = var_f8;
    let result: i64;
    
    if -(rcx) == -0x8000000000000000
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    let var_c8: i64;
    let var_88: i64 = var_c8;
    let var_d8: i128;
    let var_98: i128 = var_d8;
    let var_e8: i128;
    let var_a8: i128 = var_e8;
    let var_b8_1: i64 = rcx;
    let result_1: i64 = result;
    var_c0 = 8;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    -0x8000000000000000
}
