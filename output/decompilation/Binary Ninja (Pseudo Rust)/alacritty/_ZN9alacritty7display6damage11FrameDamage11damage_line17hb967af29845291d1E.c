
  fn alacritty::display::damage::FrameDamage::damage_line::hb967af29845291d1(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    let rdi: i64 = *arg3;
    
    if rdi >= arg2
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi, arg2);
        /* no return */
    }
    
    let r15: i64 = rdi * 3;
    let r14: i64 = arg3[2];
    *(arg1 + (r15 << 3) + 8) =
        core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + (r15 << 3) + 8), arg3[1]);
    let result: i64 = core::cmp::Ord::max::h20b6d33cbe488162(*(arg1 + (r15 << 3) + 0x10), r14);
    *(arg1 + (r15 << 3) + 0x10) = result;
    result
}
