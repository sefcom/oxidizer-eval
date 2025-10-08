
  int64_t alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4, char arg5, char arg6)

{
    int64_t rax;
    int32_t rdx;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    int64_t rax_1;
    int32_t rdx_2;
    rax_1 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h6e1ba6fe622dc9c8(rax, rdx, arg3, arg4);
    int64_t var_138 = rax_1;
    int32_t var_130 = rdx_2;
    void var_128;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h6161f52003526c91(&var_128, 
        arg1 + 0x20);
    int64_t var_140 = 0;
    char rax_2;
    int64_t rdx_3;
    rax_2 = _$LT$alloc..collections..vec_deque..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h119dbd4628219e7c(&var_128, &var_138);
    int64_t r14;
    
    if (!(rax_2 & 1))
        r14 = *(arg1 + 0x38);
    else
        r14 = rdx_3;
    
    int32_t r13_1 = 0x3b9aca00;
    
    if (arg5)
        r13_1 = arg4;
    
    int64_t var_68 = rax_1;
    int32_t var_60 = rdx_2;
    memcpy(&var_128, arg2, 0xc0);
    int64_t r9;
    int64_t var_48 = r9;
    char var_40 = arg6;
    int64_t var_58 = arg3;
    int32_t var_50 = r13_1;
    return alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::insert::h4a2214b1eb0a2d0f(
        arg1 + 0x20, r14, &var_128);
}
