
  int64_t ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::dangling::h7e10a3f7a62c8fb8(void* arg1, void* arg2)

{
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        arg1 + 0x30, arg2);
    
    if (!rax)
        return 4;
    
    if (*(rax + 0x10))
    {
        int32_t rsi = *(rax + 0x18);
        uint64_t rdi_2 = *(rax + 0x14) - 1;
        uint64_t rsi_1 = rsi - 1;
        
        if (rsi < 1)
            rsi_1 = rdi_2;
        
        return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_2, rsi_1, *(arg1 + 8), *(arg1 + 0x10));
    }
    
    int64_t rdi_4 = *(rax + 0x18) + 1;
    int64_t rsi_2 = *(arg1 + 0x28);
    
    if (rdi_4 >= rsi_2)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_4, rsi_2);
        /* no return */
    }
    
    int64_t rcx_1 = *(arg1 + 0x20);
    int64_t rdx_2 = rdi_4 * 3;
    *(rcx_1 + (rdx_2 << 3) + 0x10);
    return *(rcx_1 + (rdx_2 << 3) + 8);
}
