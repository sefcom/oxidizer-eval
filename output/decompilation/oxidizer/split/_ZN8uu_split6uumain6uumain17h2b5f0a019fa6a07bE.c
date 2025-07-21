fn uu_split::uumain::uumain(a1: i64) -> : struct48 {
    let a0: u64;  // rsi
    let v0: i64;  // [bp-0x478]
    let v1: u64;  // [bp-0x470]
    let v2: struct24;  // [bp-0x468], Other Possible Types: u128
    let v3: u128;  // [bp-0x458]
    let v4: u64;  // [bp-0x448]
    let v5: u128;  // [bp-0x438]
    let v6: u64;  // [bp-0x428]
    let v7: u128;  // [bp-0x418]
    let v8: struct24;  // [bp-0x418]
    let v9: u64;  // [bp-0x408]
    let v10: struct56;  // [bp-0x3f8]
    let v11: u128;  // [bp-0x3c0]
    let v12: u64;  // [bp-0x3b0]
    let v13: u128;  // [bp-0x3a8]
    let v14: u64;  // [bp-0x398]
    let v15: Result<struct56, struct16>;  // [bp-0x390]
    let v16: struct168;  // [bp-0x390], Other Possible Types: struct56
    let v17: u64;  // [bp-0x388]
    let v18: u64;  // [bp-0x368]
    let v19: struct24;  // [bp-0x2e8], Other Possible Types: struct28, u64
    let v20: u64;  // [bp-0x2e0]
    let v21: i64;  // [bp-0x2d8], Other Possible Types: u64
    let v22: i8;  // [bp-0x2d0], Other Possible Types: u64
    let v23: void*;  // [bp-0x2c8]
    let v24: i8;  // [bp-0x2c0]
    let v26: u64;  // rdi
    let v27: u64;  // rcx
    let v28: u64;  // rdx

    uu_split::handle_obsolete(v26, a0, v27);
    v9 = v21;
    v7 = *(&v19 as &i128);
    v6 = *(&v24 as &i64);
    v5 = *(&v22 as &i128);
    uu_split::uu_app(&v19);
    v2 = v8;
    v15 = clap_builder::builder::command::Command::try_get_matches_from(&v19, &v2);
    match v15 {
        Err(_) => {
            uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
            return;
        },
        Ok(v10) => {
            v16 = uu_split::Settings::from(&v10, &v5);
            if v16.field_0 == 2 {
                v28 = (v17 - 4 < 5 ? v17 - 3 : 0);
                if v28 {
                    if v28 != 1 || (&v16)[2].field_0 != 1 {
                        goto LABEL_4761e2;
                    }
LABEL_4760c4:
                    v4 = v18;
                    v3 = *(&(&v16)[3] as &i128);
                    v2 = *(&(&v16)[1] as &i128);
                    v0 = &v2;
                    v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                    v19 = &g_418130;
                    v20 = 1;
                    v23 = 0;
                    v21 = &v0;
                    v22 = 1;
                    v19 = core::option::Option<T>::map_or_else(v28);
                    v19 = struct28 {
                        field_0: v11
                        field_16: v12
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v19);
                } else {
                    if v17 as u32 == 3 {
                        goto LABEL_4760c4;
                    }
LABEL_4761e2:
                    v4 = v18;
                    v3 = *(&(&v16)[3] as &i128);
                    v2 = *(&(&v16)[1] as &i128);
                    v0 = &v2;
                    v1 = <uu_split::SettingsError as core::fmt::Display>::fmt;
                    v19 = &g_418130;
                    v20 = 1;
                    v23 = 0;
                    v21 = &v0;
                    v22 = 1;
                    v19 = core::option::Option<T>::map_or_else(v28);
                    v19 = struct28 {
                        field_0: v13
                        field_16: v14
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v19);
                }
            } else {
                memcpy(&v19, &v16, 168);
                uu_split::split(&v19);
            }
            return;
        },
    }
}
