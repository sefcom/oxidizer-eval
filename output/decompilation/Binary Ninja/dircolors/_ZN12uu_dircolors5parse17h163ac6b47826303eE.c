
  int64_t uu_dircolors::parse::h163ac6b47826303e(int64_t* arg1, int128_t* arg2, char* arg3)

{
    int128_t* var_f8 = arg2;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha8abe563750e5762(0x6fe, 1, 1);
    int64_t var_200 = rax;
    int64_t var_1f0 = 0;
    int64_t var_160;
    uu_dircolors::get_colors_format_strings::h31238be5fa82f8cf(&var_160, arg3);
    int64_t rax_1 = var_160;
    int64_t var_158;
    int64_t var_150;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h41789321aeb99812(&var_200, var_158, var_150 + var_158);
    std::env::var::hd4d33a07491f9aea(&var_160, "TERM.jartruehurdDOOR.asf.flisock…");
    int128_t var_1a8;
    int64_t var_198;
    int64_t var_148;
    
    if (var_160 != 1)
    {
        var_198 = var_148;
        var_1a8 = var_158;
    }
    else
        uu_dircolors::parse::_$u7b$$u7b$closure$u7d$$u7d$::h3c0c1a327880a39d(&var_1a8, var_158, 
            var_150);
    
    std::env::var::hd4d33a07491f9aea(&var_160, "COLORTERM?*");
    int64_t var_c0;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h0a98fee9011ad073(&var_c0, &var_160);
    char* var_128;
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h779c9daaa13168a7(
        &var_128, arg2);
    core::iter::traits::iterator::Iterator::enumerate::h54553eecb6857241(&var_160, &var_128);
    int64_t rax_6 = *var_1a8[8];
    int32_t var_220 = 0;
    char var_21c = 0;
    int64_t rsi_26;
    int64_t rdi_30;
    
    while (true)
    {
        int64_t var_88;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf4ef5462351ecf7(&var_88, &var_160);
        int64_t var_140;
        int64_t var_b8;
        int64_t var_80;
        
        if (var_80 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::hefe10b90d18057c1(&var_160);
            
            if (*arg3 == 2)
                alloc::string::String::pop::h86cb5b5bb86d0e70(&var_200);
            
            int64_t var_138;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h41789321aeb99812(&var_200, var_140, var_138 + var_140);
            arg1[3] = var_1f0;
            *(arg1 + 8) = var_200;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_c0, 
                var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_1a8, 
                rax_6);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_148, 
                var_140);
            rdi_30 = rax_1;
            rsi_26 = var_158;
            break;
        }
        
        int64_t var_a8 = var_88 + 1;
        int64_t var_78;
        char* rax_10;
        uint64_t rdx_6;
        rax_10 = alloc::str::_$LT$impl$u20$core..borrow..Borrow$LT$str$GT$$u20$for$u20$alloc..string..String$GT$::borrow::ha1888a208b370400(var_78);
        int64_t rax_11;
        int64_t rdx_7;
        rax_11 = _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::purify::hd71191958d806867(rax_10, 
            rdx_6);
        
        if (rdx_7)
        {
            int64_t var_a0;
            uu_dircolors::escape::h43afab8edf490a36(&var_a0, rax_11, rdx_7);
            char* var_98;
            int64_t var_90;
            _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::split_two::h677a64120490298f(&var_128, 
                var_98, var_90);
            uint64_t var_110;
            int64_t var_180;
            
            if (!var_110)
            {
                var_180 = 0;
                int64_t rcx;
                int64_t var_178_1 = rcx;
                int64_t r8;
                int64_t var_170_1 = r8;
                char var_168_1 = 0;
                int64_t* var_68 = &var_180;
                int64_t (* var_60_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int64_t* var_58_1 = &var_a8;
                uint64_t (* var_50_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_128 = &data_4f4f00;
                int64_t var_120_1 = 3;
                int64_t var_108_1 = 0;
                int64_t** var_118_1 = &var_68;
                int64_t var_110_1 = 2;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_48, &var_128);
                int64_t var_38;
                arg1[3] = var_38;
                *(arg1 + 8) = var_48;
                *arg1 = 1;
            }
            else
            {
                char* rsi_12 = var_128;
                uint64_t var_120;
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_180, 
                    rsi_12, var_120);
                uint64_t var_178;
                uint64_t var_170;
                uint64_t var_118;
                uint64_t r14_1;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(var_178, var_170, "term.jpgexec) = .zst.bmp.yuv.bak…", 4))
                {
                    r14_1 = 1;
                    
                    if (!_$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::hd0959e399c94f5da(
                        rax_6, var_198, var_118, var_110))
                    {
                        r14_1 = var_21c;
                        
                        if (!var_21c)
                            r14_1 = 3;
                    }
                    
                    goto label_45ec99;
                }
                
                uint64_t r12_2;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(var_178, var_170, "colorterm/home/34r7hm4n/.rustup/…", 9))
                {
                    int64_t var_b0;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(var_118, var_110, "?*", 2))
                    {
                        r14_1 = 1;
                        r12_2 = 1;
                        
                        if (!_$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::hd0959e399c94f5da(var_b8, var_b0, var_118, var_110))
                        {
                            label_45ec20:
                            uint32_t rax_23 = var_21c;
                            r14_1 = 3;
                            
                            if (var_21c)
                                r14_1 = rax_23;
                            
                            if (var_220 & 1)
                                r14_1 = rax_23;
                            
                            r12_2 = var_220;
                        }
                    }
                    else
                    {
                        r14_1 = 1;
                        r12_2 = 1;
                        
                        if (!var_b0)
                            goto label_45ec20;
                    }
                    goto label_45eca9;
                }
                
                r14_1 = var_21c;
                
                if (var_21c == 1)
                    r14_1 = 2;
                
                char* rax_24;
                
                if (r14_1 != 3)
                {
                    uint64_t var_238_1 = var_110;
                    uu_dircolors::append_entry::haa18374ab1d5b18d(&var_128, &var_200, arg3, rsi_12, 
                        var_120, var_178, var_170, var_118);
                    rax_24 = var_128;
                    
                    if (rax_24 == -0x8000000000000000)
                        goto label_45ec99;
                }
                else
                {
                    r14_1 = 3;
                    label_45ec99:
                    r12_2 = var_220;
                    label_45eca9:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(
                        var_180, var_178);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(
                        var_a0, var_98);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(
                        var_80, var_78);
                    var_220 = r12_2;
                    var_21c = r14_1;
                    continue;
                }
                
                *(arg1 + 0x10) = var_120;
                arg1[1] = rax_24;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_180, 
                    var_178);
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_a0, 
                var_98);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_80, 
                var_78);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::hefe10b90d18057c1(&var_160);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_c0, 
                var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_1a8, 
                rax_6);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_148, 
                var_140);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(rax_1, 
                var_158);
            rdi_30 = var_200;
            rsi_26 = rdx;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_80, var_78);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(rdi_30, rsi_26);
}
