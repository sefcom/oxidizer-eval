
  fn alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    if arg3 >= arg2
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, arg2);
        /* no return */
    }
    
    let r15: i64 = arg3 * 3;
    *(arg1 + (r15 << 3) + 8) =
        core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + (r15 << 3) + 8), arg4);
    let result: i64 = core::cmp::Ord::max::h20b6d33cbe488162(*(arg1 + (r15 << 3) + 0x10), arg5);
    *(arg1 + (r15 << 3) + 0x10) = result;
    result
}
