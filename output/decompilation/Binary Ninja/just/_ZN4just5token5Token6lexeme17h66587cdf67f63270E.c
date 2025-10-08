
  void* just::token::Token::lexeme::h66587cdf67f63270(void* arg1)

{
    int64_t rax;
    int64_t var_28 = rax;
    char* rbx = *(arg1 + 0x10);
    int64_t r14 = *(arg1 + 0x18);
    int64_t r15 = *(arg1 + 0x38);
    int64_t r12_1 = *(arg1 + 0x28) + r15;
    void* result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, r12_1, rbx, r14);
    
    if (result)
        return result;
    
    core::str::slice_error_fail::h1a2885084e28d077(rbx, r14, r15, r12_1);
    /* no return */
}
