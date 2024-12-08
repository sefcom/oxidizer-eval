long long uu_fmt::uumain::uumain::h2a202ba309342e89(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x3d0]
    unsigned long long v2;  // [sp-0x3c8]
    unsigned long v3;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x3b8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x3b0], Other Possible Types: char
    int v6;  // [sp-0x3a0]
    unsigned long long v7;  // [sp-0x390]
    char v8;  // [bp-0x388]
    char v9;  // [bp-0x380]
    char v10;  // [bp-0x378]
    void* v11;  // [bp-0x370], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v12;  // [sp-0x368], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x360], Other Possible Types: unsigned long long
    int v14;  // [bp-0x358], Other Possible Types: char
    char v15;  // [bp-0x350]
    int v16;  // [sp-0x348]
    char v17;  // [bp-0x340]
    int v18;  // [sp-0x338]
    unsigned long long v19;  // [sp-0x328]
    unsigned long v20;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x318]
    char v22;  // [bp-0x310]
    char v23;  // [bp-0x300]
    int v24;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned int
    unsigned long long v25;  // [sp-0x2f0]
    unsigned long long v26;  // [sp-0x2e8]
    unsigned int v27;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v28;  // [sp-0x2d8]
    char v29;  // [bp-0x2d0]
    char v30;  // [bp-0x2c0]
    char v31;  // [bp-0x2b0]
    unsigned long long v33[6];  // rax
    unsigned long long v34;  // r14
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rsi
    unsigned long long v42;  // r14
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    void* v46;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49[3];  // rax

    core::iter::traits::iterator::Iterator::collect::h2e99ab7a29178c52(&v8, a0, a1);
    if (*((long long *)&v10) < 2)
    {
LABEL_4697fe:
        uu_fmt::uu_app::h54cc694a9312ac9f(&v24, v43, v44);
        clap_builder::builder::command::Command::try_get_matches_from::hbdbc9ca7de09d40c(&v11, &v24, &v8);
        if (v3 == 0x8000000000000000)
        {
            v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v4);
            ::0x468440::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha2a53a3db2a22010(&v8);
            return v46;
        }
        v7 = *((long long *)&v17);
        *((int128_t *)&v6) = *((int128_t *)&v15);
        *((int128_t *)&v5) = *((int128_t *)&v13);
        v3 = v11;
        v4 = v12;
        uu_fmt::extract_files::hac217ce8fe7d1aa0(&v24, &v3);
        v46 = v25;
        if (v0 != 0x8000000000000000)
        {
            v0 = *((long long *)&v24);
            v1 = v46;
            v2 = v26;
            uu_fmt::FmtOptions::from_matches::h577ce65cbc9557ca(&v24, &v3);
            v48 = *((long long *)&v24);
            if (v11 != 9223372036854775809)
            {
                v19 = *((long long *)&v31);
                *((int128_t *)&v18) = *((int128_t *)&v30);
                *((int128_t *)&v16) = *((int128_t *)&v29);
                *((int128_t *)&v14) = *((int128_t *)&v27);
                v11 = v48;
                v46 = v25;
                v13 = v26;
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hfd3d81be9f0782b0(&v24, 0x2000, std::io::stdio::stdout::h077da66234850927());
                v20 = v1;
                v21 = v20 + v2 * 24;
                do
                {
                    v49 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6cebce54fd9c18ac(&v20);
                    if (!v49)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::hb10b679145c87ec7(&v24);
                        core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hb5a077742ba53eaa(&v11);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::he2b23572a7f0d4e4(&v0);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h57826e2e3a091ba7(&v3);
                        ::0x468440::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha2a53a3db2a22010(&v8);
                        return 0;
                    }
                } while ((v46 = uu_fmt::process_file::hd2964999a673d1ab(v49[1], v49[2], &v11, &v24), !v46));
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::hb10b679145c87ec7(&v24);
                core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hb5a077742ba53eaa(&v11);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::he2b23572a7f0d4e4(&v0);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h57826e2e3a091ba7(&v3);
        goto LABEL_4699f5;
    }
    else
    {
        v33 = *((long long *)&v9);
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v3, v33[4], v33[5]);
        v34 = *((long long *)&v5);
        v24 = 0;
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha36e30794264ea0c(v4, v34, ::0x4686b0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v24), v35))
        {
            v36 = v4;
            v37 = *((long long *)&v5);
            *((unsigned long long *)&v24) = v36;
            v25 = v37 + v36;
            if (!::0x469d10::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&v24, 1, v35) && (int)core::str::validations::next_code_point::h289e7f6676b2eea3(&v24) && (v38 = (unsigned long long)((unsigned int)v35 - 48), (unsigned int)v38 < 10))
            {
                v39 = v4;
                v40 = *((long long *)&v5);
                *((unsigned long long *)&v24) = v39;
                v25 = v40 + v39;
                v26 = 2;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9da8ba991b77e4c((unsigned int)_$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h1cd5d7bc7f13325c(&v24, v41, v38)))
                    goto LABEL_4697f4;
                v42 = *((long long *)&v5);
                v24 = 0;
                v45 = ::0x468910::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x4686b0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v24), v35, v4, v42);
                if (!v45)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v11 = 0;
                v12 = v45;
                v13 = v35;
                v14 = 1;
                v0 = &v11;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v24 = &g_524d50;
                v25 = 1;
                v28 = 0;
                v26 = &v0;
                v27 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hbe708caa8915cbdf(&v22, &v24);
                v27 = 1;
                *((int128_t *)&v24) = *((int128_t *)&v22);
                v26 = *((long long *)&v23);
                v46 = alloc::boxed::Box$LT$T$GT$::new::h4f361ef52bef4aa0(&v24);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha69aae171e008bdb(&v3);
LABEL_4699f5:
                ::0x468440::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::ha2a53a3db2a22010(&v8);
                return v46;
            }
        }
LABEL_4697f4:
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha69aae171e008bdb(&v3);
        goto LABEL_4697fe;
    }
}
