
  fn rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: u8 = 0x1000203 >> *arg2.byte_offset(0x395) << 3;
    let rcx_1: u32 = *arg2.byte_offset(0x392);
    
    if rcx_1 == 0
    {
        if *arg2.byte_offset(0x379) == 0
        {
            /* tailcall */
            return grep_cli::wtr::stdout_buffered_block::hb9c139ea7985e825(arg1, rax);
        }
    }
    else if rcx_1 != 1
    {
        /* tailcall */
        return grep_cli::wtr::stdout_buffered_block::hb9c139ea7985e825(arg1, rax);
    }
    
    /* tailcall */
    grep_cli::wtr::stdout_buffered_line::h76abfb9e49467d36(arg1, rax)
}
