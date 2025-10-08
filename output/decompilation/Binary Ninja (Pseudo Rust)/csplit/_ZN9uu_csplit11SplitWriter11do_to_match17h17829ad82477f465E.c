
  fn uu_csplit::SplitWriter::do_to_match::h17829ad82477f465(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64, arg5: *mut c_void, arg6: *mut c_void, arg7: i32, arg8: *mut i64) -> *mut i64

{
    let mut i: *mut i64;
    let mut i_3: *mut c_void;
    let mut var_190: i64;
    let mut var_158: i64;
    let mut var_150: i128;
    let mut var_128: i64;
    let i_4: *mut i64;
    let var_118: i64;
    let var_110: u64;
    let mut rax_2: *mut *mut c_void;
    
    if arg7 < 0
    {
        let rax_4: i64 = -(arg7);
        arg8[6] = rax_4;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
        i = i_4;
        
        if i != -0x7fffffffffffffff
        {
            do
            {
                if i == -0x8000000000000000
                {
                    *arg1 = 0xc;
                    arg1[1] = var_118;
                    arg1[2] = var_110;
                    return i;
                }
                
                let rbx_3: i64 = var_128;
                let mut i_5: *mut i64 = i;
                let var_e0_1: i64 = var_118;
                let var_d8_1: u64 = var_110;
                let mut rax_8: i64;
                let mut rdx_10: u64;
                rax_8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38("\r\nshould be big enough to hold…", 2, var_118, var_110);
                
                if rax_8 == 0
                {
                    rax_8 = uu_csplit::SplitWriter::do_to_match::_$u7b$$u7b$closure$u7d$$u7d$::h819c12a2ec51583c(var_118, var_110);
                }
                
                i_3 = 0;
                var_190 = rax_8;
                let mut var_180_2: i64 = 0;
                let var_170_2: i8 = 1;
                regex_automata::util::search::Input::set_span::h20ece942847d591a(&i_3);
                let var_138_2: i128 = rdx_10;
                var_150 = rdx_10;
                var_158 = i_3;
                regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(&i_3, arg5, 
                    arg6, &var_158);
                
                if i_3 != 0
                {
                    let var_160_2: *mut *mut i64 = &i_5;
                    let mut var_58: i128;
                    uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2234f941e51dbd39(
                        &var_58, arg8);
                    let var_38: i64;
                    let var_178_3: i64 = var_38;
                    let mut var_188_2: u64;
                    let var_48: i128;
                    var_188_2 = var_48;
                    i_3 = var_58;
                    let mut i_7: *mut c_void = i_3;
                    
                    if i_7 == var_190
                    {
                        'label_517547:
                        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
                        let mut r13_3: i64;
                        
                        if *(arg2[4] + 0x63) == 0
                        {
                            r13_3 = rax_4;
                            arg8[6] = r13_3 + 1;
                            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, arg8, rbx_3, &i_5);
                            let i_8: *mut c_void = i_3;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                            
                            if i_8 != -0x8000000000000000
                            {
                                i_3 = &data_641c30;
                                let var_190_2: i64 = 1;
                                let var_188_3: i64 = 8;
                                var_180_2 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&i_3);
                                /* no return */
                            }
                        }
                        else
                        {
                            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, arg8, rbx_3, &i_5);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                            r13_3 = rax_4;
                        }
                        
                        i = uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
                        
                        if arg8[2] >= r13_3
                        {
                            *arg1 = 0xd;
                        }
                        else
                        {
                            i = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&arg1[1], arg3, arg4);
                            *arg1 = 1;
                        }
                        
                        return i;
                    }
                    
                    loop
                    {
                        i_3 = i_7.byte_offset(0x20);
                        let rcx_11: i64 = *i_7.byte_offset(8);
                        
                        if rcx_11 == -0x7fffffffffffffff
                        {
                            goto 'label_517547;
                        }
                        
                        let mut var_88: i64 = rcx_11;
                        let var_80_1: i128 = *i_7.byte_offset(0x10);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(&var_158, 
                            &var_88);
                        let rax_13: i64 = var_158;
                        
                        if rax_13 == -0x8000000000000000
                        {
                            goto 'label_517547;
                        }
                        
                        var_158 = rax_13;
                        let rax_14: *mut *mut c_void =
                            uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_150, 
                            *var_150[8]);
                        
                        if rax_14 != 0
                        {
                            *arg1 = 0;
                            arg1[1] = rax_14;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
                            core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                            &var_158);
                        i_7 = i_3;
                        
                        if i_7 == var_190
                        {
                            goto 'label_517547;
                        }
                    }
                    
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                        &i_5);
                }
                
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, 
                    arg8, rbx_3, &i_5);
                
                if i_3 == -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                }
                else
                {
                    let rax_9: *mut *mut c_void =
                        uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_190, rdx_10);
                    
                    if rax_9 != 0
                    {
                        *arg1 = 0;
                        arg1[1] = rax_9;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&i_3);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&i_3);
                }
                
                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
                i = i_4;
            } while i != -0x7fffffffffffffff;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&var_128);
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hf76acf84e2abe461(&i_3, arg8);
        
        for let mut i_1: *mut c_void = i_3; i_1 != var_190; i_1 = i_3
        {
            i_3 = i_1.byte_offset(0x20);
            let rcx_3: i64 = *i_1.byte_offset(8);
            
            if rcx_3 == -0x7fffffffffffffff
            {
                break;
            }
            
            let mut var_70: i64 = rcx_3;
            let var_68_1: i128 = *i_1.byte_offset(0x10);
            core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(&var_158, &var_70);
            let rax_5: i64 = var_158;
            var_128 = var_150;
            
            if rax_5 == -0x8000000000000000
            {
                break;
            }
            
            var_158 = rax_5;
            var_150 = var_128;
            rax_2 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_150, *var_150[8]);
            
            if rax_2 != 0
            {
                goto 'label_517396;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
        }
        
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
    }
    else
    {
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hf76acf84e2abe461(&i_3, arg8);
        
        for let mut i_2: *mut c_void = i_3; i_2 != var_190; i_2 = i_3
        {
            i_3 = i_2.byte_offset(0x20);
            let rcx_1: i64 = *i_2.byte_offset(8);
            
            if rcx_1 == -0x7fffffffffffffff
            {
                break;
            }
            
            let mut var_a0: i64 = rcx_1;
            let var_98_1: i128 = *i_2.byte_offset(0x10);
            core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(&var_158, &var_a0);
            let rax_1: i64 = var_158;
            var_128 = var_150;
            
            if rax_1 == -0x8000000000000000
            {
                break;
            }
            
            var_158 = rax_1;
            var_150 = var_128;
            rax_2 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_150, *var_150[8]);
            
            if rax_2 != 0
            {
                'label_517396:
                *arg1 = 0;
                arg1[1] = rax_2;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
                return core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
        }
        
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
        arg8[6] = 1;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
        let mut i_6: *mut i64 = i_4;
        
        if i_6 != -0x7fffffffffffffff
        {
            loop
            {
                if i_6 == -0x8000000000000000
                {
                    *arg1 = 0xc;
                    arg1[1] = var_118;
                    arg1[2] = var_110;
                    return arg1;
                }
                
                let r14_1: i64 = var_128;
                let mut i_10: *mut i64 = i_6;
                let var_c8_1: i64 = var_118;
                let var_c0_1: u64 = var_110;
                let mut rax_6: i64;
                let mut rdx_6: i64;
                rax_6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38("\r\nshould be big enough to hold…", 2, var_118, var_110);
                
                if rax_6 == 0
                {
                    rax_6 = uu_csplit::SplitWriter::do_to_match::_$u7b$$u7b$closure$u7d$$u7d$::h819c12a2ec51583c(var_118, var_110);
                }
                
                i_3 = 0;
                let mut var_180_1: u64 = 0;
                let var_170_1: i8 = 1;
                regex_automata::util::search::Input::set_span::h20ece942847d591a(&i_3);
                let var_138_1: i128 = rdx_6;
                var_150 = rdx_6;
                var_158 = i_3;
                regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(&i_3, arg5, 
                    arg6, &var_158);
                let mut rax_7: *mut *mut c_void;
                
                if i_3 != 0
                {
                    let var_160_1: *mut *mut i64 = &i_10;
                    let mut r12_1: i8 = *(arg2[4] + 0x63);
                    let mut rbp_1: i8;
                    
                    if r12_1 == 0
                    {
                        if arg7 == 0
                        {
                            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, arg8, r14_1, &i_10);
                            let i_9: *mut c_void = i_3;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                            rbp_1 = 0;
                            r12_1 = 0;
                            
                            if i_9 == -0x8000000000000000
                            {
                                goto 'label_51777f;
                            }
                            
                            i_3 = &data_641bf0;
                            let var_190_3: i64 = 1;
                            let var_188_4: i64 = 8;
                            var_180_1 = {0};
                            core::panicking::panic_fmt::h96f341d36638c225(&i_3);
                            /* no return */
                        }
                        
                        rax_7 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_118, 
                            var_110);
                        'label_5175bd:
                        
                        if rax_7 == 0
                        {
                            rbp_1 = 1;
                            
                            if arg7 < 2
                            {
                                goto 'label_51777f;
                            }
                            
                            let mut r13_5: i32 = arg7 + 1;
                            
                            loop
                            {
                                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&i_3, arg8);
                                
                                if rax_6 == -0x7fffffffffffffff
                                {
                                    uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&var_158, arg3, arg4);
                                    arg1[3] = *var_150[8];
                                    *arg1.byte_offset(8) = var_158;
                                    *arg1 = 1;
                                    break;
                                }
                                
                                if rax_6 == -0x8000000000000000
                                {
                                    *arg1 = 0xc;
                                    arg1[1] = rdx_6;
                                    arg1[2] = var_180_1;
                                    break;
                                }
                                
                                var_158 = rax_6;
                                var_150 = rdx_6;
                                *var_150[8] = var_180_1;
                                let rax_19: *mut *mut c_void =
                                    uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, rdx_6, 
                                    var_180_1);
                                
                                if rax_19 != 0
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_19;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
                                    break;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
                                r13_5 -= 1;
                                
                                if r13_5 <= 2
                                {
                                    goto 'label_51777f;
                                }
                            }
                        }
                        else
                        {
                            *arg1 = 0;
                            arg1[1] = rax_7;
                        }
                    }
                    else
                    {
                        rbp_1 = 1;
                        
                        if arg7 != 0
                        {
                            rax_7 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, 
                                var_118, var_110);
                            goto 'label_5175bd;
                        }
                        
                        r12_1 = 0;
                        'label_51777f:
                        uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
                        
                        if r12_1 != 0
                        {
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&i_3, arg8);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&i_3);
                        }
                        
                        *arg1 = 0xd;
                        
                        if rbp_1 == 0
                        {
                            return arg1;
                        }
                    }
                }
                else
                {
                    rax_7 =
                        uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_118, var_110);
                    
                    if rax_7 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                            &i_10);
                        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
                        i_6 = i_4;
                        
                        if i_6 == -0x7fffffffffffffff
                        {
                            break;
                        }
                        
                        continue;
                    }
                    
                    *arg1 = 0;
                    arg1[1] = rax_7;
                }
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                    &i_10);
            }
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&var_128);
    }
    uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
    i = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&arg1[1], arg3, arg4);
    *arg1 = 3;
    i
}
