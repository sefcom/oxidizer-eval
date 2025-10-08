
  int128_t* bat::line_range::LineRanges::from::h4ce85643fa8989ac(int128_t* arg1, int128_t* arg2)

{
    void* r13 = *(arg2 + 8);
    void* rbp_2 = (arg2[1] << 5) + r13;
    char rax;
    int64_t rdx;
    rax = core::iter::traits::iterator::Iterator::reduce::h527244d24d37bf97(r13, rbp_2);
    int64_t var_b0 = 0;
    int64_t var_78 = 0;
    void* var_40 = r13;
    void* var_38 = rbp_2;
    int64_t var_c8;
    itertools::minmax::minmax_impl::h4fbfb0ef3728aa92(&var_c8, &var_b0);
    int64_t rax_1 = var_c8;
    int64_t rcx;
    
    if (!rax_1)
        rcx = rax_1;
    else
    {
        int64_t var_c0;
        
        if (rax_1 != 1)
        {
            rax_1 = var_c0;
            int64_t var_b8;
            rcx = var_b8;
        }
        else
        {
            rax_1 = var_c0;
            rcx = rax_1;
        }
    }
    
    arg1[1] = arg2[1];
    *arg1 = *arg2;
    *(arg1 + 0x18) = (0 - 0) | rdx;
    arg1[2] = rax_1;
    *(arg1 + 0x28) = rcx;
    return arg1;
}
