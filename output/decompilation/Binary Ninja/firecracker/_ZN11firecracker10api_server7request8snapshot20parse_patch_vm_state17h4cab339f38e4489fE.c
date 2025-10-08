
  int64_t firecracker::api_server::request::snapshot::parse_patch_vm_state::h4cab339f38e4489f(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_c0 = arg2;
    int64_t var_b8 = arg3;
    int64_t var_b0 = 0;
    char var_d0;
    serde_json::de::from_trait::h5ce376caa8af718d(&var_d0, &var_c0, arg3);
    
    if (var_d0 == 1)
    {
        arg1[1] = 4;
        int64_t result;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    char var_cf;
    
    if (var_cf != 1)
        var_c0 = 0x15;
    else
        var_c0 = 0x18;
    
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    return -0x8000000000000000;
}
