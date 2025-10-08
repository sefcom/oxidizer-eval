
  int64_t uu_join::State::print_first_line::h3e0e204aedad6bbe(void* arg1, int64_t* arg2, void* arg3)

{
    if (*(arg1 + 0x10))
        /* tailcall */
        return uu_join::State::print_line::h3e032f5a71a0aaa7(arg1, arg2, *(arg1 + 8), arg3);
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
    /* no return */
}
