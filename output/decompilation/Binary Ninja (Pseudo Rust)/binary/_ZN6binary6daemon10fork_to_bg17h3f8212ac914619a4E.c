
  fn binary::daemon::fork_to_bg::h3f8212ac914619a4() -> u64

{
    let mut var_58: *const i8;
    let mut var_30: *mut *mut [i8; 0x0];
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_30 = &data_1ce71f8;
        let var_28_1: i64 = 1;
        let var_20_1: i64 = 8;
        let var_18_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7228);
        var_58 = &data_1b00a3a[0x14];
        let var_50_1: i64 = 0xe;
        let var_48_1: *const i8 = &data_1b00a3a[0x14];
        let var_40_1: i64 = 0xe;
        let var_38_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_30, 3, &var_58);
    }
    
    if fork() <= 0
    {
        if setsid() < 0
        {
            if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
            {
                var_30 = &data_1ce7208;
                let var_28_3: i64 = 1;
                let var_20_3: i64 = 8;
                let var_18_3: i128 = {0};
                let rax_7: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7258);
                var_58 = &data_1b00a3a[0x14];
                let var_50_3: i64 = 0xe;
                let var_48_3: *const i8 = &data_1b00a3a[0x14];
                let var_40_3: i64 = 0xe;
                let var_38_3: i64 = rax_7;
                log::__private_api::log::h450dfdf51a11f9e0(&var_30, 1, &var_58);
            }
            
            _exit(1);
            /* no return */
        }
        
        if fork() <= 0
        {
            let result: u64 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
            
            if result <= 2
            {
                return result;
            }
            
            var_30 = &data_1ce7218;
            let var_28_2: i64 = 1;
            let var_20_2: i64 = 8;
            let var_18_2: i128 = {0};
            let rax_5: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7240);
            var_58 = &data_1b00a3a[0x14];
            let var_50_2: i64 = 0xe;
            let var_48_2: *const i8 = &data_1b00a3a[0x14];
            let var_40_2: i64 = 0xe;
            let var_38_2: i64 = rax_5;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_30, 3, &var_58);
        }
    }
    
    _exit(0);
    /* no return */
}
