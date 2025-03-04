fn uu_head::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x368], Other Possible Types: int
    let v1: i64;  // [sp-0x358]
    let v2: i32;  // [sp-0x350]
    let v3: struct48;  // [sp-0x348], Other Possible Types: char
    let v8: struct56;  // [bp-0x310], Other Possible Types: unsigned long
    let v9: i64;  // [sp-0x308]
    let v10: struct48;  // [sp-0x2d8], Other Possible Types: struct712
    let v12: i64;  // rbx
    let v13: i64;  // rbx
    let v16: i64;  // rbx
    let v17: i64;  // rbx

    v10 = uu_head::uu_app();
    v0 = uu_head::arg_iterate(a0, a1);
    v12 = v0.field_8;
    if v0.field_0 {
        v13 = v12;
        return v13;
    }
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v10, v12, v1);
    if v8 == 0x8000000000000000 {
        v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v13;
    }
    v8 = struct56 {
        field_0: v14
        field_8: v15
        field_16: v5
        field_32: v6
        field_48: *(&v7 as &i64)
    };
    v10 = uu_head::HeadOptions::get_from(&v8);
    if v10.field_0 as i32 == 4 {
        v1 = *((&v10.field_16 as &char + 8) as &i64);
        v0 = *((&v10.field_0 as &char + 8) as &i128);
        v2 = 1;
        v13 = v17;
        return v13;
    }
    v3 = v10;
    v13 = v16;
    return v13;
}
