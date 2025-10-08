
  fn uu_sum::open::h97fd496028ff67a9(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    let mut rax_1: *mut i64;
    let mut rcx: *mut c_void;
    let mut rdx_1: i64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd4eb9e54b05204c5(arg2, arg3) == 0
    {
        let mut var_d8: *mut i8 = arg2;
        let var_d0_1: u64 = arg3;
        let mut var_128: *mut i64;
        let mut var_118: i64;
        let mut var_f8: *mut i64;
        let mut var_c8: *mut c_void;
        let mut rax_3: *mut c_void;
        
        if std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3) == 0
        {
            std::fs::metadata::h15734e0affd720b1(&var_c8, arg2);
            let rdi_3: *mut c_void = var_c8;
            let var_c0: i64;
            
            if rdi_3 == 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf120e8ad81360a82(2, var_c0);
                var_118 = 0;
                let var_110_2: *mut i8 = arg2;
                let var_108_2: u64 = arg3;
                let var_100_2: i8 = 0;
                var_128 = &var_118;
                let var_120_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                rax_3 = &data_4e1b78;
                goto 'label_457362;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf120e8ad81360a82(rdi_3, var_c0);
            std::fs::File::open::h42d9f349de7578b2(&var_c8, &var_d8);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbb66ee632401819e(&var_f8, &var_c8);
            rax_1 = var_f8;
            let var_f0: i32;
            
            if rax_1 == 0
            {
                rax_1 = alloc::boxed::Box$LT$T$GT$::new::h3400401390123d8c(var_f0);
                rcx = &data_4e1b98;
                rdx_1 = 0;
            }
            else
            {
                rcx = var_f0;
                rdx_1 = 1;
            }
        }
        else
        {
            var_118 = 0;
            let var_110_1: *mut i8 = arg2;
            let var_108_1: u64 = arg3;
            let var_100_1: i8 = 0;
            var_128 = &var_118;
            let var_120_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax_3 = &data_4e1b58;
            'label_457362:
            var_c8 = rax_3;
            let var_c0_1: i64 = 2;
            let var_a8_1: i64 = 0;
            let var_b8_1: *mut *mut i64 = &var_128;
            let var_b0_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h5edfc5779a6c968c(&var_f8, &var_c8);
            let var_e0_1: i32 = 2;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::hdf1801492e78d9ca(&var_f8);
            rdx_1 = 1;
            rcx = &data_4e1c10;
        }
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hcc811c181a3c74a1(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        rcx = &data_4e1c78;
        rdx_1 = 0;
    }
    
    arg1[1] = rax_1;
    arg1[2] = rcx;
    *arg1 = rdx_1;
    arg1
}
