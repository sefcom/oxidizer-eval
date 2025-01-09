long long uu_wc::Inputs::new::h8e829995353f568c(unsigned long long a0[4], unsigned long long a1)
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
    unsigned long long v17[3];  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rcx

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7e8dbfa43c92b0c2(&v6, a1, "files", 5);
    clap_builder::parser::error::MatchesError::unwrap::h485bae3762b1af51(&v2, "files", 5, &v6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haeae6a80429df494(&v6, a1, "files0-from", 11);
    v16 = clap_builder::parser::error::MatchesError::unwrap::h2e8e84f85343b8e4("files0-from", 11, &v6);
    if (*((long long *)&v2))
    {
        if (!v16)
        {
            *((int128_t *)&v14) = *((int128_t *)&v5);
            *((int128_t *)&v13) = *((int128_t *)&v4);
            *((int128_t *)&v12) = *((int128_t *)&v3);
            *((int128_t *)&v11) = *((int128_t *)&v2);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h97c0c20561b28df0(&a0[1], &v11);
            a0[0] = 1;
            return a0;
        }
        *((int128_t *)&v10) = *((int128_t *)&v5);
        *((int128_t *)&v9) = *((int128_t *)&v4);
        *((int128_t *)&v8) = *((int128_t *)&v3);
        *((int128_t *)&v6) = *((int128_t *)&v2);
        v17 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h74e64c5f90f3dbdc(&v6);
        if (v17)
        {
            uu_wc::WcError::files_disabled::hc164bba3bbd06973(&v0, v17[1], v17[2]);
            *((double *)&a0[1]) = ::0x4b7cf0::alloc::boxed::Box$LT$T$GT$::new::hb02e4449d86ed3d2(&v0);
            a0[2] = &g_530f90;
            a0[0] = 3;
            return a0;
        }
        core::option::unwrap_failed::h0e11329e76906eaa(&g_530f40); /* do not return */
    }
    else
    {
        if (v16)
        {
            _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1837cf3aae8746e4(&v0, v16);
            uu_wc::Input::try_as_files0::hc67935d372cfef28(&v6, &v0);
            v18 = (long long)v6;
            if (v18 == 0x8000000000000000)
            {
                a0[3] = *((long long *)&v1);
                *((int128_t *)&a0[1]) = *((int128_t *)&v0);
                a0[0] = 2;
                return a0;
            }
            v19 = *((long long *)&v7);
            v20 = (long long)v8;
            if (v18 == 9223372036854775809)
            {
                a0[1] = v19;
                a0[2] = v20;
                a0[0] = 3;
            }
            else
            {
                a0[0] = 1;
                a0[1] = v18;
                a0[2] = v19;
                a0[3] = v20;
            }
            ::0x4b6870::core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&v0);
            return a0;
        }
        else
        {
            a0[0] = 0;
            return a0;
        }
    }
}
