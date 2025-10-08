
  fn uu_chmod::Chmoder::chmod::h92b1b878e45c814b(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> u64

{
    let mut rbp: *mut i64;
    let var_8: *mut i64 = rbp;
    
    if arg3 == 0
    {
        return 0;
    }
    
    let mut r12_1: *mut c_void = arg2;
    let r15_1: *mut c_void = arg2.byte_offset(arg3 * 0x18);
    let mut rax_2: *mut c_void = arg2.byte_offset(0x18);
    let rdx: bool = *arg1.byte_offset(0x25);
    let rcx_1: i8 = *arg1.byte_offset(0x21);
    let rcx_2: i8 = *arg1.byte_offset(0x22);
    let rsi: i8 = *arg1.byte_offset(0x24);
    let rdi: i8 = *arg1.byte_offset(0x23);
    let mut rdx_1: bool = rdx ^ 1;
    
    if (rsi & 1) != 0
    {
        rdx_1 = *arg1.byte_offset(0x26) == 0;
    }
    
    let mut rcx_4: u64 = 0;
    let mut r14_2: u64;
    
    loop
    {
        let r14_1: *mut i8 = *r12_1.byte_offset(8);
        let rbp_1: u64 = *r12_1.byte_offset(0x10);
        r12_1 = rax_2;
        let mut var_128: *mut *mut c_void;
        std::fs::metadata::hebe044cf0ef3250e(&var_128, r14_1);
        let rbx_1: *mut *mut c_void = var_128;
        let mut var_120: i64;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haa1cfc1a32482bd2(rbx_1, var_120);
        let mut var_188: *mut i64;
        let mut var_178: *mut *mut i64;
        
        if rbx_1 == 2
        {
            let mut var_150: u64;
            
            if std::path::Path::is_symlink::h004cfac91d04dbc0(r14_1, rbp_1) == 0
            {
                if (rcx_1 & 1) == 0
                {
                    var_178 = nullptr;
                    let var_170_4: *mut i8 = r14_1;
                    let var_168_4: u64 = rbp_1;
                    let mut var_160_3: i8 = 1;
                    var_188 = &var_178;
                    let var_180_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb9a8;
                    let var_120_2: i64 = 2;
                    let var_108_4: i64 = 0;
                    let var_118_5: *mut *mut i64 = &var_188;
                    let mut var_110_4: i64 = 1;
                    let mut var_60: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_60, 
                        &var_128);
                    var_110_4 = 1;
                    var_128 = var_60;
                    let var_50: i64;
                    let var_118_6: i64 = var_50;
                    let rax_10: u64 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_128);
                    var_150 = rax_10;
                    let var_148_2: *mut i64 = &data_4eba08;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_10));
                    let mut rax_12: *mut i64;
                    let mut rdx_4: i64;
                    rax_12 = uucore::util_name::h074417a1e6395129();
                    var_188 = rax_12;
                    let var_180_5: i64 = rdx_4;
                    var_178 = &var_188;
                    let var_170_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa873f8513a6c9b;
                    let var_168_5: *mut u64 = &var_150;
                    var_160_3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc126fa3594fc5fce;
                    var_128 = &data_4eb958;
                    var_120 = 3;
                    let var_108_5: i64 = 0;
                    let var_118_7: *mut *mut *mut i64 = &var_178;
                    let var_110_5: i64 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h98e78635d0352fa4(var_150, var_148_2);
                }
                
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            else if (rdx_1 & 1) == 0
            {
                if (rcx_1 & 1) == 0
                {
                    var_178 = nullptr;
                    let var_170_1: *mut i8 = r14_1;
                    let var_168_1: u64 = rbp_1;
                    let mut var_160_1: i8 = 1;
                    var_188 = &var_178;
                    let var_180_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb948;
                    let var_120_1: i64 = 1;
                    let var_108_1: i64 = 0;
                    let var_118_1: *mut *mut i64 = &var_188;
                    let mut var_110_1: i64 = 1;
                    let mut var_78: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_78, 
                        &var_128);
                    var_110_1 = 1;
                    var_128 = var_78;
                    let var_68: i64;
                    let var_118_2: i64 = var_68;
                    let rax_5: u64 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_128);
                    var_150 = rax_5;
                    let var_148_1: *mut *mut c_void = &data_4eba08;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_5));
                    let mut rax_7: *mut i64;
                    let mut rdx_3: i64;
                    rax_7 = uucore::util_name::h074417a1e6395129();
                    var_188 = rax_7;
                    let var_180_2: i64 = rdx_3;
                    var_178 = &var_188;
                    let var_170_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa873f8513a6c9b;
                    let var_168_2: *mut u64 = &var_150;
                    var_160_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc126fa3594fc5fce;
                    var_128 = &data_4eb958;
                    var_120 = 3;
                    let var_108_2: i64 = 0;
                    let var_118_3: *mut *mut *mut i64 = &var_178;
                    let var_110_2: i64 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h98e78635d0352fa4(var_150, var_148_1);
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                }
                
                if (rcx_2 & 1) != 0
                {
                    var_178 = nullptr;
                    let var_170_3: *mut i8 = r14_1;
                    let var_168_3: u64 = rbp_1;
                    let var_160_2: i8 = 1;
                    var_188 = &var_178;
                    let var_180_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb988;
                    var_120 = 2;
                    let var_108_3: i64 = 0;
                    let var_118_4: *mut *mut i64 = &var_188;
                    let var_110_3: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_128);
                }
                
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
        }
        else if (rdx & 1) != 0
        {
            'label_45e415:
            let mut var_140: *mut i64;
            
            if (rsi & 1) == 0
            {
                let mut rax_15: u64;
                let mut rdx_8: *mut i64;
                rax_15 = uu_chmod::Chmoder::chmod_file::h265d0431d919c569(arg1, r14_1, rbp_1);
                let mut rax_16: u64;
                let mut rdx_10: *mut i64;
                rax_16 = core::result::Result$LT$T$C$E$GT$::and::h77e5678da19ca805(rax_15, rdx_8, 
                    rcx_4, var_140);
                r14_2 = rax_16;
                rbp = rdx_10;
            }
            else
            {
                if (rdi & 1) != 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h75b4e74c9e510268(r14_1, rbp_1, "/neither symbolic link  nor refe…", 1) != 0
                {
                    var_178 = nullptr;
                    let var_170_6: *mut i8 = r14_1;
                    let var_168_6: u64 = rbp_1;
                    let var_160_4: i8 = 1;
                    var_188 = &var_178;
                    let var_180_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb9c8;
                    let var_120_3: i64 = 2;
                    let var_108_6: i64 = 0;
                    let var_118_8: *mut *mut i64 = &var_188;
                    let mut var_110_6: i64 = 1;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_48, 
                        &var_128);
                    var_110_6 = 1;
                    var_128 = var_48;
                    let var_38: i64;
                    let var_118_9: i64 = var_38;
                    r14_2 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_128);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h9fbd8f8cb57f1996(rcx_4, var_140);
                    break;
                }
                
                let mut rax_14: u64;
                let mut rdx_6: *mut i64;
                rax_14 = uu_chmod::Chmoder::walk_dir::ha01070efe2a4054d(arg1, r14_1, rbp_1);
                r14_2 = rax_14;
                rbp = rdx_6;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h9fbd8f8cb57f1996(rcx_4, var_140);
            }
            
            rax_2 = r12_1.byte_offset(0x18);
            rcx_4 = r14_2;
            var_140 = rbp;
            
            if r12_1 == r15_1
            {
                rax_2 = r12_1;
            }
            
            if r12_1 == r15_1
            {
                break;
            }
            
            continue;
        }
        else if std::path::Path::is_symlink::h004cfac91d04dbc0(r14_1, rbp_1) == 0
        {
            goto 'label_45e415;
        }
        rax_2 = r12_1.byte_offset(0x18);
        
        if r12_1 == r15_1
        {
            return rcx_4;
        }
    }
    
    r14_2
}
