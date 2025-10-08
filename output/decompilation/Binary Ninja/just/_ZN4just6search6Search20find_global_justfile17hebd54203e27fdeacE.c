
  int64_t* just::search::Search::find_global_justfile::hebd54203e27fdeac(int64_t* arg1)

{
    int32_t var_78;
    just::search::Search::global_justfile_paths::hd43d3a4a486b84b5(&var_78);
    void var_98;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he9c16c10d70dedd9(&var_98, &var_78);
    int64_t var_e8;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55791ac38f39ac02(&var_e8, &var_98);
    
    if (!(0 + -(var_e8)))
    {
        int128_t var_128;
        int128_t* rsi_2 = &var_128;
        
        while (true)
        {
            var_128 = var_e8;
            int64_t var_170;
            std::fs::read_dir::h5abadba4aa7d2afc(&var_170, rsi_2);
            char var_168;
            
            if (var_168 != 2)
            {
                int64_t var_158 = var_170;
                char var_150_1 = var_168;
                
                while (true)
                {
                    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_78, &var_158);
                    
                    if (var_78 != 1)
                    {
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(
                            &var_158);
                        break;
                    }
                    
                    int64_t var_70;
                    int64_t var_148;
                    int128_t var_140;
                    int64_t var_68;
                    
                    if (!var_70)
                    {
                        uint64_t var_d8;
                        just::search::Search::find_global_justfile::_$u7b$$u7b$closure$u7d$$u7d$::h64683c6068435421(&var_148, *var_128[8], var_d8, var_68);
                        int64_t rax_6 = var_148;
                        int128_t var_48_1 = var_140;
                        int64_t var_130;
                        int64_t var_38_1 = var_130;
                        arg1[3] = var_130;
                        *(arg1 + 8) = var_140;
                        *arg1 = rax_6;
                    }
                    else
                    {
                        int64_t var_50;
                        int64_t var_a0_1 = var_50;
                        int128_t var_60;
                        int128_t var_b0_1 = var_60;
                        int64_t var_c0 = var_70;
                        int64_t var_b8_1 = var_68;
                        void var_108;
                        std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_108, &var_c0);
                        char* var_100;
                        int64_t var_f8;
                        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_148, var_100, 
                            var_f8);
                        char* var_d0;
                        int64_t var_c8;
                        
                        if (var_148 == 1)
                        {
                            label_688703:
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(
                                &var_c0);
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(&var_108);
                            continue;
                        }
                        else if (!core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(var_140, *var_140[8], var_d0, var_c8))
                            goto label_688703;
                        std::fs::DirEntry::path::hc95af67dccb42f03(&var_148, &var_c0);
                        arg1[3] = *var_140[8];
                        *(arg1 + 8) = var_148;
                        *arg1 = -0x7ffffffffffffffa;
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(
                            &var_c0);
                        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(&var_108);
                    }
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_158);
                    
                    if (var_168 == 2)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hc1759a5b4464200b(&var_170);
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_128);
                    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$std..path..PathBuf$C$$RF$str$RP$$GT$$GT$::hac9f953bfcc49c5d(&var_98);
                }
                
                if (var_168 == 2)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hc1759a5b4464200b(&var_170);
            }
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hc1759a5b4464200b(&var_170);
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_128);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55791ac38f39ac02(&var_e8, &var_98);
            rsi_2 = &var_128;
            
            if (var_e8 == -0x8000000000000000)
                break;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$std..path..PathBuf$C$$RF$str$RP$$GT$$GT$::hac9f953bfcc49c5d(&var_98);
    *arg1 = -0x7fffffffffffffff;
    return arg1;
}
