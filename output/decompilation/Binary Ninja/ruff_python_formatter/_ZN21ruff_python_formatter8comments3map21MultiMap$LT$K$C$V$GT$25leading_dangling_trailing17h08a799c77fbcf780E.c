
  int64_t ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading_dangling_trailing::h08a799c77fbcf780(int64_t* arg1, void* arg2, void* arg3)

{
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        arg2 + 0x30, arg3);
    int64_t result;
    int64_t rdx_6;
    int64_t rsi_6;
    int64_t rdi_7;
    int64_t r12_1;
    int64_t r13;
    
    if (!rax)
    {
        rsi_6 = 0;
        rdi_7 = 4;
        r12_1 = 4;
        r13 = 0;
        result = 4;
        rdx_6 = 0;
    }
    else
    {
        int32_t rdi_1 = *(rax + 0x10);
        
        if (!rdi_1)
        {
            int64_t rdi_8 = *(rax + 0x18);
            int64_t rsi_7 = *(arg2 + 0x28);
            
            if (rdi_8 >= rsi_7)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8, rsi_7);
                /* no return */
            }
            
            if (rdi_8 + 1 >= rsi_7)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8 + 1, rsi_7);
                /* no return */
            }
            
            if (rdi_8 + 2 >= rsi_7)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8 + 2, rsi_7);
                /* no return */
            }
            
            int64_t rdx_7 = *(arg2 + 0x20);
            int64_t rsi_8 = rdi_8 * 3;
            rdi_7 = *(rdx_7 + (rsi_8 << 3) + 8);
            rsi_6 = *(rdx_7 + (rsi_8 << 3) + 0x10);
            int64_t rax_5 = (rdi_8 + 1) * 3;
            r12_1 = *(rdx_7 + (rax_5 << 3) + 8);
            r13 = *(rdx_7 + (rax_5 << 3) + 0x10);
            int64_t rcx_5 = (rdi_8 + 2) * 3;
            result = *(rdx_7 + (rcx_5 << 3) + 8);
            rdx_6 = *(rdx_7 + (rcx_5 << 3) + 0x10);
        }
        else
        {
            int64_t r14_1 = *(arg2 + 8);
            int64_t r15_1 = *(arg2 + 0x10);
            int64_t rax_1;
            int64_t rdx_1;
            rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_1 - 1, *(rax + 0x14) - 1, r14_1, r15_1);
            int32_t rsi_3 = *(rax + 0x18);
            uint64_t rdi_4 = *(rax + 0x14) - 1;
            uint64_t rsi_4 = rsi_3 - 1;
            
            if (rsi_3 < 1)
                rsi_4 = rdi_4;
            
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_4, rsi_4, r14_1, r15_1);
            r12_1 = rax_2;
            r13 = rdx_3;
            uint64_t rax_3;
            int64_t rdx_4;
            rax_3 = ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(rax + 0x10);
            result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rax_3, rdx_4, r14_1, r15_1);
            rsi_6 = rdx_1;
            rdi_7 = rax_1;
        }
    }
    
    *arg1 = rdi_7;
    arg1[1] = rsi_6;
    arg1[2] = r12_1;
    arg1[3] = r13;
    arg1[4] = result;
    arg1[5] = rdx_6;
    return result;
}
