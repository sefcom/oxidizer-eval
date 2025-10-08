
  fn just::recipe::Recipe$LT$D$GT$::run::hef557c87b94c38c2(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void, arg5: i64, arg6: i64, arg7: i8) -> i64

{
    let r14: *mut c_void = *arg3;
    let mut var_b8: i16 = *r14.byte_offset(0x194);
    let mut var_c8: i128 = *r14.byte_offset(0x184);
    let mut var_70: i8;
    just::color::Color::stderr::h04afff4548ac818e(&var_70, &var_c8);
    let var_5f: i8;
    let rax_1: u32 = var_5f;
    let mut var_f8: i8;
    let mut rax_3: i32;
    let mut rcx: i32;
    
    if rax_1 == 0
    {
        var_f8 = 1;
        let mut var_f7_2: i32 = 0;
        var_f7_2 = 0;
        let var_f0_1: i64 = 0xa00000006;
        rax_3 = 6;
        rcx = 1;
    }
    else if rax_1 != 1
    {
        var_f8 = 0;
        let var_f0_2: i64 = 0xa0000000a;
        rax_3 = 0xa;
        rcx = 0;
    }
    else
    {
        let rax_2: i8 = var_70;
        var_f8 = rax_2;
        let mut var_f7_1: i32 = 0;
        var_f7_1 = 0;
        let mut var_f0: i64;
        var_f0 = ((rax_2 ^ 1) << 2) + 6;
        *var_f0[4] = 0xa;
        
        if rax_2 != 0
        {
            rax_3 = 6;
            rcx = 1;
        }
        else
        {
            rax_3 = 0xa;
            rcx = 0;
        }
    }
    
    let mut var_e8: i8 = rcx;
    let mut var_e7: i32 = 0;
    var_e7 = 0;
    let var_e0: i32 = rax_3;
    let var_dc: i32 = 0xa;
    let mut var_a8: *mut i8;
    
    if *r14.byte_offset(0x1a7) >= 2
    {
        var_c8 = &var_f8;
        *var_c8[8] =
            _$LT$ansi_term..ansi..Prefix$u20$as$u20$core..fmt..Display$GT$::fmt::h4f4d4a1a10975a1c;
        var_b8 = arg2.byte_offset(0x90);
        let var_b0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_a8 = &var_e8;
        let var_a0_1: fn(arg1: *mut i8, arg2: i64) -> i64 =
            _$LT$ansi_term..ansi..Suffix$u20$as$u20$core..fmt..Display$GT$::fmt::hcf6335302746b9ae;
        var_70 = &data_830b70;
        let var_68_1: i64 = 4;
        let var_50_1: i64 = 0;
        let var_60_1: *mut i128 = &var_c8;
        let var_58_1: i64 = 3;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
    }
    
    if *r14.byte_offset(0x19a) != 0
    {
        let mut rax_5: i64;
        let mut rdx: i64;
        rax_5 = just::recipe::Recipe$LT$D$GT$::doc::he63458a2ff4e69a8(arg2);
        
        if rax_5 != 0
        {
            let mut var_40: i64 = rax_5;
            let var_38_1: i64 = rdx;
            var_c8 = &var_f8;
            *var_c8[8] = _$LT$ansi_term..ansi..Prefix$u20$as$u20$core..fmt..Display$GT$::fmt::h4f4d4a1a10975a1c;
            var_b8 = &var_40;
            let var_b0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            var_a8 = &var_e8;
            let var_a0_2: fn(arg1: *mut i8, arg2: i64) -> i64 = _$LT$ansi_term..ansi..Suffix$u20$as$u20$core..fmt..Display$GT$::fmt::hcf6335302746b9ae;
            var_70 = &data_830bb0;
            let var_68_2: i64 = 4;
            let var_50_2: i64 = 0;
            let var_60_2: *mut i128 = &var_c8;
            let var_58_2: i64 = 3;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_70);
        }
    }
    
    if *arg2.byte_offset(0xfe) != 0
    {
        var_b8 = *arg3.byte_offset(0x10);
        var_c8 = *arg3;
        let var_90: i64 = 0;
        var_a8 = {0};
        let var_88: *mut c_void = arg4;
        let var_80: i8 = arg7;
        return just::recipe::Recipe$LT$D$GT$::run_script::hf7776548fb8d2f66(arg1, arg2, arg3, arg4, 
            arg5, arg6, &var_c8);
    }
    
    var_b8 = *arg3.byte_offset(0x10);
    var_c8 = *arg3;
    let var_90_1: i64 = 0;
    var_a8 = {0};
    let var_88_1: *mut c_void = arg4;
    let var_80_1: i8 = arg7;
    just::recipe::Recipe$LT$D$GT$::run_linewise::hcd560343e88fb507(arg1, arg2, arg3, arg4, arg5, 
        arg6, &var_c8)
}
