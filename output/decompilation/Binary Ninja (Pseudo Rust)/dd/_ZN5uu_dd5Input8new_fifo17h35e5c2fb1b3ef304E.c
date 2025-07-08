
  fn uu_dd::Input::new_fifo::h35e5c2fb1b3ef304(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_3c: i64 = 0x1b6;
    let var_34: i16 = 0;
    *var_3c[4] = 1;
    let mut rax: i32;
    let mut rdx: i32;
    rax = uu_dd::make_linux_iflags::hef93cf202b98b41f(arg4.byte_offset(0x40));
    
    if rax == 0
    {
        rdx = rax;
    }
    
    let mut var_40: i32 = rdx;
    let mut var_30: i32;
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&var_30, &var_40, arg2);
    
    if var_30 == 0
    {
        let mut var_48: i32 = 2;
        let rsi_1: i64 = *arg4.byte_offset(0x80);
        let fd: i32;
        let mut rcx_1: i32;
        
        if rsi_1 == 0
        {
            rcx_1 = 2;
            'label_4d6e0f:
            arg1[1] = rcx_1;
            *arg1.byte_offset(0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 = uu_dd::Source::skip::hb4d238ded1ebd635(&var_48, rsi_1);
            
            if rax_3 == 0
            {
                rcx_1 = var_48;
                goto 'label_4d6e0f;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            arg1[2] = &data_562e90;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(fd);
        }
    }
    else
    {
        arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        arg1[2] = &data_562e90;
        *arg1 = 1;
    }
    
    arg1
}
