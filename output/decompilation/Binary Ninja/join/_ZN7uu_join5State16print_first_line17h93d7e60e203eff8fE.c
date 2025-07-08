
  int64_t uu_join::State::print_first_line::h93d7e60e203eff8f(void* arg1, int64_t* arg2, void* arg3)

{
    if (*(arg1 + 0x10))
        /* tailcall */
        return uu_join::State::print_line::h0a1786fc20820a6e(arg1, arg2, *(arg1 + 8), arg3);
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
    /* no return */
}
