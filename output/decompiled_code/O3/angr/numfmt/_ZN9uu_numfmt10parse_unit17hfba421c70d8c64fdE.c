double uu_numfmt::parse_unit::hfba421c70d8c64fd(long long a0, long long a1, long long a2)
{
    uint128_t *v1;  // rax
    int v2;  // ymm0
    int v3;  // ymm0

    switch (a2)
    {
    case 2:
        if (a1->field_0 != 26995)
        {
            vvar_88{reg 16} = __rust_alloc(29, 1);
            if (v1)
            {
                *((int128_t *)((char *)v1 + 13)) = 133449359328100653481948179163157653870;
                *(v1) = 154737879025972706013838974321557728853;
                a0->field_0 = 29;
                *((uint128_t **)&a0->field_8) = v1;
                a0->field_10 = 29;
                return (unsigned long long)(v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853);
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            a0->field_8 = 3;
            a0->field_0 = 0x8000000000000000;
            return (unsigned long long)v2;
        }
    case 3:
        if (!(!(unsigned short)(a1->padding_2[0] ^ 99)) || !(!(unsigned short)(a1->field_0 ^ 25961)))
        {
            vvar_93{reg 16} = __rust_alloc(29, 1);
            if (v1)
            {
                *((int128_t *)((char *)v1 + 13)) = 133449359328100653481948179163157653870;
                *(v1) = 154737879025972706013838974321557728853;
                a0->field_0 = 29;
                *((uint128_t **)&a0->field_8) = v1;
                a0->field_10 = 29;
                return (unsigned long long)(v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853);
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            a0->field_8 = 0;
            a0->field_0 = 0x8000000000000000;
            return (unsigned long long)v2;
        }
    case 4:
        switch (*((int *)&a1->field_0))
        {
        case 1869903201:
            a0->field_8 = 2;
            break;
        case 1701736302:
            a0->field_8 = 5;
            break;
        default:
            v1 = __rust_alloc(29, 1);
            if (v1)
            {
                *((int128_t *)((char *)v1 + 13)) = 133449359328100653481948179163157653870;
                *(v1) = 154737879025972706013838974321557728853;
                a0->field_0 = 29;
                *((uint128_t **)&a0->field_8) = v1;
                a0->field_10 = 29;
                return (unsigned long long)(v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853);
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        a0->field_0 = 0x8000000000000000;
        return (unsigned long long)v2;
    case 5:
        if (!(!(a1->field_4 ^ 105)) || !(!(761488745 ^ *((int *)&a1->field_0))))
        {
            vvar_98{reg 16} = __rust_alloc(29, 1);
            if (v1)
            {
                *((int128_t *)((char *)v1 + 13)) = 133449359328100653481948179163157653870;
                *(v1) = 154737879025972706013838974321557728853;
                a0->field_0 = 29;
                *((uint128_t **)&a0->field_8) = v1;
                a0->field_10 = 29;
                return (unsigned long long)(v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853);
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            a0->field_8 = 1;
            a0->field_0 = 0x8000000000000000;
            return (unsigned long long)v2;
        }
    }
}
