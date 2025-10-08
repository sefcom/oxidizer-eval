fn uu_split::uumain::uumain(a0: i32, a1: i32) -> u64 {
    let v0: iNone;  // [bp-0x448]
    let v1: iNone;  // [bp-0x438]
    let v2: u64;  // [bp-0x428]
    let v3: struct24;  // [bp-0x418]
    let v4: u64;  // [bp-0x3f8]
    let v5: u64;  // [bp-0x3f0]
    let v6: iNone;  // [bp-0x3e8]
    let v7: iNone;  // [bp-0x3d8]
    let v8: u64;  // [bp-0x3c8]
    let v9: alloc::string::String;  // [bp-0x3c0]
    let v10: u64;  // [bp-0x3b0]
    let v11: alloc::string::String;  // [bp-0x3a8]
    let v12: u64;  // [bp-0x398]
    let v13: struct168;  // [bp-0x390], Other Possible Types: u64
    let v14: struct16;  // [bp-0x390]
    let v15: u64;  // [bp-0x388]
    let v16: i8;  // [bp-0x380]
    let v17: i8;  // [bp-0x370]
    let v18: u64;  // [bp-0x368]
    let v19: i8;  // [bp-0x360]
    let v20: struct48;  // [bp-0x2e8], Other Possible Types: struct28
    let v21: struct24;  // [bp-0x2e8]
    let v24: core::fmt::rt::Argument;  // r15
    let v25: void*;  // rdx
    let v26: u64;  // rdx

    v20 = uu_split::handle_obsolete(a0, a1);
    v3 = v21;
    uu_split::uu_app(&v20);
    v14 = clap_builder::builder::command::Command::try_get_matches_from(&v20, &v3);
    if (((0 ^ v14.field_0) & (0 ^ -(v13))) >> 63) as char {
        v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    } else {
        v8 = *(&v19 as &i64);
        v7 = *(&v17 as &i128);
        v6 = *(&v16 as &i128);
        v4 = v14.field_0;
        v5 = v15;
        v13 = uu_split::Settings::from(&v4, v25);
        if v13.field_0 == 2 {
            v26 = (v15 - 4 < 5 ? v15 - 3 : 0);
            if v26 {
                if v26 != 1 || (&v13)[2].field_0 != 1 {
                    goto LABEL_461090;
                }
LABEL_460f75:
                v2 = v18;
                v1 = *(&(&v13)[3] as &i128);
                v0 = *(&(&v13)[1] as &i128);
                v9 = format!("{}", &v0);
                v20 = struct28 {
                    field_0: *(&v9.vec.buf.inner.cap as &i128)
                    field_16: v10
                    field_24: 1
                };
                v24 = alloc::boxed::Box<T>::new(&v20) as u64;
            } else {
                if v15 == 3 {
                    goto LABEL_460f75;
                }
LABEL_461090:
                v2 = v18;
                v1 = *(&(&v13)[3] as &i128);
                v0 = *(&(&v13)[1] as &i128);
                v11 = format!("{}", &v0);
                v20 = struct28 {
                    field_0: *(&v11.vec.buf.inner.cap as &i128)
                    field_16: v12
                    field_24: 1
                };
                v24 = alloc::boxed::Box<T>::new(&v20) as u64;
            }
        } else {
            memcpy(&v20, &v13, 168);
            v24 = uu_split::split(&v20);
        }
    }
    return v24;
}
