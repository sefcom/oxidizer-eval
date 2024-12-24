fn uu_ptx::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x4e0], Other Possible Types: i192
    let v1: i192;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct24>
    let v2: i128;  // [bp-0x4c0]
    let v3: i64;  // [sp-0x4b8]
    let v4: i448;  // [sp-0x490]
    let v5: i64;  // [sp-0x488]
    let v6: i64;  // [bp-0x458], Other Possible Types: struct96
    let v7: i64;  // [sp-0x448]
    let v8: i64;  // [sp-0x3f0], Other Possible Types: Result<struct56, struct16>, struct64
    let v9: i128;  // [sp-0x3a8]
    let v10: i128;  // [sp-0x398]
    let v11: i128;  // [sp-0x388]
    let v12: i64;  // [sp-0x378]
    let v13: i384;  // [sp-0x370]
    let v14: struct24;  // [sp-0x340], Other Possible Types: i192
    let v15: i512;  // [bp-0x328]
    let v16: i192;  // [sp-0x2e8], Other Possible Types: struct24, Result<struct96, struct24>, struct48, struct712, struct8, struct56
    let v18: i64;  // rax
    let v19: i64;  // rdx
    let v20: i64;  // r14
    let v21: i128;  // xmm0
    let v25: i64;  // r14
    let v26: i64;  // r8
    let v27: i64;  // r9
    let v28: i64;  // rax

    v16 = uu_ptx::uu_app(a1, a2);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v16, a0, a1);
    if v4 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v18;
    }
    v4 = v8;
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, _ZN6uu_ptx7options4FILE17h74a90e30f8df2756E, g_6ef0d0);
    v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h74a90e30f8df2756E, g_6ef0d0, &v16);
    if v8 {
        v16 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v8, v19);
        v15 = v16;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15, v19);
    } else {
        v20 = alloc::alloc::Global::alloc_impl(24);
        v16 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v7 = *((&v16 as &char + 16) as &i64);
        v21 = v16;
        v6 = v21;
        *((v20 + 16) as &i64) = v7;
        *(v20 as &i128) = v21;
        v0 = alloc::slice::hack::into_vec(v20, 1);
    }
    v16 = uu_ptx::get_config(&v4);
    if v6 == 0x8000000000000000 {
        return v18;
    }
    v6 = struct96 {
        field_0: v22
        field_8: v18
        field_16: v23
        field_24: *((&v16 as &char + 24) as &i128)
        field_40: *((&v16 as &char + 40) as &i128)
        field_56: *((&v16 as &char + 56) as &i128)
        field_72: *((&v16 as &char + 72) as &i128)
        field_88: *((&v16 as &char + 88) as &i64)
    };
    v16 = uu_ptx::WordFilter::new(&v4, &v6);
    v18 = *((&v16 as &char + 8) as &i64);
    v25 = *((&v16 as &char + 16) as &i64);
    if v8 != 0x8000000000000000 {
        v12 = *((&v16 as &char + 120) as &i64);
        v11 = *((&v16 as &char + 104) as &i128);
        v10 = *((&v16 as &char + 88) as &i128);
        v9 = *((&v16 as &char + 72) as &i128);
        v8.56 = (stack_base)[688] as i128;
        v8.40 = (stack_base)[704] as i128;
        v8.24 = (stack_base)[720] as i128;
        v8 = v16;
        v8.8 = vvar_225{reg 40};
        v8.field_16 = vvar_226{reg 128};
        v16 = uu_ptx::read_input(*((&v0 as &char + 8) as &i64), v0.field_16, &v6);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v16);
        if v13 {
            v13 = v1;
            v14 = uu_ptx::create_word_set(&v6, &v8, &v13, v26, v27);
            if v6.field_88 as i8 || v0.field_16 != 2 {
                v16 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v1 = v16;
            } else {
                v0.field_16 = 1;
                v28 = *((&v0 as &char + 8) as &i64);
                if v1 == 0x8000000000000000 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v1 = *((v28 + 24) as &i64);
                v2 = *((v28 + 32) as &i128);
            }
            v18 = uu_ptx::write_traditional_output(&v6, &v13, &v14, *((&v1 as &char + 8) as &i64), v3, v27);
            return v18;
        }
    }
}
