
  int64_t alacritty::migrate::yaml::migrate_imports::he16b1e9186b09947(int128_t* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int32_t var_218;
    uint64_t rdx_1 =
        alacritty::config::imports::he228980ef6034b5f(&var_218, arg3, arg4, arg5, arg6);
    int128_t var_210;
    int64_t var_200;
    int128_t var_1b8;
    int128_t* var_178;
    char const (** const var_158)[0xfd];
    
    if (var_218 == 1)
    {
        int64_t var_1a8_1 = var_200;
        var_1b8 = var_210;
        var_178 = &var_1b8;
        int64_t (* var_170_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_158 = &data_c832c0;
        int64_t var_150_1 = 1;
        int64_t var_138_1 = 0;
        int128_t** var_148_1 = &var_178;
        int64_t var_140_1 = 1;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_60, 0, rdx_1, &var_158);
        int64_t var_50;
        arg1[1] = var_50;
        *arg1 = var_60;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_1b8);
    }
    
    int64_t var_68_1 = var_200;
    int128_t var_78 = var_210;
    int64_t var_1d0 = 0;
    int64_t var_1c8_1 = 8;
    int64_t var_1c0_1 = 0;
    void var_98;
    uint64_t rdx_2 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2441c7966b064cd0(&var_98, &var_78);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&var_178, &var_98);
    int128_t* rax_3 = var_178;
    int64_t var_150;
    
    if (rax_3 != 2)
    {
        char r13_1 = *(arg2 + 0x18);
        
        while (true)
        {
            int64_t var_170;
            uint64_t var_160;
            
            if (rax_3 & 1)
            {
                *var_210[8] = var_160;
                var_218 = var_170;
                var_1b8 = &var_218;
                *var_1b8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_158 = &data_c832c0;
                int64_t var_150_2 = 1;
                int64_t var_138_4 = 0;
                int128_t* var_148_7 = &var_1b8;
                int64_t var_140_2 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_48, 0, rdx_2, 
                    &var_158);
                int64_t var_38;
                arg1[1] = var_38;
                *arg1 = var_48;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_218);
            }
            else
            {
                int128_t var_1e8 = var_170;
                std::fs::metadata::h8f40e5ed4fcd8161(&var_158, *var_1e8[8]);
                int32_t rbp_1 = var_158;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_158);
                int64_t var_140;
                
                if (rbp_1 == 2)
                {
                    if (r13_1 & 1)
                    {
                        var_218 = &var_1e8;
                        var_210 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                        var_158 = &data_c832d0;
                        var_150 = 2;
                        int64_t var_138_2 = 0;
                        int32_t* var_148_3 = &var_218;
                        var_140 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_158);
                    }
                    
                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_158, 
                        *var_1e8[8], var_160);
                    _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_218, &var_158);
                    var_158 = var_218;
                    int64_t var_148_4 = *var_210[8];
                    *var_140[2] = 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0caeefc8e3382ad3(&var_1d0, &var_158);
                    goto label_85efbf;
                }
                
                alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_158, arg2, *var_1e8[8], 
                    var_160, arg6 - 1);
                
                if (var_158 == 1)
                {
                    *var_210[8] = var_140;
                    int128_t zmm0_6 = var_150;
                    var_218 = zmm0_6;
                    arg1[1] = var_140;
                    *arg1 = zmm0_6;
                    core::mem::drop::ha42964a555fb617b(&var_1e8);
                }
                else
                {
                    var_1b8 = var_150;
                    int64_t var_1a8;
                    var_1a8 = var_140;
                    int64_t var_130;
                    int64_t var_198_1 = var_130;
                    
                    if (r13_1 & 1)
                    {
                        alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(&var_218, 
                            &var_1b8, 1);
                        int32_t* var_a8 = &var_218;
                        int64_t (* var_a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_158 = &data_c82f40;
                        var_150 = 2;
                        int64_t var_138_3 = 0;
                        int32_t** var_148_5 = &var_a8;
                        var_140 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                            &var_218);
                    }
                    
                    alacritty::migrate::Migration::new_path::h798257b5137424a1(&var_218, &var_1b8);
                    int64_t var_148_6 = *var_210[8];
                    var_158 = var_218;
                    *var_140[2] = 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0caeefc8e3382ad3(&var_1d0, &var_158);
                    core::ptr::drop_in_place$LT$alacritty..migrate..Migration$GT$::h82cf96c51dcdbc49(&var_1b8);
                    label_85efbf:
                    rdx_2 = core::mem::drop::ha42964a555fb617b(&var_1e8);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&var_178, &var_98);
                    rax_3 = var_178;
                    
                    if (rax_3 == 2)
                        goto label_85ef19;
                    
                    continue;
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..string..String$GT$$GT$$GT$::h43a6db806a26cc75(&var_98);
            break;
        }
    }
    else
    {
        label_85ef19:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..string..String$GT$$GT$$GT$::h43a6db806a26cc75(&var_98);
        int64_t* rax_4 = toml::value::Value::get_mut::hee4c5d22fb0901ba(arg3);
        
        if (rax_4)
        {
            int64_t var_148_2 = var_1c0_1;
            var_158 = var_1d0;
            int64_t result =
                core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(rax_4);
            *(rax_4 + 0xa) = *var_150[2];
            *rax_4 = var_158;
            *(rax_4 + 0x1a) = 7;
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        *arg1 = -0x8000000000000000;
    }
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(&var_1d0);
}
