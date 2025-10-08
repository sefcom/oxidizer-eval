
  int64_t bat::app::is_truecolor_terminal::h389f7525a52eb4d6()

{
    char var_20;
    std::env::var::h735fd0f3b352739a(&var_20, "COLORTERMtruecolor24bitcachesrc/…");
    int64_t var_18;
    
    if (!(var_20 & 1))
        return bat::app::is_truecolor_terminal::_$u7b$$u7b$closure$u7d$$u7d$::h75a78177ec293655(
            &var_18) & 1;
    
    int64_t rdi_1 = var_18;
    int64_t result_1;
    int64_t result = result_1;
    
    if (rdi_1 != -0x7fffffffffffffff)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..env..VarError$GT$$GT$::h2fc2b94ea14a5e75(rdi_1, result);
        result = 0;
    }
    
    result &= 1;
    return result;
}
