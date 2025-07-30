
  int64_t binary::daemon::redirect_to_dev_null::hc6ab844550b7c720()

{
    char const* const var_78;
    char const (** const var_50)[0x0];
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_50 = &data_1ce7270;
        int64_t var_48_1 = 1;
        int64_t var_40_1 = 8;
        int128_t var_38_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce72a0);
        var_78 = &data_1b00a3a[0x14];
        int64_t var_70_1 = 0xe;
        char const* const var_68_1 = &data_1b00a3a[0x14];
        int64_t var_60_1 = 0xe;
        int64_t var_58_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
    }
    
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb9a4be9cb77641a7(&var_50, &data_1b00afe, 9);
    char* file;
    int64_t rdx_2;
    file = core::result::Result$LT$T$C$E$GT$::unwrap::he1509067752922b2(&var_50);
    int32_t fd = open(file, 2, 0);
    
    if (fd < 0)
    {
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
        {
            var_50 = &data_1ce7290;
            int64_t var_48_3 = 1;
            int64_t var_40_3 = 8;
            int128_t var_38_3 = {0};
            int64_t rax_6 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce72d0);
            var_78 = &data_1b00a3a[0x14];
            int64_t var_70_3 = 0xe;
            char const* const var_68_3 = &data_1b00a3a[0x14];
            int64_t var_60_3 = 0xe;
            int64_t var_58_3 = rax_6;
            log::__private_api::log::h450dfdf51a11f9e0(&var_50, 1, &var_78);
        }
    }
    else
    {
        dup2(fd, 0);
        dup2(fd, 1);
        dup2(fd, 2);
        close(fd);
        
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2)
        {
            var_50 = &data_1ce7280;
            int64_t var_48_2 = 1;
            int64_t var_40_2 = 8;
            int128_t var_38_2 = {0};
            int64_t rax_4 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce72e8);
            var_78 = &data_1b00a3a[0x14];
            int64_t var_70_2 = 0xe;
            char const* const var_68_2 = &data_1b00a3a[0x14];
            int64_t var_60_2 = 0xe;
            int64_t var_58_2 = rax_4;
            log::__private_api::log::h450dfdf51a11f9e0(&var_50, 3, &var_78);
        }
    }
    
    return core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(file, 
        rdx_2);
}
