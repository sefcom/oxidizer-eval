
  char* uu_head::parse::process_num_block::h8e5bdc2257d4c6b6(int64_t* arg1, char* arg2, int64_t arg3, int32_t arg4, int64_t* arg5, int64_t arg6 @ r13)

{
    int64_t var_20 = arg6;
    int32_t r12 = arg4;
    char var_70;
    char* result = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_70, arg2, arg3);
    
    if (!var_70)
    {
        int64_t var_68;
        int64_t var_80 = var_68;
        char var_fc_1 = 0;
        char r14_1 = 0;
        int64_t rbp_1 = 0;
        char var_88_1 = 0;
        int128_t var_f8;
        int64_t var_e0;
        int128_t var_c8;
        int64_t var_b8;
        
        while (true)
        {
            uint64_t rax_1 = r12 - 0x62;
            
            if (rax_1 > 0x18)
            {
                if (!r12)
                    goto label_4be43b;
                
                label_4be7ac:
                result = arg1;
                *(result + 8) = 0;
                result[0x10] = 0;
                *result = 1;
                return result;
            }
            
            char rbx_1;
            
            switch (rax_1)
            {
                case 0:
                {
                    arg6 = 0x200;
                    rbp_1 = 1;
                    goto label_4be43b;
                }
                case 1:
                {
                    rbp_1 = 1;
                    arg6 = 1;
                    label_4be43b:
                    int32_t rdx = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(arg5);
                    r12 = rdx;
                    
                    if (rdx != 0x110000)
                        continue;
                    
                    var_e0 = 0;
                    int64_t var_d8_1 = 8;
                    int64_t var_d0_1 = 0;
                    rbx_1 = var_fc_1;
                    
                    if (!var_88_1)
                        goto label_4be53f;
                    
                    goto label_4be516;
                }
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 0xa:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x15:
                case 0x16:
                case 0x17:
                {
                    goto label_4be7ac;
                }
                case 9:
                {
                    arg6 = 0x400;
                    rbp_1 = 1;
                    goto label_4be43b;
                }
                case 0xb:
                {
                    arg6 = 0x100000;
                    rbp_1 = 1;
                    goto label_4be43b;
                }
                case 0xf:
                {
                    int32_t rdx_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(arg5);
                    r12 = rdx_2;
                    var_fc_1 = 0;
                    
                    if (rdx_2 != 0x110000)
                    {
                        var_88_1 = 1;
                        continue;
                    }
                    
                    var_e0 = 0;
                    int64_t var_d8_2 = 8;
                    int64_t var_d0_2 = 0;
                    rbx_1 = 0;
                    label_4be516:
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                        "-q-v-z-c-n/home/34r7hm4n/.cargo/…", 2);
                    int64_t var_e8_1 = var_b8;
                    var_f8 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
                    label_4be53f:
                    
                    if (!(rbx_1 & 1))
                        break;
                    
                    goto label_4be555;
                }
                case 0x14:
                {
                    int32_t rdx_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(arg5);
                    r12 = rdx_1;
                    var_fc_1 = 1;
                    
                    if (rdx_1 != 0x110000)
                    {
                        var_88_1 = 0;
                        continue;
                    }
                    
                    var_e0 = 0;
                    int64_t var_d8_3 = 8;
                    int64_t var_d0_3 = 0;
                    label_4be555:
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                        "-v-z-c-n/home/34r7hm4n/.cargo/re…", 2);
                    int64_t var_e8_2 = var_b8;
                    var_f8 = var_c8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
                    break;
                    break;
                }
                case 0x18:
                {
                    r14_1 = 1;
                    goto label_4be43b;
                }
            }
        }
        
        if (r14_1 & 1)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                "-z-c-n/home/34r7hm4n/.cargo/regi…", 2);
            int64_t var_e8_3 = var_b8;
            var_f8 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
        }
        
        if (rbp_1 != 1)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                "-n/home/34r7hm4n/.cargo/registry…", 2);
            int64_t var_e8_5 = var_b8;
            var_f8 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
            var_f8 = &var_80;
            *var_f8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_c8 = &data_415290;
            *var_c8[8] = 1;
            int64_t var_a8_1 = 0;
            int128_t* var_b8_1 = &var_f8;
            int64_t var_b0_1 = 1;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2(&var_48, &var_c8);
            var_c8 = var_48;
            int64_t var_38;
            int64_t var_b8_2 = var_38;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_c8);
        }
        else
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, 
                "-c-n/home/34r7hm4n/.cargo/regist…", 2);
            int64_t var_e8_4 = var_b8;
            var_f8 = var_c8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_f8);
            
            if ((var_68 * arg6) >> 0x40 != {0})
            {
                arg1[1] = 0;
                arg1[2] = 1;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdf52de0dff688e82(&var_e0);
            }
            
            int64_t var_78 = var_68 * arg6;
            var_f8 = &var_78;
            *var_f8[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_c8 = &data_415290;
            *var_c8[8] = 1;
            int64_t var_a8_2 = 0;
            int128_t* var_b8_3 = &var_f8;
            int64_t var_b0_2 = 1;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2(&var_60, &var_c8);
            var_c8 = var_60;
            int64_t var_50;
            int64_t var_b8_4 = var_50;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbece7e609c79d9b2(&var_e0, &var_c8);
        }
        
        result = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf3a7c2118f75f767(&arg1[1], &var_e0);
    }
    else
    {
        arg1[1] = 0;
        arg1[2] = 1;
    }
    
    *arg1 = 1;
    return result;
}
