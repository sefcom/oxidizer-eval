
  void uu_seq::select_precision::h84cf8927d3a54a3b(int32_t* arg1, int32_t* arg2, int64_t* arg3)

{
    if (*arg1 != 1 || *arg2 != 1 || !*arg3)
        return;
    
    int64_t rdi = *(arg1 + 8);
    int64_t rsi = *(arg2 + 8);
    
    if (!(rsi | rdi | arg3[1]))
        return;
    
    int64_t var_8 = 1;
    core::cmp::Ord::max::hc4036d29a65f4853(rdi, rsi);
}
