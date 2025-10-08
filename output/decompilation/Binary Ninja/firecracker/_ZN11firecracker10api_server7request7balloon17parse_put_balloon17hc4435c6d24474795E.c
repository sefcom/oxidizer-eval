
  int64_t firecracker::api_server::request::balloon::parse_put_balloon::hc4435c6d24474795(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_c0 = arg2;
    int64_t var_b8 = arg3;
    int64_t var_b0 = 0;
    int32_t var_d0;
    serde_json::de::from_trait::hb5bf098593333c85(&var_d0, &var_c0, arg3);
    int64_t result;
    
    if (var_d0 == 1)
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
        return result;
    }
    
    int64_t result_1 = result;
    var_c0 = 0x19;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    return -0x8000000000000000;
}
