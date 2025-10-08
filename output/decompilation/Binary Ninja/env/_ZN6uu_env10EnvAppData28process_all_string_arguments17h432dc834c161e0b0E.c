
  int128_t* uu_env::EnvAppData::process_all_string_arguments::h432dc834c161e0b0(int128_t* arg1, int16_t* arg2, void* arg3)

{
    int64_t var_110 = 0;
    int64_t var_108 = 8;
    int64_t var_100 = 0;
    char const* const var_a8 = "argv0aOverride the zeroth argume…";
    int64_t var_a0 = 5;
    char const* const var_98 = "chdirDIRchange working directory…";
    int64_t var_90 = 5;
    char const* const var_88 = "fileTSTPi128 as dyn ERANGEEDEADL…";
    int64_t var_80 = 4;
    char const* const var_78 = "ignore-signalSIGset handling of …";
    int64_t var_70 = 0xd;
    char const* const var_68 = "unsetremove variable from the en…";
    int64_t var_60 = 5;
    int128_t var_58 = *U"aCfu";
    int64_t rax = *(arg3 + 8);
    int64_t rcx = *(arg3 + 0x10);
    int64_t var_d8 = rax;
    int64_t var_d0 = rax + rcx * 0x18;
    int64_t var_c8 = 0;
    int64_t rax_1;
    void* rdx;
    rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
    
    if (rdx)
    {
        int64_t rbx_1 = rax_1;
        void* r14_1 = rdx;
        char rbp_1 = 0;
        
        while (true)
        {
            void var_f8;
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, *(r14_1 + 8), 
                *(r14_1 + 0x10));
            char const (** const var_168)[0xeb];
            int64_t var_158;
            int128_t var_128;
            char* var_f0;
            void* var_e8;
            
            if (!((!rbx_1 | rbp_1) & 1))
            {
                if (_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(*(r14_1 + 8), *(r14_1 + 0x10), "---ucannot unset '': Invalid arg…", 2))
                {
                    label_47424a:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc2eed86ca3e5fc9d(&var_168, *(r14_1 + 8), *(r14_1 + 0x10));
                    int64_t var_118_2 = var_158;
                    var_128 = var_168;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb3d6cf7e4aee7804(&var_110, &var_128);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(&var_f8);
                    int64_t rax_24;
                    void* i_3;
                    rax_24 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
                    
                    if (i_3)
                    {
                        int64_t r13_1 = rax_24;
                        void* i_2 = i_3;
                        void* i;
                        
                        do
                        {
                            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, 
                                *(i_2 + 8), *(i_2 + 0x10));
                            
                            if (!((!r13_1 | rbp_1) & 1) && !_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(*(i_2 + 8), *(i_2 + 0x10), 
                                "---ucannot unset '': Invalid arg…", 2))
                            {
                                var_168 = 0;
                                char* rax_27;
                                uint64_t rdx_20;
                                rax_27 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(
                                    0x2d, &var_168);
                                
                                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(var_f0, var_e8, rax_27, rdx_20))
                                    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_f0, var_e8);
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc2eed86ca3e5fc9d(&var_168, *(i_2 + 8), *(i_2 + 0x10));
                            int64_t var_118_3 = var_158;
                            var_128 = var_168;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hb3d6cf7e4aee7804(&var_110, 
                                &var_128);
                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(&var_f8);
                            int64_t rax_30;
                            rax_30 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
                            r13_1 = rax_30;
                            i_2 = i;
                        } while (i);
                    }
                    
                    break;
                }
                
                var_168 = 0;
                char* rax_4;
                uint64_t rdx_2;
                rax_4 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_168);
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(
                        var_f0, var_e8, rax_4, rdx_2) && !_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_f0, var_e8))
                    goto label_47424a;
            }
            
            uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, *(r14_1 + 8), 
                *(r14_1 + 0x10), "--split-string-S-vSargv0:     ex…", 0xe, &var_110, nullptr);
            uint64_t rax_7 = var_168;
            void** var_160;
            void** const rcx_4 = var_160;
            
            if (!rax_7)
            {
                if (rcx_4 & 1)
                {
                    label_474005:
                    *(arg2 + 1) = 1;
                    label_474009:
                    rbp_1 = 0;
                    label_47400e:
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(&var_f8);
                    int64_t rax_9;
                    void* rdx_6;
                    rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
                    rbx_1 = rax_9;
                    r14_1 = rdx_6;
                    
                    if (!rdx_6)
                        break;
                    
                    continue;
                }
                else
                {
                    uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, *(r14_1 + 8), 
                        *(r14_1 + 0x10), "-S-vSargv0:     executing: [0]= …", 2, &var_110, nullptr);
                    rax_7 = var_168;
                    rcx_4 = var_160;
                    
                    if (!rax_7)
                    {
                        if (rcx_4 & 1)
                            goto label_474005;
                        
                        uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, 
                            *(r14_1 + 8), *(r14_1 + 0x10), "-vSargv0:     executing: [0]= []…", 3, 
                            &var_110, nullptr);
                        rax_7 = var_168;
                        rcx_4 = var_160;
                        
                        if (!rax_7)
                        {
                            if (rcx_4 & 1)
                            {
                                *arg2 = 0x101;
                                goto label_474009;
                            }
                            
                            uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, 
                                *(r14_1 + 8), *(r14_1 + 0x10), "-vvSkindAuto/", 4, &var_110, arg3);
                            rax_7 = var_168;
                            rcx_4 = var_160;
                            
                            if (!rax_7)
                            {
                                if (rcx_4 & 1)
                                {
                                    *arg2 = 0x101;
                                    arg2[1] = 0;
                                    goto label_474009;
                                }
                                
                                char const (** rax_13)[0xeb];
                                void** rdx_10;
                                rax_13 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c("---ucannot unset '': Invalid arg…", 2, var_f0, var_e8);
                                
                                if (!rax_13)
                                {
                                    char const (** rax_15)[0xeb];
                                    void* rdx_12;
                                    rax_15 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c("-: uu_env(uutils coreutils) 0.0.…", 1, var_f0, 
                                        var_e8);
                                    char rax_16;
                                    int32_t i_1;
                                    
                                    if (rax_15)
                                    {
                                        var_168 = rax_15;
                                        var_160 = rdx_12 + rax_15;
                                        rax_16 = core::str::validations::next_code_point::h82739559a2cd589d(&var_168, var_e8);
                                    }
                                    
                                    if (!rax_15 || (i_1 != 0x110000 & rax_16) != 1)
                                        rbp_1 = 0;
                                    else
                                    {
                                        do
                                        {
                                            var_128 = i_1;
                                            rbp_1 = _$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(&var_128);
                                            char rax_18;
                                            rax_18 = core::str::validations::next_code_point::h82739559a2cd589d(&var_168, var_e8);
                                            
                                            if (!(rax_18 & 1))
                                                break;
                                        } while (i_1 != 0x110000);
                                    }
                                }
                                else
                                {
                                    var_168 = rax_13;
                                    var_160 = rdx_10;
                                    rbp_1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h61d67ad19dc8ea59(&var_168, &var_a8);
                                }
                                
                                if (!_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_f0, var_e8))
                                {
                                    label_474209:
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc2eed86ca3e5fc9d(&var_168, *(r14_1 + 8), *(r14_1 + 0x10));
                                    int64_t var_118_1 = var_158;
                                    var_128 = var_168;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb3d6cf7e4aee7804(&var_110, 
                                        &var_128);
                                    goto label_47400e;
                                }
                                
                                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(var_f0, var_e8, "-ucannot unset '': Invalid argum…", 2))
                                    goto label_474209;
                                
                                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(var_f0, var_e8, "---ucannot unset '': Invalid arg…", 2))
                                    goto label_474209;
                                
                                int64_t rax_33;
                                int64_t rdx_24;
                                rax_33 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_f0, var_e8);
                                
                                if (!rax_33)
                                {
                                    core::str::slice_error_fail::h1a2885084e28d077(var_f0, var_e8, 
                                        2, var_e8);
                                    /* no return */
                                }
                                
                                var_128 = rax_33;
                                *var_128[8] = rdx_24;
                                int128_t* var_b8 = &var_128;
                                int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                                var_168 = &data_510a50;
                                int64_t var_160_1 = 2;
                                int64_t var_148_1 = 0;
                                int128_t** var_158_1 = &var_b8;
                                int64_t var_150_1 = 1;
                                int128_t var_48;
                                core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(
                                    &var_48, &var_168);
                                var_150_1 = 0x7d;
                                var_168 = var_48;
                                int64_t var_38;
                                int64_t var_158_2 = var_38;
                                rax_7 =
                                    alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_168);
                                rcx_4 = &data_5108a8;
                            }
                        }
                    }
                }
            }
            
            *(arg1 + 8) = rax_7;
            arg1[1] = rcx_4;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(
                &var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::heb5c5b33ec176de2(&var_110);
            return arg1;
        }
    }
    
    arg1[1] = var_100;
    *arg1 = var_110;
    return arg1;
}
