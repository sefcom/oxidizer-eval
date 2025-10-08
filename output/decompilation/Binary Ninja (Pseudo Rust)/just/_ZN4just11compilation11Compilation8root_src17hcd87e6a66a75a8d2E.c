
  fn just::compilation::Compilation::root_src::hcd87e6a66a75a8d2(arg1: *mut c_void) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let rax_1: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf568833ba02effea(
        arg1.byte_offset(0x330), arg1.byte_offset(0x2e8));
    
    if rax_1 != 0
    {
        *rax_1.byte_offset(0x20);
        return *rax_1.byte_offset(0x18);
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
