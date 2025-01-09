long long uu_tail::forwards_thru_file::h1756bf1e18ac67f2(unsigned long long a0, unsigned long a1, unsigned int a2)
{
    void* v0;  // [sp-0x78]
    unsigned long long v1;  // [sp-0x70]
    void* v2;  // [sp-0x68]
    char v3;  // [bp-0x60]
    void* v5;  // rbx
    void* v6;  // r12
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx

    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7fcbf21db742f1f7(&v3, 0x2000, a0);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    while (true)
    {
        v6 = _$LT$u64$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h30cfd590689ce002(v6);
        v7 = std::io::read_until::hc44e4035ffea86b1(&v3, a2, &v0);
        if (v7)
        {
            break;
        }
        else
        {
            if (!v8)
                break;
            v5 += v8;
            v2 = 0;
            if (v6 >= a1)
            {
                ::0x4ff3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&v0);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::hcb85c70210735641();
                return v7;
            }
        }
    }
    ::0x4ff3e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h284f430dac29ffa9(&v0);
    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$$RF$mut$u20$std..fs..File$GT$$GT$::hcb85c70210735641();
    return v7;
}
