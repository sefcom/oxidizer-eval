fn uu_sync::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: i128;  // [sp-0x3a0]
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: struct64;  // [sp-0x388], Other Possible Types: i512, struct24, Result<struct56, struct16>
    let v5: struct56;  // [sp-0x348]
    let v6: i64;  // [sp-0x340]
    let v7: struct24;  // [sp-0x310], Other Possible Types: i192
    let v8: i192;  // [sp-0x2f8], Other Possible Types: struct64, struct712, struct56
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v17: struct8;  // rax
    let v18: i64;  // r12
    let v19: i64;  // rbx
    let v20: i64;  // rsi
    let v21: i64;  // rsi

    v8 = uu_sync::uu_app(a1, v10);
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
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v5, _ZN7uu_sync9ARG_FILES17h0de6b7efc5b75998E, g_510308);
            v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h0de6b7efc5b75998E, g_510308, &v8);
            if !v4 || (v8 = struct64 {
    field_0: v14
    field_16: *((&v4 as &char + 16) as &i128)
    field_32: *((&v4 as &char + 32) as &i128)
    field_48: *((&v4 as &char + 48) as &i128)
}, v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v8, v10), v8 = *((&v7 as &char + 8) as &i128), v0 == 0x8000000000000000) {
                v0 = 0;
                v1 = 8;
                v2 = 0;
            } else {
                v1 = v8;
                v0 = v7;
            }
            if ((!v2) as u8 as u8 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN7uu_sync7options4DATA17ha39d08c333026b84E, g_5102f8) as i8) {
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("--data needs at least one argument");
                v8 = v4;
                v11 = alloc::boxed::Box<T>::new(&v8);
                goto LABEL_4611ef;
            }
            v3 = _ZN7uu_sync7options4DATA17ha39d08c333026b84E;
            v8 = v1;
            v8.field_8 = vvar_473{stack -760} + vvar_246{reg 24} * 24;
            v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v17 {
                do {
                    v18 = *((v17 + 8) as &i64);
                    v19 = *((v17 + 16) as &i64);
                    if (v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v17) {
                        goto LABEL_4611ec;
                    }
                } while ((v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v17));
            }
            v20 = v3;
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, _ZN7uu_sync7options11FILE_SYSTEM17hc0e7a0e4faeca0dbE, g_5102e8) as i8 {
                v8 = v0;
                v11 = uu_sync::syncfs(&v8, v20, v10);
                goto LABEL_4611d1;
            } else {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v5, v20, g_5102f8) as i8 {
                    v11 = uu_sync::sync();
                    if !v11 {
                        return 0;
                    }
LABEL_4611ec:
LABEL_4611ef:
                } else {
                    v8 = v0;
                    v11 = uu_sync::fdatasync(&v8, v21, v10);
LABEL_4611d1:
                    if !v11 {
                        return 0;
                    }
                }
                return v11;
            }
        },
    }
}
