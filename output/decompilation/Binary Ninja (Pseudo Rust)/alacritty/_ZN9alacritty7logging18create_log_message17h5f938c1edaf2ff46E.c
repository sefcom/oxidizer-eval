
  fn alacritty::logging::create_log_message::h5f938c1edaf2ff46(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_c8: i64 = arg3;
    let var_c0: i64 = arg4;
    let mut var_b8: i64 = arg5;
    let r9: i32;
    let var_b0: i32 = r9;
    let mut rax: i64;
    let mut rdx: u64;
    rax = std::time::Instant::elapsed::h537da767ad82472a(&var_b8);
    let mut var_180: i64 = rax;
    let mut var_1b4: i32 = rdx;
    let mut var_a8: *mut i64 = *arg2.byte_offset(0x30);
    let mut var_110: *mut i64 = &var_180;
    let var_108: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
    let mut var_100: *mut i32 = &var_1b4;
    let var_f8: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
    let var_f0: *mut i64 = &var_a8;
    let var_e8: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$log..Level$u20$as$u20$core..fmt..Display$GT$::fmt::hf3e2f8abd8007cc2;
    let var_e0: *mut i64 = &var_c8;
    let var_d8: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    let mut var_178: *mut *mut c_void = &data_c830e8;
    let var_170: i64 = 5;
    let var_158: *mut c_void = &data_5036d8;
    let var_150: i64 = 4;
    let var_168: *mut *mut i64 = &var_110;
    let mut var_160: i64 = 4;
    let mut var_1b0: i128;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_1b0, 0, rdx, &var_178);
    let mut rdx_1: u64 = *arg2.byte_offset(0x58);
    let rax_2: i64 = *arg2.byte_offset(0x68);
    let mut rsi: i64;
    
    if rdx_1 == 1
    {
        if rax_2 == 0
        {
            let rax_6: *mut i64 = *arg2.byte_offset(0x50);
            rsi = *rax_6;
            rdx_1 = rax_6[1];
        }
        else
        {
            rsi = 0;
        }
    }
    else if rdx_1 != 0 || rax_2 != 0
    {
        rsi = 0;
    }
    else
    {
        rsi = 1;
        rdx_1 = 0;
    }
    
    let mut var_128: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_128, rsi, rdx_1, 
        arg2.byte_offset(0x50));
    let var_120: i64;
    let var_118: i64;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
        &var_100, 0xa, var_120, var_118);
    var_110 = nullptr;
    let var_108_1: i64 = var_118;
    let var_d0: i16 = 1;
    let var_1a0: i64;
    let mut rsi_2: i64;
    let mut var_198: i64;
    
    if var_1a0 > 0xffff
    {
        let mut rax_7: i64;
        let mut rdx_6: i64;
        rax_7 = core::str::iter::SplitInternal$LT$P$GT$::next::hbbc56282d5af3f97(&var_110);
        rsi_2 = var_1a0;
        
        if rax_7 != 0
        {
            var_198 = rax_7;
            let var_190_2: i64 = rdx_6;
            var_178 = &data_c827a0;
            let var_170_1: i64 = 1;
            let var_168_1: i64 = 8;
            var_160 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_178);
            /* no return */
        }
    }
    else
    {
        loop
        {
            let mut rax_3: i64;
            let mut rdx_3: u64;
            rax_3 = core::str::iter::SplitInternal$LT$P$GT$::next::hbbc56282d5af3f97(&var_110);
            
            if rax_3 == 0
            {
                break;
            }
            
            var_198 = rax_3;
            let var_190_1: u64 = rdx_3;
            var_a8 = &var_198;
            let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            let var_98_1: *mut i128 = &data_4e8b60;
            let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            let var_88_1: i64 = 0;
            let var_80_1: i16 = var_1a0;
            let mut var_78: *mut c_void = &data_c82f40;
            let var_70_1: i64 = 2;
            let var_58_1: *mut c_void = &data_503798;
            let var_50_1: i64 = 2;
            let var_68_1: *mut *mut i64 = &var_a8;
            let var_60_1: i64 = 3;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_48, 0, rdx_3, 
                &var_78);
            let mut var_148: i128 = var_48;
            let var_38: i64;
            let var_138_1: i64 = var_38;
            let rsi_1: i64 = *var_148[8];
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_1b0, rsi_1, var_38 + rsi_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_148);
        }
        
        rsi_2 = var_1a0;
    }
    alloc::string::String::truncate::h4c9243e558c5f483(&var_1b0, rsi_2 - var_1a0);
    arg1[1] = var_1a0;
    *arg1 = var_1b0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_128)
}
