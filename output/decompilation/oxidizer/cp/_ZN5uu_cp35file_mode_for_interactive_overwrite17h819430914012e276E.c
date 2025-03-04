fn uu_cp::file_mode_for_interactive_overwrite(a0: &Option<struct48>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x16c]
    let v1: String;  // [sp-0x168]
    let v2: i64;  // [sp-0x158]
    let v3: iNone;  // [bp-0x148], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0x138]
    let v5: struct24;  // [sp-0x130], Other Possible Types: unsigned long
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i8;  // [sp-0x118]
    let v9: struct24;  // [sp-0x108]
    let v10: i64;  // [sp-0xe0]
    let v11: String;  // [sp-0xd8]
    let v12: Result<struct176, struct8>;  // [sp-0xc0]
    let v14: i64;  // rbp
    let v15: i64;  // rax

    v12 = std::fs::metadata(a1, a2);
    if v12 as i32 != 2 {
        v14 = *((&v12 as &char + 56) as &i32);
        if v14 as u8 >= 0 {
            v0 = v14 as u32 & 3967;
            *(&v3 as &i64) = 2;
            v4 = 0;
            v5 = 4;
            v6 = 0;
            v7 = 34359738400;
            v8 = 3;
            v10 = 1;
            v11 = format!("{:?}", &v0);
            v1 = v11;
            v9 = uucore::features::fs::display_permissions_unix(v14 & 4294967295, 0);
            v4 = v2;
            *(&v3 as &i128) = *(&v1.ptr as &i128);
            v5 = v9;
            v15 = v5;
            return Some(struct48 {
                field_0: v16
                field_16: v4
                field_24: v15
                field_32: v6
                field_40: v7
            });
        }
        v15 = 0x8000000000000000;
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
