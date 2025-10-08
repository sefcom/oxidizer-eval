
  fn uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg1: *mut c_void) -> i64

{
    let rsi: i64 = *arg1.byte_offset(0x10);
    let rax: i64 = *arg1.byte_offset(0x18);
    
    if rsi >= rax
    {
        return rax + *arg1.byte_offset(8);
    }
    
    let var_8: i64 = rax;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rax, rsi);
    /* no return */
}
