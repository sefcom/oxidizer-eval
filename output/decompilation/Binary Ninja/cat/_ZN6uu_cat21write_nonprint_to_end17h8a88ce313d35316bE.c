
  int64_t uu_cat::write_nonprint_to_end::h8a88ce313d35316b(int64_t arg1, int64_t arg2, int64_t* arg3, char* arg4, uint64_t arg5)

{
    int64_t var_40 = arg1;
    int64_t var_38 = arg2 + arg1;
    char* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b5a5efb688e09cf(&var_40);
    int64_t result = 0;
    
    for (; i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b5a5efb688e09cf(&var_40))
    {
        uint32_t rax_1 = *i;
        uint64_t rdx;
        char* rsi_1;
        int64_t* rdi_1;
        
        if (rax_1 == 9)
        {
            rdi_1 = arg3;
            rsi_1 = arg4;
            rdx = arg5;
        }
        else if (rax_1 == 0x7f)
        {
            rdx = 2;
            rdi_1 = arg3;
            rsi_1 = "^?unknown filetype: Is a directo…";
        }
        else
        {
            if (rax_1 == 0xa)
                break;
            
            char var_4c;
            
            if (rax_1 < 0x20)
            {
                rax_1 |= 0x40;
                var_4c = 0x5e;
                char var_4b_1 = rax_1;
                rdx = 2;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
            else if (rax_1 - 0x20 < 0x5f)
            {
                var_4c = rax_1;
                rdx = 1;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
            else if (rax_1 < 0xa0)
            {
                rax_1 -= 0x40;
                var_4c = 0x2d4d;
                char var_4a_1 = 0x5e;
                char var_49_1 = rax_1;
                rdx = 4;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
            else if (rax_1 + 0x60 >= 0x5f)
            {
                rdx = 4;
                rdi_1 = arg3;
                rsi_1 = "M-^?\x1b[2mAnsi -- \x1b[8mhelpNo…";
            }
            else
            {
                rax_1 &= 0x7f;
                var_4c = 0x2d4d;
                char var_4a_2 = rax_1;
                rdx = 3;
                rdi_1 = arg3;
                rsi_1 = &var_4c;
            }
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(rdi_1, rsi_1, rdx));
        result += 1;
    }
    
    return result;
}
