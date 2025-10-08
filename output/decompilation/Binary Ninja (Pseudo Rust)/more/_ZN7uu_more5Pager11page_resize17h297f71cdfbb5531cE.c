
  fn uu_more::Pager::page_resize::h297f71cdfbb5531c(arg1: *mut c_void, _: i64, arg3: i16, arg4: i16)

{
    if arg4 != 0
    {
        return;
    }
    
    let temp0: i16 = arg3;
    arg3 -= 1;
    
    if temp0 < 1
    {
        arg3 = 0;
    }
    
    *arg1.byte_offset(0x58) = arg3;
}
