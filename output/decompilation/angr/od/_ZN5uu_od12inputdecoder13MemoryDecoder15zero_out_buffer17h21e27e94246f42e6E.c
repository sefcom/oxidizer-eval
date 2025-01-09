long long uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(struct struct_0 **a0, char *a1, unsigned long a2)
{
    unsigned long long v1[3];  // r15
    char *v2;  // rbx
    char *v4;  // rax

    if (a1 >= a2)
        return v4;
    v1 = *(a0);
    while (true)
    {
        v2 = a1;
        if (v2 >= v1[2])
            core::panicking::panic_bounds_check::h25a5330941572dd1(v2, v1[2], &g_543508); /* do not return */
        v4 = ::0x4d7d00::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v2);
        v2[v1[1]] = 0;
        a1 = v4;
        if (v4 >= a2)
            return v4;
    }
}
