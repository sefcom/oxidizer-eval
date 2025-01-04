fn uu_ptx::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x4e0], Other Possible Types: i192
    let v1: i64;  // [sp-0x4d0]
    let v2: i192;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct24>
    let v3: i128;  // [bp-0x4c0]
    let v4: i64;  // [sp-0x4b8]
    let v5: i64;  // [sp-0x490]
    let v6: i64;  // [sp-0x488]
    let v7: i64;  // [bp-0x458], Other Possible Types: struct96
    let v8: i64;  // [sp-0x448]
    let v9: i64;  // [sp-0x3f0], Other Possible Types: struct64, Result<struct56, struct16>
    let v10: i64;  // [sp-0x3e8]
    let v11: i64;  // [sp-0x3e0]
    let v12: i128;  // [sp-0x3d8]
    let v13: i128;  // [sp-0x3c8]
    let v14: i128;  // [sp-0x3b8]
    let v15: i128;  // [sp-0x3a8]
    let v16: i128;  // [sp-0x398]
    let v17: i128;  // [sp-0x388]
    let v18: i64;  // [sp-0x378]
    let v19: i384;  // [sp-0x370]
    let v20: i192;  // [sp-0x340], Other Possible Types: struct24
    let v21: i512;  // [bp-0x328]
    let v22: i976;  // [sp-0x2e8], Other Possible Types: Result<struct122, struct24>, struct24, struct712, struct48, struct56, struct8
    let v24: i64;  // r8
    let v25: i64;  // r9
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // r14
    let v29: i128;  // xmm0
    let v34: i64;  // rax

    v22 = uu_ptx::uu_app(a1, a2);
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v22, a0, a1, v24, v25);
    if v5 == 0x8000000000000000 {
        v26 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v26;
    }
    v5 = v9;
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618);
    v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618, &v22);
    if v9 {
        v22 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v9, v27);
        v21 = v22;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21, v27);
    } else {
        v28 = alloc::alloc::Global::alloc_impl(24);
        v22 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v8 = *((&v22 as &char + 16) as &i64);
        v29 = v22;
        v7 = v29;
        *((v28 + 16) as &i64) = v8;
        *(v28 as &i128) = v29;
        v0 = alloc::slice::hack::into_vec(v28, 1);
    }
    v22 = uu_ptx::get_config(&v5);
    if v7 == 0x8000000000000000 {
        return v26;
    }
    v7 = struct96 {
        field_0: v30
        field_8: v26
        field_16: v31
        field_24: *((&v22 as &char + 24) as &i128)
        field_40: *((&v22 as &char + 40) as &i128)
        field_56: *((&v22 as &char + 56) as &i128)
        field_72: *((&v22 as &char + 72) as &i128)
        field_88: *((&v22 as &char + 88) as &i64)
    };
    v22 = uu_ptx::WordFilter::new(&v5, &v7);
    v26 = *((&v22 as &char + 8) as &i64);
    if v9 != 0x8000000000000000 {
        v18 = *((&v22 as &char + 120) as &i64);
        v17 = *((&v22 as &char + 104) as &i128);
        v16 = *((&v22 as &char + 88) as &i128);
        v15 = *((&v22 as &char + 72) as &i128);
        v14 = *((&v22 as &char + 56) as &i128);
        v13 = *((&v22 as &char + 40) as &i128);
        v12 = *((&v22 as &char + 24) as &i128);
        v9 = v22;
        v10 = v26;
        v11 = *((&v22 as &char + 16) as &i64);
        v22 = uu_ptx::read_input(*((&v0 as &char + 8) as &i64), v1, &v7);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v22);
        if v19 {
            v19 = v2;
            v20 = uu_ptx::create_word_set(&v7, &v9, &v19, v24, v25);
            if v7.field_88 as i8 || v1 != 2 {
                v22 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v2 = v22;
            } else {
                v1 = 1;
                v34 = *((&v0 as &char + 8) as &i64);
                if v2 == 0x8000000000000000 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v2 = *((v34 + 24) as &i64);
                v3 = *((v34 + 32) as &i128);
            }
            v26 = uu_ptx::write_traditional_output(&v7, &v19, &v20, *((&v2 as &char + 8) as &i64), v4, v25);
            return v26;
        }
    }
}
