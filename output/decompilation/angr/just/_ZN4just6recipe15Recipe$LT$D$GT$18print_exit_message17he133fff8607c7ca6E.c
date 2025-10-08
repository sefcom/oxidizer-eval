long long just::recipe::Recipe<D>::print_exit_message(unsigned long a0, char a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a0 + 216;
    v4 = v3.contains(3);
    if ((char)v4)
    {
        return v4 & 0xffffffffffffff00 | 1;
    }
    else if ((a1 & 1))
    {
        return 0;
    }
    else
    {
        v5 = v3.contains(10);
        return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
    }
}
