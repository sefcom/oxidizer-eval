
  int32_t alacritty_terminal::tty::unix::set_nonblocking::h073f954038365434(int32_t arg1)

{
    int32_t result = fcntl(arg1, 4, fcntl() | 0x800);
    int32_t result_1 = result;
    
    if (!result)
        return result;
    
    int64_t var_40 = 0;
    core::panicking::assert_failed::h3b9fb3c288e5cdb1(0, &result_1, &data_4eb5d4, &var_40);
    /* no return */
}
