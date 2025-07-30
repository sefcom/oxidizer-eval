
  fn binary::daemon::main::hc30634c30f3261a4() -> u64

{
    let mut var_88: *const i8;
    let mut var_60: *mut *mut c_void;
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_60 = &data_1ce7118;
        let var_58_1: i64 = 1;
        let var_50_1: i64 = 8;
        let var_48_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7168);
        var_88 = &data_1b00a3a[0x14];
        let var_80_1: i64 = 0xe;
        let var_78_1: *const i8 = &data_1b00a3a[0x14];
        let var_70_1: i64 = 0xe;
        let var_68_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_60, 3, &var_88);
    }
    
    if binary::daemon::check_lock::h88dc1ba9caa4a2ed() == 0
    {
        let result: u64 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if result == 0
        {
            return result;
        }
        
        var_60 = &data_1ce7158;
        let var_58_5: i64 = 1;
        let var_50_5: i64 = 8;
        let var_48_5: i128 = {0};
        let rax_11: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7180);
        var_88 = &data_1b00a3a[0x14];
        let var_80_5: i64 = 0xe;
        let var_78_5: *const i8 = &data_1b00a3a[0x14];
        let var_70_5: i64 = 0xe;
        let var_68_5: i64 = rax_11;
        return log::__private_api::log::h450dfdf51a11f9e0(&var_60, 1, &var_88);
    }
    
    binary::daemon::fork_to_bg::h3f8212ac914619a4();
    binary::daemon::redirect_to_dev_null::hc6ab844550b7c720();
    binary::daemon::close_all_fds::h475452edc915d318();
    umask(0);
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb9a4be9cb77641a7(&var_60, &data_1b0099f, 1);
    let mut rax_3: *mut i8;
    let mut rdx_2: i64;
    rax_3 = core::result::Result$LT$T$C$E$GT$::unwrap::he1509067752922b2(&var_60);
    let rax_4: i32 = chdir(rax_3, &data_1ce7198);
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(rax_3, rdx_2);
    
    if rax_4 != 0 && core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
    {
        var_60 = &data_1ce7128;
        let var_58_2: i64 = 1;
        let var_50_2: i64 = 8;
        let var_48_2: i128 = {0};
        let rax_6: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce71b0);
        var_88 = &data_1b00a3a[0x14];
        let var_80_2: i64 = 0xe;
        let var_78_2: *const i8 = &data_1b00a3a[0x14];
        let var_70_2: i64 = 0xe;
        let var_68_2: i64 = rax_6;
        log::__private_api::log::h450dfdf51a11f9e0(&var_60, 1, &var_88);
    }
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2
    {
        var_60 = &data_1ce7138;
        let var_58_3: i64 = 1;
        let var_50_3: i64 = 8;
        let var_48_3: i128 = {0};
        let rax_8: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce71c8);
        var_88 = &data_1b00a3a[0x14];
        let var_80_3: i64 = 0xe;
        let var_78_3: *const i8 = &data_1b00a3a[0x14];
        let var_70_3: i64 = 0xe;
        let var_68_3: i64 = rax_8;
        log::__private_api::log::h450dfdf51a11f9e0(&var_60, 3, &var_88);
    }
    
    loop
    {
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
        {
            var_60 = &data_1ce7148;
            let var_58_4: i64 = 1;
            let var_50_4: i64 = 8;
            let var_48_4: i128 = {0};
            let rax_10: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce71e0);
            var_88 = &data_1b00a3a[0x14];
            let var_80_4: i64 = 0xe;
            let var_78_4: *const i8 = &data_1b00a3a[0x14];
            let var_70_4: i64 = 0xe;
            let var_68_4: i64 = rax_10;
            log::__private_api::log::h450dfdf51a11f9e0(&var_60, 3, &var_88);
        }
        
        std::thread::sleep::he6d0c8736a470946(0x3c, 0);
    }
}
