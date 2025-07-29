long long uu_sort::ext_sort::write_lines(unsigned long long a0, unsigned long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x41]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v4[2];  // rax

    v1 = a0;
    v2 = a0 + a1 * 24;
    v4 = v1.next();
    if (!v4)
        return v4;
    do
    {
        a2.write_all(v4[0], v4[1]).unwrap(&g_673810);
        v0 = a3;
        a2.write_all(&v0, 1).unwrap(&g_673828);
        v4 = v1.next();
    } while (v4);
    return v4;
}
