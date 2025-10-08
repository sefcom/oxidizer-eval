
  fn firecracker::api_server::request::vsock::parse_put_vsock::h324d5cf13bebf31f(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4850, 1);
    let mut var_150: i64 = arg2;
    let rdx: i64;
    let var_148: i64 = rdx;
    let var_140: i64 = 0;
    let mut var_e0: i64;
    serde_json::de::from_trait::hf2f010f459f337bd(&var_e0, &var_150);
    let mut var_138: i64;
    core::result::Result$LT$T$C$E$GT$::inspect_err::he91879e7163bf2ea(&var_138, &var_e0);
    let r15_1: i64 = var_138;
    let mut result: i64 = -(r15_1);
    let var_130: i64;
    
    if -(r15_1) != -0x8000000000000000
    {
        let var_120: i64;
        let mut var_100: i128;
        let var_128: i64;
        let var_118: i128;
        let var_108: i64;
        
        if var_120 != -0x8000000000000000
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            let var_d8_2: i64 = r15_1;
            let var_d0_2: i64 = var_130;
            let var_c8_2: i64 = var_128;
            let var_c0_2: i64 = var_120;
            let var_b8_2: i128 = var_118;
            let var_a8_2: i64 = var_108;
            var_e0 = 0x1b;
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_100, &var_e0);
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_100, "PUT /vsock: vsock_id field is de…", 0x29);
        }
        else
        {
            let var_d8_1: i64 = r15_1;
            let var_d0_1: i64 = var_130;
            let var_c8_1: i64 = var_128;
            let var_c0_1: i64 = -0x8000000000000000;
            let var_b8_1: i128 = var_118;
            let var_a8_1: i64 = var_108;
            var_e0 = 0x1b;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_100, &var_e0);
        }
        let zmm0_2: i128 = var_100;
        let var_f0: i128;
        *arg1.byte_offset(0x18) = var_f0;
        *arg1.byte_offset(8) = zmm0_2;
        r12 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = var_130;
    }
    *arg1 = r12;
    result
}
