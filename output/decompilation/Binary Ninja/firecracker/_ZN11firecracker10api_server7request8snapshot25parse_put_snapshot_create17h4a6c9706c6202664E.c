
  int64_t firecracker::api_server::request::snapshot::parse_put_snapshot_create::h4a6c9706c6202664(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_c0 = arg2;
    int64_t var_b8 = arg3;
    int64_t var_b0 = 0;
    int64_t var_f8;
    serde_json::de::from_trait::h73261200bcb5b6c7(&var_f8, &var_c0, arg3);
    int64_t rcx = var_f8;
    int64_t result;
    
    if (-(rcx) == -0x8000000000000000)
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    int64_t var_c8;
    int64_t var_88 = var_c8;
    int128_t var_d8;
    int128_t var_98 = var_d8;
    int128_t var_e8;
    int128_t var_a8 = var_e8;
    int64_t var_b8_1 = rcx;
    int64_t result_1 = result;
    var_c0 = 8;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    return -0x8000000000000000;
}
