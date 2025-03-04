long long uu_mv::uumain::uumain::h01b12df543510b6c(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x479]
    int v1;  // [sp-0x478], Other Possible Types: char, unsigned long long, unsigned long
    int v2;  // [sp-0x470], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_0 **v3;  // [sp-0x468], Other Possible Types: char, unsigned long, unsigned long long
    int v4;  // [bp-0x460], Other Possible Types: unsigned int, unsigned long, unsigned long long
    void* v5;  // [sp-0x458], Other Possible Types: char
    unsigned long long v6;  // [sp-0x450]
    char v7;  // [bp-0x448]
    char v8;  // [sp-0x447]
    char v9;  // [sp-0x446]
    char v10;  // [sp-0x445]
    char v11;  // [sp-0x444]
    char v12;  // [sp-0x443]
    char v13;  // [sp-0x442]
    char v14;  // [sp-0x441]
    int v16;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x418]
    unsigned long v18;  // [sp-0x410]
    unsigned long long v19;  // [sp-0x408]
    int v20;  // [sp-0x400]
    int v21;  // [sp-0x3f0]
    unsigned long long v22;  // [sp-0x3e0]
    unsigned long long *v23;  // [bp-0x3d8], Other Possible Types: unsigned long
    int v24;  // [sp-0x3d0], Other Possible Types: unsigned long, unsigned long long
    char v25;  // [bp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    char v26;  // [sp-0x3c0]
    char v27;  // [bp-0x3b8]
    char v28;  // [bp-0x3a8]
    char v29;  // [bp-0x3a0]
    int v30;  // [bp-0x398], Other Possible Types: char
    unsigned long v31;  // [sp-0x388], Other Possible Types: unsigned long long
    char v32;  // [bp-0x380]
    char v33;  // [bp-0x378]
    char v34;  // [bp-0x370]
    char v35;  // [bp-0x368]
    char v36;  // [bp-0x358]
    unsigned long v37;  // [sp-0x350]
    unsigned long long v38;  // [sp-0x348]
    int v39;  // [sp-0x340]
    int v40;  // [sp-0x330]
    unsigned long long v41;  // [sp-0x320]
    unsigned long long v42;  // [sp-0x318]
    char v43;  // [bp-0x310]
    char v44;  // [bp-0x2f8]
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long v52;  // rdx
    char v53;  // bl
    char v54;  // bpl
    char v55;  // r13b
    unsigned long long v56;  // rax
    char v57;  // al

    uu_mv::uu_app::hfdaaab3614528530(&v44);
    clap_builder::builder::command::Command::try_get_matches_from_mut::h2240c66d1acfe0fa(&v1, &v44, a0, a1);
    if (v18 == 0x8000000000000000)
    {
        v46 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v19);
    }
    else
    {
        v22 = *((long long *)&v7);
        *((int128_t *)&v21) = *((int128_t *)&v5);
        *((int128_t *)&v20) = *((int128_t *)&v3);
        v18 = v1;
        v19 = v2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hff279e0ad4a0eeac(&v1, &v18, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88);
        clap_builder::parser::error::MatchesError::unwrap::h99178e80da74aca8(&v23, _ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E, g_587d88, &v1);
        v47 = v23;
        if (v47)
        {
            v48 = v24;
            v52 = *((long long *)&v29);
        }
        else
        {
            v48 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
            v47 = core::ops::function::FnOnce::call_once::ha903d9ac633000a5;
            v52 = 0;
        }
        v37 = v47;
        v38 = v48;
        *((int128_t *)&v39) = *((int128_t *)&v25);
        *((int128_t *)&v40) = *((int128_t *)&v27);
        v41 = *((long long *)&v28);
        v42 = v52;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d30ac2cc0f0b64e(&v32, &v37);
        if (*((long long *)&v34) == 1 && !(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v18, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48))
        {
            v23 = &_ZN5uu_mv9ARG_FILES17h6d8adaf7ec2b89d6E;
            v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h48422eefa7f5ab42;
            v1 = &g_584c28;
            v2 = 2;
            v5 = 0;
            v3 = &v23;
            v4 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hdb640919041b3b75(&v43, &v1);
            v1 = clap_builder::error::Error$LT$F$GT$::format::hb9eed6f2ee7e65ff(clap_builder::error::Error$LT$F$GT$::raw::h04dfe7f3fdb8b31a(6, &v43), &v44);
            clap_builder::error::Error$LT$F$GT$::exit::hd8209c520a8761e9(&v1); /* do not return */
        }
        v53 = uu_mv::determine_overwrite_mode::h2a7c21ee43665632(&v18);
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&v1, &v18);
        v46 = v1;
        if (v46)
            goto LABEL_492dc7;
        v54 = v2;
        v55 = uucore::features::update_control::determine_update_mode::h741491f5f957cb56(&v18);
        if (v54 && (!v53 || (v55 & 1)))
        {
            ::0x4924e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1716e8528db7e4a4(&v23);
            v3 = v25;
            *((int128_t *)&v1) = *((int128_t *)&v23);
            v4 = 1;
            v46 = alloc::boxed::Box$LT$T$GT$::new::h5f90fa1e3f4cd7b7(&v1);
LABEL_492dc7:
            ::0x491ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&v32);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&v18);
        }
        else
        {
            uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&v35, &v18);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4d9e7d247c306b7f(&v1, &v18, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48);
            v56 = clap_builder::parser::error::MatchesError::unwrap::h89c82ab2bd8d6091(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h9ab0542800d4ad00E, g_587d48, &v1);
            if (!v56)
            {
                v16 = 0x8000000000000000;
                goto LABEL_492f77;
            }
            core::ops::function::FnOnce::call_once::h16aa1e2e39857890(&v1, v56);
            v17 = v3;
            *((int128_t *)&v16) = (int128_t)v1;
            if (!((long long)v16 != 0x8000000000000000) || !(!(char)std::path::Path::is_dir::h9ac0db933706da51((long long)(&v16)[8], v17)))
            {
LABEL_492f77:
                v0 = v55;
                v31 = *((long long *)&v36);
                *((int128_t *)&v30) = *((int128_t *)&v35);
                v25 = v17;
                v23 = (long long)v16;
                v24 = (long long)(&v16)[8];
                v57 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, _ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hcc24806db1a5c249E, g_587d58);
                if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, _ZN5uu_mv11OPT_VERBOSE17h564b3b5f0c97021dE, g_587d68))
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                v12 = v53;
                v13 = v54;
                v1 = v30;
                v3 = v31;
                v14 = v0;
                *((int128_t *)&v4) = *((int128_t *)&v23);
                v6 = v25;
                v7 = v57;
                v8 = 1;
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, _ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h51274aa3e0aeb94eE, g_587d38);
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, _ZN5uu_mv12OPT_PROGRESS17h1c7c0a4244182235E, g_587d78);
                v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v18, _ZN5uu_mv9OPT_DEBUG17h6ab2aef4c0c3b5ccE, g_587d98);
                v46 = uu_mv::mv::h15eff797ddd7e01a(*((long long *)&v33), *((long long *)&v34), &v1);
                core::ptr::drop_in_place$LT$uu_mv..Options$GT$::h05a211bf7f3f2585(&v1);
                ::0x491ef0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he70af320919a676e(&v32);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h72f2f9eded2ee180(&v18);
            }
            else
            {
                v23 = 1;
                *((int128_t *)&v24) = (int128_t)(&v16)[8];
                v26 = 1;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9d67ef52ab94ff93(&v30, &v23);
                v4 = v31;
                v2 = v30;
                v1 = 8;
                v46 = alloc::boxed::Box$LT$T$GT$::new::h18b7328edc97dea9(&v1);
                ::0x492030::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h5f4d8006a6098320(&v16);
                ::0x4919a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79d8e948a1c6aee4(&v35);
                goto LABEL_492dc7;
            }
        }
    }
    ::0x491ba0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h26677e3a2ea360a6(&v44);
    return v46;
}
