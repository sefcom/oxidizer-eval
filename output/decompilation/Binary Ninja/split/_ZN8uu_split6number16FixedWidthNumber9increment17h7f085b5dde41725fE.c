
  uint64_t uu_split::number::FixedWidthNumber::increment::h7f085b5dde41725f(void* arg1)

{
    int64_t r14 = *(arg1 + 8);
    uint64_t i_2 = *(arg1 + 0x10);
    
    if (i_2)
    {
        char rax_1 = *(arg1 + 0x18);
        uint64_t i_1 = i_2;
        uint64_t i;
        
        do
        {
            char rdx_1 = *(r14 + i_1 - 1) + 1;
            *(r14 + i_1 - 1) = rdx_1;
            
            if (rdx_1 != rax_1)
                break;
            
            *(r14 + i_1 - 1) = 0;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    int64_t var_30;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h2ddf162ee73cff42(
        &var_30, i_2);
    int64_t var_28;
    int64_t var_20;
    int32_t rax_2 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h510731c8117896c7(r14, i_2, var_28, var_20);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_30, var_28);
    return rax_2;
}
