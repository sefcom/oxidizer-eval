
  fn firecracker::api_server::request::entropy::parse_put_entropy::hd45b895516e3d309(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_c0: i64 = arg2;
    let var_b8: i64 = arg3;
    let var_b0: i64 = 0;
    let mut var_100: i64;
    serde_json::de::from_trait::h24d1608271596f73(&var_100, &var_c0, arg3);
    let rcx: i64 = var_100;
    let result: i64;
    
    if rcx == 4
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    let var_d0: i128;
    let var_88: i128 = var_d0;
    let var_e0: i128;
    let var_98: i128 = var_e0;
    let var_f0: i128;
    let var_a8: i128 = var_f0;
    let var_b8_1: i64 = rcx;
    let result_1: i64 = result;
    var_c0 = 0x1c;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    -0x8000000000000000
}
