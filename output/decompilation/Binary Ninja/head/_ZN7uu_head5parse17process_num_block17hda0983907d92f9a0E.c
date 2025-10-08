
  uint64_t uu_head::parse::process_num_block::hda0983907d92f9a0(int64_t* arg1, char* arg2, int64_t arg3, int32_t arg4, int64_t* arg5)

{
    int32_t r12 = arg4;
    char var_b8;
    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_b8, arg2, arg3);
    uint64_t result;
    
    if (var_b8 != 1)
    {
        uint64_t result_2;
        result = result_2;
        label_465568:
        uint64_t result_3 = result;
        uint64_t result_4 = result;
        char rbp_1 = 0;
        char var_ec_1 = 0;
        char rbx_1 = 0;
        char r13_1 = 0;
        
        while (true)
        {
            result = r12 - 0x62;
            
            if (result > 0x18)
            {
                if (!r12)
                    goto label_46562c;
                
                *arg1 = -0x8000000000000000;
                break;
            }
            
            result = jump_table_41a68c[result] + &jump_table_41a68c;
            int128_t var_e8;
            int64_t var_d0;
            uint64_t result_1;
            int64_t var_a8;
            int64_t var_88;
            uint64_t result_5;
            
            switch (result)
            {
                case 0x465590:
                {
                    int32_t rdx = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg5);
                    r12 = rdx;
                    rbx_1 = 1;
                    r13_1 = 0;
                    
                    if (rdx == 0x110000)
                    {
                        var_d0 = 0;
                        int64_t var_c8_2 = 8;
                        result_1 = 0;
                        result_5 = result_3;
                    }
                    else
                        continue;
                    
                    goto label_465728;
                }
                case 0x4655bf:
                {
                    int32_t rdx_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg5);
                    r12 = rdx_1;
                    r13_1 = 1;
                    rbx_1 = 0;
                    
                    if (rdx_1 != 0x110000)
                        continue;
                    else
                    {
                        var_d0 = 0;
                        int64_t var_c8_3 = 8;
                        result_1 = 0;
                        rbx_1 = 0;
                    }
                    
                    goto label_4656cd;
                }
                case 0x4655e7:
                {
                    rbp_1 = 1;
                    var_88 = 0x400;
                    label_46562c:
                    int32_t rdx_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg5);
                    r12 = rdx_2;
                    
                    if (rdx_2 != 0x110000)
                        continue;
                    else
                    {
                        var_d0 = 0;
                        int64_t var_c8_1 = 8;
                        result_1 = 0;
                        
                        if (r13_1 & 1)
                        {
                            label_4656cd:
                            result_5 = result_3;
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-q-v-z-c-nsrc/uu/head/src/take.r…", 2);
                            int64_t var_d8_1 = var_a8;
                            var_e8 = var_b8;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
                            
                            if (rbx_1 & 1)
                                goto label_465728;
                        }
                        else
                        {
                            result_5 = result_3;
                            
                            if (rbx_1 & 1)
                            {
                                label_465728:
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-v-z-c-nsrc/uu/head/src/take.rsa…", 2);
                                int64_t var_d8_2 = var_a8;
                                var_e8 = var_b8;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, 
                                    &var_e8);
                            }
                        }
                    }
                    break;
                }
                case 0x4655f6:
                {
                    rbp_1 = 1;
                    var_88 = 0x200;
                    goto label_46562c;
                }
                case 0x465605:
                {
                    rbp_1 = 1;
                    var_88 = 0x100000;
                    goto label_46562c;
                }
                case 0x465614:
                {
                    rbp_1 = 1;
                    var_88 = 1;
                    goto label_46562c;
                }
                case 0x465623:
                {
                    result = 1;
                    var_ec_1 = result;
                    goto label_46562c;
                }
                case 0x465674:
                {
                    *arg1 = -0x8000000000000000;
                    break;
                    break;
                    break;
                }
            }
            
            if (var_ec_1 & 1)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-z-c-nsrc/uu/head/src/take.rsass…", 2);
                int64_t var_d8_3 = var_a8;
                var_e8 = var_b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
            }
            
            if (!(rbp_1 & 1))
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-nsrc/uu/head/src/take.rsasserti…", 2);
                int64_t var_d8_5 = var_a8;
                var_e8 = var_b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
                var_e8 = &result_4;
                *var_e8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_b8 = &data_418a90;
                int64_t var_b0_1 = 1;
                int64_t var_98_2 = 0;
                int128_t* var_a8_2 = &var_e8;
                int64_t var_a0_2 = 1;
                void var_48;
                core::option::Option$LT$T$GT$::map_or_else::h4698243df58dc779(&var_48, &var_b8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_48);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b8, "-c-nsrc/uu/head/src/take.rsasser…", 2);
                int64_t var_d8_4 = var_a8;
                var_e8 = var_b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_e8);
                int64_t rax_6 = result_5 * var_88;
                
                if ((result_5 * var_88) >> 0x40 != {0})
                    rax_6 = -1;
                
                int64_t var_68 = rax_6;
                var_e8 = &var_68;
                *var_e8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_b8 = &data_418a90;
                int64_t var_b0 = 1;
                int64_t var_98_1 = 0;
                int128_t* var_a8_1 = &var_e8;
                int64_t var_a0_1 = 1;
                void var_60;
                core::option::Option$LT$T$GT$::map_or_else::h4698243df58dc779(&var_60, &var_b8);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdf457eff9a80b64c(&var_d0, &var_60);
            }
            
            result = result_1;
            arg1[2] = result;
            *arg1 = var_d0;
            break;
        }
    }
    else
    {
        result = -1;
        char var_b7;
        
        if (var_b7 == 2)
            goto label_465568;
        
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
