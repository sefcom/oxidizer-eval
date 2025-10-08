long long fish::ast::Populator::status(char a0[220])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v3;  // rax
    unsigned long v4;  // rax

    if (a0[217])
        return v4 & 0xffffffffffffff00 | 2;
    if (!(a0[219] & 8))
        return 0;
    v0 = v4 & 0xffffffffffffff00 | 2;
    v3 = a0.peek_type(0);
    if ((char)v3 == 11)
        return v3 & 0xffffffffffffff00 | 1;
    return 0;
}
