long long uu_sort::Line::print(unsigned long long a0[2], unsigned long long a1, char a2[154])
{
    unsigned long v0;  // [bp-0x18]
    char v1;  // [bp-0x11]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v3;
    if (a2[124])
        return a0[0].print_debug(a0[1], a2, a1);
    v4 = a1.write_all(a0[0], a0[1]);
    if (!v4)
    {
        v1 = a2[153];
        return a1.write_all(&v1, 1);
    }
    return v4;
}
