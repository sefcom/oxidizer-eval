fn uu_split::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: iNone;  // [sp-0x468]
    let v1: iNone;  // [bp-0x458]
    let v2: i64;  // [sp-0x448]
    let v3: iNone;  // [sp-0x438]
    let v4: i64;  // [sp-0x428]
    let v5: iNone;  // [sp-0x418]
    let v6: i64;  // [sp-0x408]
    let v7: struct56;  // [sp-0x3f8], Other Possible Types: unsigned long
    let v8: String;  // [sp-0x3c0]
    let v9: String;  // [sp-0x3a8]
    let v10: i8;  // [sp-0x390], Other Possible Types: Result<struct40, struct40>
    let v15: String;  // [sp-0x2e8], Other Possible Types: struct48, struct712
    let v16: i64;  // [sp-0x2d8]
    let v17: i32;  // [bp-0x2d0]
    let v21: i64;  // rcx
    let v22: i64;  // rdx
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm0
    let v25: i64;  // rbx

    v15 = uu_split::handle_obsolete(a0, a1);
    v6 = v16;
    v5 = v15.field_0;
    v4 = v15.field_40;
    v3 = v15.field_24;
    v15 = uu_split::uu_app();
    v0 = v5 as i192;
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v15, &v0);
    if v7 == 0x8000000000000000 {
        return v25;
    }
    v7 = struct56 {
        field_0: v19
        field_8: v20
        field_16: *(&v12 as &i128)
        field_32: *(&v13 as &i128)
        field_48: *(&v14 as &i64)
    };
    v10 = uu_split::Settings::from(&v7, &v3);
    if v10 as i64 != 2 {
        memcpy(&v15, &v10, 168);
        return v25;
    }
    v21 = *((&v10 as &char + 8) as &i64);
    v22 = (v21 - 4 < 5 ? v21 - 3 : 0);
    if !v22 {
        if !(v21 as u32 == 3) {
            goto LABEL_4761e2;
        }
    } else {
        if !(v22 == 1) || !(*((&v10 as &char + 16) as &i32) == 1) {
LABEL_4761e2:
            v2 = *((&v10 as &char + 40) as &i64);
            v24 = *((&v10 as &char + 8) as &i128);
            *(&v1 as &i128) = *((&v10 as &char + 24) as &i128);
            v0 = v24;
            v9 = format!("{}", &v0);
            *(&v17 as &i32) = 1;
            v15 = v9;
            goto LABEL_476188;
        }
    }
    v2 = *((&v10 as &char + 40) as &i64);
    v23 = *((&v10 as &char + 8) as &i128);
    *(&v1 as &i128) = *((&v10 as &char + 24) as &i128);
    v0 = v23;
    v8 = format!("{}", &v0);
    *(&v17 as &i32) = 1;
    v15 = v8;
LABEL_476188:
    return v25;
}
