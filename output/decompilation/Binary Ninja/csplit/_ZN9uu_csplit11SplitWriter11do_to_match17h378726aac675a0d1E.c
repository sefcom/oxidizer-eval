
  int64_t* uu_csplit::SplitWriter::do_to_match::h378726aac675a0d1(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4, void* arg5, void* arg6, int32_t arg7, int64_t* arg8)

{
    int64_t var_160;
    uint64_t var_150;
    int128_t var_138;
    int64_t var_108;
    int64_t var_100;
    uint64_t var_f8;
    int128_t var_e8;
    uint64_t rdx_8;
    int64_t* rbp_1;
    
    if (arg7 >= 0)
    {
        int128_t var_80;
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&var_80, arg8);
        int64_t var_60;
        int64_t var_118_1 = var_60;
        var_138 = var_80;
        int64_t* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&var_138);
        int64_t var_158;
        
        if (rax_2)
        {
            while (true)
            {
                int64_t rcx = rax_2[1];
                
                if (rcx == -0x7fffffffffffffff)
                    goto label_55f1db;
                
                var_150 = *(rax_2 + 0x10);
                var_160 = *rax_2;
                var_158 = rcx;
                core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&var_108, &var_160);
                int64_t rax_3 = var_108;
                var_e8 = var_100;
                
                if (rax_3 == -0x8000000000000000)
                    goto label_55f1db;
                
                var_160 = rax_3;
                var_158 = var_e8;
                void** rax_4 =
                    uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg2, var_158, var_150);
                
                if (rax_4)
                {
                    *arg1 = 0;
                    arg1[1] = rax_4;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                        &var_160);
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_160);
                rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&var_138);
                
                if (!rax_2)
                    goto label_55f1db;
            }
            
            return core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&var_138);
        }
        
        label_55f1db:
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&var_138);
        arg8[0xa] = 1;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_160, arg8);
        int64_t rax_5 = var_158;
        rbp_1 = arg2;
        
        if (rax_5 != -0x7fffffffffffffff)
        {
            while (true)
            {
                rdx_8 = var_150;
                
                if (rax_5 == -0x8000000000000000)
                    goto label_55f519;
                
                int64_t r13_1 = var_160;
                var_e8 = rax_5;
                *var_e8[8] = rdx_8;
                uint64_t var_148;
                void** rax_14;
                
                if (!regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(arg5, arg6, rdx_8, 
                    var_148))
                {
                    rax_14 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(rbp_1, *var_e8[8], 
                        var_148);
                    
                    if (!rax_14)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_e8);
                        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_160, arg8);
                        rax_5 = var_158;
                        
                        if (rax_5 == -0x7fffffffffffffff)
                            break;
                        
                        continue;
                    }
                    
                    *arg1 = 0;
                    arg1[1] = rax_14;
                }
                else
                {
                    char rbx_1;
                    
                    if (!*(rbp_1[4] + 0x63))
                    {
                        if (!arg7)
                        {
                            int128_t var_128_1;
                            var_128_1 = var_148;
                            var_138 = var_e8;
                            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&var_108, arg8, r13_1, &var_138);
                            
                            if (var_108 == -0x8000000000000000)
                            {
                                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_108);
                                rbx_1 = 1;
                                goto label_55f8b7;
                            }
                            
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_108);
                            var_138 = &data_6deb50;
                            *var_138[8] = 1;
                            var_128_1 = 8;
                            var_128_1 = {0};
                            core::panicking::panic_fmt::he12d0d7468628bb4(&var_138);
                            /* no return */
                        }
                        
                        rbp_1 = 1;
                        rax_14 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg2, 
                            *var_e8[8], var_148);
                        
                        if (!rax_14)
                            goto label_55f559;
                        
                        *arg1 = 0;
                        arg1[1] = rax_14;
                    }
                    else
                    {
                        label_55f559:
                        rbp_1 = 1;
                        
                        if (arg7 < 2)
                            rbx_1 = 0;
                        else
                        {
                            int32_t i = arg7 + 1;
                            void** (* rbp_2)(int64_t* arg1, int64_t arg2, uint64_t arg3);
                            
                            do
                            {
                                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_138, arg8);
                                int64_t rax_19 = *var_138[8];
                                
                                if (rax_19 == -0x7fffffffffffffff)
                                {
                                    rbp_2 = 1;
                                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(arg2);
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&var_108, arg3, arg4);
                                    arg1[3] = var_f8;
                                    *(arg1 + 8) = var_108;
                                    *arg1 = 1;
                                    goto label_55f976;
                                }
                                
                                int128_t var_70;
                                int64_t rsi_17 = var_70;
                                
                                if (rax_19 == -0x8000000000000000)
                                {
                                    *arg1 = 0;
                                    arg1[1] = rsi_17;
                                    goto label_55f976;
                                }
                                
                                uint64_t rdx_9 = *var_70[8];
                                var_108 = rax_19;
                                int64_t var_100_1 = rsi_17;
                                var_f8 = rdx_9;
                                void** rax_20 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(
                                    arg2, rsi_17, rdx_9);
                                
                                if (rax_20)
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_20;
                                    rbp_2 = 1;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_108);
                                    goto label_55f976;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_108);
                                i -= 1;
                            } while (i > 2);
                            
                            rbx_1 = 0;
                            rbp_2 = 1;
                        }
                        
                        label_55f8b7:
                        uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(arg2);
                        *arg1 = 0xc;
                        
                        if (rbx_1)
                            return arg1;
                    }
                }
                label_55f976:
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                    &var_e8);
            }
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&var_160);
        goto label_55f344;
    }
    
    int64_t rax_7 = -(arg7);
    arg8[0xa] = rax_7;
    _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_108, arg8);
    int64_t rax_8 = var_100;
    int64_t* rax_12;
    
    if (rax_8 != -0x7fffffffffffffff)
    {
        while (true)
        {
            rdx_8 = var_f8;
            
            if (rax_8 == -0x8000000000000000)
                break;
            
            int64_t r12_1 = var_108;
            int64_t var_b0 = rax_8;
            uint64_t var_a8_1 = rdx_8;
            int64_t var_f0;
            
            if (regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(arg5, arg6, rdx_8, 
                var_f0))
            {
                int128_t var_58;
                uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2f0373906384d08b(
                    &var_58, arg8);
                int64_t var_38;
                int64_t var_118_2 = var_38;
                int64_t var_48;
                int64_t var_128_2 = var_48;
                var_138 = var_58;
                int64_t* rax_22 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&var_138);
                
                if (!rax_22)
                {
                    label_55f6f8:
                    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&var_138);
                    char rbp_4 = *(arg2[4] + 0x63);
                    
                    if (!rbp_4)
                    {
                        arg8[0xa] = rax_7 + 1;
                        var_128_2 = var_f0;
                        var_138 = var_b0;
                        uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(
                            &var_160, arg8, r12_1, &var_138);
                        int64_t r14_2 = var_160;
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h0ea097dc4fc5bc24(&var_160);
                        
                        if (r14_2 != -0x8000000000000000)
                        {
                            var_138 = &data_6deb90;
                            *var_138[8] = 1;
                            var_128_2 = 8;
                            *var_128_2[8] = {0};
                            core::panicking::panic_fmt::he12d0d7468628bb4(&var_138);
                            /* no return */
                        }
                    }
                    
                    uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(arg2);
                    rax_12 = 0xc;
                    
                    if (arg8[2] < rax_7)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(&var_138, arg3, arg4);
                        arg1[3] = var_128_2;
                        *(arg1 + 8) = var_138;
                        rax_12 = 1;
                    }
                    
                    *arg1 = rax_12;
                    
                    if (!rbp_4)
                        return rax_12;
                }
                else
                {
                    while (true)
                    {
                        int64_t rcx_6 = rax_22[1];
                        
                        if (rcx_6 == -0x7fffffffffffffff)
                            goto label_55f6f8;
                        
                        var_150 = *(rax_22 + 0x10);
                        var_160 = *rax_22;
                        int64_t var_158_2 = rcx_6;
                        core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h255b9cb46bd12424(&var_e8, &var_160);
                        int64_t rax_23 = var_e8;
                        int128_t zmm0_7 = var_e8;
                        
                        if (rax_23 == -0x8000000000000000)
                            goto label_55f6f8;
                        
                        var_160 = rax_23;
                        var_158_2 = zmm0_7;
                        void** rax_24 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg2, 
                            var_158_2, var_150);
                        
                        if (rax_24)
                        {
                            *arg1 = 0;
                            arg1[1] = rax_24;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_160);
                            core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&var_138);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_160);
                        rax_22 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&var_138);
                        
                        if (!rax_22)
                            goto label_55f6f8;
                    }
                }
                
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                    &var_b0);
            }
            
            int128_t var_128;
            var_128 = var_f0;
            var_138 = var_b0;
            uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(&var_160, 
                arg8, r12_1, &var_138);
            
            if (var_160 != -0x8000000000000000)
            {
                var_138 = var_160;
                var_128 = var_150;
                void** rax_17 =
                    uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(arg2, *var_138[8], var_150);
                
                if (rax_17)
                {
                    *arg1 = 0;
                    arg1[1] = rax_17;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                        &var_138);
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_138);
            }
            
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_108, arg8);
            rax_8 = var_100;
            
            if (rax_8 == -0x7fffffffffffffff)
                goto label_55f258;
        }
        
        label_55f519:
        rax_12 = arg1;
        *rax_12 = 0;
        rax_12[1] = rdx_8;
    }
    else
    {
        label_55f258:
        rbp_1 = arg2;
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$GT$::h55df8f1ce1418121(&var_108);
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hf59e40ec0b90ed17(&var_138, arg8);
        int64_t* rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&var_138);
        
        if (rax_9)
        {
            while (true)
            {
                int64_t rcx_1 = rax_9[1];
                
                if (rcx_1 == -0x7fffffffffffffff)
                    goto label_55f33c;
                
                var_150 = *(rax_9 + 0x10);
                var_160 = *rax_9;
                int64_t var_158_1 = rcx_1;
                core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h4a2bc384fee84094(&var_108, &var_160);
                int64_t rax_10 = var_108;
                var_e8 = var_100;
                
                if (rax_10 == -0x8000000000000000)
                    goto label_55f33c;
                
                var_160 = rax_10;
                var_158_1 = var_e8;
                void** rax_11 =
                    uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(rbp_1, var_158_1, var_150);
                
                if (rax_11)
                {
                    *arg1 = 0;
                    arg1[1] = rax_11;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                        &var_160);
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_160);
                rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2f19bf5df3e367f(&var_138);
                
                if (!rax_9)
                    goto label_55f33c;
            }
            
            return core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&var_138);
        }
        
        label_55f33c:
        core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..drain..Drain$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$RP$$GT$$C$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$..drain_buffer..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h99f18624c89a3c7e(&var_138);
        label_55f344:
        uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(rbp_1);
        rax_12 = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h86097ab9bff6af61(
            &arg1[1], arg3, arg4);
        *arg1 = 3;
    }
    
    return rax_12;
}
