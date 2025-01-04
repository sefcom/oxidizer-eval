fn uu_touch::datetime_to_filetime(a0: &u64) -> u64 {
    return (chrono::naive::date::NaiveDate::num_days_from_ce(*(a0 as &i32)) as i32 - 719163) * 86400 + *((a0 as &char + 4) as &i32);
}
