fn uu_basenc::parse_cmd_args(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct16;  // [sp-0x370], Other Possible Types: i192, struct24
    let v1: struct56;  // [sp-0x358], Other Possible Types: i64
    let v3: i192;  // [bp-0x320], Other Possible Types: struct24
    let v8: i128;  // [sp-0x2e8], Other Possible Types: Result<struct34, struct16>, struct712
    let v9: i64;  // [sp-0x2d8]
    let v11: i64;  // rcx
    let v14: i64;  // rax
    let v15: i64;  // rax
    let v16: i8;  // bpl
    let v17: i64;  // rdx
    let v18: i64;  // rax
    let v19: i64;  // rcx

    v8 = uu_basenc::uu_app();
    v0 = uucore::Args::collect_lossy(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v8, &v0, v11);
    if v1 == 0x8000000000000000 {
        return struct24 {
            field_0: 2
            field_8:             alloc::boxed::Box<T>::new(v2)
            field_16: &g_54d520
        };
    }
    v1 = struct56 {
        field_0: v12
        field_8: v13
        field_16: v4
        field_20: v5
        field_36: v6
        field_52: v7
    };
    v0 = struct16 {
        field_0: "base64"
        field_8: &g_54d440
    };
    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
    if !v14 {
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v8.16 = (stack_base)[784] as i64;
        v8 = v3;
        v8.24 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v8);
        *((a0 + 16) as &&i64) = &g_54d478;
        goto LABEL_47c2ab;
    } else {
        v16 = *((v14 + 16) as &i8);
        v8 = uu_base32::base_common::Config::from(&v1);
        v17 = v8;
        v18 = *((&v8 as &char + 8) as &i64);
        v19 = v9;
        match v8 {
            Ok(_) => {
                *((a0 + 40) as &i64) = *((&v8 as &char + 40) as &i64);
                *((a0 + 24) as &i128) = *((&v8 as &char + 24) as &i128);
                *(a0 as &i64) = v17;
                *((a0 + 8) as &i64) = v18;
                *((a0 + 16) as &i64) = v19;
                *((a0 + 48) as &i8) = v16;
            },
            Err(_) => {
                *((a0 + 8) as &i64) = v18;
                *((a0 + 16) as &i64) = v19;
LABEL_47c2ab:
                *(a0 as &i64) = 2;
            },
        }
    }
    return v15;
}
