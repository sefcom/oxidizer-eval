
  int64_t firecracker::api_server::request::entropy::parse_put_entropy::hd45b895516e3d309(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_c0 = arg2;
    int64_t var_b8 = arg3;
    int64_t var_b0 = 0;
    int64_t var_100;
    serde_json::de::from_trait::h24d1608271596f73(&var_100, &var_c0, arg3);
    int64_t rcx = var_100;
    int64_t result;
    
    if (rcx == 4)
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    int128_t var_d0;
    int128_t var_88 = var_d0;
    int128_t var_e0;
    int128_t var_98 = var_e0;
    int128_t var_f0;
    int128_t var_a8 = var_f0;
    int64_t var_b8_1 = rcx;
    int64_t result_1 = result;
    var_c0 = 0x1c;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    return -0x8000000000000000;
}
