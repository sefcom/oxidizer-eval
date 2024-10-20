long long uu_split::strategy::Strategy::from::hf902c08864ae86e8(unsigned long long a0[4], struct_1 *a1, unsigned long long a2[3])
{
    void* v0;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v1;  // [sp-0xf0]
    void* v2;  // [sp-0xe8], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0xe0]
    unsigned long v4;  // [sp-0xd8], Other Possible Types: unsigned short
    char v5;  // [sp-0xd6]
    unsigned long long v6;  // [sp-0xd0]
    unsigned long long v7;  // [sp-0xc8]
    char v8;  // [sp-0xc0]
    void* v9;  // [bp-0xb8], Other Possible Types: char
    unsigned long v10;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v11;  // [bp-0xa8], Other Possible Types: void*, unsigned long
    int v14;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v16;  // [bp-0x78]
    unsigned long long v25;  // rcx
    struct struct_0 **v26;  // r8
    unsigned long long v27;  // rcx
    unsigned long long v28;  // r9
    struct struct_0 **v29;  // rax
    void* v30;  // rdi
    struct_0 *v31;  // r10
    char v32;  // r15b
    char v33;  // bl
    char v34;  // bpl
    unsigned long long v35;  // r11
    unsigned long long v38;  // rbp
    struct_0 *v39;  // r14
    unsigned long long v40;  // r14
    char v43;  // r15b
    unsigned long long v45;  // r12
    unsigned long long v46;  // r15
    char *v47;  // r12
    struct struct_0 **v48;  // rax
    void* v49;  // rdi
    struct_0 *v50;  // r13
    char v51;  // al
    unsigned long long v52[4];  // rbx
    unsigned long long v53[3];  // rax
    unsigned long long v54;  // r14
    unsigned long long v58;  // r15
    int v64;  // xmm0
    unsigned long long v65;  // rax
    int v66;  // xmm0

    v25 = a1->field_10;
    if (!v25)
    {
        if (a2[0] == 0x8000000000000000)
        {
            vvar_987{reg 40} = a0;
            v52[1] = 6;
            v52[2] = 1000;
            v52[0] = 4;
            return v52;
        }
        v32 = 0;
        v33 = 0;
        v34 = 0;
LABEL_4a6b74:
        if (!(!v34) || !(!v33) || !(!v32))
        {
            v52 = a0;
            v52[0] = 3;
            return v52;
        }
    }
    else
    {
        v26 = a1->field_8;
        v27 = v25 * 16;
        v28 = 97;
        v29 = 0;
        v30 = 0;
        do
        {
            if (*((long long *)(v26 + v29 + 8)) == 5 && !(v31->padding_4[0] ^ 115) && !(v31->field_0 ^ 1701734764))
            {
                if (v30 < a1->field_28)
                    goto LABEL_4a6903;
                else
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
        } while ((v29 += 16, v28 += 104, v30 += 1, v27 != v29));
LABEL_4a6903:
        v33 = a0 | -0x100;
        v35 = 97;
        do
        {
            if (v26[1] == 5 && !(v39->padding_4[0] ^ 115) && !(unsigned int)v38)
            {
                if (0 < a1->field_28)
                    break;
                else
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
        } while ((v29 += 16, v28 += 104, v30 += 1, v27 != v29));
        v34 = v38 | -0x100;
        v40 = 97;
        do
        {
            if (v26[1] == 10 && !v46 && !v45)
            {
                if (0 >= a1->field_28)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                break;
            }
        } while ((v29 += 16, v28 += 104, v30 += 1, v27 != v29));
        v32 = v43 | -0x100;
        v47 = 97;
        v48 = 0;
        v49 = 0;
        while (!(*((long long *)(v26 + v48 + 8)) == 6) || !(!(*((short *)&v50->padding_4[0]) ^ 29285)) || !(!(v50->field_0 ^ 1651340654)))
        {
            v48 += 2;
            v47 += 104;
            v49 += 1;
            if (v27 == v48)
                goto LABEL_4a6a5b;
        }
        if (v49 >= a1->field_28)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v51 = v47[a1->field_20];
        if (v51 == 3)
        {
LABEL_4a6a5b:
            if (a2[0] == 0x8000000000000000)
            {
                vvar_981{reg 40} = a0;
                v52[1] = 6;
                v52[2] = 1000;
                v52[0] = 4;
                return v52;
            }
            goto LABEL_4a6b74;
        }
        else if (a2[0] != 0x8000000000000000)
        {
            if (v51 == 2)
            {
                a0[0] = 3;
                return v52;
            }
        }
        else
        {
            if (v51 == 2)
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h980ebd5e983563b9(&v0, a1, &anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441, 6);
                v53 = clap_builder::parser::error::MatchesError::unwrap::ha9fd55984595e942(&anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441, 6, &v0);
                if (!v53)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                uu_split::strategy::NumberType::from::ha36f2d4667bef88a(&v0, v53[1], v53[2]);
                v52 = a0;
                if ((int)v0 == 2)
                {
                    v64 = *((int128_t *)&v1);
                    v14 = v64;
                    v16 = v3;
                    v52[3] = v16;
                    *((void*)&v52[1]) = v64;
                    v52[0] = 4;
                    return v52;
                }
                v65 = v2;
                v11 = v65;
                v66 = *((int128_t *)&v0);
                v14 = v66;
                v16 = v65;
                v52[3] = v16;
                *((void*)&v52[1]) = v66;
                v52[0] = 2;
                v52[1] = v3;
                return v52;
            }
            else
            {
                v52 = a0;
                v52[1] = 6;
                v52[2] = 1000;
                v52[0] = 4;
                return v52;
            }
        }
    }
    v4 = 0;
    v5 = 0;
    v0 = 0;
    v2 = 0;
    uucore::parser::parse_size::Parser::parse_u64_max::h803084381dce656f(&v9, &v0, a2[1], a2[2]);
    v54 = v10;
    if (*((int *)&v9) != 3)
    {
        v58 = (long long)v11;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, a2);
        v52 = a0;
        v52[1] = v2;
        *((int128_t *)&v52[2]) = *((int128_t *)&v0);
        if (v54)
            __rust_dealloc(v58);
    }
    else
    {
        v14 = v54;
        v52 = a0;
        if (v54)
        {
            v52[1] = 6;
            v52[2] = v54;
            v52[0] = 4;
            return v52;
        }
        v9 = 0;
        v10 = 1;
        v11 = 0;
        v7 = 32;
        v8 = 3;
        v0 = 0;
        v2 = 0;
        v4 = &v9;
        v6 = &g_50bfc8;
        if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b(&v14, &v0))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v52[1] = v11;
        *((int128_t *)&v52[2]) = *((int128_t *)&v9);
    }
    v52[0] = 0;
    v52[1] = 1;
    return v52;
}
