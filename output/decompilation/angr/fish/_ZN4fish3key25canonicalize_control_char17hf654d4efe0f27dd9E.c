long long fish::key::canonicalize_control_char(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rbp
    unsigned int v4;  // ebx
    unsigned int v5;  // eax

    v0 = v2;
    v3 = a0;
    v4 = v3;
    v5 = fish::key::canonicalize_keyed_control_char(v4);
    if (v5 <= 255)
    {
        if ((v3 & 255) <= 31)
            return (unsigned int)fish::key::canonicalize_unkeyed_control_char(v4) | 0x100000000;
        v5 = 0x110000;
    }
    return v5;
}
