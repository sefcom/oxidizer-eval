long long uu_df::Options::from::h9a68833b14202507(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x18d]
    unsigned int v1;  // [sp-0x18c]
    unsigned long long v2;  // [bp-0x188]
    unsigned long long v3;  // [sp-0x178]
    char v4;  // [bp-0x170], Other Possible Types: unsigned long, unsigned long long
    char v5;  // [bp-0x168]
    char v6;  // [bp-0x160]
    int v7;  // [bp-0x158], Other Possible Types: char
    char v8;  // [bp-0x150]
    char v9;  // [bp-0x148], Other Possible Types: unsigned long long
    int v10;  // [bp-0x138], Other Possible Types: char
    int v11;  // [bp-0x128], Other Possible Types: unsigned long long
    int v12;  // [bp-0x120]
    int v13;  // [bp-0x118]
    unsigned long long v14;  // [sp-0x110]
    int v15;  // [sp-0x108]
    unsigned long long v16;  // [sp-0xf8]
    unsigned long long v17;  // [sp-0xf0]
    char v18;  // [bp-0xe8]
    char v19;  // [bp-0xd8]
    int v20;  // [bp-0xc8], Other Possible Types: char
    int v21;  // [sp-0xb8]
    char v22;  // [bp-0xa8]
    char v23;  // [bp-0x98]
    int v24;  // [sp-0x88]
    unsigned long long v25;  // [sp-0x78]
    int v26;  // [sp-0x68]
    unsigned long long v27;  // [sp-0x58]
    int v28;  // [sp-0x48]
    unsigned long long v29;  // [sp-0x38]
    unsigned long long v31;  // rdx
    char v32;  // al
    char v33;  // al
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx
    unsigned long v37;  // rcx
    char *v38;  // rdi
    char v39;  // al
    unsigned long long v40;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(&v10, a1, "type", 4);
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&v20, "type", 4, &v10);
    if (!*((long long *)&v20))
    {
        v4 = 0x8000000000000000;
    }
    else
    {
        *((int128_t *)&v15) = *((int128_t *)&v23);
        *((int128_t *)&v13) = *((int128_t *)&v22);
        v11 = v21;
        v10 = v20;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7ac0ca4ae1fc3b40(&v4, &v10, v31);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h27ab3648ae7e279e(&v10, a1, "exclude-type", 12);
    clap_builder::parser::error::MatchesError::unwrap::h54548e49bef11fab(&v20, "exclude-type", 12, &v10);
    if (!*((long long *)&v20))
    {
        v2 = 0x8000000000000000;
        goto LABEL_4c6064;
    }
    *((int128_t *)&v15) = *((int128_t *)&v23);
    *((int128_t *)&v13) = *((int128_t *)&v22);
    v11 = v21;
    v10 = v20;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h88abd33993a73e4c(&v18, &v10, v31);
    *((int128_t *)&v2) = *((int128_t *)&v18);
    v3 = *((long long *)&v19);
    if (!(v4 != 0x8000000000000000) || !(v2 != 0x8000000000000000))
    {
LABEL_4c6064:
        v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "local", 5);
        v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "all", 3);
        uu_df::blocks::read_block_size::h03278a4ead33fd1d(&v7, a1);
        if (*((int *)&v7) == 3)
        {
            v17 = *((long long *)&v8);
            goto LABEL_4c6132;
        }
        *((int128_t *)&v21) = *((int128_t *)&v9);
        v20 = v7;
        uu_df::Options::from::_$u7b$$u7b$closure$u7d$$u7d$::h9de0386ab5ed2208(&v18, a1, &v20);
        v35 = *((long long *)&v18);
        v36 = *((long long *)&(&v18)[8]);
        *((int128_t *)&v28) = *((int128_t *)&v19);
        if (v35 != 5)
        {
            *((void*)&a0->field_18) = v28;
            *((unsigned long long *)&a0->padding_8[0]) = v35;
            a0->field_10 = v17;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v2);
            goto LABEL_4c6404;
        }
        else
        {
            v17 = v36;
LABEL_4c6132:
            v1 = v37 | -0x100 | 1;
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-binary", 21) && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-decimal", 22))
            {
                v1 = v37 | -0x100 | 2;
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "portability", 11))
                    v1 = ((-0x100 | (char)clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "output", 6) == 2) & 4294967295) * 3;
            }
            if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-binary", 21))
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "human-readable-decimal", 22);
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "sync", 4);
            v25 = *((long long *)&v6);
            *((int128_t *)&v24) = *((int128_t *)&v4);
            v27 = v3;
            *((int128_t *)&v26) = *((int128_t *)&v2);
            v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "total", 5);
            uu_df::columns::Column::from_matches::h15f1a0d2790b5397(&v18, a1);
            if (!*((long long *)&v18))
            {
                v9 = *((long long *)&(&v19)[8]);
                *((int128_t *)&v7) = *((int128_t *)&(&v18)[8]);
                vvar_554{stack -56} = v9;
                vvar_555{stack -72} = v7;
                vvar_556{stack -312} = v28;
                vvar_557{stack -296} = v29;
                v12 = v24;
                vvar_558{stack -272} = v25;
                vvar_559{stack -264} = v26;
                vvar_560{stack -248} = v27;
                a0->field_40 = v16;
                *((void*)&a0->field_30) = v15;
                *((long long *)&a0->padding_20[0]) = (long long)(&v12)[8];
                a0->field_28 = v14;
                a0->field_10 = v11;
                a0->field_18 = (long long)v12;
                *((void*)&a0->field_0) = v28;
                a0->field_48 = v17;
                a0->field_50 = v32;
                a0->field_51 = v33;
                a0->field_52 = v0;
                a0->field_53 = v39;
                a0->field_54 = 1;
                a0->field_55 = v1;
                return a0;
            }
            core::ops::function::FnOnce::call_once::hd7cb1b151e127991(&v20, &v18);
            v40 = (long long)v20;
            *((int128_t *)&v7) = (int128_t)(&v20)[8];
            v9 = (long long)(&v21)[8];
            if (v40 == 5)
            {
                v29 = v9;
                v28 = v7;
                v10 = v28;
                v11 = v29;
                v12 = v24;
                v14 = v25;
                v15 = v26;
                v16 = v27;
                a0->field_40 = v16;
                *((void*)&a0->field_30) = v15;
                *((long long *)&a0->padding_20[0]) = (long long)(&v12)[8];
                a0->field_28 = v14;
                a0->field_10 = v11;
                a0->field_18 = (long long)v12;
                *((void*)&a0->field_0) = v28;
                a0->field_48 = v17;
                a0->field_50 = v32;
                a0->field_51 = v33;
                a0->field_52 = v0;
                a0->field_53 = v39;
                a0->field_54 = 1;
                a0->field_55 = v1;
                return a0;
            }
            v29 = v9;
            v28 = v7;
            *((unsigned long long *)&a0->padding_20[0]) = v29;
            *((void*)&a0->field_10) = v28;
            *((unsigned long long *)&a0->padding_8[0]) = v40;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v26);
            v38 = &v24;
        }
    }
    else
    {
        uu_df::Options::get_intersected_types::haafdf2c96660658e(&v10, *((long long *)&v5), *((long long *)&v6), (&v2)[1], v3);
        if ((long long)v10 == 0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v10);
            goto LABEL_4c6064;
        }
        else
        {
            *((unsigned long long *)&a0->padding_20[0]) = v11;
            *((void*)&a0->field_10) = v10;
            *((long long *)&a0->padding_8[0]) = 4;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(&v2);
LABEL_4c6404:
            v38 = &v4;
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hf865592599343d61(v38);
    return a0;
}
