
  fn uu_tail::uu_tail::hb4d0bd57fdc397ee(arg1: *mut i64) -> u64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_16a: i8 = *arg1.byte_offset(0x4a);
    let var_169: i8 = 1;
    let mut var_150: ();
    uu_tail::follow::watch::Observer::from::h64caa446bdf8d8a2(&var_150, arg1);
    let mut result_1: u64;
    let mut rdx: i64;
    result_1 = uu_tail::follow::watch::Observer::start::he8e1aec2764f4c71(&var_150, arg1);
    let mut result: u64 = result_1;
    
    if result_1 == 0
    {
        let mut var_168: ();
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h262b5fbaa7a6f616(&var_168, arg1[4], arg1[5]);
        let var_158: i64;
        let mut var_c0: i64;
        
        if var_158 == 0
        {
            'label_4a69f3:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::hc1e8b2989ad93a4f(&var_168);
            rbp = 1;
            
            if *arg1.byte_offset(0x4c) == 2
            {
                goto 'label_4a6a5b;
            }
            
            if uu_tail::args::Settings::has_only_stdin::hed926c70477a379c(arg1) != 0
                && *arg1.byte_offset(0x44) == 0
            {
                goto 'label_4a6a5b;
            }
            
            memcpy(&var_c0, &var_150, 0x90);
            let mut result_3: u64;
            let mut rdx_7: i64;
            result_3 = uu_tail::follow::watch::follow::hb7449fea675f32af(&var_c0, arg1);
            
            if result_3 == 0
            {
                rbp = 0;
                'label_4a6a5b:
                uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
                
                if rbp != 0
                {
                    core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::hdbfc2663e25cdaba(&var_150);
                }
                
                return 0;
            }
            
            result = result_3;
        }
        else
        {
            let var_160: *mut *mut i64;
            let mut r14_1: *mut *mut i64 = var_160;
            let mut r12_1: i64 = var_158 * 0x30;
            
            loop
            {
                let mut result_2: u64;
                let mut rdx_3: i64;
                
                if !(0 + -(r14_1[3]))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_c0, "/dev/stdinToo many open files ca…", 0xa);
                    rbp = var_c0;
                    let var_b8: i64;
                    let var_b0: i64;
                    let rax_3: i8 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(r14_1[4], r14_1[5], var_b8, var_b0);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h23581330bde049a4(rbp, 
                        var_b8);
                    
                    if rax_3 == 0
                    {
                        result_2 = uu_tail::tail_file::h810e2a2864f554f6(arg1, &var_16a, r14_1, 
                            r14_1[4], r14_1[5], &var_150, 0);
                    }
                    else
                    {
                        result_2 =
                            uu_tail::tail_stdin::h9b2bb4973e46bb0a(arg1, &var_16a, r14_1, &var_150);
                    }
                }
                else
                {
                    result_2 =
                        uu_tail::tail_stdin::h9b2bb4973e46bb0a(arg1, &var_16a, r14_1, &var_150);
                }
                result = result_2;
                
                if result_2 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::hc1e8b2989ad93a4f(&var_168);
                    break;
                }
                
                r14_1 = &r14_1[6];
                let temp1_1: i64 = r12_1;
                r12_1 -= 0x30;
                
                if temp1_1 == 0x30
                {
                    goto 'label_4a69f3;
                }
            }
            
            core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::hdbfc2663e25cdaba(
                &var_150);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::hdbfc2663e25cdaba(
            &var_150);
    }
    
    result
}
