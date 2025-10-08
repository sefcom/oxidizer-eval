
  fn uu_dd::BlockWriter::discard_cache::hd6361abadcee340d(arg1: *mut i64, arg2: i64, arg3: off64_t) -> i64

{
    if !(0 + -(*arg1))
    {
        /* tailcall */
        return uu_dd::bufferedoutput::BufferedOutput::discard_cache::h60b6879c47290589(arg1[3], 
            *arg1.byte_offset(0x1c), arg2, arg3);
    }
    
    /* tailcall */
    uu_dd::Output::discard_cache::h1b6c721cbbbead38(arg1[1], *arg1.byte_offset(0xc), arg2, arg3)
}
