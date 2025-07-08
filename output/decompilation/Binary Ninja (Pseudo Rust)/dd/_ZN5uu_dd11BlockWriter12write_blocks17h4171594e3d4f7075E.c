
  fn uu_dd::BlockWriter::write_blocks::h4171594e3d4f7075(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rdx: *mut *mut c_void;
    let rcx: i64;
    
    if *arg2 != -0x8000000000000000
    {
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::write_blocks::h650a144b171239b2(arg1, arg2, 
            rdx, rcx);
    }
    /* tailcall */
    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(arg1, &arg2[1], rdx)
}
