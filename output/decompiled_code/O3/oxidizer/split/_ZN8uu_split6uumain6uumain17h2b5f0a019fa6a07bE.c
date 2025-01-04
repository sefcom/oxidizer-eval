fn uu_split::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [bp-0x468]
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
    let v11: Result<struct56, struct16>;  // [sp-0x390], Other Possible Types: struct48, i384
    let v12: i5696;  // [sp-0x2e8], Other Possible Types: struct48, struct712
    let v13: i64;  // [sp-0x2d8]
    let v15: i64;  // rsi
    let v16: i64;  // rdx
    let v17: i64;  // rcx
    let v18: i64;  // r8
    let v19: i64;  // r9
    let v20: i64;  // rax
    let v23: i64;  // rcx
    let v24: i64;  // rdi
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0

    v12 = uu_split::handle_obsolete(a0, a1);
    v6 = v13;
    v5 = v12;
    v4 = *((&v12 as &char + 40) as &i64);
    v3 = *((&v12 as &char + 24) as &i128);
    v12 = uu_split::uu_app(v15, v16);
    v0 = v5;
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v12, &v0, v17, v18, v19);
    match v11 {
        Err(_) => {
            v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
            return v20;
        },
        Ok(_) => {
            v7 = struct56 {
                field_0: v21
                field_8: v22
                field_16: *((&v11 as &char + 16) as &i128)
                field_32: *((&v11 as &char + 32) as &i128)
                field_48: *((&v11 as &char + 48) as &i64)
            };
            v11 = uu_split::Settings::from(&v7, &v3);
            if v11 != 2 {
                memcpy(&v12, &v11, 168);
                v20 = uu_split::split() as i64;
            } else {
                v23 = *((&v11 as &char + 8) as &i64);
                v24 = v23 - 3;
                if v23 - 4 >= 5 {
                    v24 = 0;
                }
                if !v24 {
                    if v23 as i32 == 3 {
                        goto LABEL_4760c4;
                    }
LABEL_4761e2:
                    v2 = *((&v11 as &char + 40) as &i64);
                    v26 = *((&v11 as &char + 8) as &i128);
                    v1 = *((&v11 as &char + 24) as &i128);
                    v0 = v26;
                    v10 = format!("{:?}", &v0);
                    v12 = v10;
                    v20 = alloc::boxed::Box<T>::new(&v12);
                } else {
                    if !(v24 == 1) || !(*((&v11 as &char + 16) as &i32) == 1) {
                        goto LABEL_4761e2;
                    }
LABEL_4760c4:
                    v2 = *((&v11 as &char + 40) as &i64);
                    v25 = *((&v11 as &char + 8) as &i128);
                    v1 = *((&v11 as &char + 24) as &i128);
                    v0 = v25;
                    v9 = format!("{:?}", &v0);
                    v12 = v9;
                    v20 = alloc::boxed::Box<T>::new(&v12);
                }
            }
            return v20;
        },
    }
}
