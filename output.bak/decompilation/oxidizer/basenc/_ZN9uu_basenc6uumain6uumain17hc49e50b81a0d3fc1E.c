fn uu_basenc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct16;  // [bp-0x98]
    let v1: i400;  // [sp-0x88], Other Possible Types: Result<struct49, struct16>, struct24, struct48
    let v2: struct48;  // [sp-0x48]
    let v4: i64;  // rbx
    let v5: i32;  // ebp

    v1 = uu_basenc::parse_cmd_args(a0, a1);
    v4 = *((&v1 as &char + 8) as &i64);
    match v1 {
        Err(_) => {
            return v4;
        },
        Ok(_) => {
            v5 = *((&v1 as &char + 48) as &i8) as u8 as u32;
            v2 = struct48 {
                field_0: v6
                field_8: v4
                field_16: v7
                field_24: *((&v1 as &char + 24) as &i128)
                field_40: *((&v1 as &char + 40) as &i64)
            };
            v1 = uu_base32::base_common::get_input(&v2);
            v4 = *((&v1 as &char + 8) as &i64);
            if v1 {
                return v4;
            }
            v0 = struct16 {
                field_0: v4
                field_8: v7
            };
            *(&v1.field_0 as &struct48) = struct48 {
                field_0: *(&v2.field_0 as &i128)
                field_16: *(&v2.field_16 as &i128)
                field_32: *((&v2.field_24 as &char + 8) as &i128)
            };
            v4 = uu_base32::base_common::handle_input(&v0, v5 as u32 as u64, &v1);
            return v4;
        },
    }
}
