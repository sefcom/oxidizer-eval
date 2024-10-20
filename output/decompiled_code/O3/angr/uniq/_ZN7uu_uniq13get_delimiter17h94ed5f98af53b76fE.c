long long uu_uniq::get_delimiter::h94ed5f98af53b76f(struct_3 *a0)
{
    char v0;  // [bp-0xc8]
    unsigned long v1;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xb8]
    unsigned long v3;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa8]
    unsigned long long v5;  // [sp-0xa0]
    int v6;  // [sp-0x98], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x90]
    unsigned long v8;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x78]
    unsigned long long v10;  // [sp-0x70]
    unsigned long long v11;  // [sp-0x68]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    char v15;  // [bp-0x40]
    int v16;  // [sp-0x38]
    int v17;  // [sp-0x28]
    unsigned long long v18;  // [sp-0x18]
    struct_1 *v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx
    struct_1 *v23;  // rax
    struct_0 *v24;  // rcx
    struct struct_2 **v25;  // rdx
    struct struct_2 **v26;  // rsi
    struct_2 *v27;  // rdi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he9607e1a2ea35c9f(&v12, a0, "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgrou", 12);
    v1 = "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgrou";
    v2 = 12;
    if (*((int *)&v12) != 2)
    {
        v18 = *((long long *)&v15);
        *((int128_t *)&v17) = *((int128_t *)&v14);
        *((int128_t *)&v16) = *((int128_t *)&v12);
        v8 = &v1;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had17ade00331e9e0;
        v10 = &v16;
        v11 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v3 = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.4.llvm.14928124353916811356;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    v20 = *((long long *)&v13);
    if (!v20)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he9607e1a2ea35c9f(&v12, a0, "grou", 5);
        v1 = "grou";
        v2 = 5;
        if (*((int *)&v12) != 2)
        {
            vvar_257{stack -24} = *((long long *)&v15);
            vvar_258{stack -40} = *((int128_t *)&v14);
            vvar_259{stack -56} = *((int128_t *)&v12);
            vvar_260{stack -128} = &v1;
            vvar_261{stack -120} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had17ade00331e9e0;
            vvar_262{stack -112} = &v16;
            vvar_263{stack -104} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            vvar_264{stack -176} = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.4.llvm.14928124353916811356;
            vvar_265{stack -168} = 2;
            vvar_266{stack -144} = 0;
            vvar_267{stack -160} = &v8;
            vvar_268{stack -152} = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
        }
        v20 = *((long long *)&v13);
        if (!v20)
        {
            v22 = a0->field_10;
            v23 = v20 | -0x100 | 4;
            if (!v22)
                return v23;
            v25 = a0->field_8;
            v26 = 0;
            while (true)
            {
                if (*((long long *)(v25 + v26 + 8)) == 5)
                {
                    v27 = *((long long *)(v25 + v26));
                    if (!(v27->field_4 ^ 112) && !(v27->field_0 ^ 1970238055))
                    {
                        v23 = v23 | -0x100 | 2;
                        return v23;
                    }
                }
                v26 += 2;
                if (v22 << 4 == v26)
                    return v23;
            }
        }
    }
    v21 = v20->field_10 - 4;
    switch (v21)
    {
    case 0:
        switch (v24->field_0)
        {
        case 1752461154:
            return -33;
        case 1701736302:
            return -36;
        default:
            v3 = &g_4f2d08;
            v4 = 1;
            v5 = &v0;
            *((int128_t *)&v6) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
        }
    case 2:
        if (!((unsigned short)v24->field_3 ^ 25710) && !(1701867617 ^ v24->field_0))
            return 0;
    case 3:
        if (!(1684956528 ^ *((int *)((char *)&v24->field_0 + 3))) && !(1885696624 ^ v24->field_0))
            return -35;
    case 4:
        if (*((long long *)&v24->field_0) == 7310575239018079603)
            return -34;
    }
}
