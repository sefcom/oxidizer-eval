
  fn alacritty_terminal::tty::unix::set_nonblocking::h073f954038365434(arg1: i32) -> i32

{
    let result: i32 = fcntl(arg1, 4, fcntl() | 0x800);
    let mut result_1: i32 = result;
    
    if result == 0
    {
        return result;
    }
    
    let mut var_40: i64 = 0;
    core::panicking::assert_failed::h3b9fb3c288e5cdb1(0, &result_1, &data_4eb5d4, &var_40);
    /* no return */
}
