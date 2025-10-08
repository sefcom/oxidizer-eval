
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::key_release::h4e004f4cf113a66b(arg1: *mut i64, arg2: *mut i16, arg3: i32, arg4: i32) -> i64

{
    if (arg3 & 0x90000) == 0x80000 && _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]) == 0 && *(arg1[6] + 0x478) == 0
    {
        let mut rcx: *mut i8;
        let mut r8_1: *mut c_void;
        
        if arg2[0x20] != 0x1a
        {
            let mut rax_4: *mut i8;
            let mut rdx: *mut c_void;
            rax_4 = smol_str::Repr::as_str::ha71f0b13e811ba13(&arg2[0x20]);
            rcx = rax_4;
            r8_1 = rdx;
        }
        else
        {
            rcx = 1;
            r8_1 = nullptr;
        }
        
        let mut r12_3: i32 = arg4 & 0x824;
        let zmm0: [i32; 0x4];
        
        if alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::alt_send_esc::h03648dcc30b21fed(arg1[5], *arg2, arg2[1], rcx, r8_1, zmm0) != 0
        {
            r12_3 = arg4;
        }
        
        let mut var_d8: i8;
        winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_d8, arg2);
        
        if var_d8 != 0x1f
        {
            'label_856e70:
            let var_38_1: i128 = *arg2.byte_offset(0x70);
            let var_48_1: i128 = *arg2.byte_offset(0x60);
            let var_58_1: i128 = *arg2.byte_offset(0x50);
            let var_68_1: i128 = *arg2.byte_offset(0x40);
            let var_78_1: i128 = *arg2.byte_offset(0x30);
            let var_88_1: i128 = *arg2.byte_offset(0x20);
            let var_98_1: i128 = *arg2.byte_offset(0x10);
            let mut var_a8: i128 = *arg2;
            let mut var_c0: ();
            alacritty::input::keyboard::build_sequence::hb59ed84f2bd9b92a(&var_c0, &var_a8, r12_3, 
                arg3);
            core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
                &var_d8);
            return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(*arg1, &var_c0);
        }
        
        let var_d6: i16;
        let rax_6: u32 = var_d6;
        
        if rax_6 == 0xe || rax_6 == 0xf
        {
            if (arg3 & 0x200000) != 0
            {
                goto 'label_856e70;
            }
        }
        else if rax_6 != 0x19 || (arg3 & 0x200000) != 0
        {
            goto 'label_856e70;
        }
        
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_d8);
    }
    
    core::ptr::drop_in_place$LT$winit..event..KeyEvent$GT$::hd16fceb331fb972b(arg2)
}
