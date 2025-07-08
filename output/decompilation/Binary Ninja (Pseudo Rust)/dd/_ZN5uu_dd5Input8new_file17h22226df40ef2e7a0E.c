
  fn uu_dd::Input::new_file::h22226df40ef2e7a0(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_48: i64 = 0x1b600000000;
    let mut var_40: i32 = 0;
    let var_3c: i16 = 0;
    var_40 = 1;
    let mut rax: i32;
    let mut rdx: i32;
    rax = uu_dd::make_linux_iflags::hef93cf202b98b41f(arg4.byte_offset(0x40));
    
    if rax == 1
    {
        var_48 = rdx;
    }
    
    let mut var_58: i32;
    std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&var_58, &var_48, arg2);
    let mut var_38: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h24d6e52343c10c0c(&var_38, &var_58);
    let rax_1: i64 = var_38;
    let fd: i32;
    
    if rax_1 == 0
    {
        var_58 = 0;
        let rsi_2: i64 = *arg4.byte_offset(0x80);
        let mut rcx_3: i32;
        
        if rsi_2 == 0
        {
            rcx_3 = 0;
            'label_4d6cfd:
            arg1[1] = rcx_3;
            *arg1.byte_offset(0xc) = fd;
            arg1[2] = arg4;
            *arg1 = 0;
        }
        else
        {
            let mut rax_3: i64;
            let mut rdx_3: i64;
            rax_3 = uu_dd::Source::skip::hb4d238ded1ebd635(&var_58, rsi_2);
            
            if rax_3 == 0
            {
                rcx_3 = var_58;
                goto 'label_4d6cfd;
            }
            
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            arg1[2] = &data_562e90;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(fd);
        }
    }
    else
    {
        arg1[1] = rax_1;
        arg1[2] = fd;
        *arg1 = 1;
    }
    arg1
}
