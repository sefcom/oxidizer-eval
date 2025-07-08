
  int128_t* uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(int128_t* arg1, char arg2, int64_t arg3, uint64_t arg4)

{
    uint64_t r14 = arg4;
    int128_t var_38;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(
        &var_38, arg3);
    int64_t i_1;
    int64_t i = i_1;
    
    if (arg2)
    {
        uint64_t r15_1 = arg2;
        
        while (i)
        {
            int64_t i_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(i);
            i = i_2;
            
            if (i_2 >= i_1)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(i, i_1);
                /* no return */
            }
            
            uint64_t rax_2;
            uint8_t rdx_1;
            
            if (r14 >> 0x20)
            {
                int64_t rdx = 0;
                rax_2 = COMBINE(rdx, r14) / r15_1;
                rdx_1 = COMBINE(rdx, r14) % r15_1;
            }
            else
            {
                int32_t rax_5 = r14;
                int32_t temp2_2 = r15_1;
                rax_2 = COMBINE(0, rax_5) / temp2_2;
                rdx_1 = COMBINE(0, rax_5) % temp2_2;
            }
            
            *var_38[8][i] = rdx_1;
            bool cond:0_1 = r14 < r15_1;
            r14 = rax_2;
            
            if (cond:0_1)
                goto label_4db768;
        }
    }
    else if (i)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
        /* no return */
    }
    
    if (!r14)
    {
        label_4db768:
        arg1[1] = i_1;
        *arg1 = var_38;
        *(arg1 + 0x18) = arg2;
    }
    else
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_38);
    }
    
    return arg1;
}
