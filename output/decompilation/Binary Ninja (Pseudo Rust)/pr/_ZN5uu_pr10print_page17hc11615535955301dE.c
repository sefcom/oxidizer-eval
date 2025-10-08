
  fn uu_pr::print_page::hc11615535955301d(arg1: *mut c_void, arg2: i64, arg3: *mut c_void, arg4: i64) -> i64

{
    let rax: i64 = *arg3.byte_offset(0x50);
    let rax_1: u64 = *arg3.byte_offset(0x58);
    let r15: i64 = *arg3.byte_offset(0x98);
    let r12: u64 = *arg3.byte_offset(0xa0);
    let mut var_48: ();
    uu_pr::header_content::h1c434cc3245eafa3(&var_48, arg3, arg4);
    let mut var_60: ();
    uu_pr::trailer_content::hfb8d3a6ef2744922(&var_60, *arg3.byte_offset(0x141), 
        *arg3.byte_offset(0x142));
    let var_d8: *mut c_void = &var_60;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_68: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_e0: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_68);
    let mut var_a8: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0b8c6871f9c67703(&var_a8, &var_48);
    let mut var_c0: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&var_c0, &var_a8);
    
    if !(0 + -(var_c0))
    {
        loop
        {
            let var_b8: i64;
            let var_b0: u64;
            
            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, var_b8, var_b0) == 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, rax, rax_1) == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_c0);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&var_c0, &var_a8);
                
                if var_c0 == -0x8000000000000000
                {
                    goto 'label_536f91;
                }
                
                continue;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_c0);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h31fc898d73f77abb(&var_a8);
            break;
        }
        
        goto 'label_537095;
    }
    
    'label_536f91:
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h31fc898d73f77abb(&var_a8);
    let mut rax_5: i8;
    let mut rdx_5: ssize_t;
    rax_5 = uu_pr::write_columns::h498c3fffc8cb79bc(arg1, arg2, arg3, &var_e0);
    let mut result: i64;
    
    if (rax_5 & 1) != 0
    {
        'label_537095:
        result = 1;
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h9a5bea2ce40ac794(var_e0);
    }
    else
    {
        let var_58: i64;
        var_a8 = var_58;
        let var_50: i64;
        let var_a0_1: i64 = var_58 + var_50 * 0x18;
        let var_98_1: i64 = 0;
        let mut rax_7: i64;
        let mut i: *mut c_void;
        rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b3b0cf146fef1f3(&var_a8);
        
        if i != 0
        {
            let mut r15_1: i64 = rax_7;
            
            do
            {
                if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, *i.byte_offset(8), *i.byte_offset(0x10)) != 0
                {
                    goto 'label_537095;
                }
                
                if r15_1 + 1 != var_50 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, rax, rax_1) != 0
                {
                    goto 'label_537095;
                }
                
                let mut rax_8: i64;
                rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b3b0cf146fef1f3(&var_a8);
                r15_1 = rax_8;
            } while i != 0;
        }
        
        if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, r15, r12) != 0
        {
            goto 'label_537095;
        }
        
        if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
            &var_e0) != 0
        {
            goto 'label_537095;
        }
        
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h9a5bea2ce40ac794(var_e0);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha75e71cb54c06334(
        &var_60);
    result
}
