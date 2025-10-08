
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_mouse_press::hb0b3ff8166bd0e60(arg1: *mut i64, arg2: i16, arg3: i16) -> *mut c_void

{
    let r14: *mut i8 = arg1[5];
    let mut rax_1: i8;
    
    if (*r14 & 4) == 0
    {
        rax_1 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(arg1[1]);
    }
    
    let mut result: *mut c_void;
    
    if (*r14 & 4) != 0 || rax_1 == 0
    {
        let mut rax_4: i64;
        let mut rdx: i32;
        rax_4 = std::time::Instant::now::h767314cc8c6c5886();
        let r14_2: *mut i64 = arg1[3];
        let mut rax_5: i64;
        let mut rdx_2: i32;
        rax_5 =
            _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Sub$GT$::sub::h58e97276508fd021(
            rax_4, rdx, *r14_2);
        *r14_2 = rax_4;
        r14_2[1] = rdx;
        let mut r15: i16;
        
        if arg2 != r14_2[6] || (arg2 == 5 && arg3 != *r14_2.byte_offset(0x32))
        {
            r14_2[6] = arg2;
            *r14_2.byte_offset(0x32) = arg3;
            r15 = 1;
        }
        else
        {
            let mut rax_6: u32 = *r14_2.byte_offset(0x3b);
            
            if rax_6 == 1
            {
                rax_6 = rax_5 == 0;
                r15 = rdx_2 < 0x17d78400;
                r15 &= rax_6;
                r15 += 1;
            }
            else
            {
                r15 = 1;
                
                if rax_6 == 2
                {
                    rax_6 = rax_5 == 0;
                    r15 = rdx_2 < 0x17d78400;
                    r15 &= rax_6;
                    r15 *= 2;
                    r15 += 1;
                }
            }
        }
        
        *r14_2.byte_offset(0x3b) = r15;
        let r15_2: i32 = *(arg1[1] + 0xc8);
        let mut var_58: ();
        _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, arg1[6]);
        let mut rdx_4: i32;
        result =
            alacritty::event::Mouse::point::h7553a37268becc3a(r14_2[4], r14_2[5], &var_58, r15_2);
        
        if arg2 == 0
        {
            /* tailcall */
            return alacritty::input::Processor$LT$T$C$A$GT$::on_left_click::h80b65c175310b8cb(arg1, 
                result, rdx_4);
        }
    }
    else
    {
        *(arg1[3] + 0x3b) = 0;
        result = jump_table_4f2b68[arg2] + &jump_table_4f2b68;
        
        match result
        {
            0x859af9 =>
            {
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    arg1, nullptr, 0);
            }
            0x859c4a =>
            {
                result = 1;
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    arg1, result, 0);
            }
            0x859c4e =>
            {
                result = 2;
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    arg1, result, 0);
            }
        }
    }
    
    result
}
