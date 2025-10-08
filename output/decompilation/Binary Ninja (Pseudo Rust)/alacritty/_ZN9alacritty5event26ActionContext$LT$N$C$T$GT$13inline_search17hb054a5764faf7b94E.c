
  fn alacritty::event::ActionContext$LT$N$C$T$GT$::inline_search::hb054a5764faf7b94(arg1: *mut c_void, arg2: i8)

{
    let r12: *mut i32 = *arg1.byte_offset(0x70);
    let rdi: i32 = *r12;
    
    if rdi != 0x110000
    {
        let mut var_84: i32 = 0;
        let mut rax_1: *mut i8;
        let mut rdx_1: *mut c_void;
        rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rdi, &var_84);
        let r14_1: *mut i32 = *arg1.byte_offset(8);
        let rdx_2: i64 = *r14_1.byte_offset(0x290);
        let rcx_1: i32 = r14_1[0xa6];
        let mut var_80: i32;
        let rdi_1: *mut i64 = &var_80;
        let var_78: i64;
        let var_70: i32;
        let mut var_68: *mut c_void;
        let mut var_40: ();
        let mut rbp_2: i32;
        let mut r15_1: i64;
        
        if arg2 == 0
        {
            alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_left::h0e24405bbcb3ff67(rdi_1, r14_1, rdx_2, rcx_1, rax_1, rdx_1);
            
            if var_80 != 1
            {
                r15_1 = var_78;
                rbp_2 = var_70;
                
                if *r12.byte_offset(6) == 0
                {
                    goto 'label_85507b;
                }
                
                let rcx_5: i32 = r14_1[0x30] - 1;
                let rdx_6: i64 = *r14_1.byte_offset(0xb8) - 1;
                var_68 = &r14_1[0xa];
                let var_60_2: i64 = r15_1;
                let var_58_2: i32 = rbp_2;
                let var_50_2: i64 = rdx_6;
                let var_48_2: i32 = rcx_5;
                _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_40, &var_68);
                'label_85506c:
                let mut rax_4: i64;
                let mut rdx_8: i32;
                rax_4 = core::option::Option$LT$T$GT$::map_or::h55de4ce00cf2525f(&var_40, r15_1);
                r15_1 = rax_4;
                rbp_2 = rdx_8;
                'label_85507b:
                alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(r14_1, 
                    rbp_2);
                *r14_1.byte_offset(0x290) = r15_1;
                r14_1[0xa6] = rbp_2;
                alacritty_terminal::term::Term$LT$T$GT$::vi_mode_recompute_selection::hf880b3a3d59b9937(r14_1);
                **arg1.byte_offset(0x78) = 1;
            }
        }
        else
        {
            alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_right::hbf0568499a7b63a6(rdi_1, r14_1, rdx_2, rcx_1, rax_1, rdx_1);
            
            if (var_80 & 1) == 0
            {
                r15_1 = var_78;
                rbp_2 = var_70;
                
                if *r12.byte_offset(6) != 1
                {
                    goto 'label_85507b;
                }
                
                let rcx_3: i32 = r14_1[0x30] - 1;
                let rdx_4: i64 = *r14_1.byte_offset(0xb8) - 1;
                var_68 = &r14_1[0xa];
                let var_60_1: i64 = r15_1;
                let var_58_1: i32 = rbp_2;
                let var_50_1: i64 = rdx_4;
                let var_48_1: i32 = rcx_3;
                _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_40, &var_68);
                goto 'label_85506c;
            }
        }
    }
}
