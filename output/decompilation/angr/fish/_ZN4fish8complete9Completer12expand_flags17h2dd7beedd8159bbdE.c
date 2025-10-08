long long fish::complete::Completer::expand_flags(char a0[115])
{
    unsigned long v0;  // [bp-0x18]
    unsigned short v1;  // [bp-0x12]
    unsigned long v3;  // rax

    v0 = v3;
    v1 = 0;
    v1.set(1, a0[112]);
    v1.set(0x100, a0[114]);
    v1.set(64, a0[113]);
    return v1;
}
