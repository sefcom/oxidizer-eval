long long uu_test::uumain::uumain::h9b4c2f0d3a9c2e97(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3e0]
    char v1;  // [bp-0x3d8]
    unsigned long long v2;  // [sp-0x3d0], Other Possible Types: unsigned long
    int v3;  // [bp-0x3c8]
    unsigned long long v4;  // [sp-0x3b9]
    int v5;  // [bp-0x3a8]
    unsigned long long v6;  // [sp-0x399]
    char v7;  // [bp-0x388]
    int v8;  // [bp-0x378], Other Possible Types: char
    unsigned long long v9;  // [sp-0x368]
    int v10;  // [bp-0x358], Other Possible Types: char
    int v11;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x348]
    char v13;  // [bp-0x320]
    char v14;  // [bp-0x318]
    char v15;  // [bp-0x317]
    char v16;  // [bp-0x310]
    char v17;  // [bp-0x308]
    int v18;  // [bp-0x2e8], Other Possible Types: char, unsigned int, unsigned long
    char v19;  // [sp-0x2e0]
    int v20;  // [bp-0x2df]
    unsigned long v21;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned int v22;  // [bp-0x2d0], Other Possible Types: unsigned long
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27[3];  // rax
    unsigned long long v28[3];  // rax
    uint128_t *v29;  // rcx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    void* v32;  // rbx
    unsigned long long v33;  // rax
    char v34;  // cl
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx

    _$LT$core..iter..adapters..cloned..Cloned$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6c4d509ce1d88ea6(&v18, &v7);
    if (*((long long *)&v18) != 0x8000000000000000)
    {
        v9 = v21;
        *((int128_t *)&v8) = *((int128_t *)&v18);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v8, "test", 4);
    }
    core::iter::traits::iterator::Iterator::collect::hef0e0e7de28f3954(&v0, a0, a1);
    v18 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h4c2f4262fa2cfdd6(uucore::util_name::h60d842bf27b05e82(), v25, ::0x462d70::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v18), v25))
    {
        v26 = v2;
        if (v26 == 1)
        {
            v27 = *((long long *)&v1);
            if (!(char)_ZN82_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$2eq17ha08c54788d123b03E.specialized.2(v27[1], v27[2]))
            {
                if (!v2)
                    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_512358); /* do not return */
                v28 = *((long long *)&v1);
                if (!(char)_ZN82_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$2eq17ha08c54788d123b03E.specialized.1(v28[1], v28[2]))
                {
                    v26 = v2;
                    goto LABEL_464034;
                }
            }
            uu_test::uu_app::h10b434699cb68342(&v18);
            ::0x464370::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heac1a9a54e41d20b(&v10, &v0);
            core::iter::traits::iterator::Iterator::chain::h0c34891eced7376c(&v13, &v8, &v10);
            clap_builder::builder::command::Command::get_matches_from::h51fba41e9672da3d(&v10, &v18, &v13);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9d47db42b7cb236(&v10);
            return 0;
        }
LABEL_464034:
        if (!v26)
        {
            v11 = 0x8000000000000000;
            goto LABEL_46423f;
        }
        else
        {
            v2 = v26 - 1;
            v29 = *((long long *)&v1);
            v30 = v2 * 3;
            v31 = *((long long *)(16 + (char *)v29 + 8 * v30));
            *((int128_t *)&v11) = *((int128_t *)((char *)v29 + 8 * v30));
            v12 = v31;
            if (!((long long)v11 != 0x8000000000000000) || !((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf89697c9f8af0cc9((long long)(&v11)[8], v12, "]", 1)))
            {
LABEL_46423f:
                ::0x462e40::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdaaee967a2b5b021(&v13);
                v21 = *((long long *)&v16);
                *((int128_t *)&v18) = *((int128_t *)&v13);
                v22 = 2;
                v32 = alloc::boxed::Box$LT$T$GT$::new::hc7e7f6fba09f156b(&v18);
                ::0x462cb0::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5245e286bf4b67a3(&v10);
                ::0x462be0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h438bb28034b6af7a(&v0);
                ::0x462b20::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h66f9a4ea636dc8f3(&v8);
                return v32;
            }
            ::0x462cb0::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5245e286bf4b67a3(&v10);
        }
    }
    v21 = v2;
    *((int128_t *)&v18) = *((int128_t *)&v0);
    uu_test::parser::parse::h8832bd6d00f7e405(&v13, &v18);
    v33 = *((long long *)&v13);
    if (v33 != 7)
    {
        v34 = v14;
        *((int128_t *)&v5) = *((int128_t *)&v15);
        v6 = *((long long *)&v17);
        *((int128_t *)&v3) = (int128_t)v5;
        v4 = v6;
        v22 = v4;
        *((int128_t *)&v20) = (int128_t)v3;
        v18 = v33;
        v19 = v34;
        v35 = alloc::boxed::Box$LT$T$GT$::new::h0acd09840d63c2af(&v18);
        goto LABEL_46422b;
    }
    else
    {
        v12 = *((long long *)&v17);
        *((int128_t *)&v10) = *((int128_t *)&v14);
        uu_test::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hcf64a0467c9be372(&v18, &v10);
        v36 = (long long)v18;
        *((int128_t *)&v5) = (int128_t)v20;
        v6 = v22;
        *((int128_t *)&v3) = (int128_t)v5;
        v4 = v6;
        if (v36 == 7)
        {
            v32 = (!(v19 & 1) ? uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1) : 0);
        }
        else
        {
            v22 = v4;
            *((int128_t *)&v20) = (int128_t)v3;
            v18 = v36;
            v19 = v19;
            v35 = alloc::boxed::Box$LT$T$GT$::new::h0acd09840d63c2af(&v18);
LABEL_46422b:
            v32 = v35;
        }
    }
    ::0x462b20::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h66f9a4ea636dc8f3(&v8);
    return v32;
}
