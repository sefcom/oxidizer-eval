
  int64_t alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    if (arg3 >= arg2)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, arg2);
        /* no return */
    }
    
    int64_t r15 = arg3 * 3;
    *(arg1 + (r15 << 3) + 8) =
        core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + (r15 << 3) + 8), arg4);
    int64_t result = core::cmp::Ord::max::h20b6d33cbe488162(*(arg1 + (r15 << 3) + 0x10), arg5);
    *(arg1 + (r15 << 3) + 0x10) = result;
    return result;
}
