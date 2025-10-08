
  fn uu_unexpand::open::h50e1d0eba05cf6a0(arg1: *mut i64, arg2: i64, arg3: u64) -> u64

{
    let mut result: u64;
    let mut result_1: u64;
    let mut var_50: *mut c_void;
    
    if std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7c2f39b0c4e545c7(arg2, arg3, "-allfirst-onlyno-utf8--first-onl…", 1) != 0
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            /* tailcall */
            return
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5f0cb91a10fcc150(
                arg1, 
                alloc::boxed::Box$LT$T$GT$::new::h1f109a095c5c9d9e(
                    &std::io::stdio::stdin::INSTANCE::heccb3522b341563b), 
                &data_4e8218);
        }
        
        std::fs::File::open::hed25d90ef79f293b(&var_50, arg2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc507021549390b0e(&result_1, &var_50);
        result = result_1;
        let var_88: i32;
        
        if result == 0
        {
            /* tailcall */
            return
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h5f0cb91a10fcc150(
                arg1, alloc::boxed::Box$LT$T$GT$::new::hbf7503e18e4789e3(var_88), &data_4e81c0);
        }
        
        arg1[1] = result;
        arg1[2] = var_88;
    }
    else
    {
        let mut var_60: i64 = arg2;
        let var_58_1: u64 = arg3;
        let mut var_70: *mut i64 = &var_60;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_50 = &data_4e81a0;
        let var_48_1: i64 = 2;
        let var_30_1: i64 = 0;
        let var_40_1: *mut *mut i64 = &var_70;
        let var_38_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hcf8ba04e84ab02b9(&result_1, &var_50);
        let var_78_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h2a5c3a49f15d6b04(&result_1);
        arg1[1] = result;
        arg1[2] = &data_4e8290;
    }
    *arg1 = 0;
    result
}
