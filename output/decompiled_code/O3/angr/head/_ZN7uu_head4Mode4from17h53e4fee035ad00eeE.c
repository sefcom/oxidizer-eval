long long uu_head::Mode::from::h53e4fee035ad00ee(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x88]
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x77]
    char v3;  // [bp-0x74]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    int v7;  // [bp-0x48], Other Possible Types: char
    int v8;  // [sp-0x38]
    unsigned long long v10[3];  // rax
    unsigned long long v11[3];  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93f14d0ecce99c1a(&v7, a1, "BYTES", 5);
    v10 = clap_builder::parser::error::MatchesError::unwrap::h1a803a7302dfb847("BYTES", 5, &v7);
    if (!v10)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93f14d0ecce99c1a(&v7, a1, "LINES", 5);
        v11 = clap_builder::parser::error::MatchesError::unwrap::h1a803a7302dfb847("LINES", 5, &v7);
        if (!v11)
        {
            *((long long *)&a0->padding_8[0]) = 0;
            *((long long *)&a0->field_10) = 10;
            a0->field_0 = 0x8000000000000000;
            return v12;
        }
        uu_head::parse::parse_num::h0b10a586c944e6e5(&v4, v11[1], v11[2]);
        if (*((int *)&v4) != 3)
        {
            *((int128_t *)&v8) = *((int128_t *)&v6);
            *((int128_t *)&v7) = *((int128_t *)&v4);
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::hb5202c7fdcf4dd08(&v0, &v7);
            vvar_194{reg 16} = v1;
            a0->field_11 = *((int *)&v3);
            *((int *)&(&a0->field_10)[1]) = *((int *)&v2);
            *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
            a0->field_10 = vvar_194{reg 16};
            return v12;
        }
        v12 = 0x8000000000000000;
        v13 = *((long long *)&v5);
        if (v6)
            *((long long *)&a0->padding_8[0]) = 1;
        else
            *((long long *)&a0->padding_8[0]) = 0;
    }
    else
    {
        uu_head::parse::parse_num::h0b10a586c944e6e5(&v4, v10[1], v10[2]);
        if (*((int *)&v4) != 3)
        {
            *((int128_t *)&v8) = *((int128_t *)&v6);
            *((int128_t *)&v7) = *((int128_t *)&v4);
            uu_head::Mode::from::_$u7b$$u7b$closure$u7d$$u7d$::he18e9b8fbd48dd2e(&v0, &v7);
            v12 = v1;
            a0->field_11 = *((int *)&v3);
            *((int *)&(&a0->field_10)[1]) = *((int *)&v2);
            *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
            a0->field_10 = v12;
            return v12;
        }
        v12 = 0x8000000000000000;
        v13 = *((long long *)&v5);
        if (!v6)
            *((long long *)&a0->padding_8[0]) = 2;
        else
            *((long long *)&a0->padding_8[0]) = 3;
    }
    *((unsigned long long *)&a0->field_10) = v13;
    a0->field_0 = v12;
    return v12;
}
