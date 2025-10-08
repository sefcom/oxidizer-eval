long long fish::highlight::highlight::Highlighter::io_still_ok(unsigned long long a0, char a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (!(a1 & 1))
        return 0;
    v0 = v2;
    v3 = (unsigned long long)a0.check_cancel();
    return v3 & 0xffffffffffffff00 | (char)v3 ^ 1;
}
