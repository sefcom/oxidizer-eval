long long uu_test::uumain::uumain::h7e1e3d0b83c7a73f(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3e0]
    char v1;  // [bp-0x3d8]
    uint128_t *v2;  // [sp-0x3d0], Other Possible Types: unsigned long
    int v3;  // [bp-0x3c8]
    unsigned long long v4;  // [sp-0x3b9]
    int v5;  // [bp-0x3a8]
    unsigned long long v6;  // [sp-0x399]
    char v7;  // [bp-0x388]
    int v8;  // [bp-0x378], Other Possible Types: char
    unsigned long long v9;  // [sp-0x368]
    int v10;  // [bp-0x358], Other Possible Types: char, unsigned long long
    unsigned long long v11;  // [sp-0x348]
    char v12;  // [bp-0x320]
    char v13;  // [bp-0x318]
    char v14;  // [bp-0x317]
    char v15;  // [bp-0x310]
    char v16;  // [bp-0x308]
    int v17;  // [bp-0x2e8], Other Possible Types: char, unsigned int, unsigned long
    char v18;  // [sp-0x2e0]
    int v19;  // [bp-0x2df]
    uint128_t *v20;  // [sp-0x2d8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v21;  // [bp-0x2d0], Other Possible Types: unsigned long
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27[3];  // rax
    unsigned long long v28[3];  // rax
    unsigned long long v29;  // rsi
    uint128_t *v30;  // rcx
    uint128_t *v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rcx
    void* v34;  // rbx
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rax
    char v37;  // cl
    unsigned long long v38;  // rcx

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9abe2fb4d1c17d03(&v17, &v7);
    if (*((long long *)&v17) != 0x8000000000000000)
    {
        v9 = v20;
        *((int128_t *)&v8) = *((int128_t *)&v17);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v8, "test", 4);
    }
    core::iter::traits::iterator::Iterator::collect::h3c2937b20db8f1cd(&v0, a0, a1);
    v17 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h785aaf27a1a1be41(uucore::util_name::h412db5e565a079f3(), v24, ::0x462f00::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v17), v24))
    {
        v25 = v2;
        if (v25 == 1)
        {
            v27 = *((long long *)&v1);
            if (!(char)_ZN82_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$2eq17ha08c54788d123b03E.specialized.2(v27[1], v27[2]))
            {
                if (!v2)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v28 = *((long long *)&v1);
                if (!(char)_ZN82_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$2eq17ha08c54788d123b03E.specialized.1(v28[1], v28[2]))
                {
                    v26 = v2;
                    goto LABEL_4641c4;
                }
            }
            uu_test::uu_app::h566f241f5ef3eb99(&v17, v29, v24);
            ::0x464500::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h86514ea75577487b(&v10, &v0);
            core::iter::traits::iterator::Iterator::chain::h22cb915b7dc7713f(&v12, &v8, &v10);
            clap_builder::builder::command::Command::get_matches_from::ha7e7d452441a2734(&v10, &v17, &v12, v33);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h961b49e2b751160c(&v10);
            return 0;
        }
LABEL_4641c4:
        if (!v26)
        {
            v10 = 0x8000000000000000;
            goto LABEL_4643cf;
        }
        else
        {
            v2 = v26 - 1;
            v30 = *((long long *)&v1);
            v31 = v2 * 3;
            v32 = *((long long *)(16 + (char *)v30 + 0x8 * v31));
            *((int128_t *)&v10) = *((int128_t *)((char *)v30 + 0x8 * v31));
            v11 = v32;
            if (!((long long)v10 != 0x8000000000000000) || !((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h01e3568870f37a35((long long)(&v10)[8], v11, "]", 1)))
            {
LABEL_4643cf:
                ::0x462fd0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he09a885a857c65ba(&v12);
                v20 = *((long long *)&v15);
                *((int128_t *)&v17) = *((int128_t *)&v12);
                v21 = 2;
                v34 = alloc::boxed::Box$LT$T$GT$::new::h2bde9d522757c638(&v17);
                ::0x462e40::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h1e73c3320eeb4ea6(&v10);
                ::0x462d70::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he0a5e698ad5e40a9(&v0);
                ::0x462cb0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h328ba347e15c439f(&v8);
                return v34;
            }
            ::0x462e40::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h1e73c3320eeb4ea6(&v10);
        }
    }
    v20 = v2;
    *((int128_t *)&v17) = *((int128_t *)&v0);
    uu_test::parser::parse::hebc23f44016fee50(&v12, &v17, v35);
    v36 = *((long long *)&v12);
    if (v36 != 7)
    {
        v37 = v13;
        *((int128_t *)&v5) = *((int128_t *)&v14);
        v6 = *((long long *)&v16);
        *((int128_t *)&v3) = (int128_t)v5;
        v4 = v6;
        v21 = v4;
        *((int128_t *)&v19) = (int128_t)v3;
        v17 = v36;
        v18 = v37;
        v34 = alloc::boxed::Box$LT$T$GT$::new::hcb605dca1a3038cc(&v17);
        goto LABEL_4643bb;
    }
    else
    {
        v11 = *((long long *)&v16);
        *((int128_t *)&v10) = *((int128_t *)&v13);
        uu_test::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h4459773458b8d0d1(&v17, &v10);
        v38 = (long long)v17;
        *((int128_t *)&v5) = (int128_t)v19;
        v6 = v21;
        *((int128_t *)&v3) = (int128_t)v5;
        v4 = v6;
        if (v38 == 7)
        {
            v34 = (!(v18 & 1) ? uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1) : 0);
        }
        else
        {
            v21 = v4;
            *((int128_t *)&v19) = (int128_t)v3;
            v17 = v38;
            v18 = v18;
            v34 = alloc::boxed::Box$LT$T$GT$::new::hcb605dca1a3038cc(&v17);
LABEL_4643bb:
        }
    }
    ::0x462cb0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h328ba347e15c439f(&v8);
    return v34;
}
