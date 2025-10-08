
  int64_t uu_df::filesystem::is_over_mounted::he031024296dde685(int64_t arg1, int64_t arg2, void* arg3)

{
    int64_t var_20 = arg1;
    int64_t var_18 = arg2 * 0x98 + arg1;
    void* var_10 = arg3;
    void* rax_2 =
        core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::h0447a209abcf8cc8(
        &var_20, &var_10);
    
    if (!rax_2)
        return 0;
    
    return alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(*(rax_2 + 0x20), *(rax_2 + 0x28), *(arg3 + 0x20), *(arg3 + 0x28)) ^ 1;
}
