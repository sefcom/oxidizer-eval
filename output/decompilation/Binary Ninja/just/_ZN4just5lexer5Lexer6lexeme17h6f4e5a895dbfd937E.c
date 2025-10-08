
  void* just::lexer::Lexer::lexeme::h6f4e5a895dbfd937(void* arg1)

{
    int64_t rax;
    int64_t var_28 = rax;
    char* rbx = *(arg1 + 0x80);
    int64_t r14 = *(arg1 + 0x88);
    int64_t r15 = *(arg1 + 0xb8);
    int64_t r12 = *(arg1 + 0xa0);
    void* result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r15, r12, rbx, r14);
    
    if (result)
        return result;
    
    core::str::slice_error_fail::h1a2885084e28d077(rbx, r14, r15, r12);
    /* no return */
}
