fn uu_basenc::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x98]
    let v1: struct48;  // [bp-0x88], Other Possible Types: Result<struct16, struct16>
    let v2: struct16;  // [bp-0x80], Other Possible Types: u64
    let v3: u64;  // [bp-0x60]
    let v4: struct48;  // [bp-0x50]
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: u32;  // ebp
    let v9: iNone;  // xmm0
    let v10: iNone;  // xmm1
    let v11: u64;  // r14

    v1 = uu_basenc::parse_cmd_args(a0, a1);
    v6 = v1 as i64;
    v7 = *((&v1 as &char + 16) as &i64);
    if v6 == 2 {
        return v2;
    }
    v8 = *((&v1 as &char + 48) as &i8);
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
            v9 = *(&v4.field_0 as &i128);
            v10 = *(&v4.field_16 as &i128);
            v1 = struct48 {
                field_0: v9
                field_16: v10
                field_32: *((&v4.field_24 as &char + 8) as &i128)
            };
            v11 = uu_base32::base_common::handle_input(&v0, v8 as u64, &v1);
            return v11;
        },
    }
}
