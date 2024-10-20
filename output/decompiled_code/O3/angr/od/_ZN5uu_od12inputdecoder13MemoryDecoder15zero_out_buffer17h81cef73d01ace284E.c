long long uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h81cef73d01ace284(struct struct_0 **a0, char *a1, unsigned long a2)
{
    unsigned long long v1[3];  // rcx
    unsigned long v2;  // rax

    if (a1 >= a2)
        return v2;
    v1 = *(a0);
    while (true)
    {
        if (a1 >= v1[2])
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        a1[v1[1]] = 0;
        a1 += 1;
        if (a2 == a1)
            return v2;
    }
}
