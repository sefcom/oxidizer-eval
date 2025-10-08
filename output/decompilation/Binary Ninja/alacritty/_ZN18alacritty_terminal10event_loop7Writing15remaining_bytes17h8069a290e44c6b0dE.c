
  int64_t alacritty_terminal::event_loop::Writing::remaining_bytes::h8069a290e44c6b0d(void* arg1)

{
    int64_t rsi = *(arg1 + 0x10);
    int64_t rax = *(arg1 + 0x18);
    
    if (rsi >= rax)
        return rax + *(arg1 + 8);
    
    int64_t var_8 = rax;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rax, rsi);
    /* no return */
}
