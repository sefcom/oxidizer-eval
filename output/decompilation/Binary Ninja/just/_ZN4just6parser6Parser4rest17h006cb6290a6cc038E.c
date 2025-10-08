
  int64_t just::parser::Parser::rest::h006cb6290a6cc038(void* arg1)

{
    int64_t rsi = *(arg1 + 0x20);
    int64_t rdi = *(arg1 + 0x58);
    
    if (rdi <= rsi)
        return *(arg1 + 0x18) + rdi * 0x48;
    
    void* var_8 = arg1;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rdi, rsi);
    /* no return */
}
