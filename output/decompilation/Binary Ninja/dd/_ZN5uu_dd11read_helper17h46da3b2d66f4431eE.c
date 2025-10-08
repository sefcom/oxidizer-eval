
  int64_t uu_dd::read_helper::h46da3b2d66f4431e(int64_t* arg1, void* arg2, int128_t* arg3, int64_t arg4)

{
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h82b279a1e4e0a0ea(arg3, arg4, 0xdd);
    void* rax = *(arg2 + 8);
    int64_t result;
    char var_60;
    int64_t var_58;
    int64_t rax_1;
    
    if (*(rax + 0x68) != 1)
    {
        uu_dd::Input::fill_consecutive::h39d193754d2b2b2d(&var_60, arg2, arg3);
        rax_1 = var_58;
        
        if (!(var_60 & 1))
        {
            label_491c0b:
            int64_t var_40;
            int64_t var_68_1 = var_40;
            int64_t var_80 = rax_1;
            int128_t var_50;
            
            if (rax_1 || var_50)
            {
                void* r12_1 = *(arg2 + 8);
                
                if (*(r12_1 + 0x6a))
                {
                    uu_dd::read_helper::perform_swab::h85f2ce77153961c5(*(arg3 + 8), arg3[1]);
                    r12_1 = *(arg2 + 8);
                }
                
                if (*(r12_1 + 0x50) != 7)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10340bb6599e71ed(&var_60, *(arg3 + 8), arg3[1]);
                    int128_t var_38;
                    uu_dd::blocks::conv_block_unblock_helper::hba15d5a3bd29b3b7(&var_38, &var_60, 
                        r12_1 + 0x50, &var_80);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                        *arg3, *(arg3 + 8));
                    int64_t var_28;
                    arg3[1] = var_28;
                    *arg3 = var_38;
                }
            }
            
            int128_t zmm0_1 = var_80;
            *(arg1 + 0x18) = var_50;
            *(arg1 + 8) = zmm0_1;
            result = 0;
        }
        else
        {
            arg1[1] = rax_1;
            result = 1;
        }
    }
    else
    {
        uu_dd::Input::fill_blocks::h1db18295bd354b67(&var_60, arg2, arg3, *(rax + 0x69));
        rax_1 = var_58;
        
        if (!(var_60 & 1))
            goto label_491c0b;
        
        arg1[1] = rax_1;
        result = 1;
    }
    *arg1 = result;
    return result;
}
