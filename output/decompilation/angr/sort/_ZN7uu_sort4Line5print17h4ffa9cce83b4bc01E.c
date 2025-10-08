long long uu_sort::Line::print(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3[154])
{
    unsigned long v0;  // [bp-0x18]
    char v1;  // [bp-0x11]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v3;
    if (a3[124])
        return a0.print_debug(a1, a3, a2);
    v4 = a2.write_all(a0, a1);
    if (!v4)
    {
        v1 = a3[153];
        return a2.write_all(&v1, 1);
    }
    return v4;
}
