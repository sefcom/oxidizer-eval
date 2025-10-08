long long fish::terminal::get_flag_cap(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rax

    v0 = v2;
    v3 = a0.raw(a1);
    if (!v3)
        return 0;
    return v3 & 0xffffffffffffff00 | ((0 ^ *(v3)) & (0 ^ -(*(v3)))) >> 63 & 255;
}
