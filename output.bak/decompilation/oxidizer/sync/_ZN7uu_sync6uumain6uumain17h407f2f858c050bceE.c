fn uu_sync::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: i128;  // [sp-0x3a0]
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: i512;  // [sp-0x388], Other Possible Types: struct64, Result<struct56, struct8>, struct24
    let v5: struct56;  // [sp-0x348]
    let v6: i64;  // [sp-0x340]
    let v7: struct24;  // [sp-0x310], Other Possible Types: i192
    let v8: i128;  // [sp-0x2f8], Other Possible Types: struct24, struct28, struct56, struct64, struct712
    let v9: i64;  // [sp-0x2f0]
    let v11: i64;  // rax
    let v16: i64;  // rcx
    let v17: struct8;  // rax
    let v18: i64;  // r12
    let v19: i64;  // rbx

    v8 = uu_sync::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1);
    match v4 {
        Err(_) => {
            v11 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            return v11;
        },
        Ok(_) => {
            v5 = struct56 {
                field_0: v12
                field_8: v13
                field_16: *((&v4 as &char + 16) as &i128)
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058);
            v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E, g_50f058, &v8);
            if !v4 || (v8 = struct64 {
    field_0: v14
    field_16: *((&v4 as &char + 16) as &i128)
    field_32: *((&v4 as &char + 32) as &i128)
    field_48: *((&v4 as &char + 48) as &i128)
}, v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8), v8 = *((&v7 as &char + 8) as &i128), v0 == 0x8000000000000000) {
                v0 = 0;
                v1 = 8;
                v2 = 0;
            } else {
                v1 = v8;
                v0 = v7;
            }
            v16 = v2;
            if ((!v16) as u8 as u8 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE, g_50f048) as i8) {
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v8 = struct28 {
                    field_0: v4
                    field_16: *((&v4 as &char + 16) as &i64)
                    field_24: 1
                };
                v11 = alloc::boxed::Box<T>::new(&v8);
                goto LABEL_46068f;
            }
            v3 = _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE;
            v8 = v1;
            v9 = v8 + v16 * 24;
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v17 {
                do {
                    v18 = *((v17 + 8) as &i64);
                    v19 = *((v17 + 16) as &i64);
                    if (v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v17) {
                        goto LABEL_46068c;
                    }
                } while ((v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v17));
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE, g_50f038) as i8 {
                *(&v8.field_0 as &struct24) = struct24 {
                    field_0: v0
                    field_16: v2
                };
                v11 = uu_sync::syncfs(&v8);
                goto LABEL_460671;
            } else {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, v3, g_50f048) as i8 {
                    v11 = uu_sync::sync();
                    if !v11 {
                        return 0;
                    }
LABEL_46068c:
LABEL_46068f:
                } else {
                    *(&v8.field_0 as &struct24) = struct24 {
                        field_0: v0
                        field_16: v2
                    };
                    v11 = uu_sync::fdatasync(&v8);
LABEL_460671:
                    if !v11 {
                        return 0;
                    }
                }
                return v11;
            }
        },
    }
}
