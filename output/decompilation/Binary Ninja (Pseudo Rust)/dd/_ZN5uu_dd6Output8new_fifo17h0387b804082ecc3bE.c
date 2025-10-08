
  fn uu_dd::Output::new_fifo::h0387b804082ecc3b(arg1: *mut i8, arg2: i64, arg3: i64, arg4: *mut i32) -> *mut i8

{
    let r13: *mut c_void = *arg4.byte_offset(0x88);
    
    if r13 == 0
    {
        goto 'label_490aac;
    }
    
    let mut var_38: i8;
    std::fs::File::open::h6f8eb2428e586d07(&var_38, arg2);
    
    if (var_38 & 1) != 0
    {
        'label_490b30:
        *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        *arg1.byte_offset(0x10) = &data_53f218;
        *arg1 = 4;
    }
    else
    {
        let mut var_48: i8 = 2;
        let var_34: i32;
        
        if (uu_dd::Dest::seek::h5a64bc595251d974(&var_48, r13) & 1) == 0
        {
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_48, var_34);
            'label_490aac:
            
            if *arg4 == 2 || *arg4.byte_offset(8) != 0
            {
                let mut var_44_1: i64 = 0x1b6;
                *var_44_1[5] = 1;
                let var_3c_1: i8 = *arg4.byte_offset(0x92) ^ 1;
                let var_3b_1: i8 = *arg4.byte_offset(0x91);
                *var_44_1[6] = *arg4.byte_offset(0x96);
                let mut rax_7: i8;
                let mut rdx_1: i32;
                rax_7 = uu_dd::make_linux_oflags::h8059fc6e2ea11e72(arg4.byte_offset(0x96));
                let mut rcx: i32 = 0;
                
                if (rax_7 & 1) != 0
                {
                    rcx = rdx_1;
                }
                
                var_48 = rcx;
                std::fs::OpenOptions::open::h8d324e17fb255e3b(&var_38, &var_48, arg2);
                
                if (var_38 & 1) != 0
                {
                    goto 'label_490b30;
                }
                
                *arg1 = 2;
                *arg1.byte_offset(4) = var_34;
                *arg1.byte_offset(0x10) = arg4;
            }
            else
            {
                *arg1 = 3;
                *arg1.byte_offset(0x10) = arg4;
            }
        }
        else
        {
            *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            *arg1.byte_offset(0x10) = &data_53f218;
            *arg1 = 4;
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_48, var_34);
        }
    }
    
    arg1
}
