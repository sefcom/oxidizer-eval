
  fn firecracker::api_server::request::actions::parse_put_actions::h91344de731f8059a(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    let rdx_1: i8 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4730, 1);
    let mut var_d8: i64 = arg2;
    let rdx: i64;
    let var_d0: i64 = rdx;
    let var_c8: i64 = 0;
    let mut var_e8: ();
    serde_json::de::from_trait::had644ab27425a8a8(&var_e8, &var_d8, rdx_1);
    let mut var_f8: i8;
    core::result::Result$LT$T$C$E$GT$::inspect_err::hdacb15b2469aec72(&var_f8, &var_e8);
    let mut result: i64;
    
    if var_f8 != 1
    {
        let var_f7: i8;
        let rax: u32 = var_f7;
        
        if rax == 0
        {
            var_d8 = 0x10;
        }
        else if rax != 1
        {
            var_d8 = 0x1e;
        }
        else
        {
            var_d8 = 0x1d;
        }
        
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_d8);
        r12 = 0;
    }
    else
    {
        let result_1: i64;
        result = result_1;
        arg1[1] = 4;
        arg1[2] = result;
    }
    
    *arg1 = r12;
    result
}
