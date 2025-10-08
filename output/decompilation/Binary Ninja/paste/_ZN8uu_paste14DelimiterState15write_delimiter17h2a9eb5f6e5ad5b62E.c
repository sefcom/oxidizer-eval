
  int64_t uu_paste::DelimiterState::write_delimiter::h2a9eb5f6e5ad5b62(int64_t* arg1, int64_t* arg2)

{
    int64_t result = *arg1;
    
    if (result)
    {
        if (result == 1)
        {
            int64_t rax = arg1[1];
            /* tailcall */
            return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h5f8246458d20e263(arg2, rax, arg1[2] + rax);
        }
        
        int64_t* rax_2 = _$LT$core..iter..adapters..cycle..Cycle$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d77355d8d9a2419(&arg1[5]);
        
        if (!rax_2)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t rsi_2 = *rax_2;
        result = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h5f8246458d20e263(arg2, rsi_2, rax_2[1] + rsi_2);
        *(arg1 + 8) = *rax_2;
    }
    
    return result;
}
