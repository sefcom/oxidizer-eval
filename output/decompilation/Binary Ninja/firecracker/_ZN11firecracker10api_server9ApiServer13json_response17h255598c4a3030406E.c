
  int64_t firecracker::api_server::ApiServer::json_response::h255598c4a3030406(int64_t arg1, char arg2, int128_t* arg3)

{
    void var_b0;
    micro_http::response::Response::new::h78e744fb9400e084(&var_b0, 1, arg2);
    void var_c8;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h3161f6a348897a70(&var_c8, arg3);
    micro_http::response::Response::set_body::hb2a8ea3742c0d431(&var_b0, &var_c8);
    return memcpy(arg1, &var_b0, 0x90);
}
