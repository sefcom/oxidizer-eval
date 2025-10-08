
  fn firecracker::api_server::request::version::parse_get_version::h93142393aba45e21(arg1: *mut i64) -> i64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c46e0, 1);
    let mut var_c0: i64 = 0xf;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    -0x8000000000000000
}
