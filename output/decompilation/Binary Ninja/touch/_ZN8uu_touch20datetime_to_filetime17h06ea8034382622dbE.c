
  int64_t uu_touch::datetime_to_filetime::h06ea8034382622db(int32_t* arg1)

{
    int32_t rax = chrono::naive::date::NaiveDate::num_days_from_ce::h3a5ee0596b8da218(*arg1);
    arg1[2];
    return (rax - 0xaf93b) * 0x15180 + arg1[1];
}
