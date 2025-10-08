
  fn uu_dircolors::parse::h163ac6b47826303e(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8) -> i64

{
    let var_f8: *mut i128 = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha8abe563750e5762(0x6fe, 1, 1);
    let mut var_200: i64 = rax;
    let var_1f0: i64 = 0;
    let mut var_160: i64;
    uu_dircolors::get_colors_format_strings::h31238be5fa82f8cf(&var_160, arg3);
    let rax_1: i64 = var_160;
    let var_158: i64;
    let var_150: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h41789321aeb99812(&var_200, var_158, var_150 + var_158);
    std::env::var::hd4d33a07491f9aea(&var_160, "TERM.jartruehurdDOOR.asf.flisock…");
    let mut var_1a8: i128;
    let mut var_198: i64;
    let var_148: i64;
    
    if var_160 != 1
    {
        var_198 = var_148;
        var_1a8 = var_158;
    }
    else
    {
        uu_dircolors::parse::_$u7b$$u7b$closure$u7d$$u7d$::h3c0c1a327880a39d(&var_1a8, var_158, 
            var_150);
    }
    
    std::env::var::hd4d33a07491f9aea(&var_160, "COLORTERM?*");
    let mut var_c0: i64;
    core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h0a98fee9011ad073(&var_c0, &var_160);
    let mut var_128: *mut i8;
    _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h779c9daaa13168a7(
        &var_128, arg2);
    core::iter::traits::iterator::Iterator::enumerate::h54553eecb6857241(&var_160, &var_128);
    let rax_6: i64 = *var_1a8[8];
    let mut var_220: i32 = 0;
    let mut var_21c: i8 = 0;
    let mut rsi_26: i64;
    let mut rdi_30: i64;
    
    loop
    {
        let mut var_88: i64;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf4ef5462351ecf7(&var_88, &var_160);
        let var_140: i64;
        let var_b8: i64;
        let var_80: i64;
        
        if var_80 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map_while..MapWhile$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$..ok$GT$$GT$$GT$::hefe10b90d18057c1(&var_160);
            
            if *arg3 == 2
            {
                alloc::string::String::pop::h86cb5b5bb86d0e70(&var_200);
            }
            
            let var_138: i64;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h41789321aeb99812(&var_200, var_140, var_138 + var_140);
            arg1[3] = var_1f0;
            *arg1.byte_offset(8) = var_200;
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
        
        let mut var_a8: i64 = var_88 + 1;
        let var_78: i64;
        let mut rax_10: *mut i8;
        let mut rdx_6: u64;
        rax_10 = alloc::str::_$LT$impl$u20$core..borrow..Borrow$LT$str$GT$$u20$for$u20$alloc..string..String$GT$::borrow::ha1888a208b370400(var_78);
        let mut rax_11: i64;
        let mut rdx_7: i64;
        rax_11 = _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::purify::hd71191958d806867(rax_10, 
            rdx_6);
        
        if rdx_7 != 0
        {
            let mut var_a0: i64;
            uu_dircolors::escape::h43afab8edf490a36(&var_a0, rax_11, rdx_7);
            let var_98: *mut i8;
            let var_90: i64;
            _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::split_two::h677a64120490298f(&var_128, 
                var_98, var_90);
            let var_110: u64;
            let mut var_180: i64;
            
            if var_110 == 0
            {
                var_180 = 0;
                let rcx: i64;
                let var_178_1: i64 = rcx;
                let r8: i64;
                let var_170_1: i64 = r8;
                let var_168_1: i8 = 0;
                let mut var_68: *mut i64 = &var_180;
                let var_60_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_58_1: *mut i64 = &var_a8;
                let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_128 = &data_4f4f00;
                let var_120_1: i64 = 3;
                let var_108_1: i64 = 0;
                let var_118_1: *mut *mut i64 = &var_68;
                let var_110_1: i64 = 2;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_48, &var_128);
                let var_38: i64;
                arg1[3] = var_38;
                *arg1.byte_offset(8) = var_48;
                *arg1 = 1;
            }
            else
            {
                let rsi_12: *mut i8 = var_128;
                let var_120: u64;
                alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_180, 
                    rsi_12, var_120);
                let var_178: u64;
                let var_170: u64;
                let var_118: u64;
                let mut r14_1: u64;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(var_178, var_170, "term.jpgexec) = .zst.bmp.yuv.bak…", 4) != 0
                {
                    r14_1 = 1;
                    
                    if _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::hd0959e399c94f5da(
                        rax_6, var_198, var_118, var_110) == 0
                    {
                        r14_1 = var_21c;
                        
                        if var_21c == 0
                        {
                            r14_1 = 3;
                        }
                    }
                    
                    goto 'label_45ec99;
                }
                
                let mut r12_2: u64;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(var_178, var_170, "colorterm/home/34r7hm4n/.rustup/…", 9) != 0
                {
                    let var_b0: i64;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(var_118, var_110, "?*", 2) == 0
                    {
                        r14_1 = 1;
                        r12_2 = 1;
                        
                        if _$LT$str$u20$as$u20$uu_dircolors..StrUtils$GT$::fnmatch::hd0959e399c94f5da(var_b8, var_b0, var_118, var_110) == 0
                        {
                            'label_45ec20:
                            let rax_23: u32 = var_21c;
                            r14_1 = 3;
                            
                            if var_21c != 0
                            {
                                r14_1 = rax_23;
                            }
                            
                            if (var_220 & 1) != 0
                            {
                                r14_1 = rax_23;
                            }
                            
                            r12_2 = var_220;
                        }
                    }
                    else
                    {
                        r14_1 = 1;
                        r12_2 = 1;
                        
                        if var_b0 == 0
                        {
                            goto 'label_45ec20;
                        }
                    }
                    goto 'label_45eca9;
                }
                
                r14_1 = var_21c;
                
                if var_21c == 1
                {
                    r14_1 = 2;
                }
                
                let mut rax_24: *mut i8;
                
                if r14_1 != 3
                {
                    let var_238_1: u64 = var_110;
                    uu_dircolors::append_entry::haa18374ab1d5b18d(&var_128, &var_200, arg3, rsi_12, 
                        var_120, var_178, var_170, var_118);
                    rax_24 = var_128;
                    
                    if rax_24 == -0x8000000000000000
                    {
                        goto 'label_45ec99;
                    }
                }
                else
                {
                    r14_1 = 3;
                    'label_45ec99:
                    r12_2 = var_220;
                    'label_45eca9:
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
                
                *arg1.byte_offset(0x10) = var_120;
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
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(rdi_30, rsi_26)
}
