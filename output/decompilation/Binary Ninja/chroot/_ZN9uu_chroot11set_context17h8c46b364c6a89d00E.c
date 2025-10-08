
  uint64_t uu_chroot::set_context::h8c46b364c6a89d00(void* arg1)

{
    uint64_t result =
        uu_chroot::enter_chroot::h98c30b2b91faf011(*(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x60));
    
    if (result)
        return result;
    
    int64_t rax = *(arg1 + 0x30);
    int32_t var_70;
    int32_t var_6c;
    int128_t var_68;
    int32_t var_48;
    gid_t var_44;
    int128_t var_34;
    int32_t rax_1;
    int128_t zmm0_1;
    int128_t zmm1_1;
    
    if (rax != -0x7ffffffffffffffd)
    {
        int64_t rax_2 = rax ^ 0x8000000000000000;
        int64_t rcx_1 = 3;
        
        if (rax_2 < 3)
            rcx_1 = rax_2;
        
        int32_t var_4c;
        int128_t var_40;
        int32_t rax_3;
        int64_t rax_6;
        int32_t rax_7;
        gid_t rbp_1;
        uint64_t r14_1;
        
        switch (rcx_1)
        {
            case 0:
            {
                goto label_46797e;
            }
            case 1:
            {
                uu_chroot::name_to_uid::h4c06bc9aac5f3697(&var_48, *(arg1 + 0x40), *(arg1 + 0x48));
                rax_3 = var_48;
                r14_1 = var_44;
                
                if (rax_3 != 0xe)
                {
                    label_467c3c:
                    int128_t var_58_1 = var_34;
                    int128_t var_68_1 = var_40;
                    var_70 = rax_3;
                    int32_t var_6c_1 = r14_1;
                    return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_70);
                }
                
                void* rdx_3 = nullptr;
                
                if (*(arg1 + 0x18) != -0x8000000000000000)
                    rdx_3 = arg1 + 0x18;
                
                uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 
                    (r14_1 << 0x20) + 1, rdx_3);
                rax_1 = var_48;
                
                if (rax_1 != 0xe)
                    goto label_467c14;
                
                void* rbx_1 = arg1 + 0x38;
                int64_t rax_5 = uu_chroot::set_gid::h96b8c03f678d01e3(r14_1);
                
                if (rax_5)
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h80dafbbd71a02e95(
                        &var_70, rbx_1, rax_5);
                    rax_1 = var_70;
                    var_48 = var_6c;
                    var_40 = var_68;
                    *var_34[0xc] = var_4c;
                }
                
                if (rax_5 && rax_1 != 0xe)
                {
                    label_467c00:
                    int32_t var_4c_1 = *var_34[0xc];
                    zmm0_1 = var_48;
                    zmm1_1 = var_40;
                    goto label_467c22;
                }
                
                rax_6 = uu_chroot::set_uid::haa9800f67f007aa3(r14_1);
                
                if (rax_6)
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h5b3caec019f0d248(
                        &var_70, rbx_1, rax_6);
                    goto label_467bd3;
                }
                break;
            }
            case 2:
            {
                uu_chroot::name_to_gid::hce66daf4744ca6c7(&var_48, *(arg1 + 0x40), *(arg1 + 0x48));
                rax_7 = var_48;
                rbp_1 = var_44;
                
                if (rax_7 != 0xe)
                {
                    label_467c5b:
                    int128_t var_58_2 = var_34;
                    int128_t var_68_2 = var_40;
                    var_70 = rax_7;
                    gid_t var_6c_2 = rbp_1;
                    return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_70);
                }
                
                void* rdx_6 = arg1 + 0x18;
                
                if (*(arg1 + 0x18) == -0x8000000000000000)
                    rdx_6 = nullptr;
                
                uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 0, 
                    rdx_6);
                rax_1 = var_48;
                
                if (rax_1 != 0xe)
                    goto label_467c14;
                
                int64_t rax_8 = uu_chroot::set_gid::h96b8c03f678d01e3(rbp_1);
                
                if (rax_8)
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h80dafbbd71a02e95(
                        &var_70, arg1 + 0x38, rax_8);
                    label_467bd3:
                    rax_1 = var_70;
                    var_48 = var_6c;
                    var_40 = var_68;
                    *var_34[0xc] = var_4c;
                    
                    if (rax_1 != 0xe)
                        goto label_467c00;
                }
                break;
            }
            case 3:
            {
                uu_chroot::name_to_uid::h4c06bc9aac5f3697(&var_48, *(arg1 + 0x38), *(arg1 + 0x40));
                rax_3 = var_48;
                r14_1 = var_44;
                
                if (rax_3 != 0xe)
                    goto label_467c3c;
                
                uu_chroot::name_to_gid::hce66daf4744ca6c7(&var_48, *(arg1 + 0x50), *(arg1 + 0x58));
                rax_7 = var_48;
                rbp_1 = var_44;
                
                if (rax_7 != 0xe)
                    goto label_467c5b;
                
                void* rdx_10 = nullptr;
                
                if (*(arg1 + 0x18) != -0x8000000000000000)
                    rdx_10 = arg1 + 0x18;
                
                uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 
                    r14_1 << 0x20 | 0x101, rdx_10);
                rax_1 = var_48;
                
                if (rax_1 != 0xe)
                    goto label_467c14;
                
                int64_t rax_10 = uu_chroot::set_gid::h96b8c03f678d01e3(rbp_1);
                
                if (rax_10)
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h80dafbbd71a02e95(
                        &var_70, arg1 + 0x48, rax_10);
                    rax_1 = var_70;
                    var_48 = var_6c;
                    var_40 = var_68;
                    *var_34[0xc] = var_4c;
                }
                
                if (rax_10 && rax_1 != 0xe)
                    goto label_467c00;
                
                rax_6 = uu_chroot::set_uid::haa9800f67f007aa3(r14_1);
                
                if (rax_6)
                {
                    uu_chroot::set_context::_$u7b$$u7b$closure$u7d$$u7d$::h5b3caec019f0d248(
                        &var_70, arg1 + 0x30, rax_6);
                    goto label_467bd3;
                }
                break;
            }
        }
    }
    else
    {
        label_46797e:
        void* rdx_1 = arg1 + 0x18;
        
        if (*(arg1 + 0x18) == -0x8000000000000000)
            rdx_1 = nullptr;
        
        uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(&var_48, 0, rdx_1);
        rax_1 = var_48;
        
        if (rax_1 != 0xe)
        {
            label_467c14:
            int32_t var_24;
            int32_t var_4c_2 = var_24;
            zmm0_1 = var_44;
            zmm1_1 = var_34;
            label_467c22:
            var_68 = zmm1_1;
            var_6c = zmm0_1;
            var_70 = rax_1;
            return alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_70);
        }
    }
    return 0;
}
