
  fn alacritty::migrate::yaml::migrate_imports::he16b1e9186b09947(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let mut var_218: i32;
    let rdx_1: u64 =
        alacritty::config::imports::he228980ef6034b5f(&var_218, arg3, arg4, arg5, arg6);
    let mut var_210: i128;
    let var_200: i64;
    let mut var_1b8: i128;
    let mut var_178: *mut i128;
    let mut var_158: *mut *mut [i8; 0xfd];
    
    if var_218 == 1
    {
        let var_1a8_1: i64 = var_200;
        var_1b8 = var_210;
        var_178 = &var_1b8;
        let var_170_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_158 = &data_c832c0;
        let var_150_1: i64 = 1;
        let var_138_1: i64 = 0;
        let var_148_1: *mut *mut i128 = &var_178;
        let var_140_1: i64 = 1;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_60, 0, rdx_1, &var_158);
        let var_50: i64;
        arg1[1] = var_50;
        *arg1 = var_60;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_1b8);
    }
    
    let var_68_1: i64 = var_200;
    let mut var_78: i128 = var_210;
    let mut var_1d0: i64 = 0;
    let var_1c8_1: i64 = 8;
    let var_1c0_1: i64 = 0;
    let mut var_98: ();
    let mut rdx_2: u64 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2441c7966b064cd0(&var_98, &var_78);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&var_178, &var_98);
    let mut rax_3: *mut i128 = var_178;
    let mut var_150: i64;
    
    if rax_3 != 2
    {
        let r13_1: i8 = *arg2.byte_offset(0x18);
        
        loop
        {
            let var_170: i64;
            let var_160: u64;
            
            if (rax_3 & 1) != 0
            {
                *var_210[8] = var_160;
                var_218 = var_170;
                var_1b8 = &var_218;
                *var_1b8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_158 = &data_c832c0;
                let var_150_2: i64 = 1;
                let var_138_4: i64 = 0;
                let var_148_7: *mut i128 = &var_1b8;
                let var_140_2: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_48, 0, rdx_2, 
                    &var_158);
                let var_38: i64;
                arg1[1] = var_38;
                *arg1 = var_48;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_218);
            }
            else
            {
                let mut var_1e8: i128 = var_170;
                std::fs::metadata::h8f40e5ed4fcd8161(&var_158, *var_1e8[8]);
                let rbp_1: i32 = var_158;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_158);
                let mut var_140: i64;
                
                if rbp_1 == 2
                {
                    if (r13_1 & 1) != 0
                    {
                        var_218 = &var_1e8;
                        var_210 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                        var_158 = &data_c832d0;
                        var_150 = 2;
                        let var_138_2: i64 = 0;
                        let var_148_3: *mut i32 = &var_218;
                        var_140 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_158);
                    }
                    
                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_158, 
                        *var_1e8[8], var_160);
                    _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::hf538378189c0d550(&var_218, &var_158);
                    var_158 = var_218;
                    let var_148_4: i64 = *var_210[8];
                    *var_140[2] = 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0caeefc8e3382ad3(&var_1d0, &var_158);
                    goto 'label_85efbf;
                }
                
                alacritty::migrate::migrate_config::heae155b6e6f7f60c(&var_158, arg2, *var_1e8[8], 
                    var_160, arg6 - 1);
                
                if var_158 == 1
                {
                    *var_210[8] = var_140;
                    let zmm0_6: i128 = var_150;
                    var_218 = zmm0_6;
                    arg1[1] = var_140;
                    *arg1 = zmm0_6;
                    core::mem::drop::ha42964a555fb617b(&var_1e8);
                }
                else
                {
                    var_1b8 = var_150;
                    let mut var_1a8: i64;
                    var_1a8 = var_140;
                    let var_130: i64;
                    let var_198_1: i64 = var_130;
                    
                    if (r13_1 & 1) != 0
                    {
                        alacritty::migrate::Migration::success_message::h6e70dbedf75118d1(&var_218, 
                            &var_1b8, 1);
                        let mut var_a8: *mut i32 = &var_218;
                        let var_a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_158 = &data_c82f40;
                        var_150 = 2;
                        let var_138_3: i64 = 0;
                        let var_148_5: *mut *mut i32 = &var_a8;
                        var_140 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                            &var_218);
                    }
                    
                    alacritty::migrate::Migration::new_path::h798257b5137424a1(&var_218, &var_1b8);
                    let var_148_6: i64 = *var_210[8];
                    var_158 = var_218;
                    *var_140[2] = 2;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0caeefc8e3382ad3(&var_1d0, &var_158);
                    core::ptr::drop_in_place$LT$alacritty..migrate..Migration$GT$::h82cf96c51dcdbc49(&var_1b8);
                    'label_85efbf:
                    rdx_2 = core::mem::drop::ha42964a555fb617b(&var_1e8);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&var_178, &var_98);
                    rax_3 = var_178;
                    
                    if rax_3 == 2
                    {
                        goto 'label_85ef19;
                    }
                    
                    continue;
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..string..String$GT$$GT$$GT$::h43a6db806a26cc75(&var_98);
            break;
        }
    }
    else
    {
        'label_85ef19:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..string..String$GT$$GT$$GT$::h43a6db806a26cc75(&var_98);
        let rax_4: *mut i64 = toml::value::Value::get_mut::hee4c5d22fb0901ba(arg3);
        
        if rax_4 != 0
        {
            let var_148_2: i64 = var_1c0_1;
            var_158 = var_1d0;
            let result: i64 =
                core::ptr::drop_in_place$LT$toml..value..Value$GT$::h7761fefc14a7cec1(rax_4);
            *rax_4.byte_offset(0xa) = *var_150[2];
            *rax_4 = var_158;
            *rax_4.byte_offset(0x1a) = 7;
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$toml..value..Value$GT$$GT$::h03c7773122835213(
        &var_1d0)
}
