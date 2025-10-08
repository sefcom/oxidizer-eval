
  int64_t just::argument_parser::ArgumentParser::rest::hce89c867d88cb806(void* arg1)

{
    int64_t rsi = *(arg1 + 8);
    int64_t rax = *(arg1 + 0x18);
    
    if (rsi >= rax)
        return (rax << 4) + *arg1;
    
    int64_t var_8 = rax;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rax, rsi);
    /* no return */
}
