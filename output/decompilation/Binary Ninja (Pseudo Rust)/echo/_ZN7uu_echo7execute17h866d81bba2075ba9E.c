
  fn uu_echo::execute::h866d81bba2075ba9(arg1: *mut *mut c_void, arg2: *mut i64, arg3: i8, arg4: i8) -> u64

{
    let mut var_70: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h527faf55c2d777e2(&var_70, arg2);
    let var_50: i64 = 0;
    let mut var_a8: i64;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6dff610b9c2e1c1(&var_a8, &var_70);
    let var_a0: i64;
    let mut rbx: i64 = var_a0;
    
    if -(rbx) == -0x8000000000000000
    {
        'label_42833f:
        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h7a79484182e34883(&var_70);
        
        if arg3 != 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, "\n ", 1) != 0
        {
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        }
        
        return 0;
    }
    
    let mut result: u64;
    let mut r14_1: i64;
    let var_98: i64;
    let var_90: *mut i64;
    
    if arg4 == 0
    {
        loop
        {
            r14_1 = var_98;
            
            if var_a8 != 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, " ", 1) != 0
            {
                break;
            }
            
            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, r14_1, var_90) != 0
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                goto 'label_42852c;
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hefddfe54ca5d0faa(rbx, 
                r14_1);
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6dff610b9c2e1c1(&var_a8, &var_70);
            rbx = var_a0;
            
            if rbx == -0x8000000000000000
            {
                goto 'label_42833f;
            }
        }
    }
    else
    {
        loop
        {
            r14_1 = var_98;
            
            if var_a8 != 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, " ", 1) != 0
            {
                break;
            }
            
            let mut var_48: i64 = r14_1;
            let mut rax_6: *mut i64 = var_90;
            let var_40_1: *mut i64 = rax_6;
            let var_38_1: i8 = 3;
            
            loop
            {
                let rax_7: u64 = uucore::features::format::parse_escape_only::_$u7b$$u7b$closure$u7d$$u7d$::h726220761a80ac0b(&var_48, rax_6);
                
                if rax_7 == 4
                {
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hefddfe54ca5d0faa(
                        rbx, r14_1);
                    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6dff610b9c2e1c1(&var_a8, &var_70);
                    rbx = var_a0;
                    
                    if rbx != -0x8000000000000000
                    {
                        break;
                    }
                    
                    goto 'label_42833f;
                }
                
                let mut var_b4: i8 = rax_7;
                let var_ad_1: u8 = rax_7 >> 0x38;
                let var_af_1: u16 = rax_7 >> 0x28;
                let var_b3_1: u32 = rax_7 >> 8;
                let mut var_80: i8;
                rax_6 = _$LT$uucore..features..format..escape..EscapedChar$u20$as$u20$uucore..features..format..FormatChar$GT$::write::hb1494e2c0e077970(&var_80, &var_b4, arg1);
                
                if var_80 != 0
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    goto 'label_42852c;
                }
                
                let var_7f: i8;
                
                if var_7f != 0
                {
                    result = 0;
                    goto 'label_42852c;
                }
            }
        }
    }
    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    'label_42852c:
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hefddfe54ca5d0faa(rbx, r14_1);
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h7a79484182e34883(&var_70);
    result
}
