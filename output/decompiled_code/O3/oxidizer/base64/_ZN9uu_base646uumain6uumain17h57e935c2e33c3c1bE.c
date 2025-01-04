fn uu_base64::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct16;  // [bp-0x88]
    let v1: i272;  // [sp-0x78], Other Possible Types: Result<struct34, struct16>, struct24
    let v3: struct48;  // [sp-0x40]
    let v5: i64;  // rbx
    let v8: i64;  // rdx

    v1 = uu_base32::base_common::parse_base_cmd_args(a0, a1, &g_40cac7, 375, "{} [OPTION]... [FILE]");
    v5 = *((&v1 as &char + 8) as &i64);
    match v1 {
        Err(_) => {
            return v5;
        },
        Ok(_) => {
            v3 = struct48 {
                field_0: v6
                field_8: v5
                field_16: v7
                field_24: v1
                field_40: v2
            };
            v1 = uu_base32::base_common::get_input(&v3, v8);
            v5 = *((&v1 as &char + 8) as &i64);
            if v1 {
                return v5;
            }
            v0 = struct16 {
                field_0: v5
                field_8: v7
            };
            v1 = *(&v3.field_0 as &i384);
            v5 = uu_base32::base_common::handle_input(&v0, 0, &v1);
            return v5;
        },
    }
}
