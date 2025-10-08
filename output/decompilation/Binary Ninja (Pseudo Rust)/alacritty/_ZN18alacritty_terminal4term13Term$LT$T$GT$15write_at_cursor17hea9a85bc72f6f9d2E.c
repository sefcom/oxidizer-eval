
  fn alacritty_terminal::term::Term$LT$T$GT$::write_at_cursor::hea9a85bc72f6f9d2(arg1: *mut c_void, arg2: i32) -> i64

{
    let rax_1: i32 = vte::ansi::StandardCharset::map::h13730de7dfbe6242(
        *_$LT$alacritty_terminal..grid..Charsets$u20$as$u20$core..ops..index..Index$LT$vte..ansi..CharsetIndex$GT$$GT$::index::ha790449f008967f2(arg1.byte_offset(0x80), *arg1.byte_offset(0x6e3)), 
        arg2);
    let zmm0: u128 = *arg1.byte_offset(0x70);
    let rcx: i16 = *arg1.byte_offset(0x7c);
    let rdx: *mut i64 = *arg1.byte_offset(0x68);
    let mut r13: i64;
    
    if rdx == 0
    {
        r13 = 0;
    }
    else
    {
        let temp0_1: i64 = *rdx;
        *rdx += 1;
        
        if temp0_1 <= -1
        {
            trap(6);
        }
        
        r13 = *arg1.byte_offset(0x68);
    }
    
    let var_50: i64 = r13;
    let rax_2: *mut i64 = alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(
        arg1.byte_offset(0x28));
    let mut r12: *mut i64 = rax_2;
    let rax_3: i8 = *rax_2.byte_offset(0x14);
    
    if (rax_3 & 0x60) != 0
    {
        let r12_1: i64 = *arg1.byte_offset(0x58);
        let rbp_1: i32 = *arg1.byte_offset(0x60);
        let mut rsi_4: i64;
        let mut r13_1: i64;
        
        if (rax_3 & 0x20) == 0 || r12_1 >= *arg1.byte_offset(0xb8) - 1
        {
            if r12_1 != 0
            {
                let rax_9: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), rbp_1);
                r13_1 = r12_1 - 1;
                *rax_9.byte_offset(0x18) =
                    core::cmp::Ord::max::h20b6d33cbe488162(*rax_9.byte_offset(0x18), r12_1);
                rsi_4 = *rax_9.byte_offset(0x10);
                
                if r13_1 < rsi_4
                {
                    alacritty_terminal::term::cell::Cell::clear_wide::hefcec44bb91a1c8e(r13_1 * 0x18
                        + *rax_9.byte_offset(8));
                    goto 'label_76f810;
                }
                
                core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, rsi_4);
                /* no return */
            }
            
            'label_76f816:
            let rax_11: i64 = *arg1.byte_offset(0x50);
            let mut rcx_3: i32 = 0;
            
            if rax_11 >= *arg1.byte_offset(0xc0)
            {
                rcx_3 = rax_11 - *arg1.byte_offset(0xc0);
            }
            
            if rcx_3 != -(rbp_1)
            {
                let rbx_3: i64 = *arg1.byte_offset(0xb8);
                let rax_13: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), rbp_1 - 1);
                r13_1 = rbx_3 - 1;
                *rax_13.byte_offset(0x18) =
                    core::cmp::Ord::max::h20b6d33cbe488162(*rax_13.byte_offset(0x18), rbx_3);
                rsi_4 = *rax_13.byte_offset(0x10);
                
                if r13_1 >= rsi_4
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, rsi_4);
                    /* no return */
                }
                
                let rax_15: i64 = *rax_13.byte_offset(8);
                let rcx_6: i64 = r13_1 * 3;
                *(rax_15 + (rcx_6 << 3) + 0x14) &= 0xfbff;
            }
        }
        else
        {
            let rax_6: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), rbp_1);
            r13_1 = r12_1 + 1;
            *rax_6.byte_offset(0x18) =
                core::cmp::Ord::max::h20b6d33cbe488162(*rax_6.byte_offset(0x18), r12_1 + 2);
            rsi_4 = *rax_6.byte_offset(0x10);
            
            if r13_1 >= rsi_4
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, rsi_4);
                /* no return */
            }
            
            let rax_8: i64 = *rax_6.byte_offset(8);
            let rcx_2: i64 = r13_1 * 3;
            *(rax_8 + (rcx_2 << 3) + 0x14) &= 0xffbf;
            'label_76f810:
            
            if r12_1 < 2
            {
                goto 'label_76f816;
            }
        }
        r12 = alacritty_terminal::grid::Grid$LT$T$GT$::cursor_cell::h4172fc1fd56d763c(arg1.
            byte_offset(0x28));
    }
    
    r12[2] = rax_1;
    r12[1] = zmm0;
    *r12.byte_offset(0x14) = rcx;
    let result: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..sync..Arc$LT$alacritty_terminal..term..cell..CellExtra$GT$$GT$$GT$::h98da69247a1b0f0c(r12);
    *r12 = r13;
    result
}
