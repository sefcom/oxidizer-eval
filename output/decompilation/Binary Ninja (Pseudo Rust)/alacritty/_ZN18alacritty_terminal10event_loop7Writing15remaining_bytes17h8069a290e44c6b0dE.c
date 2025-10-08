
  fn alacritty_terminal::event_loop::Writing::remaining_bytes::h8069a290e44c6b0d(arg1: *mut c_void) -> i64

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
