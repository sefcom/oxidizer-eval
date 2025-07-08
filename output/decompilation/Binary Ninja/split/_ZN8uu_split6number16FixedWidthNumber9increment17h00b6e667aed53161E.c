
  uint64_t uu_split::number::FixedWidthNumber::increment::h00b6e667aed53161(void* arg1)

{
    char* r14 = *(arg1 + 8);
    uint64_t i_1 = *(arg1 + 0x10);
    
    if (i_1)
    {
        char rbp_1 = *(arg1 + 0x18);
        uint64_t i = i_1;
        
        do
        {
            i = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(i);
            
            if (i >= i_1)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(i, i_1);
                /* no return */
            }
            
            char rcx_1 = r14[i] + 1;
            r14[i] = rcx_1;
            
            if (rcx_1 != rbp_1)
                break;
            
            r14[i] = 0;
        } while (i);
    }
    
    void var_30;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6057a164085cb6e9(
        &var_30, i_1);
    int64_t var_28;
    int64_t var_20;
    int32_t rax_1 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h24144f0ec5aeede0(r14, i_1, var_28, var_20);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_30);
    return rax_1;
}
