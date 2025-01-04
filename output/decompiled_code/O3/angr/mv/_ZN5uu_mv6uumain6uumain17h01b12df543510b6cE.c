long long uu_mv::uumain::uumain::h01b12df543510b6c(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x479]
    int v1;  // [bp-0x478], Other Possible Types: char, unsigned long, unsigned long long
    int v2;  // [sp-0x470], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_0 **v3;  // [bp-0x468], Other Possible Types: char, unsigned long, unsigned long long
    int v4;  // [bp-0x460], Other Possible Types: unsigned int, unsigned long, unsigned long long
    void* v5;  // [bp-0x458], Other Possible Types: char
    unsigned long long v6;  // [sp-0x450]
    char v7;  // [bp-0x448]
    char v8;  // [sp-0x447]
    char v9;  // [sp-0x446]
    char v10;  // [sp-0x445]
    char v11;  // [sp-0x444]
    char v12;  // [sp-0x443]
    char v13;  // [sp-0x442]
    char v14;  // [sp-0x441]
    int v15;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x418]
    unsigned long v17;  // [sp-0x410], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x408]
    int v19;  // [sp-0x400]
    int v20;  // [sp-0x3f0]
    unsigned long long v21;  // [sp-0x3e0]
    unsigned long long *v22;  // [bp-0x3d8], Other Possible Types: unsigned long, unsigned long long
    int v23;  // [sp-0x3d0], Other Possible Types: unsigned long long
    char v24;  // [bp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    char v25;  // [sp-0x3c0]
    char v26;  // [bp-0x3b8]
    char v27;  // [bp-0x3a8]
    char v28;  // [bp-0x3a0]
    int v29;  // [bp-0x398], Other Possible Types: char
    unsigned long v30;  // [sp-0x388], Other Possible Types: unsigned long long
    char v31;  // [bp-0x380]
    char v32;  // [bp-0x378]
    char v33;  // [bp-0x370]
    char v34;  // [bp-0x368]
    char v35;  // [bp-0x358]
    unsigned long v36;  // [sp-0x350], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x348]
    int v38;  // [sp-0x340]
    int v39;  // [sp-0x330]
    unsigned long long v40;  // [sp-0x320]
    unsigned long long v41;  // [sp-0x318]
    char v42;  // [bp-0x310]
    char v43;  // [bp-0x2f8]
    unsigned long long v45;  // r8
    unsigned long long v46;  // r9
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v52;  // rdx
    char v54;  // bl
    char v55;  // bpl
    unsigned long long v56;  // rdx
    char v57;  // r13b
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    char v60;  // al

    uu_mv::uu_app::hfdaaab3614528530(&v43, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from_mut::h2240c66d1acfe0fa(&v1, &v43, a0, a1, v45, v46);
    if (v17 == 0x8000000000000000)
    {
        v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v18);
    }
    else
    {
        v21 = *((long long *)&v7);
        *((int128_t *)&v20) = *((int128_t *)&v5);
        *((int128_t *)&v19) = *((int128_t *)&v3);
        v17 = v1;
        v18 = v2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hff279e0ad4a0eeac(&v1, &v17, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88);
        clap_builder::parser::error::MatchesError::unwrap::h99178e80da74aca8(&v22, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88, &v1);
        v48 = v22;
        if (!v48)
        {
            v48 = core::ops::function::FnOnce::call_once::ha903d9ac633000a5;
            v52 = 0;
        }
        else
        {
            v52 = *((long long *)&v28);
        }
        v36 = v48;
        v37 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        *((int128_t *)&v38) = *((int128_t *)&v24);
        *((int128_t *)&v39) = *((int128_t *)&v26);
        v40 = *((long long *)&v27);
        v41 = v52;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d30ac2cc0f0b64e(&v31, &v36, v41);
        if (*((long long *)&v33) == 1 && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v17, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48))
        {
            v22 = &_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E;
            v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h48422eefa7f5ab42;
            v1 = &g_584c28;
            v2 = 2;
            v5 = 0;
            v3 = &v22;
            v4 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hdb640919041b3b75(&v42, &v1);
            v1 = clap_builder::error::Error$LT$F$GT$::format::hb9eed6f2ee7e65ff(clap_builder::error::Error$LT$F$GT$::raw::h04dfe7f3fdb8b31a(6, &v42), &v43, v56);
            clap_builder::error::Error$LT$F$GT$::exit::hd8209c520a8761e9(&v1); /* do not return */
        }
        v54 = uu_mv::determine_overwrite_mode::h2a7c21ee43665632(&v17);
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&v1, &v17);
        v47 = v1;
        if (v47)
            goto LABEL_492dc7;
        v55 = v2;
        v57 = uucore::features::update_control::determine_update_mode::h741491f5f957cb56(&v17);
        if (v55 && (!v54 || (v57 & 1)))
        {
            ::0x4924e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1716e8528db7e4a4(&v22);
            v3 = v24;
            *((int128_t *)&v1) = *((int128_t *)&v22);
            v4 = 1;
            v47 = alloc::boxed::Box$LT$T$GT$::new::h5f90fa1e3f4cd7b7(&v1);
LABEL_492dc7:
            ::0x491ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&v31);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&v17);
        }
        else
        {
            uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&v34, &v17);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9e7d247c306b7f(&v1, &v17, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48);
            v58 = clap_builder::parser::error::MatchesError::unwrap::h89c82ab2bd8d6091(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48, &v1);
            if (!v58)
            {
                v15 = 0x8000000000000000;
                goto LABEL_492f77;
            }
            core::ops::function::FnOnce::call_once::h16aa1e2e39857890(&v1, v58, v59);
            v16 = v3;
            *((int128_t *)&v15) = (int128_t)v1;
            if (!((long long)v15 != 0x8000000000000000) || !(!(char)std::path::Path::is_dir::h9ac0db933706da51((long long)(&v15)[8], v16)))
            {
LABEL_492f77:
                v0 = v57;
                v30 = *((long long *)&v35);
                *((int128_t *)&v29) = *((int128_t *)&v34);
                v24 = v16;
                v22 = (long long)v15;
                v23 = (long long)(&v15)[8];
                v60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E, g_587d58);
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE, g_587d68))
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                v12 = v54;
                v13 = v55;
                v1 = v29;
                v3 = v30;
                v14 = v0;
                *((int128_t *)&v4) = *((int128_t *)&v22);
                v6 = v24;
                v7 = v60;
                v8 = 1;
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE, g_587d38);
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E, g_587d78);
                v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v17, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                v47 = uu_mv::mv::h15eff797ddd7e01a(*((long long *)&v32), *((long long *)&v33), &v1, v24, v45, v46);
                core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h05a211bf7f3f2585(&v1);
                ::0x491ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&v31);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&v17);
            }
            else
            {
                v22 = 1;
                *((int128_t *)&v23) = (int128_t)(&v15)[8];
                v25 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9d67ef52ab94ff93(&v29, &v22);
                v4 = v30;
                v2 = v29;
                v1 = 8;
                v47 = alloc::boxed::Box$LT$T$GT$::new::h18b7328edc97dea9(&v1);
                ::0x492030::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5f4d8006a6098320(&v15);
                ::0x4919a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79d8e948a1c6aee4(&v34);
                goto LABEL_492dc7;
            }
        }
    }
    ::0x491ba0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h26677e3a2ea360a6(&v43);
    return v47;
}
