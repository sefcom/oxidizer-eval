fn uu_truncate::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x679]
    let v1: u64;  // [bp-0x678]
    let v2: u64;  // [bp-0x670]
    let v3: u128;  // [bp-0x668]
    let v4: u64;  // [bp-0x660]
    let v5: u64;  // [bp-0x658]
    let v6: struct24;  // [bp-0x650], Other Possible Types: u64
    let v7: struct16;  // [bp-0x650]
    let v8: u64;  // [bp-0x648]
    let v9: u64;  // [bp-0x640]
    let v10: i8;  // [bp-0x634]
    let v11: iNone;  // [bp-0x618]
    let v12: struct64;  // [bp-0x608]
    let v13: Result<struct40, struct16>;  // [bp-0x5c8], Other Possible Types: struct712, u64
    let v14: alloc::string::String;  // [bp-0x5c8]
    let v15: Result<struct40, struct16>;  // [bp-0x5c8]
    let v16: alloc::string::String;  // [bp-0x5c8]
    let v17: struct56;  // [bp-0x5c8]
    let v18: u128;  // [bp-0x5c0]
    let v19: u64;  // [bp-0x5b8]
    let v20: u32;  // [bp-0x5b0]
    let v21: struct44;  // [bp-0x2f8], Other Possible Types: struct712
    let v23: u32;  // ecx
    let v24: u8;  // al
    let v25: i8;  // r14b
    let v26: u64;  // rax
    let v27: u64;  // r12
    let v28: i8;  // r15b
    let v29: u64;  // r14
    let v30: core::fmt::Arguments;  // rax
    let v31: u64;  // rbx

    v13 = uu_truncate::uu_app();
    v21 = clap_builder::builder::command::Command::after_help(&v13);
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v21, a0, a1);
    if (((0 ^ v7.field_0) & (0 ^ -(v6))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(uu_truncate::uumain::uumain::{{closure}}(v7.field_8) as i32);
    }
    v23 = v7.field_8;
    v21 = struct44 {
        field_0: v7.field_0
        field_8: v23
        field_12: *(&v7.field_0 as &i128)
        field_28: *(&v10 as &i128)
    };
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v21, _ZN11uu_truncate7options9ARG_FILES17h0386a5ed0f2c208fE.field_0, g_4e4018.field_0);
    v12 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9ARG_FILES17h0386a5ed0f2c208fE.field_0, g_4e4018.field_0, &v13);
    if v12.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v13, &v12);
        v3 = *(&v17.field_8 as &i128);
        v2 = v17.field_0;
        if !v4 {
            goto LABEL_45215c;
        }
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, _ZN11uu_truncate7options9IO_BLOCKS17h060e566275d81ce7E.field_0, g_4e3fd8.field_0);
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, _ZN11uu_truncate7options9NO_CREATE17h6f1c12c51793c0daE.field_0, g_4e3fe8.field_0);
        v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, _ZN11uu_truncate7options9REFERENCE17hba8e36a707a4ae72E.field_0, g_4e3ff8.field_0);
        v26 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options9REFERENCE17hba8e36a707a4ae72E.field_0, g_4e3ff8.field_0, &v13);
        v27 = 0x8000000000000000;
        v0 = v24;
        if v26 {
            v14 = <alloc::string::String as core::clone::Clone>::clone(v26);
            v28 = v25;
            v29 = v14.vec.buf.inner.cap.__0;
            v1 = v14.vec.buf.inner.ptr.pointer.pointer;
            v5 = v19;
        } else {
            v28 = v25;
            v29 = 0x8000000000000000;
        }
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, _ZN11uu_truncate7options4SIZE17h76f346e109a09105E.field_0, g_4e4008.field_0);
        v30 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_truncate7options4SIZE17h76f346e109a09105E.field_0, g_4e4008.field_0, &v15);
        if v30 {
            v16 = <alloc::string::String as core::clone::Clone>::clone(v30);
        }
        v6 = v29;
        v8 = v1;
        v9 = v5;
        v13 = v27;
        *(&v18 as void*) = v11;
        v31 = uu_truncate::truncate(v28, v0, &v6, &v13, v3, v4);
    } else {
LABEL_45215c:
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing file operand");
        v19 = v9;
        v13 = *(&v6.field_0 as &i128);
        v20 = 1;
        v31 = alloc::boxed::Box<T>::new(&v13) as u64;
    }
    return v31;
}
