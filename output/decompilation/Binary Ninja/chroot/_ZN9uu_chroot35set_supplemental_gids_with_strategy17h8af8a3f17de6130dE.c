
  int64_t uu_chroot::set_supplemental_gids_with_strategy::h8af8a3f17de6130d(int32_t* arg1, int64_t arg2, void* arg3)

{
    if (!arg3)
        /* tailcall */
        return uu_chroot::handle_missing_groups::h3a01081f3f4106e6(arg1, arg2);
    
    int64_t var_70 = 0;
    gid_t* var_68 = 4;
    uint64_t var_60 = 0;
    int64_t rax = *(arg3 + 0x10);
    int32_t rax_5;
    int64_t rax_3;
    
    if (!rax)
    {
        rax_3 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(4, 0);
        
        if (!rax_3)
            rax_5 = 0xe;
        else
        {
            *(arg1 + 8) = rax_3;
            rax_5 = 0xc;
        }
    }
    else
    {
        int64_t r12_1 = *(arg3 + 8);
        int64_t i = 0;
        
        do
        {
            int32_t var_58;
            uu_chroot::name_to_gid::hce66daf4744ca6c7(&var_58, *(r12_1 + i + 8), 
                *(r12_1 + i + 0x10));
            int32_t rax_2 = var_58;
            int32_t var_54;
            
            if (rax_2 != 0xe)
            {
                int128_t var_40;
                *(arg1 + 0x18) = var_40;
                int128_t var_50;
                *(arg1 + 8) = var_50;
                *arg1 = rax_2;
                arg1[1] = var_54;
                goto label_467923;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd7306e6e4a779136(&var_70, var_54);
            i += 0x18;
        } while (rax * 0x18 != i);
        
        rax_3 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(var_68, var_60);
        
        if (rax_3)
        {
            *(arg1 + 8) = rax_3;
            rax_5 = 0xc;
        }
        else
            rax_5 = 0xe;
    }
    *arg1 = rax_5;
    label_467923:
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::hd86db2e6974637b8(var_70, 
        var_68);
}
