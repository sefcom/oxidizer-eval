
  void* just::lexer::Lexer::rest::h4f82959a07fe6144(void* arg1)

{
    char* r14 = *(arg1 + 0x80);
    int64_t rbx = *(arg1 + 0x88);
    int64_t r15 = *(arg1 + 0xa0);
    void* result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15, r14, rbx);
    
    if (result)
        return result;
    
    core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, r15, rbx);
    /* no return */
}
