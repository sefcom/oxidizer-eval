fn uu_basenc::uumain::uumain(a0: u64, a1: u64, a2: u32, a3: u64) -> u64 {
    let v0: struct16;  // [bp-0x98]
    let v1: i192;  // [sp-0x88], Other Possible Types: struct24, Result<struct49, struct24>
    let v2: i64;  // [sp-0x48]
    let v3: i64;  // [sp-0x40]
    let v4: i64;  // [sp-0x38]
    let v5: i128;  // [sp-0x30]
    let v6: i64;  // [sp-0x20]
    let v9: i64;  // rbx
    let v11: i32;  // ebp
    let v12: i64;  // rdx

    v1 = uu_basenc::parse_cmd_args(a0, a1, a3);
    v9 = *((&v1 as &char + 8) as &i64);
    match v1 {
        Err(_) => {
            return v9;
        },
        Ok(_) => {
            v6 = *((&v1 as &char + 40) as &i64);
            v5 = *((&v1 as &char + 24) as &i128);
            v11 = *((&v1 as &char + 48) as &i8) as u8 as u32;
            v2 = v1;
            v3 = v9;
            v4 = *((&v1 as &char + 16) as &i64);
            v1 = uu_base32::base_common::get_input(&v2, v12);
            v9 = *((&v1 as &char + 8) as &i64);
            if v1 {
                return v9;
            }
            v0 = struct16 {
                field_0: v9
                field_8: v13
            };
            v1 = v2;
            v9 = uu_base32::base_common::handle_input(&v0, v11 as u32 as u64, &v1);
            return v9;
        },
    }
}
