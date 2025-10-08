
  fn firecracker::api_server::request::snapshot::parse_put_snapshot_load::ha6addff4be7448a3(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_188: i64 = arg2;
    let var_180: i64 = arg3;
    let mut var_178: i64 = 0;
    let mut var_e8: i64;
    serde_json::de::from_trait::h39ecb7e000ed83b6(&var_e8, &var_188, arg3);
    let rcx: i64 = var_e8;
    let mut result_2: i64;
    let mut result: i64 = result_2;
    
    if -(rcx) != -0x8000000000000000
    {
        let var_88: i128;
        let var_128_1: i88 = var_88;
        let mut var_b8: i128;
        let var_158_1: i128 = var_b8;
        let mut var_d8: i128;
        var_178 = var_d8;
        var_188 = rcx;
        let result_1: i64 = result;
        let var_a8: i128;
        let r13_1: i64 = *var_a8[8];
        let mut r14_1: i64 = var_158_1;
        let mut var_198: i32;
        let mut var_190_1: *const i8;
        let mut var_118_1: i128;
        let mut var_98: i128;
        let mut rax: i8;
        let mut rcx_1: i64;
        let mut rbp_1: u32;
        let mut r12: u64;
        let mut rsi_6: u64;
        let mut rdi_6: *const i8;
        
        if r13_1 != -0x8000000000000000
        {
            if r14_1 != -0x8000000000000000
            {
                rdi_6 = "too many fields: either `mem_bac…";
                rsi_6 = 0x50;
                'label_556bce:
                let rax_3: u64 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h0845cebe398fb0d3(rdi_6, rsi_6);
                arg1[1] = 4;
                arg1[2] = rax_3;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$vmm..vmm_config..snapshot..LoadSnapshotConfig$GT$::h7ab30e2fd0caebdb(&var_188);
            }
            
            rbp_1 = *var_128_1[8];
            
            if rbp_1 != 1
            {
                var_190_1 = nullptr;
            }
            else
            {
                _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
                var_190_1 = "PUT /snapshot/load: mem_file_pat…";
            }
            
            var_118_1 = var_98;
            rax = var_128_1;
            var_198 = *var_128_1[1];
            var_198 = *var_128_1[4];
            r12 = rbp_1;
            r14_1 = -0x8000000000000000;
            rcx_1 = r13_1;
        }
        else
        {
            if r14_1 == -0x8000000000000000
            {
                rdi_6 = "missing field: either `mem_backe…";
                rsi_6 = 0x42;
                goto 'label_556bce;
            }
            
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            var_118_1 = var_158_1;
            rbp_1 = *var_128_1[8];
            r12 = 1;
            var_190_1 = "PUT /snapshot/load: mem_file_pat…";
            rax = 0;
            rcx_1 = r14_1;
        }
        *var_d8[8] = var_178;
        result_2 = var_188;
        let mut rsi_1: i8 = 1;
        
        if (rbp_1 & 1) == 0
        {
            rsi_1 = *var_128_1[9];
        }
        
        let var_170: i128;
        let var_a8_1: i128 = var_170;
        let mut var_c8: i128;
        var_98 = *var_c8[8];
        var_c8 = rcx_1;
        var_c8 = var_118_1;
        *var_b8[8] = rax;
        *var_b8[9] = var_198;
        *var_b8[0xc] = var_198;
        *var_98[8] = rsi_1;
        *var_98[9] = *var_128_1[0xa];
        var_e8 = 0x13;
        let mut var_108: i128;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &var_108, &var_e8);
        
        if r12 != 0
        {
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_108, var_190_1, 0x52);
        }
        
        let zmm0_2: i128 = var_108;
        let var_f8: i128;
        *arg1.byte_offset(0x18) = var_f8;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = 0;
        
        if r13_1 != -0x8000000000000000
        {
            /* tailcall */
            return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1485ca768f6a6c3c(r14_1, *var_158_1[8]);
        }
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
    }
    
    result
}
