long long fish::reader::get_best_rank(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    unsigned int v4;  // ebx
    unsigned long long v5;  // r14
    unsigned long v6;  // r14

    v0 = v2;
    if (!a1)
        return 4294967295;
    v3 = a1 * 56;
    v4 = 4294967295;
    do
    {
        v5 = v3;
        v4 = v4.min((unsigned int)a0.rank());
        a0 += 56;
        v6 = v5 - 56;
        v3 = v6;
    } while (v5 != 56);
    return v4;
}
