
  int64_t uu_head::take::TakeAllLinesBuffer::fill_buffer::hfa940c1c6239deab(int64_t* arg1, int64_t* arg2, int32_t* arg3, char arg4)

{
    char rax;
    int64_t rdx;
    rax = uu_head::take::TakeAllBuffer::fill_buffer::hf61126089cbcf29e(arg2, arg3);
    int64_t result;
    
    if (!(rax & 1))
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg2);
        int64_t rsi_1 = rdx_1 + rax_1;
        char var_28 = arg4;
        int64_t var_40_1 = rax_1;
        int64_t var_38_1 = rax_1;
        int64_t var_30_1 = rsi_1;
        arg2[4] =
            memchr::arch::generic::memchr::Iter::count::hdf305186817169f5(rax_1, rsi_1, &var_28);
        int64_t rax_3;
        int64_t rdx_3;
        rax_3 = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg2);
        
        if (rdx_3 && *(rax_3 + rdx_3 - 1) != arg4)
            arg2[5] = 1;
        
        int64_t rax_4 = arg2[4];
        arg1[1] = rdx;
        arg1[2] = rax_4;
        result = 0;
    }
    else
    {
        arg1[1] = rdx;
        result = 1;
    }
    
    *arg1 = result;
    return result;
}
