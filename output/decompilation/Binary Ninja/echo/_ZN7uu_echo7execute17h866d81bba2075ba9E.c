
  uint64_t uu_echo::execute::h866d81bba2075ba9(void** arg1, int64_t* arg2, char arg3, char arg4)

{
    void var_70;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h527faf55c2d777e2(&var_70, arg2);
    int64_t var_50 = 0;
    int64_t var_a8;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6dff610b9c2e1c1(&var_a8, &var_70);
    int64_t var_a0;
    int64_t rbx = var_a0;
    
    if (-(rbx) == -0x8000000000000000)
    {
        label_42833f:
        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h7a79484182e34883(&var_70);
        
        if (arg3 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, "\n ", 1))
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        
        return 0;
    }
    
    uint64_t result;
    int64_t r14_1;
    int64_t var_98;
    int64_t* var_90;
    
    if (!arg4)
    {
        while (true)
        {
            r14_1 = var_98;
            
            if (var_a8 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, " ", 1))
                break;
            
            if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, r14_1, var_90))
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                goto label_42852c;
            }
            
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hefddfe54ca5d0faa(rbx, 
                r14_1);
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6dff610b9c2e1c1(&var_a8, &var_70);
            rbx = var_a0;
            
            if (rbx == -0x8000000000000000)
                goto label_42833f;
        }
    }
    else
    {
        while (true)
        {
            r14_1 = var_98;
            
            if (var_a8 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg1, " ", 1))
                break;
            
            int64_t var_48 = r14_1;
            int64_t* rax_6 = var_90;
            int64_t* var_40_1 = rax_6;
            char var_38_1 = 3;
            
            while (true)
            {
                uint64_t rax_7 = uucore::features::format::parse_escape_only::_$u7b$$u7b$closure$u7d$$u7d$::h726220761a80ac0b(&var_48, rax_6);
                
                if (rax_7 == 4)
                {
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hefddfe54ca5d0faa(
                        rbx, r14_1);
                    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6dff610b9c2e1c1(&var_a8, &var_70);
                    rbx = var_a0;
                    
                    if (rbx != -0x8000000000000000)
                        break;
                    
                    goto label_42833f;
                }
                
                char var_b4 = rax_7;
                uint8_t var_ad_1 = rax_7 >> 0x38;
                uint16_t var_af_1 = rax_7 >> 0x28;
                uint32_t var_b3_1 = rax_7 >> 8;
                char var_80;
                rax_6 = _$LT$uucore..features..format..escape..EscapedChar$u20$as$u20$uucore..features..format..FormatChar$GT$::write::hb1494e2c0e077970(&var_80, &var_b4, arg1);
                
                if (var_80)
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    goto label_42852c;
                }
                
                char var_7f;
                
                if (var_7f)
                {
                    result = 0;
                    goto label_42852c;
                }
            }
        }
    }
    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    label_42852c:
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hefddfe54ca5d0faa(rbx, r14_1);
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h7a79484182e34883(&var_70);
    return result;
}
