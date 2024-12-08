long long uu_shred::get_size::h7b8806beb7cebdb8(unsigned long long a0[3], unsigned long long a1, unsigned long a2)
{
    int v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x18]
    void* v3;  // rdi

    if (a0[0] == 0x8000000000000000)
        v3 = 0;
    else
        v3 = uu_shred::get_size::_$u7b$$u7b$closure$u7d$$u7d$::h50e8030fb7ab0186(a0[1], a0[2]);
    v1 = a0[2];
    *((int128_t *)&v0) = *((int128_t *)&a0[0]);
    return core::option::Option$LT$T$GT$::or_else::h4369798a9ca51bdc(v3, a1);
}
