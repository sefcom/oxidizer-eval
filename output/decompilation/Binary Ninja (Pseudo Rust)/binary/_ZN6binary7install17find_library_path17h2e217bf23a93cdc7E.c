
  fn binary::install::find_library_path::h2e217bf23a93cdc7(arg1: *mut i64) -> i64

{
    let mut var_e0: *const i8;
    let mut var_b8: *mut *mut c_void;
    let mut var_a0: i128;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_b8 = &data_1ce6df0;
        let var_b0_1: i64 = 1;
        let var_a8_1: i64 = 8;
        var_a0 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6e20);
        var_e0 = &data_45022a[0x15];
        let var_d8_1: i64 = 0xf;
        let var_d0_1: *const i8 = &data_45022a[0x15];
        let var_c8_1: i64 = 0xf;
        let var_c0_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_e0);
    }
    
    let mut s: i128;
    __builtin_memset(&s, 0, 0x20);
    let mut rax_2: i32;
    rax_2 = dladdr(strerror, &s) == 0;
    let r14: *mut i8 = s;
    
    if (r14 == 0 | rax_2) != 1
    {
        let mut var_60: i32;
        core::ffi::c_str::CStr::to_str::hfff95a411164d6f7(&var_60, r14, strlen(r14) + 1);
        
        if var_60 != 1
        {
            let mut var_88: i128;
            let var_58: i64;
            let var_50: u64;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he316f2bb80969970(&var_88, var_58, var_50);
            std::path::PathBuf::pop::h1b25675dc618eb21(&var_88);
            
            if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
            {
                let mut var_20: i128 = var_88;
                let mut var_70: *mut i128 = &var_20;
                let var_68_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                var_b8 = &data_1ce6e00;
                let var_b0_3: i64 = 1;
                *var_a0[8] = 0;
                let var_a8_3: *mut *mut i128 = &var_70;
                var_a0 = 1;
                let rax_8: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6e38);
                var_e0 = &data_45022a[0x15];
                let var_d8_3: i64 = 0xf;
                let var_d0_3: *const i8 = &data_45022a[0x15];
                let var_c8_3: i64 = 0xf;
                let var_c0_3: i64 = rax_8;
                log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_e0);
            }
            
            let result: i64;
            arg1[2] = result;
            *arg1 = var_88;
            return result;
        }
    }
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 1
    {
        var_b8 = &data_1ce6e10;
        let var_b0_2: i64 = 1;
        let var_a8_2: i64 = 8;
        let var_a0_1: i128 = {0};
        let rax_5: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6e50);
        var_e0 = &data_45022a[0x15];
        let var_d8_2: i64 = 0xf;
        let var_d0_2: *const i8 = &data_45022a[0x15];
        let var_c8_2: i64 = 0xf;
        let var_c0_2: i64 = rax_5;
        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 2, &var_e0);
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he316f2bb80969970(arg1, "/libweekQ", 4)
}
