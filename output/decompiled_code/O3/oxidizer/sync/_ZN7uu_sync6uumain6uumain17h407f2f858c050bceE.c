fn uu_sync::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: i128;  // [sp-0x3a0]
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: struct64;  // [sp-0x388], Other Possible Types: i512, struct24, Result<struct56, struct16>
    let v5: struct56;  // [sp-0x348]
    let v6: i64;  // [sp-0x340]
    let v7: struct24;  // [sp-0x310], Other Possible Types: i192
    let v8: i192;  // [sp-0x2f8], Other Possible Types: struct56, struct64, struct712
    let v9: i64;  // [sp-0x2f0]
    let v11: i64;  // r8
    let v12: i64;  // r9
    let v13: i64;  // rax
    let v17: i64;  // rdx
    let v19: i64;  // rcx
    let v20: struct8;  // rax
    let v21: i64;  // r12
    let v22: i64;  // rbx
    let v23: i64;  // rsi
    let v24: i64;  // rsi

    v8 = uu_sync::uu_app(a1, a2);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1, v11, v12);
    match v4 {
        Err(_) => {
            v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            return v13;
        },
        Ok(_) => {
            v5 = struct56 {
                field_0: v14
                field_8: v15
                field_16: *((&v4 as &char + 16) as &i128)
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058);
            v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058, &v8);
            if !v4 || (v8 = struct64 {
    field_0: v16
    field_16: *((&v4 as &char + 16) as &i128)
    field_32: *((&v4 as &char + 32) as &i128)
    field_48: *((&v4 as &char + 48) as &i128)
}, v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8, v17), v8 = *((&v7 as &char + 8) as &i128), v0 == 0x8000000000000000) {
                v0 = 0;
                v1 = 8;
                v2 = 0;
            } else {
                v1 = v8;
                v0 = v7;
            }
            v19 = v2;
            if ((!v19) as u8 as u8 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE, g_50f048) as i8) {
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v8 = v4;
                v13 = alloc::boxed::Box<T>::new(&v8);
                goto LABEL_46068f;
            }
            v3 = _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE;
            v8 = v1;
            v9 = v8 + v19 * 24;
            v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v20 {
                do {
                    v21 = *((v20 + 8) as &i64);
                    v22 = *((v20 + 16) as &i64);
                    if (v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v20) {
                        goto LABEL_46068c;
                    }
                } while ((v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v20));
            }
            v23 = v3;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE, g_50f038) as i8 {
                v8 = v0;
                v13 = uu_sync::syncfs(&v8, v23, v17);
                goto LABEL_460671;
            } else {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, v23, g_50f048) as i8 {
                    v13 = uu_sync::sync();
                    if !v13 {
                        return 0;
                    }
LABEL_46068c:
LABEL_46068f:
                } else {
                    v8 = v0;
                    v13 = uu_sync::fdatasync(&v8, v24, v17);
LABEL_460671:
                    if !v13 {
                        return 0;
                    }
                }
                return v13;
            }
        },
    }
}
