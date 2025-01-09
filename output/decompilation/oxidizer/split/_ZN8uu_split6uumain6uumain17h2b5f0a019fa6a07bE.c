fn uu_split::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x478]
    let v1: i64;  // [sp-0x470]
    let v2: i192;  // [sp-0x468]
    let v3: i128;  // [bp-0x458]
    let v4: i64;  // [sp-0x448]
    let v5: i128;  // [sp-0x438]
    let v6: i64;  // [sp-0x428]
    let v7: i128;  // [sp-0x418]
    let v8: i64;  // [sp-0x408]
    let v9: struct56;  // [sp-0x3f8], Other Possible Types: i64
    let v10: i64;  // [sp-0x3f0]
    let v11: i8;  // [bp-0x3c0]
    let v12: i8;  // [bp-0x3a8]
    let v13: i8;  // [bp-0x390], Other Possible Types: Result<struct40, struct40>
    let v18: i224;  // [sp-0x2e8], Other Possible Types: struct28, struct712, struct48
    let v19: i64;  // [sp-0x2d8]
    let v20: i64;  // [bp-0x2d0]
    let v21: i64;  // [sp-0x2c8]
    let v25: i64;  // rax
    let v26: i64;  // rcx
    let v27: i64;  // rdi
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0

    v18 = uu_split::handle_obsolete(a0, a1);
    v8 = v19;
    v7 = v18;
    v6 = *((&v18 as &char + 40) as &i64);
    v5 = *((&v18 as &char + 24) as &i128);
    v18 = uu_split::uu_app();
    v2 = v7;
    clap_builder::builder::command::Command::try_get_matches_from(&v13, &v18, &v2);
    if v9 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v25;
    }
    v9 = struct56 {
        field_0: v23
        field_8: v24
        field_16: v15
        field_32: v16
        field_48: v17
    };
    v13 = uu_split::Settings::from(&v9, &v5);
    if v13 != 2 {
        memcpy(&v18, &v13, 168);
        uu_split::split(&v18);
        return v25;
    }
    v26 = *((&v13 as &char + 8) as &i64);
    v27 = v26 - 3;
    if v26 - 4 >= 5 {
        v27 = 0;
    }
    if !v27 {
        if !(v26 == 3) {
            goto LABEL_4761e2;
        }
    } else {
        if !(v27 == 1) || !(*((&v13 as &char + 16) as &i32) == 1) {
LABEL_4761e2:
            v4 = *((&v13 as &char + 40) as &i64);
            v29 = *((&v13 as &char + 8) as &i128);
            v3 = *((&v13 as &char + 24) as &i128);
            v2 = v29;
            v0 = &v2;
            v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
            v18 = struct28 {
                field_0: &g_418130
                field_16: &v0
                field_24: <UNKNOWN>
            };
            v21 = 0;
            v20 = 1;
            core::option::Option<T>::map_or_else();
            v18 = v12;
            alloc::boxed::Box<T>::new(&v18);
            goto LABEL_476188;
        }
    }
    v4 = *((&v13 as &char + 40) as &i64);
    v28 = *((&v13 as &char + 8) as &i128);
    v3 = *((&v13 as &char + 24) as &i128);
    v2 = v28;
    v0 = &v2;
    v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
    v18 = struct28 {
        field_0: &g_418130
        field_16: &v0
        field_24: <UNKNOWN>
    };
    v21 = 0;
    v20 = 1;
    core::option::Option<T>::map_or_else();
    v18 = v11;
    alloc::boxed::Box<T>::new(&v18);
LABEL_476188:
    return v25;
}
