
  fn uu_sort::custom_str_cmp::filter_char::hb7e01bdcc88eb25f(arg1: i32, arg2: i8, arg3: i32) -> i64

{
    let mut result: i32;
    
    if arg3 == 0 || arg1 - 0x30 < 0xa || (arg1 & 0xffffffdf) - 0x41 < 0x1a
    {
        'label_5706f2:
        result = 1;
        
        if arg2 != 0
        {
            result = arg1 - 0x20 < 0x5f;
        }
    }
    else
    {
        result = 0;
        
        if arg1 <= 0x20 && TEST_BITQ(0x100003600, arg1)
        {
            goto 'label_5706f2;
        }
    }
    
    result
}
