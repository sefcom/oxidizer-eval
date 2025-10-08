
  int64_t uu_csplit::csplit::h417fd27a890efb75(int64_t* arg1, void* arg2, void* arg3, int64_t arg4, int128_t* arg5)

{
    int128_t zmm0 = *arg5;
    int128_t zmm1 = arg5[1];
    int128_t zmm2 = arg5[2];
    int64_t var_c0 = 0;
    int64_t var_108 = 0;
    int64_t var_100 = 8;
    int64_t var_f8 = 0;
    int64_t var_b8 = 1;
    char var_b0 = 0;
    void* var_88 = arg2;
    int128_t s;
    __builtin_memset(&s, 0, 0x11);
    int64_t var_a8 = -0x8000000000000000;
    int64_t rbp;
    rbp = 1;
    int64_t var_168;
    uu_csplit::patterns::get_patterns::hcf6c39a45494ab6b(&var_168, arg3, arg4);
    int64_t rax = var_168;
    int128_t var_160;
    int128_t var_1c8 = var_160;
    int64_t result;
    int64_t var_150;
    int64_t var_148;
    
    if (rax != 0xd)
    {
        arg1[3] = var_150;
        *(arg1 + 8) = var_1c8;
        *arg1 = rax;
        arg1[4] = var_148;
        rbp = 1;
        result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::h25e2ee6cb1aed68d(&var_a8);
    }
    else
    {
        int128_t var_68 = var_1c8;
        int64_t var_58_1 = var_150;
        uu_csplit::do_csplit::hec3c9aa463c4540a(&var_1c8, &var_a8, &var_68, &var_108);
        
        if (var_1c8 != 0xd)
        {
            rbp = 1;
            
            if (*(arg2 + 0x60))
                goto label_518b85;
            
            void** rax_2 = uu_csplit::SplitWriter::delete_all_splits::h4111e5a3ffbeea82(&var_a8);
            
            if (!rax_2)
                goto label_518b85;
            
            *arg1 = 0;
            arg1[1] = rax_2;
            rbp = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_1c8);
            result =
                core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::h25e2ee6cb1aed68d(&var_a8);
        }
        else
        {
            char var_b0_1 = 1;
            void var_1a0;
            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e28d1a528fdaefb(&var_1a0, &var_108);
            int64_t var_198;
            
            if (var_198 != -0x7fffffffffffffff)
            {
                int64_t r15_1 = var_198;
                int64_t rax_3 = uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(&var_a8);
                
                if (rax_3)
                {
                    *arg1 = 0;
                    arg1[1] = rax_3;
                    rbp = 1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h30ae416c40f6b755(&var_198);
                }
                else
                {
                    int64_t var_190;
                    uint64_t var_188;
                    
                    if (r15_1 != -0x8000000000000000)
                    {
                        var_168 = r15_1;
                        var_160 = var_190;
                        *var_160[8] = var_188;
                        void** rax_4 = uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(&var_a8, 
                            var_190, var_188);
                        
                        if (!rax_4)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_168);
                            int128_t var_118_1 = var_b8;
                            int128_t var_128_1 = zmm2;
                            int128_t var_138_1 = zmm1;
                            var_148 = zmm0;
                            var_160 = var_f8;
                            var_168 = var_108;
                            
                            while (true)
                            {
                                void var_50;
                                _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e28d1a528fdaefb(&var_50, &var_168);
                                int64_t var_48;
                                
                                if (var_48 == -0x7fffffffffffffff)
                                {
                                    core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$uu_csplit..csplit$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hc956bfe01568e5b0(&var_168);
                                    uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(
                                        &var_a8);
                                    rbp = 0;
                                    goto label_518b85;
                                }
                                
                                int64_t var_40;
                                uint64_t var_38;
                                
                                if (var_48 == -0x8000000000000000)
                                {
                                    *arg1 = 0xc;
                                    arg1[1] = var_40;
                                    arg1[2] = var_38;
                                }
                                else
                                {
                                    int64_t var_180 = var_48;
                                    int64_t var_178_1 = var_40;
                                    uint64_t var_170_1 = var_38;
                                    void** rax_6 =
                                        uu_csplit::SplitWriter::writeln::h71cbc4937ea20739(&var_a8, 
                                        var_40, var_38);
                                    
                                    if (rax_6)
                                    {
                                        *arg1 = 0;
                                        arg1[1] = rax_6;
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_180);
                                    }
                                    else
                                    {
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_180);
                                        continue;
                                    }
                                }
                                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$uu_csplit..csplit$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hc956bfe01568e5b0(&var_168);
                                rbp = 0;
                                break;
                            }
                        }
                        else
                        {
                            *arg1 = 0;
                            arg1[1] = rax_4;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h61638e650d01877f(&var_168);
                            rbp = 1;
                        }
                    }
                    else
                    {
                        *arg1 = 0xc;
                        arg1[1] = var_190;
                        arg1[2] = var_188;
                        rbp = 1;
                    }
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h75a87585a3eed1de(&var_1c8);
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::h25e2ee6cb1aed68d(
                    &var_a8);
            }
            else
            {
                rbp = 1;
                core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$usize$C$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$RP$$GT$$GT$::hd170b8d8dcb5eaff(&var_1a0);
                label_518b85:
                int64_t var_1a8;
                arg1[4] = var_1a8;
                int128_t zmm0_2 = var_1c8;
                *(arg1 + 0x10) = var_150;
                *arg1 = zmm0_2;
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::h25e2ee6cb1aed68d(
                    &var_a8);
            }
        }
    }
    
    if (!rbp)
        return result;
    
    return core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$uu_csplit..LinesWithNewlines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$C$uu_csplit..csplit$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hc956bfe01568e5b0(&var_108);
}
