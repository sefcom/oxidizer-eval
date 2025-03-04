fn uu_join::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x570]
    let v1: i64;  // [sp-0x568]
    let v2: i64;  // [sp-0x560]
    let v3: iNone;  // [sp-0x558]
    let v4: iNone;  // [sp-0x548]
    let v5: iNone;  // [sp-0x538]
    let v6: iNone;  // [sp-0x528]
    let v7: i64;  // [sp-0x518]
    let v8: struct56;  // [sp-0x4e8], Other Possible Types: unsigned long
    let v9: i64;  // [sp-0x4e0]
    let v10: Result<struct40, struct8>;  // [sp-0x450], Other Possible Types: struct96, struct712, struct24
    let v11: i64;  // [sp-0x440]
    let v12: i32;  // [sp-0x438]
    let v13: struct24;  // [bp-0x170], Other Possible Types: char
    let v21: i64;  // rbx
    let v23: i64;  // rbx
    let v24: i64;  // rbx
    let v25: i64;  // rdi
    let v26: i64;  // r15
    let v27: i64;  // rax
    let v28: i64;  // rbx

    v10 = uu_join::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v13, &v10, a0, a1);
    if v8 == 0x8000000000000000 {
        v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v21;
    }
    v8 = struct56 {
        field_0: v19
        field_8: v20
        field_16: *(&v15 as &i128)
        field_32: *(&v16 as &i128)
        field_48: *(&v17 as &i64)
    };
    v10 = uu_join::parse_settings(&v8);
    v23 = *((&v10.field_0 as &char + 8) as &i64);
    v21 = v23;
    if v0 == 0x8000000000000000 {
        return v21;
    }
    v7 = *(&v10.field_88 as &i64);
    v6 = *((&v10.field_64 as &char + 8) as &i128);
    v5 = *((&v10.field_48 as &char + 8) as &i128);
    v4 = *((&v10.field_32 as &char + 8) as &i128);
    v3 = *((&v10.field_16 as &char + 8) as &i128);
    v0 = v10.field_0 as i64;
    v1 = v23;
    v2 = v11;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "file1");
    v24 = clap_builder::parser::error::MatchesError::unwrap("file1", &v10);
    if !v24 {
        v25 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs";
    } else {
        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v8, "file2");
        v26 = clap_builder::parser::error::MatchesError::unwrap("file2", &v10);
        if !v26 {
            v25 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/join/src/join.rs";
        } else {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v24 + 8) as &i64), *((v24 + 16) as &i64), "-") as i8 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v26 + 8) as &i64), *((v26 + 16) as &i64), "-") as i8 {
                v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v10 = v13;
                v12 = 1;
                v21 = v28;
                return v21;
            }
            v27 = (&v4)[8] as i64 ^ 0x8000000000000000;
            if 4 <= v27 {
                v27 = 1;
            }
            goto *((4240936 + vvar_38{reg 16} * 4) as &i32) + 4240936;
        }
    }
    core::option::unwrap_failed(v25); /* do not return */
}
