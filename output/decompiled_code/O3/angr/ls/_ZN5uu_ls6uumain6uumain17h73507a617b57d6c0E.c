long long uu_ls::uumain::uumain::h73507a617b57d6c0(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    struct_0 *v0;  // [sp-0x5c8], Other Possible Types: char, unsigned long
    char v1;  // [bp-0x5b8]
    char v2;  // [bp-0x5a8]
    char v3;  // [bp-0x598]
    int v4;  // [bp-0x588], Other Possible Types: char
    unsigned long long v5;  // [sp-0x578]
    int v6;  // [sp-0x568]
    int v7;  // [sp-0x558]
    int v8;  // [sp-0x548]
    unsigned long long v9;  // [sp-0x538]
    char v10;  // [bp-0x530]
    char v11;  // [bp-0x520]
    char v12;  // [bp-0x518]
    char v13;  // [bp-0x508]
    char v14;  // [bp-0x500]
    char v15;  // [bp-0x4f0]
    int v16;  // [bp-0x4e8], Other Possible Types: char
    char v17;  // [bp-0x4e0]
    int v18;  // [bp-0x4d8], Other Possible Types: char, unsigned long
    int v19;  // [sp-0x4c8]
    int v20;  // [bp-0x4b8], Other Possible Types: char
    int v21;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v22;  // [sp-0x3e0]
    unsigned long long v23;  // [sp-0x3d8]
    char v24;  // [sp-0x3d0], Other Possible Types: unsigned int
    char v25;  // [bp-0x2e8]
    struct_0 *v27;  // rdi
    unsigned int v28;  // eax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rcx
    unsigned long long v31;  // r8
    unsigned long long v32;  // r9
    unsigned long long v33;  // r15
    unsigned long long v34;  // rbx
    int v36;  // xmm0

    uu_ls::uu_app::hb22601a2a472183c(&v25, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h862fda4c183a333e(&v16, &v25, a0, a1);
    if (*((long long *)&v16) != 0x8000000000000000)
    {
        v9 = *((long long *)&v20);
        v8 = v19;
        *((int128_t *)&v7) = *((int128_t *)&v18);
        v6 = v16;
        uu_ls::Config::from::hda3725dde7c5cb29(&v16, &v6, v29, v30, v31, v32);
        v33 = *((long long *)&v16);
        v34 = *((long long *)&v17);
        if (v33 != 0x8000000000000000)
        {
            memcpy(&v24, &v18, 232);
            v21 = v33;
            v22 = v34;
            v23 = *((long long *)&v18);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h95e4d03f48588b7c(&v16, &v6, _ZN5uu_ls7options5PATHS17h89ad938e8f78055bE, g_613370);
            clap_builder::parser::error::MatchesError::unwrap::hb6179bc157105d2d(&v0, _ZN5uu_ls7options5PATHS17h89ad938e8f78055bE, g_613370, &v16);
            if (!v0)
            {
                uu_ls::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::ha9f6a1b71aa2b533(&v4);
            }
            else
            {
                v36 = *((int128_t *)&v0);
                *((int128_t *)&v20) = *((int128_t *)&v3);
                *((int128_t *)&v19) = *((int128_t *)&v2);
                *((int128_t *)&v18) = *((int128_t *)&v1);
                v16 = v36;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc37e9f26bd24a6ba(&v14, &v16, v29);
                *((int128_t *)&v4) = *((int128_t *)&v14);
                v5 = *((long long *)&v15);
            }
            v18 = v5;
            v16 = v4;
            v34 = uu_ls::list::hdb3050900a46b0d8(&v16, &v21);
            core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h08cccac54721f0f3(&v21);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he1be7bbb9676cd25(&v6);
        return v34;
    }
    else
    {
        v27 = *((long long *)&v17);
        v28 = v27->field_d5;
        switch (v28)
        {
        case 0:
            v0 = v27;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3d8058a6447e3d52(&v10, &v0);
            v24 = 1;
            *((int128_t *)&v21) = *((int128_t *)&v10);
            v23 = *((long long *)&v11);
            v34 = alloc::boxed::Box$LT$T$GT$::new::hebd24866db7fe607(&v21);
            break;
        case 12: case 14:
            v34 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v27);
            return v34;
        default:
            v0 = v27;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3d8058a6447e3d52(&v12, &v0);
            v24 = 2;
            *((int128_t *)&v21) = *((int128_t *)&v12);
            v23 = *((long long *)&v13);
            v34 = alloc::boxed::Box$LT$T$GT$::new::hebd24866db7fe607(&v21);
        }
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::h01aaad3190932d5a(v0);
        return v34;
    }
}
