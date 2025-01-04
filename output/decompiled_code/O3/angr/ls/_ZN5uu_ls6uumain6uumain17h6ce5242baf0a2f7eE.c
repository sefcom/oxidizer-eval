long long uu_ls::uumain::uumain::h6ce5242baf0a2f7e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x5c0], Other Possible Types: unsigned long long
    int v1;  // [sp-0x5b8]
    struct_0 *v2;  // [sp-0x5a8], Other Possible Types: unsigned long
    char v3;  // [bp-0x598]
    char v4;  // [bp-0x588]
    char v5;  // [bp-0x578]
    int v6;  // [sp-0x568]
    int v7;  // [sp-0x558]
    int v8;  // [sp-0x548]
    unsigned long long v9;  // [sp-0x538]
    char v10;  // [bp-0x530]
    char v11;  // [bp-0x520]
    char v12;  // [bp-0x518]
    char v13;  // [bp-0x508]
    char v14;  // [bp-0x500]
    char v15;  // [bp-0x4f8]
    int v16;  // [bp-0x4e8], Other Possible Types: char, unsigned long long, unsigned long
    struct_0 *v17;  // [sp-0x4e0], Other Possible Types: unsigned long, unsigned long long
    int v18;  // [bp-0x4d8], Other Possible Types: char, unsigned long long
    int v19;  // [sp-0x4c8]
    int v20;  // [bp-0x4b8], Other Possible Types: char
    int v21;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v22;  // [sp-0x3e0]
    unsigned long long v23;  // [sp-0x3d8]
    char v24;  // [bp-0x3d0], Other Possible Types: unsigned int
    char v25;  // [bp-0x2e8]
    unsigned long long v27;  // r8
    unsigned long long v28;  // r9
    struct_0 *v29;  // rdi
    char v30;  // al
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rax
    unsigned long long v34;  // r15
    int v36;  // xmm0

    uu_ls::uu_app::hb4ccd0ffed05c357(&v25, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h00423b9aa1c2dc0b(&v16, &v25, a0, a1, v27, v28);
    if (v16 != 0x8000000000000000)
    {
        v9 = *((long long *)&v20);
        v8 = v19;
        *((int128_t *)&v7) = *((int128_t *)&v18);
        *((int128_t *)&v6) = *((int128_t *)&v16);
        uu_ls::Config::from::h304081f9da8d7174(&v16, &v6, v31, v32, v27, v28);
        v34 = v16;
        v33 = v17;
        if (v34 != 0x8000000000000000)
        {
            memcpy(&v24, &v18, 232);
            v21 = v34;
            v22 = v33;
            v23 = *((long long *)&v18);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb6addf61d5028314(&v16, &v6, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8);
            clap_builder::parser::error::MatchesError::unwrap::hbdad559483153a61(&v2, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8, &v16);
            if (!v2)
            {
                uu_ls::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h22093b37bd2384cb(&v0);
            }
            else
            {
                v36 = *((int128_t *)&v2);
                *((int128_t *)&v20) = *((int128_t *)&v5);
                *((int128_t *)&v19) = *((int128_t *)&v4);
                *((int128_t *)&v18) = *((int128_t *)&v3);
                v16 = v36;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd2e5f05ce42ef7b6(&v14, &v16, v31);
                *((int128_t *)&v1) = *((int128_t *)&v15);
                v0 = *((long long *)&v14);
            }
            v18 = (long long)(&v1)[8];
            v16 = v0;
            v17 = (long long)v1;
            v33 = uu_ls::list::h6ddc1ea5566af8cc(&v16, &v21);
            core::ptr::drop_in_place$LT$uu_ls..Config$GT$::h7c5f40e29ecb6421(&v21);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbd92667a6015f01d(&v6);
        return v33;
    }
    else
    {
        v29 = v17;
        v30 = v29->field_d5;
        if ((v30 & 29) == 12)
        {
            v33 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v29);
            return v33;
        }
        if (!v30)
        {
            v2 = v29;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h472e4e5d4acf0daa(&v10, &v2);
            v24 = 1;
            *((int128_t *)&v21) = *((int128_t *)&v10);
            v23 = *((long long *)&v11);
            v33 = alloc::boxed::Box$LT$T$GT$::new::h4d783d11ad85c540(&v21);
        }
        else
        {
            v2 = v29;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h472e4e5d4acf0daa(&v12, &v2);
            v24 = 2;
            *((int128_t *)&v21) = *((int128_t *)&v12);
            v23 = *((long long *)&v13);
            v33 = alloc::boxed::Box$LT$T$GT$::new::h4d783d11ad85c540(&v21);
        }
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::haf3241a1492a8015(v2);
        return v33;
    }
}
