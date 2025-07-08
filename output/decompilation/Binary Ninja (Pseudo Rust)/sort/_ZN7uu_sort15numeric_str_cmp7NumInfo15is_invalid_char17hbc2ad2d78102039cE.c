
  fn uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(arg1: i32, arg2: *mut i8, arg3: i32) -> i64

{
    let mut result: i64;
    
    if arg3 == 0x110000 || arg3 != arg1
    {
        result = arg1 - 0x3a < 0xfffffff6;
        return result;
    }
    
    result = 1;
    
    if *arg2 != 0
    {
        return result;
    }
    
    *arg2 = 1;
    0
}
