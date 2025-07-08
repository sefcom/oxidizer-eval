
  fn uu_dd::Output::sync::h13073efb3b69473e(arg1: *mut i8) -> i64

{
    let rax_3: *mut c_void = *arg1.byte_offset(0x10);
    
    if *rax_3.byte_offset(0x95) != 0
    {
        /* tailcall */
        return uu_dd::Dest::fsync::h5a325d3e1b2c36c4(arg1);
    }
    
    if *rax_3.byte_offset(0x94) != 0
    {
        /* tailcall */
        return uu_dd::Dest::fdatasync::hb1784b836bce6fab(arg1);
    }
    
    0
}
