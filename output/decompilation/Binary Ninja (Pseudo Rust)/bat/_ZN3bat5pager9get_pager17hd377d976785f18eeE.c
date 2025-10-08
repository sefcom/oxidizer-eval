
  fn bat::pager::get_pager::hd377d976785f18ee(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let mut r14: i64 = arg3;
    let mut r15: *const i8 = arg2;
    let mut var_a0: i8;
    std::env::var::h86a744ab3a10895a(&var_a0, "BAT_PAGERPAGERsrc/preprocessor.r…");
    let mut var_80: i8;
    std::env::var::h86a744ab3a10895a(&var_80, &data_5a2b9b[0x90]);
    let mut r12: i8 = 0;
    let mut rbp: i8 = 0;
    
    if r15 == 0
    {
        if (var_a0 & 1) == 0
        {
            let var_90: *mut i8;
            r15 = var_90;
            let var_88: i64;
            r14 = var_88;
            rbp = 1;
            r12 = 0;
        }
        else if (var_80 & 1) == 0
        {
            let var_70: *mut i8;
            r15 = var_70;
            let var_68: i64;
            r14 = var_68;
            rbp = 2;
            r12 = 1;
        }
        else
        {
            rbp = 3;
            r14 = 4;
            r15 = "lessOS: wordc";
            r12 = 0;
        }
    }
    
    let mut var_60: i64;
    shell_words::split::h6b79ba6635eb31df(&var_60, r15, r14);
    
    if !(0 + -(var_60))
    {
        let var_50: i64;
        let var_c8_1: i64 = var_50;
        let mut var_d8: i128 = var_60;
        
        if var_50 == 0
        {
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let r15_1: *mut c_void = *var_d8[8];
            let rax_1: i8 = bat::pager::PagerKind::from_bin::h088ae57711f0ac1e(
                *r15_1.byte_offset(8), *r15_1.byte_offset(0x10));
            let r9_1: u32 = rax_1;
            
            if r12 == 0 || rax_1 > 3 || r9_1 == 1
            {
                bat::pager::Pager::new::h0869a180ded80220(&var_60, *r15_1.byte_offset(8), 
                    *r15_1.byte_offset(0x10), r15_1.byte_offset(0x18), var_50 - 1, r9_1, rbp);
            }
            else
            {
                let mut var_b8: i64 = 0;
                let var_b0_1: i64 = 8;
                let var_a8_1: i64 = 0;
                bat::pager::Pager::new::h0869a180ded80220(&var_60, "lessOS: wordc", 4, 8, 0, 1, 2);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_b8);
            }
            
            let var_30: i64;
            arg1[6] = var_30;
            let zmm0_2: i128 = var_60;
            let var_40: i128;
            *arg1.byte_offset(0x20) = var_40;
            *arg1.byte_offset(0x10) = var_50;
            *arg1 = zmm0_2;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_d8);
    }
    else
    {
        *arg1 = -0x7fffffffffffffff;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1489211aaee639b9(&var_80);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1489211aaee639b9(&var_a0)
}
