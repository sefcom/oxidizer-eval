
  int64_t alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t rdi = *arg3;
    
    if (rdi >= arg2)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi, arg2);
        /* no return */
    }
    
    int64_t r15 = rdi * 3;
    int64_t r14 = arg3[2];
    *(arg1 + (r15 << 3) + 8) =
        core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + (r15 << 3) + 8), arg3[1]);
    int64_t result = core::cmp::Ord::max::h20b6d33cbe488162(*(arg1 + (r15 << 3) + 0x10), r14);
    *(arg1 + (r15 << 3) + 0x10) = result;
    return result;
}
