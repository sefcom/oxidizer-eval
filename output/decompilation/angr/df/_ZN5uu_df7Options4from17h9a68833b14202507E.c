long long uu_df::Options::from::h9a68833b14202507(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x18d]
    unsigned int v1;  // [sp-0x18c]
    unsigned long long v3;  // [bp-0x188]
    unsigned long long v4;  // [sp-0x178]
    char v5;  // [bp-0x170], Other Possible Types: unsigned long long
    char v6;  // [bp-0x168]
    char v7;  // [bp-0x160]
    int v8;  // [bp-0x158], Other Possible Types: char
    char v9;  // [bp-0x150]
    char v10;  // [bp-0x148], Other Possible Types: unsigned long long
    int v11;  // [bp-0x138], Other Possible Types: char
    int v12;  // [sp-0x138]
    int v13;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    int v14;  // [bp-0x120]
    int v15;  // [bp-0x118]
    unsigned long long v16;  // [sp-0x110]
    int v17;  // [sp-0x108]
    unsigned long long v18;  // [sp-0xf8]
    unsigned long long v19;  // [sp-0xf0]
    char v20;  // [bp-0xe8]
    char v21;  // [bp-0xd8]
    int v22;  // [sp-0xc8]
    int v23;  // [bp-0xc8], Other Possible Types: char
    int v24;  // [sp-0xb8]
    char v25;  // [bp-0xa8]
    char v26;  // [bp-0x98]
    int v27;  // [sp-0x88]
    unsigned long long v28;  // [sp-0x78]
    int v29;  // [sp-0x68]
    unsigned long long v30;  // [sp-0x58]
    int v31;  // [sp-0x48]
    unsigned long long v32;  // [sp-0x38]
    char v34;  // al
    char v35;  // al
    unsigned long long v37;  // rax
    unsigned long long v38;  // rcx
    unsigned long v39;  // rcx
    char *v40;  // rdi
    char v41;  // al
    unsigned long long v42;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(&v11, a1, "type", 4);
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&v23, "type", 4, &v11);
    if (!*((long long *)&v23))
    {
        v5 = 0x8000000000000000;
    }
    else
    {
        *((int128_t *)&v17) = *((int128_t *)&v26);
        *((int128_t *)&v15) = *((int128_t *)&v25);
        v13 = v24;
        v11 = v22;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7ac0ca4ae1fc3b40(&v5, &v11);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(&v11, a1, "exclude-type", 12);
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&v23, "exclude-type", 12, &v11);
    if (!*((long long *)&v23))
    {
        v3 = 0x8000000000000000;
        goto LABEL_4c6064;
    }
    *((int128_t *)&v17) = *((int128_t *)&v26);
    *((int128_t *)&v15) = *((int128_t *)&v25);
    v13 = v24;
    v12 = v22;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h88abd33993a73e4c(&v20, &v11);
    *((int128_t *)&v3) = *((int128_t *)&v20);
    v4 = *((long long *)&v21);
    if (!(v5 != 0x8000000000000000) || !(v3 != 0x8000000000000000))
    {
LABEL_4c6064:
        v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "local", 5);
        v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "all", 3);
        uu_df::blocks::read_block_size::h03278a4ead33fd1d(&v8, a1);
        if (*((int *)&v8) == 3)
        {
            v19 = *((long long *)&v9);
            goto LABEL_4c6132;
        }
        *((int128_t *)&v24) = *((int128_t *)&v10);
        v23 = v8;
        uu_df::Options::from::_$u7b$$u7b$closure$u7d$$u7d$::h9de0386ab5ed2208(&v20, a1, &v23);
        v37 = *((long long *)&v20);
        v38 = *((long long *)&(&v20)[8]);
        *((int128_t *)&v31) = *((int128_t *)&v21);
        if (v37 != 5)
        {
            *((void*)&a0->field_18) = v31;
            *((unsigned long long *)&a0->padding_8[0]) = v37;
            a0->field_10 = v19;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v3);
            goto LABEL_4c6404;
        }
        else
        {
            v19 = v38;
LABEL_4c6132:
            v1 = v39 & 0xffffffffffffff00 | 1;
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-binary", 21) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-decimal", 22))
            {
                v1 = v39 & 0xffffffffffffff00 | 2;
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "portability", 11))
                    v1 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "output", 6) == 2) * 3;
            }
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-binary", 21))
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-decimal", 22);
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sync", 4);
            v28 = *((long long *)&v7);
            *((int128_t *)&v27) = *((int128_t *)&v5);
            v30 = v4;
            *((int128_t *)&v29) = *((int128_t *)&v3);
            v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "total", 5);
            uu_df::columns::Column::from_matches::h15f1a0d2790b5397(&v20, a1);
            if (!*((long long *)&v20))
            {
                v10 = *((long long *)&(&v21)[8]);
                *((int128_t *)&v8) = *((int128_t *)&(&v20)[8]);
                vvar_552{stack -56} = v10;
                vvar_553{stack -72} = v8;
                vvar_554{stack -312} = v31;
                vvar_555{stack -296} = v32;
                v14 = v27;
                vvar_556{stack -272} = v28;
                vvar_557{stack -264} = v29;
                vvar_558{stack -248} = v30;
                a0->field_40 = v18;
                *((void*)&a0->field_30) = v17;
                *((long long *)&a0->padding_20[0]) = (long long)(&v14)[8];
                a0->field_28 = v16;
                a0->field_10 = v13;
                a0->field_18 = (long long)v14;
                *((void*)&a0->field_0) = v31;
                a0->field_48 = v19;
                a0->field_50 = v34;
                a0->field_51 = v35;
                a0->field_52 = v0;
                a0->field_53 = v41;
                a0->field_54 = 1;
                a0->field_55 = v1;
                return a0;
            }
            core::ops::function::FnOnce::call_once::hd7cb1b151e127991(&v23, &v20);
            v42 = (long long)v23;
            *((int128_t *)&v8) = (int128_t)(&v23)[8];
            v10 = (long long)(&v24)[8];
            if (v42 == 5)
            {
                v32 = v10;
                v31 = v8;
                v12 = v31;
                v13 = v32;
                v14 = v27;
                v16 = v28;
                v17 = v29;
                v18 = v30;
                a0->field_40 = v18;
                *((void*)&a0->field_30) = v17;
                *((long long *)&a0->padding_20[0]) = (long long)(&v14)[8];
                a0->field_28 = v16;
                a0->field_10 = v13;
                a0->field_18 = (long long)v14;
                *((void*)&a0->field_0) = v31;
                a0->field_48 = v19;
                a0->field_50 = v34;
                a0->field_51 = v35;
                a0->field_52 = v0;
                a0->field_53 = v41;
                a0->field_54 = 1;
                a0->field_55 = v1;
                return a0;
            }
            v32 = v10;
            v31 = v8;
            *((unsigned long long *)&a0->padding_20[0]) = v32;
            *((void*)&a0->field_10) = v31;
            *((unsigned long long *)&a0->padding_8[0]) = v42;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v29);
            v40 = &v27;
        }
    }
    else
    {
        uu_df::Options::get_intersected_types::haafdf2c96660658e(&v11, *((long long *)&v6), *((long long *)&v7), (&v3)[1], v4);
        if ((long long)v12 == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v11);
            goto LABEL_4c6064;
        }
        else
        {
            *((unsigned long *)&a0->padding_20[0]) = v13;
            *((void*)&a0->field_10) = v12;
            *((unsigned long long *)&a0->padding_8[0]) = 4;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v3);
LABEL_4c6404:
            v40 = &v5;
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(v40);
    return a0;
}
