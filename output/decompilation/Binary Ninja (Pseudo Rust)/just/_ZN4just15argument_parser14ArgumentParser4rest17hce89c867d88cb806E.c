
  fn just::argument_parser::ArgumentParser::rest::hce89c867d88cb806(arg1: *mut c_void) -> i64

{
    let rsi: i64 = *arg1.byte_offset(8);
    let rax: i64 = *arg1.byte_offset(0x18);
    
    if rsi >= rax
    {
        return (rax << 4) + *arg1;
    }
    
    let var_8: i64 = rax;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rax, rsi);
    /* no return */
}
