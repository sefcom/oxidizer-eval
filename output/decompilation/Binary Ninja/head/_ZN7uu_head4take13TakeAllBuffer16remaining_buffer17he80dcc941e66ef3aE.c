
  int64_t uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(void* arg1)

{
    int64_t rsi = *(arg1 + 0x10);
    int64_t rax = *(arg1 + 0x18);
    
    if (rsi >= rax)
        return rax + *(arg1 + 8);
    
    int64_t var_8 = rax;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rax, rsi);
    /* no return */
}
