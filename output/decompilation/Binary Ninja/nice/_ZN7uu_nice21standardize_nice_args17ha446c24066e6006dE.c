
  int64_t uu_nice::standardize_nice_args::ha446c24066e6006d(int64_t* arg1, int64_t arg2)

{
    int64_t var_e8 = arg2;
    int64_t rdx;
    int64_t var_e0 = rdx;
    int64_t var_148 = 0;
    int64_t var_140 = 8;
    int64_t var_138 = 0;
    int64_t var_88;
    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hefdd36b254aeecac(&var_88, &var_e8);
    int64_t var_80;
    
    if (!(0 + -(var_88)))
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_88);
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h4905838a2dad291f(-0x8000000000000000, var_80);
    int128_t var_58 = var_e8;
    bool rbx_1 = false;
    char var_17c = 0;
    int128_t var_178;
    uint64_t var_168;
    int128_t var_128;
    
    while (true)
    {
        int64_t var_70;
        _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hefdd36b254aeecac(&var_70, &var_58);
        int64_t r13_1 = var_70;
        
        if (r13_1 == -0x8000000000000000)
            break;
        
        char* var_68;
        uint64_t var_60;
        
        if (rbx_1 & 1)
        {
            var_178 = r13_1;
            *var_178[8] = var_68;
            var_168 = var_60;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_178);
        }
        else if (!(var_17c & 1))
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_178, var_68, var_60);
            int128_t var_108;
            int128_t zmm0_2;
            
            if (var_178 & 1)
            {
                label_45215e:
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_178, var_68, var_60);
                
                if (!(var_178 & 1))
                {
                    if (!uu_nice::is_prefix_of::h0ed73fde36564671(*var_178[8], var_168, 
                            "--adjustment: \nTry ' --help' fo…", 0xc, 3))
                        goto label_4521ac;
                    
                    goto label_452193;
                }
                
                label_4521ac:
                void var_48;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7186c51e548866d5(&var_48, var_68, var_60);
                alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_178, &var_48);
                
                if (var_178 == -0x8000000000000000)
                {
                    uint64_t var_160;
                    uint64_t var_f8_1 = var_160;
                    zmm0_2 = var_178;
                    var_108 = zmm0_2;
                    var_128 = zmm0_2;
                    var_128 = 0;
                    int64_t rax_4 = *var_128[8];
                    var_178 = 0;
                    int64_t var_118;
                    char* rax_6;
                    int64_t rdx_8;
                    rax_6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_178), 
                        var_118, var_160);
                    rbx_1 = !rax_6;
                    
                    if (!rax_6)
                    {
                        var_178 = rax_4;
                        *var_178[8] = var_118;
                        var_168 = var_160;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_178);
                    }
                    else
                    {
                        core::num::_$LT$impl$u20$i64$GT$::from_ascii_radix::h7589f30fc8392b2a(
                            &var_108, rax_6, rdx_8);
                        
                        if (!var_108)
                        {
                            int64_t r12_2 = *var_108[8];
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_178, "-n--adjustment: \nTry ' --help' …", 2);
                            uint64_t var_98_1 = var_168;
                            int128_t var_a8 = var_178;
                            _$LT$i64$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h60b05a0cf10951a2(&var_178, r12_2);
                            std::ffi::os_str::OsString::push::hc6742ad3576a2e2e(&var_a8, &var_178);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, 
                                &var_a8);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb888ef563bfa785f(rax_4, var_118);
                        }
                        else
                        {
                            var_178 = rax_4;
                            *var_178[8] = var_118;
                            var_168 = var_160;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, 
                                &var_178);
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8981e453b21a0f9c(
                        r13_1, var_68);
                    continue;
                }
            }
            else
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3a1b7041954c085a(*var_178[8], var_168, "-n--adjustment: \nTry ' --help' …", 2))
                    goto label_45215e;
                
                label_452193:
                var_17c = 1;
                rbx_1 = false;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8981e453b21a0f9c(
                    r13_1, var_68);
                continue;
            }
            
            uint64_t var_f8_2 = var_168;
            zmm0_2 = var_178;
            var_108 = zmm0_2;
            uint64_t var_110_2 = var_168;
            var_128 = zmm0_2;
            var_128 = 1;
            core::ptr::drop_in_place$LT$clap_builder..error..Message$GT$::h752086c676d8f225(
                &var_128);
            var_178 = r13_1;
            *var_178[8] = var_68;
            var_168 = var_60;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_178);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_178, "-n--adjustment: \nTry ' --help' …", 2);
            uint64_t var_b8_1 = var_168;
            int128_t var_c8 = var_178;
            var_178 = r13_1;
            *var_178[8] = var_68;
            var_168 = var_60;
            std::ffi::os_str::OsString::push::hbb638c1a9a460a48(&var_c8, &var_178);
            rbx_1 = false;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_c8);
            var_17c = 0;
            continue;
        }
        rbx_1 = true;
    }
    
    if (var_17c & 1)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h2a17592469341a2b(&var_178, "-n--adjustment: \nTry ' --help' …", 2);
        uint64_t var_118_1 = var_168;
        var_128 = var_178;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6e9c733220ffa76d(&var_148, &var_128);
    }
    
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0d19ba00dc37477d(arg1, &var_148);
}
