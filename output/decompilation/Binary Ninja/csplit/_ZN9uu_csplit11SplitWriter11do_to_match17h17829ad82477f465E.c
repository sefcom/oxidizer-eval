
  int64_t* uu_csplit::SplitWriter::do_to_match::h17829ad82477f465(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, void* arg5, void* arg6, int32_t arg7, int64_t* arg8)

{
    int64_t* i;
    void* i_3;
    int64_t var_190;
    int64_t var_158;
    int128_t var_150;
    int64_t var_128;
    int64_t* i_4;
    int64_t var_118;
    uint64_t var_110;
    void** rax_2;
    
    if (arg7 < 0)
    {
        int64_t rax_4 = -(arg7);
        arg8[6] = rax_4;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
        i = i_4;
        
        if (i != -0x7fffffffffffffff)
        {
            do
            {
                if (i == -0x8000000000000000)
                {
                    *arg1 = 0xc;
                    arg1[1] = var_118;
                    arg1[2] = var_110;
                    return i;
                }
                
                int64_t rbx_3 = var_128;
                int64_t* i_5 = i;
                int64_t var_e0_1 = var_118;
                uint64_t var_d8_1 = var_110;
                int64_t rax_8;
                uint64_t rdx_10;
                rax_8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38("\r\nshould be big enough to hold…", 2, var_118, var_110);
                
                if (!rax_8)
                    rax_8 = uu_csplit::SplitWriter::do_to_match::_$u7b$$u7b$closure$u7d$$u7d$::h819c12a2ec51583c(var_118, var_110);
                
                i_3 = 0;
                var_190 = rax_8;
                int64_t var_180_2 = 0;
                char var_170_2 = 1;
                regex_automata::util::search::Input::set_span::h20ece942847d591a(&i_3);
                int128_t var_138_2 = rdx_10;
                var_150 = rdx_10;
                var_158 = i_3;
                regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(&i_3, arg5, 
                    arg6, &var_158);
                
                if (i_3)
                {
                    int64_t** var_160_2 = &i_5;
                    int128_t var_58;
                    uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2234f941e51dbd39(
                        &var_58, arg8);
                    int64_t var_38;
                    int64_t var_178_3 = var_38;
                    uint64_t var_188_2;
                    int128_t var_48;
                    var_188_2 = var_48;
                    i_3 = var_58;
                    void* i_7 = i_3;
                    
                    if (i_7 == var_190)
                    {
                        label_517547:
                        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
                        int64_t r13_3;
                        
                        if (!*(arg2[4] + 0x63))
                        {
                            r13_3 = rax_4;
                            arg8[6] = r13_3 + 1;
                            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, arg8, rbx_3, &i_5);
                            void* i_8 = i_3;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                            
                            if (i_8 != -0x8000000000000000)
                            {
                                i_3 = &data_641c30;
                                int64_t var_190_2 = 1;
                                int64_t var_188_3 = 8;
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
                        
                        if (arg8[2] >= r13_3)
                            *arg1 = 0xd;
                        else
                        {
                            i = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&arg1[1], arg3, arg4);
                            *arg1 = 1;
                        }
                        
                        return i;
                    }
                    
                    while (true)
                    {
                        i_3 = i_7 + 0x20;
                        int64_t rcx_11 = *(i_7 + 8);
                        
                        if (rcx_11 == -0x7fffffffffffffff)
                            goto label_517547;
                        
                        int64_t var_88 = rcx_11;
                        int128_t var_80_1 = *(i_7 + 0x10);
                        core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(&var_158, 
                            &var_88);
                        int64_t rax_13 = var_158;
                        
                        if (rax_13 == -0x8000000000000000)
                            goto label_517547;
                        
                        var_158 = rax_13;
                        void** rax_14 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, 
                            var_150, *var_150[8]);
                        
                        if (rax_14)
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
                        
                        if (i_7 == var_190)
                            goto label_517547;
                    }
                    
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                        &i_5);
                }
                
                uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, 
                    arg8, rbx_3, &i_5);
                
                if (i_3 == -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                else
                {
                    void** rax_9 =
                        uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_190, rdx_10);
                    
                    if (rax_9)
                    {
                        *arg1 = 0;
                        arg1[1] = rax_9;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&i_3);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&i_3);
                }
                
                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
                i = i_4;
            } while (i != -0x7fffffffffffffff);
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&var_128);
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hf76acf84e2abe461(&i_3, arg8);
        
        for (void* i_1 = i_3; i_1 != var_190; i_1 = i_3)
        {
            i_3 = i_1 + 0x20;
            int64_t rcx_3 = *(i_1 + 8);
            
            if (rcx_3 == -0x7fffffffffffffff)
                break;
            
            int64_t var_70 = rcx_3;
            int128_t var_68_1 = *(i_1 + 0x10);
            core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(&var_158, &var_70);
            int64_t rax_5 = var_158;
            var_128 = var_150;
            
            if (rax_5 == -0x8000000000000000)
                break;
            
            var_158 = rax_5;
            var_150 = var_128;
            rax_2 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_150, *var_150[8]);
            
            if (rax_2)
                goto label_517396;
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
        }
        
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..stdio..StdinLock$GT$$C$uu_csplit..csplit$LT$std..io..stdio..StdinLock$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h56a376ed8393a26b(&i_3);
    }
    else
    {
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hf76acf84e2abe461(&i_3, arg8);
        
        for (void* i_2 = i_3; i_2 != var_190; i_2 = i_3)
        {
            i_3 = i_2 + 0x20;
            int64_t rcx_1 = *(i_2 + 8);
            
            if (rcx_1 == -0x7fffffffffffffff)
                break;
            
            int64_t var_a0 = rcx_1;
            int128_t var_98_1 = *(i_2 + 0x10);
            core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(&var_158, &var_a0);
            int64_t rax_1 = var_158;
            var_128 = var_150;
            
            if (rax_1 == -0x8000000000000000)
                break;
            
            var_158 = rax_1;
            var_150 = var_128;
            rax_2 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_150, *var_150[8]);
            
            if (rax_2)
            {
                label_517396:
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
        int64_t* i_6 = i_4;
        
        if (i_6 != -0x7fffffffffffffff)
        {
            while (true)
            {
                if (i_6 == -0x8000000000000000)
                {
                    *arg1 = 0xc;
                    arg1[1] = var_118;
                    arg1[2] = var_110;
                    return arg1;
                }
                
                int64_t r14_1 = var_128;
                int64_t* i_10 = i_6;
                int64_t var_c8_1 = var_118;
                uint64_t var_c0_1 = var_110;
                int64_t rax_6;
                int64_t rdx_6;
                rax_6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38("\r\nshould be big enough to hold…", 2, var_118, var_110);
                
                if (!rax_6)
                    rax_6 = uu_csplit::SplitWriter::do_to_match::_$u7b$$u7b$closure$u7d$$u7d$::h819c12a2ec51583c(var_118, var_110);
                
                i_3 = 0;
                uint64_t var_180_1 = 0;
                char var_170_1 = 1;
                regex_automata::util::search::Input::set_span::h20ece942847d591a(&i_3);
                int128_t var_138_1 = rdx_6;
                var_150 = rdx_6;
                var_158 = i_3;
                regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(&i_3, arg5, 
                    arg6, &var_158);
                void** rax_7;
                
                if (i_3)
                {
                    int64_t** var_160_1 = &i_10;
                    char r12_1 = *(arg2[4] + 0x63);
                    char rbp_1;
                    
                    if (!r12_1)
                    {
                        if (!arg7)
                        {
                            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h7facb3659246b3a4(&i_3, arg8, r14_1, &i_10);
                            void* i_9 = i_3;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hac6e165de92e876f(&i_3);
                            rbp_1 = 0;
                            r12_1 = 0;
                            
                            if (i_9 == -0x8000000000000000)
                                goto label_51777f;
                            
                            i_3 = &data_641bf0;
                            int64_t var_190_3 = 1;
                            int64_t var_188_4 = 8;
                            var_180_1 = {0};
                            core::panicking::panic_fmt::h96f341d36638c225(&i_3);
                            /* no return */
                        }
                        
                        rax_7 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_118, 
                            var_110);
                        label_5175bd:
                        
                        if (!rax_7)
                        {
                            rbp_1 = 1;
                            
                            if (arg7 < 2)
                                goto label_51777f;
                            
                            int32_t r13_5 = arg7 + 1;
                            
                            while (true)
                            {
                                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&i_3, arg8);
                                
                                if (rax_6 == -0x7fffffffffffffff)
                                {
                                    uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h726fb365ecba84af(&var_158, arg3, arg4);
                                    arg1[3] = *var_150[8];
                                    *(arg1 + 8) = var_158;
                                    *arg1 = 1;
                                    break;
                                }
                                
                                if (rax_6 == -0x8000000000000000)
                                {
                                    *arg1 = 0xc;
                                    arg1[1] = rdx_6;
                                    arg1[2] = var_180_1;
                                    break;
                                }
                                
                                var_158 = rax_6;
                                var_150 = rdx_6;
                                *var_150[8] = var_180_1;
                                void** rax_19 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(
                                    arg2, rdx_6, var_180_1);
                                
                                if (rax_19)
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_19;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
                                    break;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_158);
                                r13_5 -= 1;
                                
                                if (r13_5 <= 2)
                                    goto label_51777f;
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
                        
                        if (arg7)
                        {
                            rax_7 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, 
                                var_118, var_110);
                            goto label_5175bd;
                        }
                        
                        r12_1 = 0;
                        label_51777f:
                        uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(arg2);
                        
                        if (r12_1)
                        {
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&i_3, arg8);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&i_3);
                        }
                        
                        *arg1 = 0xd;
                        
                        if (!rbp_1)
                            return arg1;
                    }
                }
                else
                {
                    rax_7 =
                        uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(arg2, var_118, var_110);
                    
                    if (!rax_7)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(
                            &i_10);
                        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h22925739f0173e13(&var_128, arg8);
                        i_6 = i_4;
                        
                        if (i_6 == -0x7fffffffffffffff)
                            break;
                        
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
    return i;
}
