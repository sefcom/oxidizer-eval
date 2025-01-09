fn uu_split::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x478]
    let v1: i64;  // [sp-0x470]
    let v2: i128;  // [bp-0x468], Other Possible Types: struct24
    let v3: i128;  // [bp-0x458]
    let v4: i64;  // [sp-0x448]
    let v5: i128;  // [sp-0x438]
    let v6: i64;  // [sp-0x428]
    let v7: i128;  // [sp-0x418]
    let v8: i64;  // [sp-0x408]
    let v9: struct56;  // [sp-0x3f8]
    let v10: i64;  // [sp-0x3f0]
    let v15: struct48;  // [sp-0x390], Other Possible Types: Result<struct56, struct8>, i384
    let v16: i384;  // [sp-0x2e8], Other Possible Types: struct28, struct712, struct48
    let v17: i64;  // [sp-0x2e0]
    let v18: i64;  // [sp-0x2d8]
    let v19: i64;  // [bp-0x2d0]
    let v20: i64;  // [sp-0x2c8]
    let v22: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rdi
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0

    v16 = uu_split::handle_obsolete(a0, a1);
    v8 = v18;
    v7 = v16;
    v6 = *((&v16 as &char + 40) as &i64);
    v5 = *((&v16 as &char + 24) as &i128);
    v16 = uu_split::uu_app();
    v2 = struct24 {
        field_0: v7
        field_16: v8
    };
    v15 = clap_builder::builder::command::Command::try_get_matches_from(&v16, &v2);
    match v15 {
        Err(_) => {
            v22 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
            return v22;
        },
        Ok(_) => {
            v9 = struct56 {
                field_0: v23
                field_8: v24
                field_16: *((&v15 as &char + 16) as &i128)
                field_32: *((&v15 as &char + 32) as &i128)
                field_48: *((&v15 as &char + 48) as &i64)
            };
            v15 = uu_split::Settings::from(&v9, &v5);
            if v15 != 2 {
                memcpy(&v16, &v15, 168);
                v22 = uu_split::split(&v16);
            } else {
                v25 = *((&v15 as &char + 8) as &i64);
                v26 = v25 - 3;
                if v25 - 4 >= 5 {
                    v26 = 0;
                }
                if !v26 {
                    if v25 as i32 == 3 {
                        goto LABEL_4760c4;
                    }
LABEL_4761e2:
                    v4 = *((&v15 as &char + 40) as &i64);
                    v28 = *((&v15 as &char + 8) as &i128);
                    v3 = *((&v15 as &char + 24) as &i128);
                    v2 = v28;
                    v0 = &v2;
                    v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                    v16 = &g_418130;
                    v17 = 1;
                    v20 = 0;
                    v18 = &v0;
                    v19 = 1;
                    core::option::Option<T>::map_or_else();
                    v16 = struct28 {
                        field_0: v13
                        field_16: v14
                        field_24: 1
                    };
                    v22 = alloc::boxed::Box<T>::new(&v16);
                } else {
                    if !(v26 == 1) || !(*((&v15 as &char + 16) as &i32) == 1) {
                        goto LABEL_4761e2;
                    }
LABEL_4760c4:
                    v4 = *((&v15 as &char + 40) as &i64);
                    v27 = *((&v15 as &char + 8) as &i128);
                    v3 = *((&v15 as &char + 24) as &i128);
                    v2 = v27;
                    v0 = &v2;
                    v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                    v16 = &g_418130;
                    v17 = 1;
                    v20 = 0;
                    v18 = &v0;
                    v19 = 1;
                    core::option::Option<T>::map_or_else();
                    v16 = struct28 {
                        field_0: v11
                        field_16: v12
                        field_24: 1
                    };
                    v22 = alloc::boxed::Box<T>::new(&v16);
                }
            }
            return v22;
        },
    }
}
