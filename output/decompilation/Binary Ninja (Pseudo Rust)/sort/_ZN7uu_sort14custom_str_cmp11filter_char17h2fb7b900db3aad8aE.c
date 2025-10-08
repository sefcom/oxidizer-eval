
  fn uu_sort::custom_str_cmp::filter_char::h2fb7b900db3aad8a(arg1: i32, arg2: i8, arg3: i32) -> i64

{
    let mut result: i32;
    
    if arg3 == 0 || arg1 - 0x30 < 0xa || (arg1 & 0x1fffdf) - 0x41 < 0x1a
    {
        'label_4c3574:
        result = 1;
        
        if arg2 != 0
        {
            result = arg1 >= 0x20;
            let mut rcx: u64;
            rcx = arg1 != 0x7f;
            rcx &= result;
            result = arg1 < 0x80;
            result &= rcx;
        }
    }
    else
    {
        result = 0;
        
        if arg1 <= 0x20 && TEST_BITQ(0x100003600, arg1)
        {
            goto 'label_4c3574;
        }
    }
    
    result
}
