
  fn uu_dd::Output::sync::hd8ca8f67c1b31cf5(arg1: *mut i8) -> i64

{
    let rax_3: *mut c_void = *arg1.byte_offset(0x10);
    
    if *rax_3.byte_offset(0x95) != 0
    {
        /* tailcall */
        return uu_dd::Dest::fsync::hc1154dc06790ea25(arg1);
    }
    
    if *rax_3.byte_offset(0x94) != 0
    {
        /* tailcall */
        return uu_dd::Dest::fdatasync::h0ef9d69f27dcd372(arg1);
    }
    
    0
}
