long long uu_ls::is_recent(unsigned long a0, unsigned int a1, unsigned long a2, unsigned int a3)
{
    unsigned long v1;  // rax

    v1 = (a0 < a2 ? 255 : a2 != a0);
    return v1 & 0xffffffffffffff00 | ((v1 & 255) ? (char)v1 : (a1 < a3 ? 255 : a3 != a1)) == 1;
}
