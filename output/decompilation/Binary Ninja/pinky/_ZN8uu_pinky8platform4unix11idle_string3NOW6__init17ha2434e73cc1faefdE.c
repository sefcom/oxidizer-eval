
  int128_t* uu_pinky::platform::unix::idle_string::NOW::__init::ha2434e73cc1faefd(int128_t* arg1)

{
    int128_t var_18;
    int128_t* result =
        time::offset_date_time::OffsetDateTime::now_local::ha6216f4dd0bbdcbf(&var_18);
    char var_d;
    
    if (var_d == 1)
        /* tailcall */
        return time::offset_date_time::OffsetDateTime::now_utc::hdf28e97aa04c8516(arg1);
    
    *arg1 = var_18;
    return result;
}
