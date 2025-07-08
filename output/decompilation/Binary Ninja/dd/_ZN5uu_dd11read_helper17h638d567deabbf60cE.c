
  uint64_t uu_dd::read_helper::h638d567deabbf60c(int64_t* arg1, void* arg2, int128_t* arg3, int64_t arg4)

{
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h7ed7dd5e8601bb1e(arg3, arg4, 0xdd);
    void* rax = *(arg2 + 8);
    int64_t var_60;
    
    if (!*(rax + 0x68))
        uu_dd::Input::fill_consecutive::h7d4bc8ab92dd656e(&var_60, arg2, arg3);
    else
        uu_dd::Input::fill_blocks::h45cc08a13ee607a5(&var_60, arg2, arg3, *(rax + 0x69));
    
    uint64_t result_2;
    uint64_t result = result_2;
    
    if (!var_60)
    {
        int64_t var_40;
        int64_t var_68_1 = var_40;
        uint64_t result_1 = result;
        int128_t var_50;
        int128_t zmm0_1;
        
        if (result || var_50)
        {
            void* r12_1 = *(arg2 + 8);
            
            if (*(r12_1 + 0x6a))
            {
                result = uu_dd::read_helper::perform_swab::h674fb7c29172040e(*(arg3 + 8), arg3[1]);
                r12_1 = *(arg2 + 8);
            }
            
            if (*(r12_1 + 0x50) != 7)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0fe0d79b2ed079cc(&var_60, arg3);
                int128_t var_38;
                uu_dd::blocks::conv_block_unblock_helper::he5e21bd733c5515f(&var_38, &var_60, 
                    r12_1 + 0x50, &result_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(arg3);
                uint64_t result_3;
                result = result_3;
                arg3[1] = result;
                *arg3 = var_38;
            }
            
            zmm0_1 = result_1;
            *(arg1 + 0x18) = var_50;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 0;
        }
        else
        {
            zmm0_1 = result_1;
            *(arg1 + 0x18) = var_50;
            *(arg1 + 8) = zmm0_1;
            *arg1 = 0;
        }
    }
    else
    {
        arg1[1] = result;
        *arg1 = 1;
    }
    
    return result;
}
