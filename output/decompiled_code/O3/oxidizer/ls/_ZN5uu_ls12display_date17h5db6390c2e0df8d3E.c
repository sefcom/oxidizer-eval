fn uu_ls::display_date() -> u32 {
    let v0: u128;  // [bp-0xa8]
    let v1: u128;  // [bp-0x88]
    let v2: u128;  // [sp-0x78], Other Possible Types: Option<struct16>
    let v3: u128;  // [sp-0x68], Other Possible Types: Option<struct16>, struct16
    let v5: u64;  // rsi
    let v6: &struct_0;  // rdx
    let v7: &u64;  // rdi
    let v8: u64;  // rcx

    v2 = uu_ls::get_time(v5, v6);
    match v2 {
        None => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(v7, "???");
            return;
        },
        Some(_) => {
            v1 = v2;
            v3 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v2);
        },
    }
    match v3 {
        None => {
            core::option::expect_failed(); /* do not return */
        },
        Some(_) => {
            v0 = v3;
            v3 = chrono::offset::local::Local::now(v5, v6);
            <chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(&v0, &v3);
        },
    }
    v8 = 0x8000000000000000 ^ v6->field_b8;
    if v8 >= 4 {
        v8 = 4;
    }
    goto *((4409104 + vvar_1{reg 32} * 4) as &i32) + 4409104;
}
