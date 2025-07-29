long long uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(struct_0 **a0, char *a1, unsigned long a2)
{
    unsigned long long v1[3];  // r15
    char *v2;  // rbx
    char *v3;  // rax
    unsigned long v4;  // rax

    if (a1 >= a2)
        return v4;
    v1 = *(a0);
    while (true)
    {
        v2 = a1;
        if (v2 >= v1[2])
            core::panicking::panic_bounds_check(v2, v1[2], &g_596270); /* do not return */
        v3 = v2.forward_unchecked();
        v2[v1[1]] = 0;
        a1 = v3;
        if (a1 >= a2)
            return v3;
    }
}
