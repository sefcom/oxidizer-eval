
  fn firecracker::api_server::request::mmds::parse_get_mmds::h8a590342c6f880d5(arg1: *mut i64) -> i64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c46d0, 1);
    let mut var_c0: i64 = 0xc;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], 
        &var_c0);
    *arg1 = 0;
    -0x8000000000000000
}
