
  int64_t alacritty::renderer::rects::RenderLine::rects::h3e1b797e248680e5(int128_t* arg1, int64_t* arg2, int16_t arg3, void* arg4, void* arg5)

{
    int64_t var_58 = 0;
    int64_t var_50 = 4;
    int64_t result = 0;
    int64_t r13 = *arg2;
    int64_t r9 = arg2[1];
    int64_t rax = arg2[2];
    int64_t* rax_3;
    uint32_t r14_2;
    
    if (r13 >= rax)
    {
        r14_2 = *(arg2 + 0x22) << 0x10 | arg2[4];
        rax_3 = arg2;
    }
    else
    {
        int64_t r12_2 = *(arg5 + 8) - 1;
        r14_2 = *(arg2 + 0x22) << 0x10 | arg2[4];
        void* r15_1 = arg4;
        void* rbp_1 = arg5;
        alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(&var_58, arg4, arg5, 
            arg3, r13, r9, r12_2, r14_2);
        int64_t r13_1 = r13 + 1;
        
        if (r13_1 != rax)
        {
            arg4 = r15_1;
            arg5 = rbp_1;
            
            do
            {
                alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(&var_58, 
                    arg4, arg5, arg3, r13_1, 0, r12_2, r14_2);
                r13_1 += 1;
                arg4 = r15_1;
                arg5 = rbp_1;
            } while (rax != r13_1);
            
            r13 = rax;
            rax_3 = arg2;
            r9 = 0;
        }
        else
        {
            r9 = 0;
            r13 = rax;
            rax_3 = arg2;
            arg4 = r15_1;
            arg5 = rbp_1;
        }
    }
    
    alacritty::renderer::rects::RenderLine::push_rects::h98dca790795ed191(&var_58, arg4, arg5, 
        arg3, r13, r9, rax_3[3], r14_2);
    arg1[1] = result;
    *arg1 = var_58;
    return result;
}
