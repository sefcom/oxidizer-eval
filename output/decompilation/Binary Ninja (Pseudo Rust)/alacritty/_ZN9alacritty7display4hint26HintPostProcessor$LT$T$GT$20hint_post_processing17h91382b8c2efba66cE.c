
  fn alacritty::display::hint::HintPostProcessor$LT$T$GT$::hint_post_processing::h91382b8c2efba66c(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64) -> *mut i64

{
    let rdi: i64 = *arg3;
    let r8: i32 = arg3[1];
    let rcx_1: i32 = *arg2.byte_offset(0xc0) - 1;
    let rdx_1: i64 = *arg2.byte_offset(0xb8) - 1;
    let mut var_78: *mut c_void = arg2.byte_offset(0x28);
    let var_60: i64 = rdx_1;
    let var_58: i32 = rcx_1;
    let mut r14: i32 =
        *alacritty_terminal::grid::GridIterator$LT$T$GT$::cell::h5c2417f3cd861f7e(&var_78).
        byte_offset(0x10);
    let r13: i64 = arg3[2];
    let rbx_1: i32 = arg3[3];
    let mut rbp: i32 = 0;
    let mut r15: i32 = 0;
    
    if r14 > 0x5a
    {
        goto 'label_848a30;
    }
    
    let mut var_48: *mut c_void;
    
    loop
    {
        if r14 == 0x28
        {
            r15 += 1;
            goto 'label_848a53;
        }
        
        if r14 != 0x29
        {
            goto 'label_848a53;
        }
        
        if r15 == 0
        {
            break;
        }
        
        r15 -= 1;
        
        if r8 != rbx_1
        {
            goto 'label_848a68;
        }
        
        loop
        {
            if rdi == r13
            {
                goto 'label_848aad;
            }
            
            'label_848a68:
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_48, &var_78);
            let rax_2: *mut c_void = var_48;
            
            if rax_2 == 0
            {
                goto 'label_848aad;
            }
            
            r14 = *rax_2.byte_offset(0x10);
            
            if r14 <= 0x5a
            {
                break;
            }
            
            'label_848a30:
            
            if r14 == 0x5b
            {
                rbp += 1;
                
                if r8 != rbx_1
                {
                    goto 'label_848a68;
                }
            }
            else if r14 != 0x5d
            {
                'label_848a53:
                
                if r8 != rbx_1
                {
                    goto 'label_848a68;
                }
            }
            else
            {
                if rbp == 0
                {
                    goto 'label_848aa4;
                }
                
                rbp -= 1;
                
                if r8 != rbx_1
                {
                    goto 'label_848a68;
                }
            }
        }
    }
    
    'label_848aa4:
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_48, &var_78);
    'label_848aad:
    let mut r15_1: i32 = r8;
    let mut r12: i64 = rdi;
    
    if (r8 == r15_1 & rdi == r12) == 0
    {
        r15_1 = r8;
        r12 = rdi;
        
        loop
        {
            let r14_1: u64 = r14 - 0x21;
            
            if r14_1 > 0x3a
            {
                break;
            }
            
            if !TEST_BITQ(0x4000000460028c1, r14_1)
            {
                break;
            }
            
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_48, &var_78);
            let mut rax_4: *mut c_void = var_48;
            
            if rax_4 == 0
            {
                r12 = rdi;
                r15_1 = r8;
                break;
            }
            
            r14 = *rax_4.byte_offset(0x10);
            r15_1 = r8;
            rax_4 = r15_1 == r8;
            r12 = rdi;
            
            if (rax_4 & r12 == rdi) != 0
            {
                r15_1 = r8;
                r12 = rdi;
                break;
            }
        }
    }
    
    let mut rcx_5: i8 = 2;
    
    if _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(rdi, r8, r12, r15_1) <= 0
    {
        *arg1 = rdi;
        arg1[1] = r8;
        arg1[2] = r12;
        arg1[3] = r15_1;
        rcx_5 = 0;
    }
    
    arg1[4] = rcx_5;
    arg1
}
