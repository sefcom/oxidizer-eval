
  void* just::unindent::common::h764837025a78f14c(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_68 = 0;
    char* var_78 = arg1;
    void* var_70 = &arg1[arg2];
    void var_60;
    core::iter::traits::iterator::Iterator::zip::h6ddad77f76ac52eb(&var_60, &var_78, arg3);
    char var_20 = 0;
    char rax_1;
    int64_t rdx;
    rax_1 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha5ee18178f2ebd32(&var_60);
    int64_t r15 = rdx;
    
    if (!(rax_1 & 1))
        r15 = 0;
    
    void* result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(0, r15, arg1, arg2);
    
    if (result)
        return result;
    
    core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, 0, r15);
    /* no return */
}
