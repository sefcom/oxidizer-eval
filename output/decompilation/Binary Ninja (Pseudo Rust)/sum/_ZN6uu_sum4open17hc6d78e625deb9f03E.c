
  fn uu_sum::open::hc6d78e625deb9f03(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf36c24ac2157b89c(arg2, arg3, "-: No such file or directory0.0.…", 1) == 0
    {
        let mut var_d8: *mut i8 = arg2;
        let var_d0_1: u64 = arg3;
        let mut var_128: *mut i64;
        let mut var_118: i64;
        let mut var_f8: *mut i128;
        let mut var_c8: *mut c_void;
        let mut rax_4: *mut c_void;
        let mut rax_5: *mut i128;
        let mut rcx_1: *mut *mut c_void;
        
        if std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3) == 0
        {
            std::fs::metadata::h8576c1285dae9481(&var_c8, arg2);
            let rdi_3: *mut c_void = var_c8;
            let var_c0: i64;
            
            if rdi_3 == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf1d72a60c818bfa9(2, var_c0);
                var_118 = 0;
                let var_110_2: *mut i8 = arg2;
                let var_108_2: u64 = arg3;
                let var_100_2: i8 = 0;
                var_128 = &var_118;
                let var_120_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_4 = &data_512428;
                goto 'label_4ad17b;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf1d72a60c818bfa9(rdi_3, var_c0);
            std::fs::File::open::h2e5b1f9e9ac3c989(&var_c8, &var_d8);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hffc4471fbb8da2aa(&var_f8, &var_c8);
            rax_5 = var_f8;
            let var_f0: i32;
            
            if rax_5 != 0
            {
                rcx_1 = var_f0;
                goto 'label_4ad1cf;
            }
            
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h1bc61bed8d85a888(var_f0);
            arg1[2] = &data_512448;
            *arg1 = 0;
        }
        else
        {
            var_118 = 0;
            let var_110_1: *mut i8 = arg2;
            let var_108_1: u64 = arg3;
            let var_100_1: i8 = 0;
            var_128 = &var_118;
            let var_120_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax_4 = &data_512408;
            'label_4ad17b:
            var_c8 = rax_4;
            let var_c0_1: i64 = 2;
            let var_a8_1: i64 = 0;
            let var_b8_1: *mut *mut i64 = &var_128;
            let var_b0_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h820392659395b4d8(&var_f8, &var_c8);
            let var_e0_1: i32 = 2;
            rax_5 = alloc::boxed::Box$LT$T$GT$::new::hbb7787c82d15b868(&var_f8);
            rcx_1 = &data_5124d8;
            'label_4ad1cf:
            arg1[1] = rax_5;
            arg1[2] = rcx_1;
            *arg1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h9d9b126e7e029ca4(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        arg1[2] = &data_512548;
        *arg1 = 0;
    }
    
    arg1
}
