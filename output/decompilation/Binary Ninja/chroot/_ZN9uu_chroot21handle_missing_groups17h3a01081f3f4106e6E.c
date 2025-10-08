
  void uu_chroot::handle_missing_groups::h3a01081f3f4106e6(int32_t* arg1, int64_t arg2)

{
    if (!(arg2 & 1))
    {
        *arg1 = 0xe;
        return;
    }
    
    uint32_t r14_1 = arg2 >> 0x20;
    int64_t var_28;
    int64_t* rdi = &var_28;
    gid_t* r14_2;
    gid_t* var_20;
    uint64_t var_18;
    
    if (arg2 & 0x100)
    {
        uu_chroot::supplemental_gids::hf985b44dc073fbb6(rdi, r14_1);
        r14_2 = var_20;
        int64_t rax_2 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(r14_2, var_18);
        
        if (!rax_2)
            *arg1 = 0xe;
        else
        {
            *(arg1 + 8) = rax_2;
            *arg1 = 0xc;
        }
    }
    else
    {
        uu_chroot::supplemental_gids::hf985b44dc073fbb6(rdi, r14_1);
        
        if (!var_18)
        {
            *arg1 = 7;
            arg1[1] = r14_1;
            r14_2 = var_20;
        }
        else
        {
            r14_2 = var_20;
            int64_t rax_1 = uu_chroot::set_supplemental_gids::h6e10f73cbbb1a6e6(r14_2, var_18);
            
            if (!rax_1)
                *arg1 = 0xe;
            else
            {
                *arg1 = 0xc;
                *(arg1 + 8) = rax_1;
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::hd86db2e6974637b8(var_28, r14_2);
}
