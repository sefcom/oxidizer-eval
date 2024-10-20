long long uu_dd::Input::new_stdin::h88a947f442bf95b4(unsigned long long a0[3], struct_0 *a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0xe8]
    unsigned long v1;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xd8]
    int v3;  // [sp-0xd0]
    char v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xb8]
    unsigned long long v6;  // [sp-0xb0]
    int v7;  // [sp-0xa8], Other Possible Types: unsigned long long
    void* v8;  // [sp-0xa0]
    char v9;  // [bp-0x88]
    unsigned long v11;  // rsi
    int v12;  // ymm0
    int v13;  // ymm0
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rsi
    struct_1 *v17;  // rax
    int v18;  // ymm0
    int v19;  // xmm0
    unsigned long long v20;  // rcx

    std::io::stdio::stdin::h7215cc131abb55d8();
    v0 = 1;
    std::fs::File::metadata::he899a18112e6f19e(&v4, &v0);
    if (*((int *)&v4) == 2)
    {
        goto LABEL_4994ba;
    }
    else
    {
        if (!((0xf000 & *((int *)&v9)) != 0x8000) && !(!a1->field_42))
        {
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v3) = g_51be68;
            v1 = &v3;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7f7f90908f26f7ca;
            v4 = &g_515c08;
            v5 = 2;
            v8 = 0;
            v6 = &v1;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v14, v15);
            v4 = &g_515c48;
            v5 = 1;
            v6 = 8;
            *((int128_t *)&v7) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v16, v15);
            v17 = __rust_alloc(4, 4);
            if (!v17)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v17->field_0 = 1;
            v20 = &anon.9b9ba72dabd212696498d24b7f543cb0.76.llvm.3928628070634382108;
        }
        else
        {
            v11 = a1->field_80;
            if (!a1->field_80)
            {
                v13 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1;
                a0[1] = (unsigned long long)v13;
                a0[2] = a1;
                a0[0] = 0;
                return a0;
            }
            else if (!uu_dd::Source::skip::h85c7505f843bd54c(&v0, v11))
            {
                v13 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0;
                a0[1] = (unsigned long long)v13;
                a0[2] = a1;
                a0[0] = 0;
                return a0;
            }
LABEL_4994ba:
            v4 = 0x8000000000000000;
            v7 = v5;
            v17 = __rust_alloc(32, 8);
            if (!v17)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v19 = *((int128_t *)&v4);
            v17->field_10 = *((int128_t *)&v6);
            *((void*)&v17->field_0) = v19;
            v20 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        }
        a0[1] = v17;
        a0[2] = v20;
        a0[0] = 1;
        close(*((int *)((char *)&v0 + 4)));
        return a0;
    }
}
