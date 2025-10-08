
  fn uu_dd::Input::new_fifo::hf14f96568a514b5d(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_2c: i64 = 0x1b6;
    let var_24: i16 = 0;
    *var_2c[4] = 1;
    let mut rax: i8;
    let mut rdx: i32;
    rax = uu_dd::make_linux_iflags::h57fea4a25e7c1d02(arg4.byte_offset(0x40));
    let mut rcx: i32 = 0;
    
    if (rax & 1) != 0
    {
        rcx = rdx;
    }
    
    let mut var_30: i32 = rcx;
    let mut var_40: i32;
    std::fs::OpenOptions::open::h8d324e17fb255e3b(&var_40, &var_30, arg2);
    
    if var_40 != 1
    {
        var_40 = 2;
        let rsi_1: i64 = *arg4.byte_offset(0x80);
        let fd: i32;
        let mut rcx_2: i32;
        
        if rsi_1 == 0
        {
            rcx_2 = 2;
            'label_48fda4:
            arg1[1] = rcx_2;
            *arg1.byte_offset(0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            if (uu_dd::Source::skip::h56a70907a2f0c0f8(&var_40, rsi_1) & 1) == 0
            {
                rcx_2 = var_40;
                goto 'label_48fda4;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            arg1[2] = &data_53f218;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::h0f98b01c459a3648(fd);
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        arg1[2] = &data_53f218;
        *arg1 = 1;
    }
    
    arg1
}
