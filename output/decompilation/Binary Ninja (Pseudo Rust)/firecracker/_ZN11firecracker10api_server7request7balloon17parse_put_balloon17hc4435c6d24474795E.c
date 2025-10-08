
  fn firecracker::api_server::request::balloon::parse_put_balloon::hc4435c6d24474795(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_c0: i64 = arg2;
    let var_b8: i64 = arg3;
    let var_b0: i64 = 0;
    let mut var_d0: i32;
    serde_json::de::from_trait::hb5bf098593333c85(&var_d0, &var_c0, arg3);
    let result: i64;
    
    if var_d0 == 1
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    let result_1: i64 = result;
    var_c0 = 0x19;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    -0x8000000000000000
}
