fn uu_ls::display_date() -> u32 {
    let v0: u128;  // [bp-0x98]
    let v1: u128;  // [sp-0x88], Other Possible Types: Option<struct16>
    let v2: u128;  // [sp-0x78], Other Possible Types: Option<struct16>, struct16
    let v4: u64;  // rsi
    let v5: &struct_0;  // rdx
    let v6: &u64;  // rdi
    let v7: u32;  // r12d
    let v9: u32;  // ebp
    let v11: u8;  // al
    let v12: u64;  // rcx

    v1 = uu_ls::get_time(v4, v5);
    match v1 {
        None => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(v6, "???");
            return;
        },
        Some(_) => {
            v0 = v1;
            v2 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v1);
            v7 = v2 as i32;
        },
    }
    match v2 {
        None => {
            core::option::expect_failed(); /* do not return */
        },
        Some(_) => {
            v9 = *((&v2 as &char + 8) as &i32);
            v2 = chrono::offset::local::Local::now(v4, v5);
        },
    }
    if !(v7 < v2 ? 255 : (-0x100 | v7 != v2) & 4294967295 & 4294967295) {
        v11 = (*((&v2 as &char + 4) as &i32) < *((&v2 as &char + 4) as &i32) ? 255 : (-0x100 | *((&v2 as &char + 4) as &i32) != *((&v2 as &char + 4) as &i32)) & 4294967295 & 4294967295);
    }
    v12 = 0x8000000000000000 ^ v5->field_b8;
    if v12 >= 4 {
        v12 = 4;
    }
    goto *((4409360 + vvar_10{reg 32} * 4) as &i32) + 4409360;
}
