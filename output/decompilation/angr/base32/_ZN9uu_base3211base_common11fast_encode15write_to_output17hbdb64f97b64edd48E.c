long long uu_base32::base_common::fast_encode::write_to_output(unsigned long long *a0, void* a1, unsigned long long a2, void* *a3, char a4, char a5)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    if ((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63))
    {
        v3 = uu_base32::base_common::fast_encode::write_without_line_breaks(a1, a2, a3, a4, a5);
        if (!v3)
            return 0;
        return v3;
    }
    else
    {
        v4 = uu_base32::base_common::fast_encode::write_with_line_breaks(a0, a1, a2, a3, a4);
        if (!v4)
            return 0;
        return v4;
    }
}
