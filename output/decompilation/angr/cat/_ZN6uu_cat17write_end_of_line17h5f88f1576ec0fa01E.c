long long uu_cat::write_end_of_line(unsigned long long a0[2], unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = a1.write_all(a2, a3);
    if (v3)
    {
        a0[0] = 0x8000000000000000;
        a0[1] = v3;
        return v3;
    }
    if (a4)
    {
        v3 = a1.flush();
        if (v3)
        {
            a0[0] = 0x8000000000000000;
            a0[1] = v3;
            return v3;
        }
    }
    a0[0] = 9223372036854775814;
    return v3;
}
