fn uu_split::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x468], Other Possible Types: struct24
    let v1: i128;  // [bp-0x458]
    let v2: i64;  // [sp-0x448]
    let v3: i128;  // [sp-0x438]
    let v4: i64;  // [sp-0x428]
    let v5: i128;  // [sp-0x418]
    let v6: i64;  // [sp-0x408]
    let v7: i64;  // [sp-0x3f8], Other Possible Types: struct56
    let v8: i64;  // [sp-0x3f0]
    let v9: i192;  // [sp-0x3c0]
    let v10: i192;  // [sp-0x3a8]
    let v11: i384;  // [bp-0x390], Other Possible Types: struct48
    let v15: struct28;  // [sp-0x2e8], Other Possible Types: i384, struct48, struct712
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v19: i64;  // rcx
    let v20: i64;  // rax
    let v23: i64;  // rcx
    let v24: i64;  // rdi
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0

    v15 = uu_split::handle_obsolete(a0, a1);
    v6 = v15.field_16;
    v5 = v15;
    v4 = *((&v15 as &char + 40) as &i64);
    v3 = *((&v15 as &char + 24) as &i128);
    v15 = uu_split::uu_app(v17, v18);
    v0 = struct24 {
        field_0: v5
        field_16: v6
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v15, &v0, v19);
    if v7 == 0x8000000000000000 {
        v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v20;
    }
    v7 = struct56 {
        field_0: v21
        field_8: v22
        field_16: v12
        field_32: v13
        field_48: v14
    };
    v11 = uu_split::Settings::from(&v7, &v3);
    if v11 != 2 {
        memcpy(&v15, &v11, 168);
        v20 = uu_split::split() as i64;
    } else {
        v23 = *((&v11 as &char + 8) as &i64);
        v24 = v23 - 3;
        if v23 - 4 >= 5 {
            v24 = 0;
        }
        if !v24 {
            if v23 == 3 {
                goto LABEL_477894;
            }
LABEL_4779b2:
            v2 = *((&v11 as &char + 40) as &i64);
            v26 = *((&v11 as &char + 8) as &i128);
            v1 = *((&v11 as &char + 24) as &i128);
            v0 = v26;
            v10 = format!("{:?}", &v0);
            v15 = struct28 {
                field_0: v10
                field_16: *((&v10 as &char + 16) as &i64)
                field_24: 1
            };
            v20 = alloc::boxed::Box<T>::new(&v15);
        } else {
            if !(v24 == 1) || !(*((&v11 as &char + 16) as &i32) == 1) {
                goto LABEL_4779b2;
            }
LABEL_477894:
            v2 = *((&v11 as &char + 40) as &i64);
            v25 = *((&v11 as &char + 8) as &i128);
            v1 = *((&v11 as &char + 24) as &i128);
            v0 = v25;
            v9 = format!("{:?}", &v0);
            v15 = struct28 {
                field_0: v9
                field_16: *((&v9 as &char + 16) as &i64)
                field_24: 1
            };
            v20 = alloc::boxed::Box<T>::new(&v15);
        }
    }
    return v20;
}
