fn uu_uptime::uptime_since() -> u64 {
    let v0: struct12;  // [bp-0xc0], Other Possible Types: struct33
    let v1: u32;  // [bp-0xbc]
    let v2: Option<struct0>;  // [bp-0x80], Other Possible Types: Result<struct16, struct16>, struct60, u8
    let v3: u8;  // [bp-0x78]
    let v4: struct16;  // [bp-0x28]
    let v6: u32;  // eax

    uu_uptime::process_utmpx(&v2, 0);
    v2 = uucore::features::uptime::get_uptime(v2, *(&v3 as &i64));
    match v2 {
        Ok(_) => {
            return v2 as i64;
        },
        Err(_) => {
            v0 = chrono::offset::utc::Utc::now();
            v6 = chrono::naive::date::NaiveDate::num_days_from_ce(v0.field_0 as i32 as u32 as u64) as u32;
            v2 = chrono::offset::TimeZone::timestamp_opt((v6 - 719163) as u64 * 86400 + v1 as u64 - *((&v2 as &char + 8) as &i64));
            v4 = chrono::offset::LocalResult<T>::unwrap(&v2);
            v0 = struct33 {
                field_0: "%Y-%m-%d %H:%M:%S"
                field_16: ""
                field_32: 0
            };
            v2 = chrono::datetime::DateTime<Tz>::format_with_items(&v4, &v0);
            println!("{}", &v2);
            return 0;
        },
    }
}
