long long fish::screen::Line::append_str(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned int v4;  // edx
    unsigned int v5;  // r12d
    unsigned int v6;  // r12d

    v0 = a1;
    v1 = a1 + a2 * 4;
    v3 = v0.next();
    if ((unsigned int)v3 == 2)
        return v3;
    do
    {
        v6 = v5;
        v3.unwrap(v6, &g_14bd1b0);
        a0.append(v6, a3, a4, a5);
        v3 = v0.next();
        v5 = v4;
    } while ((unsigned int)v3 != 2);
    return v3;
}
