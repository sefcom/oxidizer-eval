
  int64_t uu_join::State::get_current_key::h6b22667ac5a703a7(void* arg1)

{
    if (*(arg1 + 0x10))
        /* tailcall */
        return uu_join::Line::get_field::h7dd14bed39768627(*(arg1 + 8), *(arg1 + 0x40));
    
    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
    /* no return */
}
