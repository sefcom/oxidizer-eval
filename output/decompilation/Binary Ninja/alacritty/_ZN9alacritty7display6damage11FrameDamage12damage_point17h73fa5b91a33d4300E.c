
  int64_t alacritty::display::damage::FrameDamage::damage_point::h73fa5b91a33d4300(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    if (arg3 >= arg2)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, arg2);
        /* no return */
    }
    
    int64_t r15 = arg3 * 3;
    *(arg1 + (r15 << 3) + 8) =
        core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + (r15 << 3) + 8), arg4);
    int64_t result = core::cmp::Ord::max::h20b6d33cbe488162(*(arg1 + (r15 << 3) + 0x10), arg4);
    *(arg1 + (r15 << 3) + 0x10) = result;
    return result;
}
