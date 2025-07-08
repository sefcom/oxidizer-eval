
  fn uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2f0373906384d08b(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax_2: i64 = *arg2.byte_offset(0x10);
    let mut rdx: i64 = 0;
    
    if rax_2 >= *arg2.byte_offset(0x50)
    {
        rdx = rax_2 - *arg2.byte_offset(0x50);
    }
    
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h58787e57b634cf4d(arg1, arg2, rdx)
}
