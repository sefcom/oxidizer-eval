fn uu_basenc::parse_cmd_args(a0: &Result<struct49, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x370], Other Possible Types: struct24, struct16
    let v1: i64;  // [sp-0x358], Other Possible Types: struct56
    let v2: i64;  // [sp-0x350]
    let v3: struct24;  // [sp-0x320], Other Possible Types: Result<struct56, struct8>
    let v4: i280;  // [sp-0x2e8], Other Possible Types: struct24, Result<struct34, struct16>, struct712
    let v5: i64;  // [sp-0x2d8]
    let v6: i32;  // [sp-0x2d0]
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i8;  // bpl
    let v14: i64;  // rax
    let v15: i64;  // rcx

    v4 = uu_basenc::uu_app();
    v0 = uucore::Args::collect_lossy(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v4, &v0);
    if v1 == 0x8000000000000000 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(v2);
        v11 = &g_54cd90;
        *((a0 + 16) as &&i64) = &g_54cd90;
        *(a0 as &i64) = 2;
    }
    v1 = struct56 {
        field_0: v8
        field_8: v9
        field_16: *((&v3 as &char + 16) as &i32)
        field_20: *((&v3 as &char + 20) as &i128)
        field_36: *((&v3 as &char + 36) as &i128)
        field_52: *((&v3 as &char + 52) as &i32)
    };
    v0 = struct16 {
        field_0: "base64"
        field_8: &g_54ccb0
    };
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
    if !v10 {
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v4 = v3;
        v6 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v4);
        *((a0 + 16) as &&i64) = &g_54cce8;
    }
    v12 = *((v10 + 16) as &i8);
    v4 = uu_base32::base_common::Config::from(&v1);
    v14 = *((&v4 as &char + 8) as &i64);
    v15 = v5;
    match v4 {
        Ok(_) => {
            return Ok(struct49 {
                field_0: v13
                field_8: v14
                field_16: v15
                field_24: *((&v4 as &char + 24) as &i128)
                field_40: *((&v4 as &char + 40) as &i64)
                field_48: v12
            });
        },
        Err(_) => {
            return Err(struct16 {
                field_0: v14
                field_8: v15
            });
        },
    }
}
