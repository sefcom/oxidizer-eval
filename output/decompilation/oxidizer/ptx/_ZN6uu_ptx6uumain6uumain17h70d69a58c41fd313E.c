fn uu_ptx::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x4e0], Other Possible Types: int
    let v1: i64;  // [sp-0x4d0]
    let v2: i64;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct16>, struct24
    let v3: iNone;  // [bp-0x4c0]
    let v4: i64;  // [sp-0x490], Other Possible Types: int
    let v5: i64;  // [sp-0x488]
    let v6: i64;  // [bp-0x458], Other Possible Types: int
    let v7: i64;  // [sp-0x450]
    let v8: i64;  // [sp-0x448]
    let v9: iNone;  // [sp-0x440]
    let v10: iNone;  // [sp-0x430]
    let v11: iNone;  // [sp-0x420]
    let v12: iNone;  // [sp-0x410]
    let v13: i64;  // [sp-0x400]
    let v14: i64;  // [bp-0x3f0], Other Possible Types: char, struct64
    let v15: i64;  // [sp-0x3e8]
    let v16: i64;  // [sp-0x3e0]
    let v17: iNone;  // [sp-0x3d8]
    let v18: iNone;  // [sp-0x3c8]
    let v19: iNone;  // [sp-0x3b8]
    let v20: iNone;  // [sp-0x3a8]
    let v21: iNone;  // [sp-0x398]
    let v22: iNone;  // [sp-0x388]
    let v23: i64;  // [sp-0x378]
    let v24: i64;  // [sp-0x370], Other Possible Types: Result<struct48, struct16>
    let v25: i8;  // [bp-0x340]
    let v26: iNone;  // [sp-0x328]
    let v27: struct8;  // [sp-0x2e8], Other Possible Types: struct24, struct712, struct96, Result<struct122, struct16>, struct56
    let v29: i64;  // rbx
    let v30: i64;  // rdx
    let v32: i64;  // r14
    let v33: iNone;  // xmm0
    let v35: i64;  // rbx
    let v38: i64;  // rbx
    let v41: i64;  // rax
    let v43: i64;  // rbx

    v27 = uu_ptx::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v14, &v27, a0, a1);
    if v4 == 0x8000000000000000 {
        v29 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v29;
    }
    v4 = *(&v14 as &i448);
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, _ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618);
    v14 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618, &v27);
    if v14 {
        v27 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v14, v30);
        v26 = v27.field_0 as i512;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26);
    } else {
        v32 = alloc::alloc::Global::alloc_impl(24);
        v27 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v8 = v27.field_16;
        v33 = *(&v27.field_0 as &i128);
        v6 = v33;
        *((v32 + 16) as &unsigned long) = v8;
        *(v32 as void*) = v33;
        v0 = alloc::slice::hack::into_vec(v32, 1);
    }
    v27 = uu_ptx::get_config(&v4);
    v35 = *((&v27.field_0 as &char + 8) as &i64);
    v29 = v35;
    if v6 == 0x8000000000000000 {
        return v29;
    }
    v13 = *(&v27.field_88 as &i64);
    v12 = *((&v27.field_64 as &char + 8) as &i128);
    v11 = *((&v27.field_48 as &char + 8) as &i128);
    v10 = *((&v27.field_32 as &char + 8) as &i128);
    v9 = *((&v27.field_16 as &char + 8) as &i128);
    v6 = v27.field_0 as i64;
    v7 = v35;
    v8 = v27.field_16 as i64;
    v27 = uu_ptx::WordFilter::new(&v4);
    v38 = *((&v27 as &char + 8) as &i64);
    v29 = v38;
    match v27 {
        Err(_) => {
            return v29;
        },
        Ok(_) => {
            v23 = *((&v27.field_0 as &char + 120) as &i64);
            v22 = *((&v27 as &char + 104) as &i128);
            v21 = *((&v27 as &char + 88) as &i128);
            v20 = *((&v27 as &char + 72) as &i128);
            v19 = *((&v27 as &char + 56) as &i128);
            v18 = *((&v27 as &char + 40) as &i128);
            v17 = *((&v27 as &char + 24) as &i128);
            v14 = v27 as i64;
            v15 = v38;
            v16 = *((&v27 as &char + 16) as &i64);
            v27 = uu_ptx::read_input((&v0)[8] as i64, v1, &v6);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v27);
            v29 = *((&v2 as &char + 8) as &i64);
            if !v24 {
                return v29;
            }
            v24 = v2;
            uu_ptx::create_word_set(&v25, &v6, &v14, &v24);
            if v13 as i8 || v1 != 2 {
                v27 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v2 = v27;
            } else {
                v1 = 1;
                v41 = (&v0)[8] as i64;
                if v2 == 0x8000000000000000 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/ptx/src/ptx.rs"); /* do not return */
                }
                v2 = *((v41 + 24) as &i64);
                *(&v3 as &i128) = *((v41 + 32) as &i128);
            }
            v29 = v43;
            return v29;
        },
    }
}
