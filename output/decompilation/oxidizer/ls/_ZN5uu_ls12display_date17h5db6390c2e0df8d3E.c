fn uu_ls::display_date(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct16;  // [bp-0xa8]
    let v1: struct32;  // [bp-0x88]
    let v2: struct32;  // [bp-0x78], Other Possible Types: u8
    let v3: Result<(), Error>;  // [bp-0x68], Other Possible Types: struct16
    let v5: void*;  // rcx

    uu_ls::get_time(a1, a2 as u32, v5);
    if !*(&v2 as &i32) {
        return <T as alloc::slice::hack::ConvertVec>::to_vec("???", v5) as u64;
    }
    v1 = v2;
    v3 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v2);
    match v3 {
        Ok(_) => {
            core::option::expect_failed("`DateTime + TimeDelta` overflowed"); /* do not return */
        },
        Err(v0) => {
            v3 = chrono::offset::local::Local::now();
            <chrono::naive::datetime::NaiveDateTime as core::cmp::PartialOrd>::partial_cmp(&v0, &v3);
        },
    }
}
