fn uu_touch::datetime_to_filetime(a0: i64) -> long long {
    let v1: u32;  // eax

    v1 = chrono::naive::date::NaiveDate::num_days_from_ce(*(a0 as &i32)) as i32;
    return (v1 - 719163) * 86400 + *((a0 + 4) as &i32);
}
