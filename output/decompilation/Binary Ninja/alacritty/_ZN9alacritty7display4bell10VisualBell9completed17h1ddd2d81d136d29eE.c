
  int64_t alacritty::display::bell::VisualBell::completed::h1ddd2d81d136d29e(int64_t* arg1)

{
    int32_t rbx = arg1[3];
    int64_t result;
    
    if (rbx != 0x3b9aca00)
    {
        int64_t r15_1 = arg1[2];
        int64_t rax;
        int32_t rdx_1;
        rax = std::time::Instant::now::h767314cc8c6c5886();
        int64_t var_28 = rax;
        int32_t var_20_1 = rdx_1;
        int32_t rdx_2;
        result = std::time::Instant::duration_since::h569f2ab177f38507(&var_28, r15_1);
        int64_t temp0_1 = *arg1;
        bool cond:0_1 = result < temp0_1;
        
        if (result == temp0_1)
            cond:0_1 = rdx_2 < arg1[1];
        
        if (!cond:0_1)
            arg1[3] = 0x3b9aca00;
    }
    
    result = rbx == 0x3b9aca00;
    return result;
}
