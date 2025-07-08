
  int64_t uu_csplit::csplit::hbd1c068a297fe5d8(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int128_t* arg5)

{
    void var_d0;
    std::io::BufRead::lines::hb5077b34f6593e01(&var_d0, arg5);
    int64_t var_a0 = 0;
    int64_t var_e8 = 0;
    int64_t var_e0 = 8;
    int64_t var_d8 = 0;
    int64_t var_98 = 1;
    char var_90 = 0;
    void* var_108 = arg2;
    int128_t s;
    __builtin_memset(&s, 0, 0x11);
    int64_t var_128 = -0x8000000000000000;
    int64_t rbp;
    rbp = 1;
    int64_t var_188;
    uu_csplit::patterns::get_patterns::h1caf3c5952747e62(&var_188);
    int64_t rax = var_188;
    int128_t var_180;
    int128_t var_1e8 = var_180;
    int64_t result;
    int64_t var_170;
    int64_t var_168;
    
    if (rax != 0xc)
    {
        arg1[3] = var_170;
        *(arg1 + 8) = var_1e8;
        *arg1 = rax;
        arg1[4] = var_168;
        rbp = 1;
        result =
            core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_128);
    }
    else
    {
        int128_t var_88 = var_1e8;
        int64_t var_78_1 = var_170;
        uu_csplit::do_csplit::hcf79d66f02e2a63d(&var_1e8, &var_128, &var_88, &var_e8);
        bool rax_2 = true;
        rbp = 1;
        
        if (var_1e8 != 0xc)
            goto label_560dce;
        
        char var_90_1 = 1;
        rbp = 1;
        void var_50;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_50, &var_e8);
        rbp = 1;
        int64_t var_48;
        
        if (var_48 != -0x7fffffffffffffff)
        {
            int128_t var_1b8 = var_48;
            int64_t rax_5 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(&var_128);
            
            if (!rax_5)
            {
                int64_t rax_6 = var_1b8;
                int64_t rsi_3 = *var_1b8[8];
                
                if (rax_6 != -0x8000000000000000)
                {
                    var_188 = rax_6;
                    var_180 = rsi_3;
                    uint64_t var_38;
                    *var_180[8] = var_38;
                    void** rax_7 =
                        uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&var_128, rsi_3, var_38);
                    
                    if (!rax_7)
                    {
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_188);
                        int128_t var_138_1 = var_98;
                        int128_t var_a8;
                        int128_t var_148_1 = var_a8;
                        int128_t var_b8;
                        int128_t var_158_1 = var_b8;
                        int128_t var_c8;
                        var_168 = var_c8;
                        var_180 = var_d8;
                        var_188 = var_e8;
                        
                        while (true)
                        {
                            void var_70;
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8dbaf25fcfb0cb29(&var_70, &var_188);
                            int64_t var_68;
                            
                            if (var_68 == -0x7fffffffffffffff)
                            {
                                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&var_188);
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(&var_128);
                                rbp = 0;
                                goto label_560dc2;
                            }
                            
                            int64_t var_60;
                            
                            if (var_68 == -0x8000000000000000)
                            {
                                *arg1 = 0;
                                arg1[1] = var_60;
                            }
                            else
                            {
                                int64_t var_1a0 = var_68;
                                int64_t var_198_1 = var_60;
                                uint64_t var_58;
                                uint64_t var_190_1 = var_58;
                                void** rax_9 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(
                                    &var_128, var_60, var_58);
                                
                                if (rax_9)
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_9;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_1a0);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_1a0);
                                    continue;
                                }
                            }
                            core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&var_188);
                            rbp = 0;
                            break;
                        }
                    }
                    else
                    {
                        *arg1 = 0;
                        arg1[1] = rax_7;
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_188);
                        rbp = 1;
                    }
                }
                else
                {
                    *arg1 = 0;
                    arg1[1] = rsi_3;
                    rbp = 1;
                }
            }
            else
            {
                *arg1 = 0;
                arg1[1] = rax_5;
                rbp = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hee3cf79169426f18(&var_1b8);
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1e8);
            result =
                core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_128);
        }
        else
        {
            label_560dc2:
            rax_2 = var_1e8 != 0xc;
            label_560dce:
            void** rax_3;
            
            if (rax_2 && !*(arg2 + 0x60))
                rax_3 = uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(&var_128);
            
            if (!rax_2 || *(arg2 + 0x60) || !rax_3)
            {
                int64_t var_1c8;
                arg1[4] = var_1c8;
                int128_t zmm0_1 = var_1e8;
                *(arg1 + 0x10) = var_170;
                *arg1 = zmm0_1;
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_128);
            }
            else
            {
                *arg1 = 0;
                arg1[1] = rax_3;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1e8);
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_128);
            }
        }
    }
    
    if (!rbp)
        return result;
    
    return core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$$GT$::h5f6cb91f3f018d07(&var_e8);
}
