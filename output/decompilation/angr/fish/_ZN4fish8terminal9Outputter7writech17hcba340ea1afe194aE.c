long long fish::terminal::Outputter::writech(unsigned long long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    unsigned long v3;  // rax

    v0 = v3;
    v1 = a1;
    a0.write_wstr(&v1, 1);
    return v0;
}
