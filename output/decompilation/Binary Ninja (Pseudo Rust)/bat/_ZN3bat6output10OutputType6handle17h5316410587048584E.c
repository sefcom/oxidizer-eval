
  fn bat::output::OutputType::handle::h5316410587048584(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let rcx: i64 = *arg2 - 3;
    let mut rax: i64 = 1;
    
    if rcx < 3
    {
        rax = rcx;
    }
    
    let mut rcx_1: *mut *mut c_void;
    
    if rax == 0
    {
        if arg2[3] == 0xffffffff
        {
            _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(arg1, "Could not open stdin for pagersr…", 0x1e);
            return arg1;
        }
        
        arg2 = &arg2[3];
        rcx_1 = &data_ace840;
        rax = 0;
    }
    else if rax != 1
    {
        arg2 = &arg2[1];
        rcx_1 = &data_ace890;
        rax = 0;
    }
    else
    {
        rcx_1 = &data_acd888;
    }
    
    *arg1.byte_offset(8) = rax;
    *arg1.byte_offset(0x10) = arg2;
    *arg1.byte_offset(0x18) = rcx_1;
    *arg1 = 0xd;
    arg1
}
