fn uu_ptx::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x4e0], Other Possible Types: i192
    let v1: i128;  // [sp-0x4c8], Other Possible Types: Result<struct48, struct24>
    let v2: i128;  // [bp-0x4c0]
    let v3: i64;  // [sp-0x4b8]
    let v4: struct56;  // [sp-0x490], Other Possible Types: i64
    let v5: i64;  // [sp-0x488]
    let v6: i64;  // [bp-0x458], Other Possible Types: struct96
    let v7: i64;  // [sp-0x448]
    let v8: i64;  // [bp-0x3f0], Other Possible Types: struct64
    let v13: i128;  // [sp-0x3a8]
    let v14: i128;  // [sp-0x398]
    let v15: i128;  // [sp-0x388]
    let v16: i64;  // [sp-0x378]
    let v17: struct48;  // [sp-0x370], Other Possible Types: i64
    let v18: i192;  // [sp-0x340], Other Possible Types: struct24
    let v19: struct64;  // [bp-0x328]
    let v20: i5696;  // [sp-0x2e8], Other Possible Types: Result<struct122, struct24>, struct24, struct56, struct8, struct48, struct712
    let v22: i64;  // rax
    let v23: i64;  // rdx
    let v24: i64;  // r14
    let v25: i128;  // xmm0
    let v29: i64;  // r14
    let v30: i64;  // r8
    let v31: i64;  // r9
    let v32: i64;  // rax

    v20 = uu_ptx::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v8, &v20, a0, a1);
    if v4 == 0x8000000000000000 {
        v22 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v22;
    }
    v4 = struct56 {
        field_0: v8
        field_8: v9
        field_16: v10
        field_32: v11
        field_48: v12
    };
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, _ZN6uu_ptx7options4FILE17h74a90e30f8df2756E, g_6ef0d0);
    v8 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h74a90e30f8df2756E, g_6ef0d0, &v20);
    if v8 {
        v20 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v8, v23);
        *(&v19.field_0 as &struct64) = struct64 {
            field_0: v20
            field_16: *((&v20 as &char + 16) as &i128)
            field_32: *((&v20 as &char + 32) as &i128)
            field_48: *((&v20 as &char + 48) as &i64)
            field_56: *((&v8 as &char + 56) as &i64)
        };
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v19, v23);
    } else {
        v24 = alloc::alloc::Global::alloc_impl(24);
        v20 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v7 = *((&v20 as &char + 16) as &i64);
        v25 = v20;
        v6 = v25;
        *((v24 + 16) as &i64) = v7;
        *(v24 as &i128) = v25;
        v0 = alloc::slice::hack::into_vec(v24, 1);
    }
    v20 = uu_ptx::get_config(&v4);
    if v6 == 0x8000000000000000 {
        return v22;
    }
    v6 = struct96 {
        field_0: v26
        field_8: v22
        field_16: v27
        field_24: *((&v20 as &char + 24) as &i128)
        field_40: *((&v20 as &char + 40) as &i128)
        field_56: *((&v20 as &char + 56) as &i128)
        field_72: *((&v20 as &char + 72) as &i128)
        field_88: *((&v20 as &char + 88) as &i64)
    };
    v20 = uu_ptx::WordFilter::new(&v4, &v6);
    v22 = *((&v20 as &char + 8) as &i64);
    v29 = *((&v20 as &char + 16) as &i64);
    if v8 != 0x8000000000000000 {
        v16 = *((&v20 as &char + 120) as &i64);
        v15 = *((&v20 as &char + 104) as &i128);
        v14 = *((&v20 as &char + 88) as &i128);
        v13 = *((&v20 as &char + 72) as &i128);
        v8.56 = (stack_base)[688] as i128;
        v8.40 = (stack_base)[704] as i128;
        v8.24 = (stack_base)[720] as i128;
        v8 = v20;
        v8.8 = vvar_225{reg 40};
        v8.field_16 = vvar_226{reg 128};
        v20 = uu_ptx::read_input(*((&v0 as &char + 8) as &i64), v0.field_16, &v6);
        v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v20);
        if v17 {
            *(&v17.field_0 as &struct48) = struct48 {
                field_0: v1
                field_8: v22
                field_16: v3
                field_24: *((&v1 as &char + 24) as &i128)
                field_40: *((&v1 as &char + 40) as &i64)
            };
            v18 = uu_ptx::create_word_set(&v6, &v8, &v17, v30, v31);
            if v6.field_88 as i8 || v0.field_16 != 2 {
                v20 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v3 = *((&v20 as &char + 16) as &i64);
                v1 = v20;
            } else {
                v0.field_16 = 1;
                v32 = *((&v0 as &char + 8) as &i64);
                if v1 == 0x8000000000000000 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v1 = *((v32 + 24) as &i64);
                v2 = *((v32 + 32) as &i128);
            }
            v22 = uu_ptx::write_traditional_output(&v6, &v17, &v18, *((&v1 as &char + 8) as &i64), v3, v31);
            return v22;
        }
    }
}
