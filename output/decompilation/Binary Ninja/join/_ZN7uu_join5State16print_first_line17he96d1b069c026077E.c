
  int64_t uu_join::State::print_first_line::he96d1b069c026077(void* arg1, int64_t* arg2, void* arg3)

{
    if (*(arg1 + 0x10))
        /* tailcall */
        return uu_join::State::print_line::h5738688f2590ce02(arg1, arg2, *(arg1 + 8), arg3);
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
    /* no return */
}
