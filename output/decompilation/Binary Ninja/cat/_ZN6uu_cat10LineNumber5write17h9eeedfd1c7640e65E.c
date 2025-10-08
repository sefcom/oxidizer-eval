
  int64_t uu_cat::LineNumber::write::h9eeedfd1c7640e65(void* arg1, int64_t* arg2)

{
    int64_t rdi = *(arg1 + 0x20);
    
    if (rdi <= 0x20)
        /* tailcall */
        return _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(arg2, arg1 + rdi, 0x20 - rdi);
    
    void* var_8 = arg1;
    core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rdi, 0x20);
    /* no return */
}
