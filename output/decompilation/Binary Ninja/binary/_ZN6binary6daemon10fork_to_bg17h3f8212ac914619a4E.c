
  uint64_t binary::daemon::fork_to_bg::h3f8212ac914619a4()

{
    char const* const var_58;
    char const (** const var_30)[0x0];
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_30 = &data_1ce71f8;
        int64_t var_28_1 = 1;
        int64_t var_20_1 = 8;
        int128_t var_18_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7228);
        var_58 = &data_1b00a3a[0x14];
        int64_t var_50_1 = 0xe;
        char const* const var_48_1 = &data_1b00a3a[0x14];
        int64_t var_40_1 = 0xe;
        int64_t var_38_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_30, 3, &var_58);
    }
    
    if (fork() <= 0)
    {
        if (setsid() < 0)
        {
            if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
            {
                var_30 = &data_1ce7208;
                int64_t var_28_3 = 1;
                int64_t var_20_3 = 8;
                int128_t var_18_3 = {0};
                int64_t rax_7 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7258);
                var_58 = &data_1b00a3a[0x14];
                int64_t var_50_3 = 0xe;
                char const* const var_48_3 = &data_1b00a3a[0x14];
                int64_t var_40_3 = 0xe;
                int64_t var_38_3 = rax_7;
                log::__private_api::log::h450dfdf51a11f9e0(&var_30, 1, &var_58);
            }
            
            _exit(1);
            /* no return */
        }
        
        if (fork() <= 0)
        {
            uint64_t result = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
            
            if (result <= 2)
                return result;
            
            var_30 = &data_1ce7218;
            int64_t var_28_2 = 1;
            int64_t var_20_2 = 8;
            int128_t var_18_2 = {0};
            int64_t rax_5 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7240);
            var_58 = &data_1b00a3a[0x14];
            int64_t var_50_2 = 0xe;
            char const* const var_48_2 = &data_1b00a3a[0x14];
            int64_t var_40_2 = 0xe;
            int64_t var_38_2 = rax_5;
            return log::__private_api::log::h450dfdf51a11f9e0(&var_30, 3, &var_58);
        }
    }
    
    _exit(0);
    /* no return */
}
