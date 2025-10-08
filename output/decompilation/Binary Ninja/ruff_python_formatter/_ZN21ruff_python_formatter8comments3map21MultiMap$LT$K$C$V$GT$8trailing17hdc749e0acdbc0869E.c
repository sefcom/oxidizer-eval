
  int64_t ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(void* arg1, void* arg2)

{
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        arg1 + 0x30, arg2);
    
    if (!rax)
        return 4;
    
    if (*(rax + 0x10))
    {
        uint64_t rax_2;
        int64_t rdx;
        rax_2 =
            ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(
            rax + 0x10);
        return _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rax_2, rdx, *(arg1 + 8), *(arg1 + 0x10));
    }
    
    int64_t rdi_4 = *(rax + 0x18) + 2;
    int64_t rsi_1 = *(arg1 + 0x28);
    
    if (rdi_4 >= rsi_1)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_4, rsi_1);
        /* no return */
    }
    
    int64_t rcx_1 = *(arg1 + 0x20);
    int64_t rdx_3 = rdi_4 * 3;
    *(rcx_1 + (rdx_3 << 3) + 0x10);
    return *(rcx_1 + (rdx_3 << 3) + 8);
}
