
  fn binary::daemon::redirect_to_dev_null::hc6ab844550b7c720() -> i64

{
    let mut var_78: *const i8;
    let mut var_50: *mut *mut [i8; 0x0];
    
    if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3
    {
        var_50 = &data_1ce7270;
        let var_48_1: i64 = 1;
        let var_40_1: i64 = 8;
        let var_38_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce72a0);
        var_78 = &data_1b00a3a[0x14];
        let var_70_1: i64 = 0xe;
        let var_68_1: *const i8 = &data_1b00a3a[0x14];
        let var_60_1: i64 = 0xe;
        let var_58_1: i64 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
    }
    
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb9a4be9cb77641a7(&var_50, &data_1b00afe, 9);
    let mut file: *mut i8;
    let mut rdx_2: i64;
    file = core::result::Result$LT$T$C$E$GT$::unwrap::he1509067752922b2(&var_50);
    let fd: i32 = open(file, 2, 0);
    
    if fd < 0
    {
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() != 0
        {
            var_50 = &data_1ce7290;
            let var_48_3: i64 = 1;
            let var_40_3: i64 = 8;
            let var_38_3: i128 = {0};
            let rax_6: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce72d0);
            var_78 = &data_1b00a3a[0x14];
            let var_70_3: i64 = 0xe;
            let var_68_3: *const i8 = &data_1b00a3a[0x14];
            let var_60_3: i64 = 0xe;
            let var_58_3: i64 = rax_6;
            log::__private_api::log::h450dfdf51a11f9e0(&var_50, 1, &var_78);
        }
    }
    else
    {
        dup2(fd, 0);
        dup2(fd, 1);
        dup2(fd, 2);
        close(fd);
        
        if core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2
        {
            var_50 = &data_1ce7280;
            let var_48_2: i64 = 1;
            let var_40_2: i64 = 8;
            let var_38_2: i128 = {0};
            let rax_4: i64 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce72e8);
            var_78 = &data_1b00a3a[0x14];
            let var_70_2: i64 = 0xe;
            let var_68_2: *const i8 = &data_1b00a3a[0x14];
            let var_60_2: i64 = 0xe;
            let var_58_2: i64 = rax_4;
            log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(file, rdx_2)
}
