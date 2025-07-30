
  uint64_t binary::daemon::main::hc30634c30f3261a4()

{
    char const* const var_88;
    void** const var_60;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_60 = &data_1ce7118;
        int64_t var_58_1 = 1;
        int64_t var_50_1 = 8;
        int128_t var_48_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7168);
        var_88 = &data_1b00a3a[0x14];
        int64_t var_80_1 = 0xe;
        char const* const var_78_1 = &data_1b00a3a[0x14];
        int64_t var_70_1 = 0xe;
        int64_t var_68_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_60, 3, &var_88);
    }
    
    if (!binary::daemon::check_lock::h88dc1ba9caa4a2ed())
    {
        uint64_t result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if (!result)
            return result;
        
        var_60 = &data_1ce7158;
        int64_t var_58_5 = 1;
        int64_t var_50_5 = 8;
        int128_t var_48_5 = {0};
        int64_t rax_11 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7180);
        var_88 = &data_1b00a3a[0x14];
        int64_t var_80_5 = 0xe;
        char const* const var_78_5 = &data_1b00a3a[0x14];
        int64_t var_70_5 = 0xe;
        int64_t var_68_5 = rax_11;
        return log::__private_api::log::h450dfdf51a11f9e0(&var_60, 1, &var_88);
    }
    
    binary::daemon::fork_to_bg::h3f8212ac914619a4();
    binary::daemon::redirect_to_dev_null::hc6ab844550b7c720();
    binary::daemon::close_all_fds::h475452edc915d318();
    umask(0);
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb9a4be9cb77641a7(&var_60, &data_1b0099f, 1);
    char* rax_3;
    int64_t rdx_2;
    rax_3 = core::result::Result$LT$T$C$E$GT$::unwrap::he1509067752922b2(&var_60);
    int32_t rax_4 = chdir(rax_3, &data_1ce7198);
    core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(rax_3, rdx_2);
    
    if (rax_4 && core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
    {
        var_60 = &data_1ce7128;
        int64_t var_58_2 = 1;
        int64_t var_50_2 = 8;
        int128_t var_48_2 = {0};
        int64_t rax_6 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce71b0);
        var_88 = &data_1b00a3a[0x14];
        int64_t var_80_2 = 0xe;
        char const* const var_78_2 = &data_1b00a3a[0x14];
        int64_t var_70_2 = 0xe;
        int64_t var_68_2 = rax_6;
        log::__private_api::log::h450dfdf51a11f9e0(&var_60, 1, &var_88);
    }
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2)
    {
        var_60 = &data_1ce7138;
        int64_t var_58_3 = 1;
        int64_t var_50_3 = 8;
        int128_t var_48_3 = {0};
        int64_t rax_8 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce71c8);
        var_88 = &data_1b00a3a[0x14];
        int64_t var_80_3 = 0xe;
        char const* const var_78_3 = &data_1b00a3a[0x14];
        int64_t var_70_3 = 0xe;
        int64_t var_68_3 = rax_8;
        log::__private_api::log::h450dfdf51a11f9e0(&var_60, 3, &var_88);
    }
    
    while (true)
    {
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
        {
            var_60 = &data_1ce7148;
            int64_t var_58_4 = 1;
            int64_t var_50_4 = 8;
            int128_t var_48_4 = {0};
            int64_t rax_10 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce71e0);
            var_88 = &data_1b00a3a[0x14];
            int64_t var_80_4 = 0xe;
            char const* const var_78_4 = &data_1b00a3a[0x14];
            int64_t var_70_4 = 0xe;
            int64_t var_68_4 = rax_10;
            log::__private_api::log::h450dfdf51a11f9e0(&var_60, 3, &var_88);
        }
        
        std::thread::sleep::he6d0c8736a470946(0x3c, 0);
    }
}
