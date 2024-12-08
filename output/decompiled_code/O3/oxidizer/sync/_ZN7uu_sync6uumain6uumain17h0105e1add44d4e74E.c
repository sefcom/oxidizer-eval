fn uu_sync::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: i128;  // [sp-0x3a0]
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: i512;  // [bp-0x388], Other Possible Types: struct24, struct64
    let v8: struct56;  // [sp-0x348], Other Possible Types: i64
    let v9: i64;  // [sp-0x340]
    let v10: struct24;  // [sp-0x310], Other Possible Types: i192
    let v11: i128;  // [sp-0x2f8], Other Possible Types: struct24, struct64, struct28, struct56, struct712
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v20: struct8;  // rax
    let v21: i64;  // r12
    let v22: i64;  // rbx
    let v23: i64;  // rsi
    let v24: i64;  // rsi

    v11 = uu_sync::uu_app(a1, v13);
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v11, a0, a1);
    if v8 == 0x8000000000000000 {
        v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v14;
    }
    v8 = struct56 {
        field_0: v15
        field_8: v16
        field_16: v5
        field_32: v6
        field_48: v7
    };
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, _ZN7uu_sync9ARG_FILES17h0de6b7efc5b75998E, g_510308);
    v4 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h0de6b7efc5b75998E, g_510308, &v11);
    if !v4 || (v11 = struct64 {
    field_0: v17
    field_16: *((&v4 as &char + 16) as &i128)
    field_32: *((&v4 as &char + 32) as &i128)
    field_48: *((&v4 as &char + 48) as &i128)
}, v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v11, v13), v11 = *((&v10 as &char + 8) as &i128), v0 == 0x8000000000000000) {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    } else {
        v1 = v11;
        v0 = v10;
    }
    if (!v2 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN7uu_sync7options4DATA17ha39d08c333026b84E, g_5102f8) as i8) {
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("--data needs at least one argument");
        v11 = struct28 {
            field_0: v4
            field_16: *((&v4 as &char + 16) as &i64)
            field_24: 1
        };
        v14 = alloc::boxed::Box<T>::new(&v11);
        goto LABEL_4611ef;
    }
    v3 = _ZN7uu_sync7options4DATA17ha39d08c333026b84E;
    v11 = v1;
    v11.field_8 = vvar_473{stack -760} + vvar_246{reg 24} * 24;
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v20 {
        do {
            v21 = *((v20 + 8) as &i64);
            v22 = *((v20 + 16) as &i64);
            if (v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v20) {
                goto LABEL_4611ec;
            }
        } while ((v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v20));
    }
    v23 = v3;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, _ZN7uu_sync7options11FILE_SYSTEM17hc0e7a0e4faeca0dbE, g_5102e8) as i8 {
        *(&v11.field_0 as &struct24) = struct24 {
            field_0: v0
            field_16: v2
        };
        v14 = uu_sync::syncfs(&v11, v23, v13);
        goto LABEL_4611d1;
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, v23, g_5102f8) as i8 {
            v14 = uu_sync::sync();
            if !v14 {
                return 0;
            }
LABEL_4611ec:
LABEL_4611ef:
        } else {
            *(&v11.field_0 as &struct24) = struct24 {
                field_0: v0
                field_16: v2
            };
            v14 = uu_sync::fdatasync(&v11, v24, v13);
LABEL_4611d1:
            if !v14 {
                return 0;
            }
        }
        return v14;
    }
}
