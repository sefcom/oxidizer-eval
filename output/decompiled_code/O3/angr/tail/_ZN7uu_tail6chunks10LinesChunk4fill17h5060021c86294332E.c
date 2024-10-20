long long uu_tail::chunks::LinesChunk::fill::h5060021c86294332(unsigned long long a0[3], struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x38]
    char v1;  // [bp-0x28]
    unsigned long long v2;  // [sp-0x20]
    unsigned long v4;  // rdx
    uint128_t v5[2];  // rax
    unsigned long v6;  // rdx
    int v7;  // xmm0
    unsigned long long v8;  // rax
    struct struct_0 **v9;  // rcx

    if (!_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::hf80a2ddabf1e7e3e(a2, a1, 0x2000))
    {
        a1->field_2000 = v6;
        if (!v6)
        {
            a1->field_2008 = 0;
            a0[1] = 0;
        }
        else
        {
            if (v6 >= 8193)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            a1->field_2008 = v9(a1->field_2010, a1, &a1->padding_0[v6], _ZN6memchr4arch6x86_646memchr9count_raw2FN17hd7c020a0332f3b7cE);
            a0[1] = 1;
            a0[2] = v6;
        }
        v8 = 0;
    }
    else
    {
        v0 = 0x8000000000000000;
        v2 = v4;
        v5 = __rust_alloc(32, 8);
        if (!v5)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v7 = *((int128_t *)&v0);
        v5[1] = *((int128_t *)&v1);
        *((void*)&v5[0]) = v7;
        a0[1] = v5;
        a0[2] = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        v8 = 1;
    }
    a0[0] = v8;
    return a0;
}
