
  fn uu_pinky::platform::unix::idle_string::NOW::__init::ha2434e73cc1faefd(arg1: *mut i128) -> *mut i128

{
    let mut var_18: i128;
    let result: *mut i128 =
        time::offset_date_time::OffsetDateTime::now_local::ha6216f4dd0bbdcbf(&var_18);
    let var_d: i8;
    
    if var_d == 1
    {
        /* tailcall */
        return time::offset_date_time::OffsetDateTime::now_utc::hdf28e97aa04c8516(arg1);
    }
    
    *arg1 = var_18;
    result
}
