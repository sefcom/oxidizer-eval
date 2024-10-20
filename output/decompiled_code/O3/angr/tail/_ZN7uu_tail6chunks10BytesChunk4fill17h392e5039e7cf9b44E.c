long long uu_tail::chunks::BytesChunk::fill::h392e5039e7cf9b44(unsigned long long a0[3], struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x30]
    char v1;  // [bp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long v4;  // rdx
    uint128_t v5[2];  // rax
    unsigned long v6;  // rdx
    int v7;  // xmm0

    if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::hf80a2ddabf1e7e3e(a2, a1, 0x2000))
    {
        v0 = 0x8000000000000000;
        v2 = v4;
        v5 = __rust_alloc(32, 8);
        if (v5)
        {
            v7 = *((int128_t *)&v0);
            v5[1] = *((int128_t *)&v1);
            *((void*)&v5[0]) = v7;
            a0[1] = v5;
            a0[2] = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0[0] = 1;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    else
    {
        a1->field_2000 = v6;
        if (v6)
        {
            a0[1] = 1;
            a0[2] = v6;
            a0[0] = 0;
            return a0;
        }
        *((int128_t *)&a0[0]) = 0;
        return a0;
    }
}
