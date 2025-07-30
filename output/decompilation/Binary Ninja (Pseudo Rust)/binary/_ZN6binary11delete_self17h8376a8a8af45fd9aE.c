
  fn binary::delete_self::h8376a8a8af45fd9a() -> u64

{
    let mut var_78: i128;
    std::env::current_exe::hba8dd19674473539(&var_78);
    let mut var_40: i128;
    core::result::Result$LT$T$C$E$GT$::unwrap::hfe1546b7d02f4ad7(&var_40, &var_78);
    let mut var_a0: *mut c_void;
    let mut var_60: i64;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        let mut var_18: i128 = var_40;
        let mut var_28: *mut i128 = &var_18;
        let var_20_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
        var_78 = &data_1ce6ff8;
        *var_78[8] = 1;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut i128 = &var_28;
        var_60 = 1;
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7040);
        var_a0 = &data_1b0013d;
        let var_98_1: i64 = 6;
        let var_90_1: *mut c_void = &data_1b0013d;
        let var_88_1: i64 = 6;
        let var_80_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_78, 3, &var_a0);
    }
    
    let var_30: i64;
    let var_68_2: i64 = var_30;
    var_78 = var_40;
    let rax_3: *mut c_void = std::fs::remove_file::h3e7926510a6b8c03(&var_78);
    var_a0 = rax_3;
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_a0);
    let result: u64 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
    
    if rax_3 == 0
    {
        if result > 2
        {
            var_78 = &data_1ce7018;
            *var_78[8] = 1;
            let var_68_4: i64 = 8;
            var_60 = {0};
            let rax_5: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7058);
            var_a0 = &data_1b0013d;
            let var_98_3: i64 = 6;
            let var_90_3: *mut c_void = &data_1b0013d;
            let var_88_3: i64 = 6;
            let var_80_3: i64 = rax_5;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_78, 3, &var_a0);
        }
    }
    else if result != 0
    {
        var_78 = &data_1ce7008;
        *var_78[8] = 1;
        let var_68_3: i64 = 8;
        var_60 = {0};
        let rax_4: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7070);
        var_a0 = &data_1b0013d;
        let var_98_2: i64 = 6;
        let var_90_2: *mut c_void = &data_1b0013d;
        let var_88_2: i64 = 6;
        let var_80_2: i64 = rax_4;
        return log::__private_api::log::h450dfdf51a11f9e0(&var_78, 1, &var_a0);
    }
    
    result
}
