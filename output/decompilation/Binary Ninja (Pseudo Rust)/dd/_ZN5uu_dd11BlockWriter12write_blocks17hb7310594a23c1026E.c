
  fn uu_dd::BlockWriter::write_blocks::hb7310594a23c1026(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rdx: *mut *mut c_void;
    let rcx: i64;
    
    if !(0 + -(*arg2))
    {
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::write_blocks::h5d07776a954ba78d(arg1, arg2, 
            rdx, rcx);
    }
    /* tailcall */
    uu_dd::Output::write_blocks::hd1d1fad151688f0b(arg1, &arg2[1], rdx)
}
