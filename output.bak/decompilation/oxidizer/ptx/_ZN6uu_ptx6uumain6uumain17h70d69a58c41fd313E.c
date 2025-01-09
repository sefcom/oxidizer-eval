fn uu_ptx::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x4e0], Other Possible Types: i192
    let v1: i64;  // [sp-0x4d0]
    let v2: i192;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct16>, struct24
    let v3: i128;  // [bp-0x4c0]
    let v4: i64;  // [sp-0x4b8]
    let v5: struct56;  // [sp-0x490], Other Possible Types: i64
    let v6: i64;  // [sp-0x488]
    let v7: i64;  // [bp-0x458]
    let v8: i64;  // [sp-0x450]
    let v9: i64;  // [sp-0x448]
    let v10: i128;  // [sp-0x440]
    let v11: i128;  // [sp-0x430]
    let v12: i128;  // [sp-0x420]
    let v13: i128;  // [sp-0x410]
    let v14: i64;  // [sp-0x400]
    let v15: i512;  // [sp-0x3f0], Other Possible Types: Result<struct56, struct8>, struct64
    let v16: i64;  // [sp-0x3e8]
    let v17: i64;  // [sp-0x3e0]
    let v18: i128;  // [sp-0x3d8]
    let v19: i128;  // [sp-0x3c8]
    let v20: i128;  // [sp-0x3b8]
    let v21: i128;  // [sp-0x3a8]
    let v22: i128;  // [sp-0x398]
    let v23: i128;  // [sp-0x388]
    let v24: i64;  // [sp-0x378]
    let v25: struct48;  // [sp-0x370], Other Possible Types: i64
    let v26: struct24;  // [sp-0x340], Other Possible Types: i192
    let v27: struct64;  // [bp-0x328]
    let v28: i192;  // [sp-0x2e8], Other Possible Types: Result<struct96, struct16>, struct24, struct48, struct8, struct56, struct712
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // r14
    let v33: i128;  // xmm0
    let v38: i64;  // rax

    v28 = uu_ptx::uu_app();
    v15 = clap_builder::builder::command::Command::try_get_matches_from(&v28, a0, a1);
    if v5 == 0x8000000000000000 {
        v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v30;
    }
    v5 = struct56 {
        field_0: v15
        field_8: v16
        field_16: *((&v15 as &char + 16) as &i128)
        field_32: *((&v15 as &char + 32) as &i128)
        field_48: *((&v15 as &char + 48) as &i64)
    };
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618);
    v15 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618, &v28);
    if v15 {
        v28 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v15, v31);
        *(&v27.field_0 as &struct64) = struct64 {
            field_0: v28
            field_16: *((&v28 as &char + 16) as &i128)
            field_32: *((&v28 as &char + 32) as &i128)
            field_48: *((&v28 as &char + 48) as &i64)
            field_56: *((&v15 as &char + 56) as &i64)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
    } else {
        v32 = alloc::alloc::Global::alloc_impl();
        v28 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v9 = *((&v28 as &char + 16) as &i64);
        v33 = v28;
        v7 = v33;
        *((v32 + 16) as &i64) = v9;
        *(v32 as &i128) = v33;
        v0 = alloc::slice::hack::into_vec(v32, 1);
    }
    v28 = uu_ptx::get_config(&v5);
    v30 = *((&v28 as &char + 8) as &i64);
    if v7 == 0x8000000000000000 {
        return v30;
    }
    v14 = *((&v28 as &char + 88) as &i64);
    v13 = *((&v28 as &char + 72) as &i128);
    v12 = *((&v28 as &char + 56) as &i128);
    v11 = *((&v28 as &char + 40) as &i128);
    v10 = *((&v28 as &char + 24) as &i128);
    v7 = v28;
    v8 = v30;
    v9 = *((&v28 as &char + 16) as &i64);
    v28 = uu_ptx::WordFilter::new(&v5);
    v30 = *((&v28 as &char + 8) as &i64);
    if v15 != 0x8000000000000000 {
        v24 = *((&v28 as &char + 120) as &i64);
        v23 = *((&v28 as &char + 104) as &i128);
        v22 = *((&v28 as &char + 88) as &i128);
        v21 = *((&v28 as &char + 72) as &i128);
        v20 = *((&v28 as &char + 56) as &i128);
        v19 = *((&v28 as &char + 40) as &i128);
        v18 = *((&v28 as &char + 24) as &i128);
        v15 = v28;
        v16 = v30;
        v17 = *((&v28 as &char + 16) as &i64);
        v28 = uu_ptx::read_input(*((&v0 as &char + 8) as &i64), v1, &v7);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v28);
        if v25 {
            *(&v25.field_0 as &struct48) = struct48 {
                field_0: v2
                field_8: v30
                field_16: v4
                field_24: *((&v2 as &char + 24) as &i128)
                field_40: *((&v2 as &char + 40) as &i64)
            };
            v26 = uu_ptx::create_word_set(&v7, &v15, &v25);
            if v14 || v1 != 2 {
                v28 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v2 = v28;
            } else {
                v1 = 1;
                v38 = *((&v0 as &char + 8) as &i64);
                if v2 == 0x8000000000000000 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/ptx/src/ptx.rs"); /* do not return */
                }
                v2 = *((v38 + 24) as &i64);
                v3 = *((v38 + 32) as &i128);
            }
            v30 = uu_ptx::write_traditional_output(&v7, &v25, &v26, *((&v2 as &char + 8) as &i64), v4);
            return v30;
        }
    }
}
