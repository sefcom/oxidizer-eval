
  fn binary::daemon::close_all_fds::h475452edc915d318() -> u64

{
    let mut var_70: *const i8;
    let mut var_48: *mut *mut c_void;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_48 = &data_1ce7300;
        let var_40_1: i64 = 1;
        let var_38_1: i64 = 8;
        let var_30_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7330);
        var_70 = &data_1b00a3a[0x14];
        let var_68_1: i64 = 0xe;
        let var_60_1: *const i8 = &data_1b00a3a[0x14];
        let var_58_1: i64 = 0xe;
        let var_50_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_48, 3, &var_70);
    }
    
    let rax_2: i64 = sysconf(4);
    let mut result: u64;
    
    if rax_2 <= 0
    {
        result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if result != 0
        {
            var_48 = &data_1ce7320;
            let var_40_3: i64 = 1;
            let var_38_3: i64 = 8;
            let var_30_3: i128 = {0};
            let rax_4: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7348);
            var_70 = &data_1b00a3a[0x14];
            let var_68_3: i64 = 0xe;
            let var_60_3: *const i8 = &data_1b00a3a[0x14];
            let var_58_3: i64 = 0xe;
            let var_50_3: i64 = rax_4;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_48, 1, &var_70);
        }
    }
    else
    {
        let rbx_1: i32 = rax_2;
        
        if rbx_1 >= 4
        {
            let mut fd: i32 = 3;
            let mut fd_1: i32;
            
            do
            {
                fd_1 = fd + 1;
                close(fd);
                fd = fd_1;
            } while rbx_1 != fd_1;
        }
        
        result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if result >= 3
        {
            var_48 = &data_1ce7310;
            let var_40_2: i64 = 1;
            let var_38_2: i64 = 8;
            let var_30_2: i128 = {0};
            let rax_3: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7360);
            var_70 = &data_1b00a3a[0x14];
            let var_68_2: i64 = 0xe;
            let var_60_2: *const i8 = &data_1b00a3a[0x14];
            let var_58_2: i64 = 0xe;
            let var_50_2: i64 = rax_3;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_48, 3, &var_70);
        }
    }
    
    result
}
