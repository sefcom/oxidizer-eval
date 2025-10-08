
  fn fd::fmt::token_from_pattern_id::h335ee60225c838fa(arg1: *mut i64, arg2: i32) -> u64

{
    if arg2 - 2 < 5
    {
        let result: u64 = arg2 - 2;
        *arg1 = -0x8000000000000000 | result;
        return result;
    }
    
    let rax: i64;
    let var_8: i64 = rax;
    core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
    /* no return */
}
