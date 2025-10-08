
  int64_t forc_fmt::get_sway_dirs::h0903804508cd19d8(int128_t* arg1, int128_t* arg2)

{
    int64_t var_1a0 = 0;
    int64_t var_198 = 8;
    int64_t var_190 = 0;
    uint64_t rax = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *(rax + 0x10) = arg2[1];
    *rax = *arg2;
    int64_t var_188 = 1;
    int64_t rax_1 = 1;
    int128_t var_158;
    
    while (true)
    {
        int64_t rax_3 = (rax_1 - 1) * 3;
        var_158 = *(rax + (rax_3 << 3));
        int64_t var_148_1 = *(rax + (rax_3 << 3) + 0x10);
        
        if (var_158 == -0x8000000000000000)
            break;
        
        int64_t rax_4 = rax + (rax_3 << 3);
        int64_t var_118_1 = *(rax_4 + 0x10);
        int128_t var_128 = *rax_4;
        int64_t var_1c8;
        std::fs::read_dir::he4fdf1a64c10550e(&var_1c8, &var_128);
        char var_1c0;
        
        if (var_1c0 == 2)
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h8ea57a731913fa78(&var_1c8);
        else
        {
            int64_t var_170 = var_1c8;
            char var_168_1 = var_1c0;
            int64_t var_e0;
            
            while (true)
            {
                core::iter::traits::iterator::Iterator::try_fold::h7f3722e40557a69d(&var_e0, 
                    &var_170);
                int64_t rax_6 = var_e0;
                
                if (!rax_6)
                    break;
                
                int128_t var_c8;
                int128_t var_f0_1 = var_c8;
                int128_t var_d8;
                int128_t var_100_1 = var_d8;
                int64_t var_108 = rax_6;
                void var_140;
                std::fs::DirEntry::path::hc95af67dccb42f03(&var_140, &var_108);
                char* var_138;
                uint64_t var_130;
                char rax_7 = std::path::Path::is_dir::h02edbc48c38d7d9e(var_138, var_130);
                int32_t r14_2;
                
                if (rax_7)
                {
                    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_e0, var_138, var_130);
                    int64_t var_1a8_1 = *var_d8[8];
                    int128_t var_1b8 = var_e0;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3b0815cfe83d17a1(&var_188, &var_1b8);
                    std::path::Path::join::hc5b6364c54a49269(&var_1b8, var_138, var_130, 
                        "Forc.tomlmissing field `workspac…");
                    std::fs::metadata::h97dab4a00eb77849(&var_e0, *var_1b8[8]);
                    r14_2 = var_e0;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8cfd35c98471ce16(&var_e0);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_1b8);
                }
                
                if (!rax_7 || r14_2 == 2)
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he39d626ec3977c8f(&var_140);
                else
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h3b0815cfe83d17a1(&var_1a0, &var_140);
                
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h514fcfad11dd4245(&var_108);
            }
            
            core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$std..fs..DirEntry$GT$$GT$::hd74c6e31ced06899(&var_e0);
            core::ptr::drop_in_place$LT$core..iter..adapters..filter_map..FilterMap$LT$std..fs..ReadDir$C$forc_fmt..get_sway_dirs..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h936e97883cb7423e(&var_170);
            
            if (var_1c0 == 2)
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h8ea57a731913fa78(&var_1c8);
        }
        
        rax_1 -= 1;
        
        if (!rax_1)
        {
            var_158 = -0x8000000000000000;
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hb4ce02790f884662(&var_158);
    arg1[1] = var_190;
    *arg1 = var_1a0;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h19296ef7f0436d93(&var_188);
}
