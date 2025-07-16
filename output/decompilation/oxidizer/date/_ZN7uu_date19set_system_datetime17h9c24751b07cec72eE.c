fn uu_date::set_system_datetime(a0: i64) -> long long {
    let v3: u32;  // eax

    v3 = chrono::naive::date::NaiveDate::num_days_from_ce(*(a0 as &i32)) as i32;
    return 0;
}
