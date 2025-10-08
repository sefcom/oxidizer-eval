
  int64_t just::unindent::indentation::h998e2ef8eff8af48(char* arg1, int64_t arg2)

{
    char* var_38 = arg1;
    void* var_30 = &arg1[arg2];
    int64_t var_28 = 0;
    char var_20 = 0;
    char rax_1;
    int64_t rdx;
    rax_1 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h21f770c47876451d(&var_38);
    int64_t r15 = 0;
    
    if (rax_1 & 1)
        r15 = rdx;
    
    int64_t result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15, arg1, arg2);
    
    if (result)
        return result;
    
    core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, 0, r15);
    /* no return */
}
