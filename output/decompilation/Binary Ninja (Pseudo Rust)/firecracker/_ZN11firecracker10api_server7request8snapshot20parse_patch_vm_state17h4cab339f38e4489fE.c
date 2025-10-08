
  fn firecracker::api_server::request::snapshot::parse_patch_vm_state::h4cab339f38e4489f(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_c0: i64 = arg2;
    let var_b8: i64 = arg3;
    let var_b0: i64 = 0;
    let mut var_d0: i8;
    serde_json::de::from_trait::h5ce376caa8af718d(&var_d0, &var_c0, arg3);
    
    if var_d0 == 1
    {
        arg1[1] = 4;
        let result: i64;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    let var_cf: i8;
    
    if var_cf != 1
    {
        var_c0 = 0x15;
    }
    else
    {
        var_c0 = 0x18;
    }
    
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    -0x8000000000000000
}
