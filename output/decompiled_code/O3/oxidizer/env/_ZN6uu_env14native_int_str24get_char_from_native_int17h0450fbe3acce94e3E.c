fn uu_env::native_int_str::get_char_from_native_int(a0: u8) -> u64 {
    let v0: u8;  // [sp-0x21]
    let v1: Enum;  // [sp-0x20], Other Possible Types: u128
    let v2: i8;  // [bp-0x10]
    let v4: u64;  // rax
    let v5: &u64;  // rdx
    let v6: u32;  // ecx
    let v7: u32;  // edi
    let v8: u32;  // esi

    v0 = a0;
    v1 = core::str::converts::from_utf8(&v0, 1);
    if v1 as i64 {
        return 0x110000;
    } else if !v2 {
        core::option::unwrap_failed(); /* do not return */
    } else {
        v5 = *((&v1 as &char + 8) as &i64);
        v4 = *(v5 as &i8);
        if v4 >= 0 {
            return v4;
        }
        v6 = v4 & 31;
        v7 = *((v5 as &char + 1) as &i8) & 63;
        if (v4 & 255) <= 223 {
            v4 = v6 * 64 | v7;
            return v4;
        }
        v8 = *((v5 as &char + 2) as &i8) & 63 | v7 * 64;
        v4 = ((v4 & 255 & 255) < 240 ? *((v5 as &char + 3) as &i8) & 63 | v8 * 64 | (v6 & 7) * 0x40000 : v8 | v6 * 0x1000);
        return v4;
    }
}
