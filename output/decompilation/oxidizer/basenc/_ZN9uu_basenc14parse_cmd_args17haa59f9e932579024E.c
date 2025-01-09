fn uu_basenc::parse_cmd_args(a0: &Result<struct49, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x370], Other Possible Types: struct16, i192
    let v1: i64;  // [sp-0x358], Other Possible Types: struct56
    let v2: i64;  // [sp-0x350]
    let v3: struct24;  // [bp-0x320], Other Possible Types: i8
    let v4: i8;  // [bp-0x318]
    let v9: i5696;  // [sp-0x2e8], Other Possible Types: struct712, Result<struct34, struct16>, struct24
    let v10: i64;  // [sp-0x2d8]
    let v11: i32;  // [sp-0x2d0]
    let v13: i64;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i8;  // bpl
    let v19: i64;  // rax
    let v20: i64;  // rcx

    v9 = uu_basenc::uu_app();
    v0 = uucore::Args::collect_lossy(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v9, &v0);
    v13 = v3;
    v14 = v4;
    if v1 == 0x8000000000000000 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(v2);
        v16 = &g_54cd90;
        *((a0 + 16) as &&i64) = &g_54cd90;
        *(a0 as &i64) = 2;
    }
    v1 = struct56 {
        field_0: v13
        field_8: v14
        field_16: v5
        field_20: v6
        field_36: v7
        field_52: v8
    };
    v0 = struct16 {
        field_0: "base64"
        field_8: &g_54ccb0
    };
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
    if !v15 {
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v9 = v3;
        v11 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v9);
        *((a0 + 16) as &&i64) = &g_54cce8;
    }
    v17 = *((v15 + 16) as &i8);
    v9 = uu_base32::base_common::Config::from(&v1);
    v19 = *((&v9 as &char + 8) as &i64);
    v20 = v10;
    match v9 {
        Ok(_) => {
            return Ok(struct50 {
                field_0: v18
                field_8: v19
                field_16: v20
                field_24: *((&v9 as &char + 24) as &i128)
                field_40: *((&v9 as &char + 40) as &i64)
                field_48: v17
            });
        },
        Err(_) => {
            return Err(struct16 {
                field_0: v19
                field_8: v20
            });
        },
    }
}
