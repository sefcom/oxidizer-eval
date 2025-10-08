
  fn bat::app::is_truecolor_terminal::h389f7525a52eb4d6() -> i64

{
    let mut var_20: i8;
    std::env::var::h735fd0f3b352739a(&var_20, "COLORTERMtruecolor24bitcachesrc/…");
    let mut var_18: i64;
    
    if (var_20 & 1) == 0
    {
        return bat::app::is_truecolor_terminal::_$u7b$$u7b$closure$u7d$$u7d$::h75a78177ec293655(
            &var_18) & 1;
    }
    
    let rdi_1: i64 = var_18;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if rdi_1 != -0x7fffffffffffffff
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..env..VarError$GT$$GT$::h2fc2b94ea14a5e75(rdi_1, result);
        result = 0;
    }
    
    result &= 1;
    result
}
