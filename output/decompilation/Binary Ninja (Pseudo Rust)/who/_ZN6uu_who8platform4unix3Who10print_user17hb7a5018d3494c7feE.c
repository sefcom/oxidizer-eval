
  fn uu_who::platform::unix::Who::print_user::hb7a5018d3494c7fe(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let mut var_1b0: i64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdbc64a9c3b715b62(&var_1b0, &data_4192a0[4], 4);
    let mut var_e8: *mut *mut c_void;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_e8, arg2);
    let var_e0: i64;
    std::path::PathBuf::push::h73b92207671fa87e(&var_1b0, var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e8);
    let var_1a8: i64;
    std::fs::metadata::ha1d25b3542fa29b7(&var_e8, var_1a8);
    let rdi_5: *mut *mut c_void = var_e8;
    let mut var_198: i64;
    let mut var_190: *const i8;
    let mut var_188: i64;
    let mut rbp_1: i32;
    
    if rdi_5 == 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6d0772277f38ed34(2, var_e0);
        rbp_1 = 0x3f;
        'label_46888d:
        var_190 = "  ?()failed to canonicalize ";
        var_188 = 3;
        var_198 = -0x8000000000000000;
        
        if *arg1.byte_offset(0x18) != 0
        {
            goto 'label_46881a;
        }
        
        goto 'label_4688bc;
    }
    
    let var_b0: i8;
    let mut rbp: i64;
    rbp = (var_b0 & 0x10) == 0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6d0772277f38ed34(rdi_5, var_e0);
    let mut r14_1: i64;
    r14_1 = rbp;
    rbp_1 = (r14_1 << 1) + 0x2b;
    let var_80: i64;
    
    if var_80 == 0
    {
        goto 'label_46888d;
    }
    
    uu_who::platform::unix::idle_string::hf7cff6d29f8898c5(&var_198, var_80);
    let mut result: i64;
    let mut var_1e8: i64;
    let mut var_1d8: fn(arg1: *mut c_void, arg2: i64) -> i64;
    let mut var_1d0: i64;
    let var_1c0: fn(arg1: *mut c_void, arg2: i64) -> i64;
    let mut r14_2: fn(arg1: *mut c_void, arg2: i64) -> i64;
    
    if *arg1.byte_offset(0x18) == 0
    {
        'label_4688bc:
        uucore::features::utmpx::Utmpx::host::hfb1a95bf3e0888e1(&var_1e8, arg2);
        r14_2 = var_1d8;
        let mut var_180: *mut i64;
        let mut var_178: fn(arg1: *mut c_void, arg2: i64) -> i64;
        let mut var_168: i128;
        
        if r14_2 == 0
        {
            'label_46886c:
            let var_158_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = var_1d8;
            var_168 = var_1e8;
        }
        else
        {
            'label_4688d1:
            var_180 = &var_1e8;
            var_178 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_4fefa8;
            let var_e0_1: i64 = 2;
            let var_c8_1: i64 = 0;
            let var_d8_1: *mut *mut i64 = &var_180;
            let var_d0_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_1d0, &var_e8);
            var_168 = var_1d0;
            let var_158_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = var_1c0;
        }
        
        let mut var_128: ();
        uucore::features::utmpx::Utmpx::user::h7da4603721cbda8f(&var_128, arg2);
        let mut var_110: ();
        uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_110, arg2);
        let var_100: i64;
        let var_148_1: i64 = var_100;
        uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_180, arg2);
        let mut var_1ec: i32 = *arg2.byte_offset(4);
        let mut var_f8: *mut i32 = &var_1ec;
        let var_f0_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        var_e8 = &data_418a60;
        let var_e0_2: i64 = 1;
        let var_c8_2: i64 = 0;
        let var_d8_2: *mut *mut i32 = &var_f8;
        let var_d0_2: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_1d0, &var_e8);
        let var_d8_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = var_1c0;
        var_e8 = var_1d0;
        let var_230_1: i64 = var_188;
        let var_170: i64;
        let var_240_1: i64 = var_170;
        let var_200_1: i64 = 0;
        let var_120: i64;
        let var_118: i64;
        let var_108: i64;
        uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, var_120, var_118, rbp_1, 
            var_108, var_178, var_190, var_e0_2, var_168, 1);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_180);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_110);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_168);
        
        if r14_2 != 0
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_1e8);
        }
        
        result = 0;
    }
    else
    {
        'label_46881a:
        uucore::features::utmpx::Utmpx::canon_host::h6d7ae94323da986c(&var_e8, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h20da148c3d372166(&var_1d0, &var_e8);
        let rax_1: i64 = var_1d0;
        let result_2: i64;
        result = result_2;
        r14_2 = var_1c0;
        
        if rax_1 != -0x8000000000000000
        {
            var_1e8 = rax_1;
            let result_1: i64 = result;
            var_1d8 = r14_2;
            
            if r14_2 != 0
            {
                goto 'label_4688d1;
            }
            
            goto 'label_46886c;
        }
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h23cc7d1edb76b1fb(&var_198);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9526885fff10d968(var_1b0, var_1a8);
    result
}
