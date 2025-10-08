long long uu_more::Pager::should_close(unsigned long long a0[15])
{
    unsigned long long v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned long long v3;  // rax

    v1 = a0[10] + a0[11];
    if ((char)_ccall(3, 4, a0[10], a0[11], v2))
        v3 = v1;
    else
        v3 = 18446744073709551615;
    return v1 & 0xffffffffffffff00 | a0[14] <= v3;
}
