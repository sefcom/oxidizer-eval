long long uu_fmt::uumain::uumain::h4d597dedc19545e7(unsigned long long a0, unsigned long long a1)
{
    struct struct_0 **v0;  // [sp-0x3d8]
    unsigned long long v1;  // [sp-0x3d0]
    unsigned long long v2;  // [sp-0x3c8]
    unsigned long v3;  // [bp-0x3c0], Other Possible Types: unsigned long long
    struct struct_0 **v4;  // [sp-0x3b8], Other Possible Types: unsigned long long
    struct struct_0 **v5;  // [bp-0x3b0], Other Possible Types: char
    struct struct_0 **v6;  // [sp-0x3a0]
    unsigned long long v7;  // [sp-0x390]
    char v8;  // [bp-0x388]
    char v9;  // [bp-0x380]
    char v10;  // [bp-0x378]
    void* v11;  // [bp-0x370], Other Possible Types: struct struct_0 **, unsigned long
    unsigned long v12;  // [sp-0x368], Other Possible Types: unsigned long long
    unsigned long v13;  // [sp-0x360], Other Possible Types: unsigned long long
    struct struct_0 **v14;  // [bp-0x358], Other Possible Types: char
    char v15;  // [bp-0x350]
    struct struct_0 **v16;  // [sp-0x348]
    char v17;  // [bp-0x340]
    struct struct_0 **v18;  // [sp-0x338]
    unsigned long long v19;  // [sp-0x328]
    unsigned long v20;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x318]
    char v22;  // [bp-0x310]
    char v23;  // [bp-0x300]
    struct struct_0 **v24;  // [bp-0x2f8]
    unsigned long long v25;  // [sp-0x2f0]
    struct struct_0 **v26;  // [sp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v27;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v28;  // [sp-0x2d8]
    char v29;  // [bp-0x2d0]
    char v30;  // [bp-0x2c0]
    char v31;  // [bp-0x2b0]
    unsigned long long v33[6];  // rax
    unsigned long long v34;  // r14
    unsigned long long v35;  // rdx
    struct struct_0 **v36;  // rax
    unsigned long long v37;  // rcx
    struct struct_0 **v38;  // rax
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r14
    unsigned long long v41;  // rax
    void* v42;  // rax
    struct struct_0 **v44;  // rax
    unsigned long long v45[3];  // rax

    core::iter::traits::iterator::Iterator::collect::had47ac2ddb67d26a(&v8, a0, a1);
    if (*((long long *)&v10) < 2)
    {
LABEL_4692be:
        uu_fmt::uu_app::h6ccf3ffc03c52d4c(&v24);
        clap_builder::builder::command::Command::try_get_matches_from::h2c39ca88ebe63a43(&v11, &v24, &v8);
        if (v3 == 0x8000000000000000)
        {
            v42 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v4);
            ::0x467f00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h4c4617d61c3bdfda(&v8);
            return v42;
        }
        v7 = *((long long *)&v17);
        *((int128_t *)&v6) = *((int128_t *)&v15);
        *((int128_t *)&v5) = *((int128_t *)&v13);
        v3 = v11;
        v4 = v12;
        uu_fmt::extract_files::h65884a2383ba06f2(&v24, &v3);
        v42 = v25;
        if (v0 != 0x8000000000000000)
        {
            v0 = v24;
            v1 = v42;
            v2 = v26;
            uu_fmt::FmtOptions::from_matches::ha8709eba89c06adb(&v24, &v3);
            v44 = v24;
            if (v11 != 9223372036854775809)
            {
                v19 = *((long long *)&v31);
                *((int128_t *)&v18) = *((int128_t *)&v30);
                *((int128_t *)&v16) = *((int128_t *)&v29);
                *((int128_t *)&v14) = *((int128_t *)&v27);
                v11 = v44;
                v42 = v25;
                v13 = v26;
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h76aeb7fd66c6f503(&v24, 0x2000, std::io::stdio::stdout::h077da66234850927());
                v20 = v1;
                v21 = v20 + v2 * 24;
                do
                {
                    v45 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6d8ec22a73c6b668(&v20);
                    if (!v45)
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h5437aef1784e66e4(&v24);
                        core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hac3fe91eb70a1596(&v11);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3af8a85558a8e77d(&v0);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h808e47ba2ada1f90(&v3);
                        ::0x467f00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h4c4617d61c3bdfda(&v8);
                        return 0;
                    }
                } while ((v42 = uu_fmt::process_file::h286817e23c9d96bb(v45[1], v45[2], &v11, &v24), !v42));
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h5437aef1784e66e4(&v24);
                core::ptr::drop_in_place$LT$uu_fmt..FmtOptions$GT$::hac3fe91eb70a1596(&v11);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3af8a85558a8e77d(&v0);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h808e47ba2ada1f90(&v3);
        goto LABEL_4694b5;
    }
    else
    {
        v33 = *((long long *)&v9);
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v3, v33[4], v33[5]);
        v34 = *((long long *)&v5);
        *((int *)&v24) = 0;
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2971c2e1dfecdedf(v4, v34, ::0x468170::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v24), v35))
        {
            v36 = v4;
            v37 = *((long long *)&v5);
            v24 = v36;
            v25 = v37 + (char *)v36;
            if (!::0x4697d0::_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&v24, 1) && (int)core::str::validations::next_code_point::ha2c5c8f2c7e9b106(&v24) && (unsigned int)v35 - 48 < 10)
            {
                v38 = v4;
                v39 = *((long long *)&v5);
                v24 = v38;
                v25 = v39 + (char *)v38;
                v26 = 2;
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h11f5455cc95e9734((unsigned int)_$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::ha210a45ec350f961(&v24)))
                    goto LABEL_4692b4;
                v40 = *((long long *)&v5);
                *((int *)&v24) = 0;
                v41 = ::0x4683d0::_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(::0x468170::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v24), v35, v4, v40);
                if (!v41)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_523a58); /* do not return */
                v11 = 0;
                v12 = v41;
                v13 = v35;
                v14 = 1;
                v0 = &v11;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v24 = &g_523a48;
                v25 = 1;
                v28 = 0;
                v26 = &v0;
                v27 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hc9968c7ec2993a3c();
                v27 = 1;
                *((int128_t *)&v24) = *((int128_t *)&v22);
                v26 = *((long long *)&v23);
                v42 = alloc::boxed::Box$LT$T$GT$::new::h5f75f92fa2fc2663(&v24);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h89e5cba2904b1c92(&v3);
LABEL_4694b5:
                ::0x467f00::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h4c4617d61c3bdfda(&v8);
                return v42;
            }
        }
LABEL_4692b4:
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h89e5cba2904b1c92(&v3);
        goto LABEL_4692be;
    }
}
