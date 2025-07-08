
  fn uu_touch::datetime_to_filetime::h06ea8034382622db(arg1: *mut i32) -> i64

{
    let rax: i32 = chrono::naive::date::NaiveDate::num_days_from_ce::h3a5ee0596b8da218(*arg1);
    arg1[2];
    (rax - 0xaf93b) * 0x15180 + arg1[1]
}
