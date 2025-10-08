
  fn uu_paste::DelimiterState::write_delimiter::h2a9eb5f6e5ad5b62(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut result: i64 = *arg1;
    
    if result != 0
    {
        if result == 1
        {
            let rax: i64 = arg1[1];
            /* tailcall */
            return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h5f8246458d20e263(arg2, rax, arg1[2] + rax);
        }
        
        let rax_2: *mut i64 = _$LT$core..iter..adapters..cycle..Cycle$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4d77355d8d9a2419(&arg1[5]);
        
        if rax_2 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let rsi_2: i64 = *rax_2;
        result = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h5f8246458d20e263(arg2, rsi_2, rax_2[1] + rsi_2);
        *arg1.byte_offset(8) = *rax_2;
    }
    
    result
}
