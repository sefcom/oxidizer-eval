
  uint64_t uu_chmod::Chmoder::chmod::h92b1b878e45c814b(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t* rbp;
    int64_t* var_8 = rbp;
    
    if (!arg3)
        return 0;
    
    void* r12_1 = arg2;
    void* r15_1 = arg2 + arg3 * 0x18;
    void* rax_2 = arg2 + 0x18;
    bool rdx = *(arg1 + 0x25);
    char rcx_1 = *(arg1 + 0x21);
    char rcx_2 = *(arg1 + 0x22);
    char rsi = *(arg1 + 0x24);
    char rdi = *(arg1 + 0x23);
    bool rdx_1 = rdx ^ 1;
    
    if (rsi & 1)
        rdx_1 = !*(arg1 + 0x26);
    
    uint64_t rcx_4 = 0;
    uint64_t r14_2;
    
    while (true)
    {
        char* r14_1 = *(r12_1 + 8);
        uint64_t rbp_1 = *(r12_1 + 0x10);
        r12_1 = rax_2;
        void** const var_128;
        std::fs::metadata::hebe044cf0ef3250e(&var_128, r14_1);
        void** const rbx_1 = var_128;
        int64_t var_120;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haa1cfc1a32482bd2(rbx_1, var_120);
        int64_t* var_188;
        int64_t** var_178;
        
        if (rbx_1 == 2)
        {
            uint64_t var_150;
            
            if (!std::path::Path::is_symlink::h004cfac91d04dbc0(r14_1, rbp_1))
            {
                if (!(rcx_1 & 1))
                {
                    var_178 = nullptr;
                    char* var_170_4 = r14_1;
                    uint64_t var_168_4 = rbp_1;
                    char var_160_3 = 1;
                    var_188 = &var_178;
                    int64_t (* var_180_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb9a8;
                    int64_t var_120_2 = 2;
                    int64_t var_108_4 = 0;
                    int64_t** var_118_5 = &var_188;
                    int64_t var_110_4 = 1;
                    int128_t var_60;
                    core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_60, 
                        &var_128);
                    var_110_4 = 1;
                    var_128 = var_60;
                    int64_t var_50;
                    int64_t var_118_6 = var_50;
                    uint64_t rax_10 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_128);
                    var_150 = rax_10;
                    int64_t* var_148_2 = &data_4eba08;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_10));
                    int64_t* rax_12;
                    int64_t rdx_4;
                    rax_12 = uucore::util_name::h074417a1e6395129();
                    var_188 = rax_12;
                    int64_t var_180_5 = rdx_4;
                    var_178 = &var_188;
                    int64_t (* var_170_5)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa873f8513a6c9b;
                    uint64_t* var_168_5 = &var_150;
                    var_160_3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc126fa3594fc5fce;
                    var_128 = &data_4eb958;
                    var_120 = 3;
                    int64_t var_108_5 = 0;
                    int64_t*** var_118_7 = &var_178;
                    int64_t var_110_5 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h98e78635d0352fa4(var_150, var_148_2);
                }
                
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            else if (!(rdx_1 & 1))
            {
                if (!(rcx_1 & 1))
                {
                    var_178 = nullptr;
                    char* var_170_1 = r14_1;
                    uint64_t var_168_1 = rbp_1;
                    char var_160_1 = 1;
                    var_188 = &var_178;
                    int64_t (* var_180_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb948;
                    int64_t var_120_1 = 1;
                    int64_t var_108_1 = 0;
                    int64_t** var_118_1 = &var_188;
                    int64_t var_110_1 = 1;
                    int128_t var_78;
                    core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_78, 
                        &var_128);
                    var_110_1 = 1;
                    var_128 = var_78;
                    int64_t var_68;
                    int64_t var_118_2 = var_68;
                    uint64_t rax_5 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_128);
                    var_150 = rax_5;
                    void** const var_148_1 = &data_4eba08;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::ha04d37fdd51c3108(rax_5));
                    int64_t* rax_7;
                    int64_t rdx_3;
                    rax_7 = uucore::util_name::h074417a1e6395129();
                    var_188 = rax_7;
                    int64_t var_180_2 = rdx_3;
                    var_178 = &var_188;
                    int64_t (* var_170_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9aa873f8513a6c9b;
                    uint64_t* var_168_2 = &var_150;
                    var_160_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc126fa3594fc5fce;
                    var_128 = &data_4eb958;
                    var_120 = 3;
                    int64_t var_108_2 = 0;
                    int64_t*** var_118_3 = &var_178;
                    int64_t var_110_2 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h98e78635d0352fa4(var_150, var_148_1);
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                }
                
                if (rcx_2 & 1)
                {
                    var_178 = nullptr;
                    char* var_170_3 = r14_1;
                    uint64_t var_168_3 = rbp_1;
                    char var_160_2 = 1;
                    var_188 = &var_178;
                    int64_t (* var_180_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb988;
                    var_120 = 2;
                    int64_t var_108_3 = 0;
                    int64_t** var_118_4 = &var_188;
                    int64_t var_110_3 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_128);
                }
                
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
        }
        else if (rdx & 1)
        {
            label_45e415:
            int64_t* var_140;
            
            if (!(rsi & 1))
            {
                uint64_t rax_15;
                int64_t* rdx_8;
                rax_15 = uu_chmod::Chmoder::chmod_file::h265d0431d919c569(arg1, r14_1, rbp_1);
                uint64_t rax_16;
                int64_t* rdx_10;
                rax_16 = core::result::Result$LT$T$C$E$GT$::and::h77e5678da19ca805(rax_15, rdx_8, 
                    rcx_4, var_140);
                r14_2 = rax_16;
                rbp = rdx_10;
            }
            else
            {
                if (rdi & 1 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h75b4e74c9e510268(r14_1, rbp_1, "/neither symbolic link  nor refe…", 1))
                {
                    var_178 = nullptr;
                    char* var_170_6 = r14_1;
                    uint64_t var_168_6 = rbp_1;
                    char var_160_4 = 1;
                    var_188 = &var_178;
                    int64_t (* var_180_6)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_128 = &data_4eb9c8;
                    int64_t var_120_3 = 2;
                    int64_t var_108_6 = 0;
                    int64_t** var_118_8 = &var_188;
                    int64_t var_110_6 = 1;
                    int128_t var_48;
                    core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_48, 
                        &var_128);
                    var_110_6 = 1;
                    var_128 = var_48;
                    int64_t var_38;
                    int64_t var_118_9 = var_38;
                    r14_2 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_128);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h9fbd8f8cb57f1996(rcx_4, var_140);
                    break;
                }
                
                uint64_t rax_14;
                int64_t* rdx_6;
                rax_14 = uu_chmod::Chmoder::walk_dir::ha01070efe2a4054d(arg1, r14_1, rbp_1);
                r14_2 = rax_14;
                rbp = rdx_6;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h9fbd8f8cb57f1996(rcx_4, var_140);
            }
            
            rax_2 = r12_1 + 0x18;
            rcx_4 = r14_2;
            var_140 = rbp;
            
            if (r12_1 == r15_1)
                rax_2 = r12_1;
            
            if (r12_1 == r15_1)
                break;
            
            continue;
        }
        else if (!std::path::Path::is_symlink::h004cfac91d04dbc0(r14_1, rbp_1))
            goto label_45e415;
        rax_2 = r12_1 + 0x18;
        
        if (r12_1 == r15_1)
            return rcx_4;
    }
    
    return r14_2;
}
