
  fn zoxide::db::stream::StreamOptions::new::ha9455680dd6cde2c(arg1: *mut i64, arg2: i64) -> i64

{
    let mut result: i64 = 0;
    arg1[9] = arg2;
    
    if arg2 >= 0x76a700
    {
        result = arg2 - 0x76a700;
    }
    
    *arg1 = 0;
    arg1[1] = 8;
    *arg1.byte_offset(0x10) = {0};
    arg1[4] = 8;
    arg1[5] = 0;
    arg1[0xb] = 0;
    arg1[0xa] = result;
    arg1[6] = -0x8000000000000000;
    result
}
