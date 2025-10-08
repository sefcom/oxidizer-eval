long long fish::io::FdOutputStream::append(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp
    char v4;  // bpl

    v0 = v2;
    v3 = a0->field_14;
    if ((char)v3)
        return 0;
    if (fish::wutil::wwrite_to_fd(a1, a2, a0->field_10) != 1)
    {
        if (((int)errno::errno() != 4 || !(char)a0.check()) && (int)errno::errno() != 32)
            fish::wutil::perror("writegroupzZq", 5);
        a0->field_14 = 1;
        v4 = 1;
        v3 = 1;
    }
    return (unsigned int)v3 & 0xffffff00 | v4 ^ 1;
}
