
  fn uu_dd::Output::new_fifo::h5805a896b59d1442(arg1: *mut i8, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i8

{
    let r13: *mut c_void = arg4[0x11];
    
    if r13 == 0
    {
        goto 'label_4d7a7d;
    }
    
    let mut var_38: i32;
    std::fs::File::open::h7106e998c3d1654b(&var_38, arg2);
    
    if var_38 != 0
    {
        'label_4d7b03:
        *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        *arg1.byte_offset(0x10) = &data_562e90;
        *arg1 = 4;
    }
    else
    {
        let mut var_48: i8 = 2;
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = uu_dd::Dest::seek::hf206f28f02b500d6(&var_48, r13);
        let var_34: i32;
        
        if rax_2 == 0
        {
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_48, var_34);
            'label_4d7a7d:
            let rax_4: i64 = *arg4;
            
            if rax_4 == 0
            {
                if arg4[1] != 0
                {
                    goto 'label_4d7a9f;
                }
                
                *arg1 = 3;
                *arg1.byte_offset(0x10) = arg4;
            }
            else if rax_4 != 1 || arg4[1] != 0
            {
                'label_4d7a9f:
                let mut var_44: i32;
                var_44 = 0x100000001b6;
                let var_3c_1: i8 = *arg4.byte_offset(0x92) ^ 1;
                let var_3b_1: i8 = *arg4.byte_offset(0x91);
                let var_3e_1: i8 = *arg4.byte_offset(0x96);
                let mut rax_8: i32;
                let mut rdx_2: i32;
                rax_8 = uu_dd::make_linux_oflags::hc5c67f9cb15d8524(arg4.byte_offset(0x96));
                
                if rax_8 == 0
                {
                    rdx_2 = rax_8;
                }
                
                var_48 = rdx_2;
                std::fs::OpenOptions::open::h1ecb7e9f905cf1c8(&var_38, &var_48, arg2);
                
                if var_38 != 0
                {
                    goto 'label_4d7b03;
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
            *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            *arg1.byte_offset(0x10) = &data_562e90;
            *arg1 = 4;
            core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_48, var_34);
        }
    }
    
    arg1
}
