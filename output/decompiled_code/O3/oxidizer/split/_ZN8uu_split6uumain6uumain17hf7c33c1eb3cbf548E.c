fn uu_split::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x468]
    let v1: i128;  // [bp-0x458]
    let v2: i64;  // [sp-0x448]
    let v3: i128;  // [sp-0x438]
    let v4: i64;  // [sp-0x428]
    let v5: i128;  // [sp-0x418]
    let v6: i64;  // [sp-0x408]
    let v7: struct56;  // [sp-0x3f8]
    let v8: i64;  // [sp-0x3f0]
    let v9: i192;  // [sp-0x3c0]
    let v10: i192;  // [sp-0x3a8]
    let v11: struct48;  // [sp-0x390], Other Possible Types: Result<struct56, struct16>, i384
    let v12: i5696;  // [sp-0x2e8], Other Possible Types: struct712, struct48
    let v14: i64;  // rsi
    let v15: i64;  // rdx
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rdi
    let v22: i128;  // xmm0
    let v23: i128;  // xmm0

    v12 = uu_split::handle_obsolete(a0, a1);
    v6 = v12.field_16;
    v5 = v12;
    v4 = *((&v12 as &char + 40) as &i64);
    v3 = *((&v12 as &char + 24) as &i128);
    v12 = uu_split::uu_app(v14, v15);
    v0 = v5;
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v12, &v0, v16);
    match v11 {
        Err(_) => {
            v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
            return v17;
        },
        Ok(_) => {
            v7 = struct56 {
                field_0: v18
                field_8: v19
                field_16: *((&v11 as &char + 16) as &i128)
                field_32: *((&v11 as &char + 32) as &i128)
                field_48: *((&v11 as &char + 48) as &i64)
            };
            v11 = uu_split::Settings::from(&v7, &v3);
            if v11 != 2 {
                memcpy(&v12, &v11, 168);
                v17 = uu_split::split() as i64;
            } else {
                v20 = *((&v11 as &char + 8) as &i64);
                v21 = v20 - 3;
                if v20 - 4 >= 5 {
                    v21 = 0;
                }
                if !v21 {
                    if v20 as i32 == 3 {
                        goto LABEL_477894;
                    }
LABEL_4779b2:
                    v2 = *((&v11 as &char + 40) as &i64);
                    v23 = *((&v11 as &char + 8) as &i128);
                    v1 = *((&v11 as &char + 24) as &i128);
                    v0 = v23;
                    v10 = format!("{:?}", &v0);
                    v12 = v10;
                    v17 = alloc::boxed::Box<T>::new(&v12);
                } else {
                    if !(v21 == 1) || !(*((&v11 as &char + 16) as &i32) == 1) {
                        goto LABEL_4779b2;
                    }
LABEL_477894:
                    v2 = *((&v11 as &char + 40) as &i64);
                    v22 = *((&v11 as &char + 8) as &i128);
                    v1 = *((&v11 as &char + 24) as &i128);
                    v0 = v22;
                    v9 = format!("{:?}", &v0);
                    v12 = v9;
                    v17 = alloc::boxed::Box<T>::new(&v12);
                }
            }
            return v17;
        },
    }
}
