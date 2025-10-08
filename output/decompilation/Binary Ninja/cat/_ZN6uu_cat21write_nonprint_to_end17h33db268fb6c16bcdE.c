
  int64_t uu_cat::write_nonprint_to_end::h33db268fb6c16bcd(void* arg1, int64_t arg2, int64_t* arg3, char* arg4, uint64_t arg5)

{
    if (!arg2)
        return 0;
    
    int64_t rbx = 0;
    
    do
    {
        uint32_t rax_2 = *(arg1 + rbx);
        uint64_t rdx;
        char* rsi;
        int64_t* rdi;
        
        if (rax_2 == 9)
        {
            rdi = arg3;
            rsi = arg4;
            rdx = arg5;
        }
        else if (rax_2 == 0x7f)
        {
            rdx = 2;
            rdi = arg3;
            rsi = "^?unknown filetype: Is a directo…";
        }
        else
        {
            if (rax_2 == 0xa)
                return rbx;
            
            if (rax_2 < 0x20)
            {
                rax_2 |= 0x40;
                char var_41 = 0x5e;
                char var_40_1 = rax_2;
                rdx = 2;
                rdi = arg3;
                rsi = &var_41;
            }
            else if (rax_2 - 0x20 < 0x5f)
            {
                char var_42 = rax_2;
                rdx = 1;
                rdi = arg3;
                rsi = &var_42;
            }
            else if (rax_2 < 0xa0)
            {
                rax_2 -= 0x40;
                int16_t var_3f = 0x2d4d;
                char var_3d_1 = 0x5e;
                char var_3c_1 = rax_2;
                rdx = 4;
                rdi = arg3;
                rsi = &var_3f;
            }
            else if (rax_2 + 0x60 >= 0x5f)
            {
                rdx = 4;
                rdi = arg3;
                rsi = "M-^? -> \x1b[2mAnsi -- \x1b[8mhe…";
            }
            else
            {
                rax_2 &= 0x7f;
                int16_t var_3b = 0x2d4d;
                char var_39_1 = rax_2;
                rdx = 3;
                rdi = arg3;
                rsi = &var_3b;
            }
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h7628d8a11a4ef90d(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h4762d2070cade9bd(rdi, rsi, rdx));
        rbx += 1;
    } while (arg2 != rbx);
    
    return arg2;
}
