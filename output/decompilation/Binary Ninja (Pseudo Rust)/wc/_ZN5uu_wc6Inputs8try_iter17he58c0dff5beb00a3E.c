
  fn uu_wc::Inputs::try_iter::he58c0dff5beb00a3(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> *mut i64

{
    let rax: i64 = *arg2;
    let mut result: *mut i64;
    let mut var_e0: i64;
    let mut var_d8: i8;
    let mut r13_1: *mut c_void;
    let mut result_2: *mut i64;
    
    if rax == 0
    {
        var_e0 = -0x7fffffffffffffff;
        var_d8 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hb1b1f7e97a75751a(&var_e0);
        result_2 = result;
        r13_1 = &data_531000;
        'label_4b8e75:
        let mut r12_1: i64 = -0x7ffffffffffffffe;
        let mut var_88: i128;
        
        if *arg3 != -0x7ffffffffffffffe
        {
            result = core::ops::function::FnOnce::call_once::h817deecf557940d0(&var_e0, arg3);
            r12_1 = var_e0;
            var_88 = var_d8;
        }
        
        *arg1 = r12_1;
        *arg1.byte_offset(8) = var_88;
        arg1[3] = result_2;
        arg1[4] = r13_1;
        arg1[5] = 0;
    }
    else
    {
        if rax == 1
        {
            let rdi: i64 = arg2[2];
            result = alloc::boxed::Box$LT$T$GT$::new::hca89ae0b97a778fb(rdi, rdi + arg2[3] * 0x18);
            result_2 = result;
            r13_1 = &data_531038;
            goto 'label_4b8e75;
        }
        
        if arg2[1] == -0x7fffffffffffffff
        {
            uu_wc::files0_iter_stdin::h027d8be6f7e7f770(&var_e0);
            result = alloc::boxed::Box$LT$T$GT$::new::hf248821590b359db(&var_e0);
            result_2 = result;
            r13_1 = &data_5310a8;
            goto 'label_4b8e75;
        }
        
        uu_wc::files0_iter_file::h4e3b8ab8e030dfca(&var_e0, arg2[2], arg2[3]);
        let rdx_1: i64 = var_e0;
        result = var_d8;
        let var_d0: i64;
        
        if rdx_1 != -0x7fffffffffffffff
        {
            let var_98: i64;
            let var_30_1: i64 = var_98;
            let var_a8: i128;
            let var_40_1: i128 = var_a8;
            let var_b8: i128;
            let var_50_1: i128 = var_b8;
            let var_c8: i128;
            let var_60_1: i128 = var_c8;
            let mut var_78: i64 = rdx_1;
            let result_1: *mut i64 = result;
            let var_68_1: i64 = var_d0;
            result = alloc::boxed::Box$LT$T$GT$::new::h8a205305a0670f0b(&var_78);
            result_2 = result;
            r13_1 = &data_531070;
            goto 'label_4b8e75;
        }
        
        arg1[1] = result;
        arg1[2] = var_d0;
        *arg1 = -0x7ffffffffffffffd;
    }
    result
}
