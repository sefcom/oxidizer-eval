long long uu_wc::Inputs::new::h8949d0fa900a2976(unsigned long long a0[4], unsigned long long a1)
{
    char v0;  // [bp-0x118]
    char v1;  // [bp-0x108]
    char v2;  // [bp-0xf8]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xd8]
    char v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8], Other Possible Types: char
    char v7;  // [bp-0xb0]
    int v8;  // [sp-0xa8]
    int v9;  // [sp-0x98]
    int v10;  // [sp-0x88]
    int v11;  // [sp-0x68]
    int v12;  // [sp-0x58]
    int v13;  // [sp-0x48]
    int v14;  // [sp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19[3];  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h270397981495012d(&v6, a1, "files", 5);
    clap_builder::parser::error::MatchesError::unwrap::h1eaea0419fe95663(&v2, "files", 5, &v6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d63e137cbdc037b(&v6, a1, "files0-from", 11);
    v16 = clap_builder::parser::error::MatchesError::unwrap::hc67b1f0db7b9c5ea("files0-from", 11, &v6);
    if (*((long long *)&v2))
    {
        if (!v16)
        {
            *((int128_t *)&v14) = *((int128_t *)&v5);
            *((int128_t *)&v13) = *((int128_t *)&v4);
            *((int128_t *)&v12) = *((int128_t *)&v3);
            *((int128_t *)&v11) = *((int128_t *)&v2);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h7e4e161866019f16(&a0[1], &v11, v20);
            a0[0] = 1;
            return a0;
        }
        *((int128_t *)&v10) = *((int128_t *)&v5);
        *((int128_t *)&v9) = *((int128_t *)&v4);
        *((int128_t *)&v8) = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v2);
        v19 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0692fcc27f7e8782(&v6, v17, v18);
        if (v19)
        {
            uu_wc::WcError::files_disabled::h3c9681720287b04d(&v0, v19[1], v19[2]);
            *((double *)&a0[1]) = ::0x4b8080::alloc::boxed::Box$LT$T$GT$::new::h12205ec950adc107(&v0);
            a0[2] = &g_531fa0;
            a0[0] = 3;
            return a0;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
    else
    {
        if (v16)
        {
            _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::hffa4ec1420ca6393(&v0, v16, v21);
            uu_wc::Input::try_as_files0::h0b09cb6db92b47f0(&v6, &v0, v21);
            v22 = (long long)v6;
            if (v22 == 0x8000000000000000)
            {
                a0[3] = *((long long *)&v1);
                *((int128_t *)&a0[1]) = *((int128_t *)&v0);
                a0[0] = 2;
                return a0;
            }
            v23 = *((long long *)&v7);
            v24 = (long long)v8;
            if (v22 == 9223372036854775809)
            {
                a0[1] = v23;
                a0[2] = v24;
                a0[0] = 3;
            }
            else
            {
                a0[0] = 1;
                a0[1] = v22;
                a0[2] = v23;
                a0[3] = v24;
            }
            ::0x4b6c60::core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h399756a57630d428(&v0);
            return a0;
        }
        else
        {
            a0[0] = 0;
            return a0;
        }
    }
}
