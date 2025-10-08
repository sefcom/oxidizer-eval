
  int64_t uu_join::State::get_current_key::hb0aa7b8c555c38dc(void* arg1)

{
    if (*(arg1 + 0x10))
        /* tailcall */
        return uu_join::Line::get_field::h5172ba7928bd7492(*(arg1 + 8), *(arg1 + 0x40));
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
    /* no return */
}
