fn uu_ls::display_date(a0: &struct24, a1: u32, a2: void*) -> u64 {
    let v0: u128;  // [sp-0xa8]
    let v1: Option<struct16>;  // [sp-0x88]
    let v2: Option<struct16>;  // [sp-0x78]
    let v3: struct16;  // [sp-0x68], Other Possible Types: Option<struct16>
    let v5: u64;  // rdx
    let v6: u64;  // rdx

    v2 = uu_ls::get_time(a1, a2);
    match v2 {
        None => {
            return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "???");
        },
        Some(_) => {
            v1 = v2;
            v3 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v2);
        },
    }
    match v3 {
        None => {
            core::option::expect_failed("`DateTime + TimeDelta` overflowed", "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs"); /* do not return */
        },
        Some(_) => {
            v0 = v3;
            v3 = chrono::offset::local::Local::now();
            <chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(&v0, &v3);
        },
    }
    v6 = (v5 < 4 ? 0x8000000000000000 ^ a2->field_b8 : 4);
    goto *((4409104 + vvar_4{reg 32} * 4) as &i32) + 4409104;
}
