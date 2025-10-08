
  fn just::parser::Parser::rest::h006cb6290a6cc038(arg1: *mut c_void) -> i64

{
    let rsi: i64 = *arg1.byte_offset(0x20);
    let rdi: i64 = *arg1.byte_offset(0x58);
    
    if rdi <= rsi
    {
        return *arg1.byte_offset(0x18) + rdi * 0x48;
    }
    
    let var_8: *mut c_void = arg1;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rdi, rsi);
    /* no return */
}
