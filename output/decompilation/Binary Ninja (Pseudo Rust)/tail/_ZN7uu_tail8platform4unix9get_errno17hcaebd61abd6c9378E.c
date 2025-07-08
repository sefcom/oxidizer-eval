
  fn uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() -> u64

{
    let rbx_2: i64 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
    let mut var_28: i8;
    std::io::error::repr_bitpacked::decode_repr::h62460d19c1e0d17b(&var_28, rbx_2);
    
    if var_28 == 0
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(rbx_2);
        let var_24: i32;
        return var_24;
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
