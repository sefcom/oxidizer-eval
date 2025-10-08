char fish::io::StringOutputStream::append(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    a0.spec_extend(a1, a1 + a2 * 4);
    return 1;
}
