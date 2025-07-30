
  uint64_t binary::daemon::check_lock::h88dc1ba9caa4a2ed()

{
    char const* const var_a8;
    char* file;
    char const* const var_98;
    char const (** const var_80)[0x0];
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_80 = &data_1ce7378;
        int64_t var_78_1 = 1;
        int64_t var_70_1 = 8;
        int64_t var_68;
        var_68 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce73d8);
        var_a8 = &data_1b00a3a[0x14];
        file = 0xe;
        var_98 = &data_1b00a3a[0x14];
        int64_t var_90_1 = 0xe;
        int64_t var_88_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_80, 3, &var_a8);
    }
    
    int32_t var_4c = geteuid();
    int32_t* var_48 = &var_4c;
    int64_t (* var_40)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h590ce492d669b181;
    var_80 = &data_1ce7398;
    int64_t var_78_2 = 1;
    int64_t var_60 = 0;
    int32_t** var_70_2 = &var_48;
    int64_t var_68_1 = 1;
    void var_38;
    core::option::Option$LT$T$GT$::map_or_else::h177781a9cee4dfe1(&var_38, &var_80);
    _$LT$T$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h539e9514334bfe11(&var_a8, &var_38);
    int32_t rbp;
    
    if (!(0 + -(var_a8)))
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..ffi..c_str..CString$C$alloc..ffi..c_str..NulError$GT$$GT$::hcfeb4ce00913d88e(&var_a8);
        
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
        {
            var_80 = &data_1ce7388;
            int64_t var_78_4 = 1;
            int64_t var_70_4 = 8;
            var_68_1 = {0};
            int64_t rax_9 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7438);
            var_a8 = &data_1b00a3a[0x14];
            int64_t var_a0_1 = 0xe;
            char const* const var_98_2 = &data_1b00a3a[0x14];
            int64_t var_90_3 = 0xe;
            int64_t var_88_3 = rax_9;
            log::__private_api::log::h450dfdf51a11f9e0(&var_80, 1, &var_a8);
        }
        
        rbp = 0;
    }
    else
    {
        int32_t rax_4 = open(file, 0x42, 0x180);
        
        if (rax_4 < 0)
        {
            if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
            {
                var_80 = &data_1ce73a8;
                int64_t var_78_5 = 1;
                int64_t var_70_5 = 8;
                var_68_1 = {0};
                int64_t rax_11 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7420);
                var_a8 = &data_1b00a3a[0x14];
                int64_t var_a0_2 = 0xe;
                char const* const var_98_3 = &data_1b00a3a[0x14];
                int64_t var_90_4 = 0xe;
                int64_t var_88_4 = rax_11;
                log::__private_api::log::h450dfdf51a11f9e0(&var_80, 1, &var_a8);
            }
            
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(file, 
                var_98);
            rbp = 0;
        }
        else
        {
            int32_t rax_5 = flock(rax_4, 6);
            uint64_t rax_6 = core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6();
            rbp = !rax_5;
            
            if (!rax_5)
            {
                if (rax_6 > 2)
                {
                    var_80 = &data_1ce73b8;
                    int64_t var_78_6 = 1;
                    int64_t var_70_6 = 8;
                    var_68_1 = {0};
                    int64_t rax_12 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce73f0);
                    var_a8 = &data_1b00a3a[0x14];
                    int64_t var_a0_3 = 0xe;
                    char const* const var_98_4 = &data_1b00a3a[0x14];
                    int64_t var_90_5 = 0xe;
                    int64_t var_88_5 = rax_12;
                    log::__private_api::log::h450dfdf51a11f9e0(&var_80, 3, &var_a8);
                }
            }
            else if (rax_6 > 1)
            {
                var_80 = &data_1ce73c8;
                int64_t var_78_3 = 1;
                int64_t var_70_3 = 8;
                var_68_1 = {0};
                int64_t rax_7 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce7408);
                var_a8 = &data_1b00a3a[0x14];
                int64_t var_a0 = 0xe;
                char const* const var_98_1 = &data_1b00a3a[0x14];
                int64_t var_90_2 = 0xe;
                int64_t var_88_2 = rax_7;
                log::__private_api::log::h450dfdf51a11f9e0(&var_80, 2, &var_a8);
            }
            
            core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::h14ef6a5fc8aed95a(file, 
                var_98);
        }
    }
    
    return rbp;
}
