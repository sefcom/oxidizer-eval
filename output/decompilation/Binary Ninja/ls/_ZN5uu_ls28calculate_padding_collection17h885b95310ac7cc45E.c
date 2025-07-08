
  int64_t uu_ls::calculate_padding_collection::h885b95310ac7cc45(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg3 * 0x130 + arg2;
    char rax_2 = *(arg4 + 0xe9);
    char rax_3 = *(arg4 + 0xea);
    int64_t rax_4 = *(arg4 + 0xd8);
    char rax_5 = *(arg4 + 0xf1);
    char rax_6 = *(arg4 + 0xf8);
    char rax_7 = *(arg4 + 0xeb);
    int64_t var_e0_1;
    __builtin_memcpy(&var_e0_1, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 0x38);
    int64_t rbx = 1;
    int64_t r15 = 1;
    int64_t var_d8_1;
    int64_t var_d0_1;
    int64_t var_c8_1;
    int64_t var_c0;
    int64_t var_b8;
    int64_t result;
    
    while (true)
    {
        int64_t var_70;
        int64_t var_60;
        void* r12_2;
        
        if (!rax_2)
        {
            void* rax_10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_40);
            
            if (!rax_10)
                break;
            
            r12_2 = rax_10;
            
            if (rax_3)
            {
                label_52d175:
                int32_t* rax_11 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(r12_2);
                
                if (rax_11)
                {
                    uu_ls::display_size::hba9b1cbdd7c6b199(&var_70, 
                        uu_ls::get_block_size::h2a7c975a8304f17e(rax_11[0xe], *(rax_11 + 0x60), 
                            rax_4, rax_5), 
                        rax_5);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(
                        &var_70);
                    r15 = core::cmp::max_by::h7ee1a79e2ed707c0(var_60, r15);
                }
            }
        }
        else
        {
            int32_t* i;
            
            do
            {
                void* rax_8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_40);
                
                if (!rax_8)
                    goto label_52d2fa;
                
                r12_2 = rax_8;
                i = uu_ls::PathData::get_metadata::hc7a96a0547653f90(rax_8);
            } while (!i);
            
            uu_ls::display_inode::h3361fe679ac3feaa(&var_70, *(i + 0x28));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_70);
            rbx = core::cmp::max_by::h7ee1a79e2ed707c0(var_60, rbx);
            
            if (rax_3)
                goto label_52d175;
        }
        
        if (rax_6 == 1)
        {
            int64_t rax_14 = *(r12_2 + 0x40);
            uu_ls::display_dir_entry_size::hb89143fe2890521f(&var_70, r12_2, arg4);
            var_d8_1 = core::cmp::max_by::h7ee1a79e2ed707c0(var_70, var_d8_1);
            int64_t var_68;
            var_d0_1 = core::cmp::max_by::h7ee1a79e2ed707c0(var_68, var_d0_1);
            var_c8_1 = core::cmp::max_by::h7ee1a79e2ed707c0(var_60, var_c8_1);
            
            if (rax_7)
                var_e0_1 = core::cmp::max_by::h7ee1a79e2ed707c0(rax_14, var_e0_1);
            
            if (arg3 != 1)
            {
                int64_t var_50;
                int64_t rax_22 = core::cmp::max_by::h7ee1a79e2ed707c0(var_50, var_c0);
                int64_t var_48;
                core::cmp::max_by::h7ee1a79e2ed707c0(var_48, result);
                int64_t var_58;
                core::cmp::max_by::h7ee1a79e2ed707c0(
                    core::cmp::max_by::h7ee1a79e2ed707c0(var_58, var_b8), rax_22);
            }
        }
    }
    
    label_52d2fa:
    *arg1 = rbx;
    arg1[1] = var_d8_1;
    arg1[2] = var_d0_1;
    arg1[3] = var_c8_1;
    arg1[4] = var_e0_1;
    arg1[5] = var_b8;
    arg1[6] = var_c0;
    arg1[7] = result;
    arg1[8] = r15;
    return result;
}
