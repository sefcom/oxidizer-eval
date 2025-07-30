
  uint64_t binary::daemon::close_all_fds::h475452edc915d318()

{
    char const* const var_70;
    void** const var_48;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_48 = &data_1ce7300;
        int64_t var_40_1 = 1;
        int64_t var_38_1 = 8;
        int128_t var_30_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7330);
        var_70 = &data_1b00a3a[0x14];
        int64_t var_68_1 = 0xe;
        char const* const var_60_1 = &data_1b00a3a[0x14];
        int64_t var_58_1 = 0xe;
        int64_t var_50_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_48, 3, &var_70);
    }
    
    int64_t rax_2 = sysconf(4);
    uint64_t result;
    
    if (rax_2 <= 0)
    {
        result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if (result)
        {
            var_48 = &data_1ce7320;
            int64_t var_40_3 = 1;
            int64_t var_38_3 = 8;
            int128_t var_30_3 = {0};
            int64_t rax_4 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7348);
            var_70 = &data_1b00a3a[0x14];
            int64_t var_68_3 = 0xe;
            char const* const var_60_3 = &data_1b00a3a[0x14];
            int64_t var_58_3 = 0xe;
            int64_t var_50_3 = rax_4;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_48, 1, &var_70);
        }
    }
    else
    {
        int32_t rbx_1 = rax_2;
        
        if (rbx_1 >= 4)
        {
            int32_t fd = 3;
            int32_t fd_1;
            
            do
            {
                fd_1 = fd + 1;
                close(fd);
                fd = fd_1;
            } while (rbx_1 != fd_1);
        }
        
        result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
        
        if (result >= 3)
        {
            var_48 = &data_1ce7310;
            int64_t var_40_2 = 1;
            int64_t var_38_2 = 8;
            int128_t var_30_2 = {0};
            int64_t rax_3 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7360);
            var_70 = &data_1b00a3a[0x14];
            int64_t var_68_2 = 0xe;
            char const* const var_60_2 = &data_1b00a3a[0x14];
            int64_t var_58_2 = 0xe;
            int64_t var_50_2 = rax_3;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_48, 3, &var_70);
        }
    }
    
    return result;
}
