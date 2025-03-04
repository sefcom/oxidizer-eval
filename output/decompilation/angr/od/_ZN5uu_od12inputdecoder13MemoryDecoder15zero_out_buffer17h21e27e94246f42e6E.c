long long uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(struct struct_0 **a0, char *a1, unsigned long a2)
{
    char *v1;  // rbx
    unsigned long long v2[3];  // r15

    if (a1 >= a2)
        return v1;
    v1 = a1;
    v2 = *(a0);
    while (true)
    {
        if (v1 >= v2[2])
            core::panicking::panic_bounds_check::h25a5330941572dd1(v1, v2[2], &g_543508); /* do not return */
        v1[v2[1]] = 0;
        v1 = ::0x4d7d00::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v1);
        if (v1 >= a2)
            return v1;
    }
}
