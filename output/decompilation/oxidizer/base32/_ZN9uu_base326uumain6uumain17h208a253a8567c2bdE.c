fn uu_base32::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x88]
    let v1: struct48;  // [bp-0x78], Other Possible Types: Result<struct42, struct24>
    let v2: struct16;  // [bp-0x70], Other Possible Types: u64
    let v3: u64;  // [bp-0x50]
    let v4: struct48;  // [bp-0x48]
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: iNone;  // xmm0
    let v9: iNone;  // xmm1

    v1 = uu_base32::base_common::parse_base_cmd_args(a0, a1);
    v6 = v1 as i64;
    v7 = *((&v1 as &char + 16) as &i64);
    if v6 == 2 {
        return v2;
    }
    v4 = struct48 {
        field_0: v6
        field_8: v2
        field_16: v7
        field_24: *((&v1 as &char + 24) as &i128)
        field_40: v3
    };
    v1 = uu_base32::base_common::get_input(&v4);
    match v1 {
        Err(_) => {
            return v2;
        },
        Ok(v0) => {
            v8 = *(&v4.field_0 as &i128);
            v9 = *(&v4.field_16 as &i128);
            v1 = struct48 {
                field_0: v8
                field_16: v9
                field_32: *((&v4.field_24 as &char + 8) as &i128)
            };
            return uu_base32::base_common::handle_input(&v0, &v1);
        },
    }
}
