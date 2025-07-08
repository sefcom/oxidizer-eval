
  fn uu_more::Pager::page_resize::ha0e74b43be507582(arg1: *mut c_void, arg2: i16, arg3: i16)

{
    if arg3 != 1
    {
        let temp0_1: i16 = arg2;
        arg2 -= 1;
        
        if temp0_1 < 1
        {
            arg2 = 0;
        }
        
        *arg1.byte_offset(0x40) = arg2;
    }
}
