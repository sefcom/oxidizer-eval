
  int64_t uu_csplit::csplit::habea2b7448100cb7(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int32_t arg6)

{
    int64_t rax;
    char rdx;
    rax = std::io::BufRead::lines::hd6d1bf3903bf6678(arg5, arg6);
    char var_f8 = rdx & 1;
    int64_t var_120 = 0;
    int64_t var_118 = 8;
    int128_t var_110 = {0};
    int64_t var_f0 = 1;
    char var_e8 = 0;
    void* var_a8 = arg2;
    int128_t s;
    __builtin_memset(&s, 0, 0x11);
    int64_t var_c8 = -0x8000000000000000;
    int64_t rbp;
    rbp = 1;
    int64_t var_178;
    uu_csplit::patterns::get_patterns::h1caf3c5952747e62(&var_178);
    int64_t rax_1 = var_178;
    int128_t var_170;
    int128_t var_1a8 = var_170;
    int64_t result;
    int64_t var_160;
    int64_t var_158;
    
    if (rax_1 != 0xc)
    {
        arg1[3] = var_160;
        *(arg1 + 8) = var_1a8;
        *arg1 = rax_1;
        arg1[4] = var_158;
        rbp = 1;
        result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_c8);
    }
    else
    {
        int128_t var_88 = var_1a8;
        int64_t var_78_1 = var_160;
        uu_csplit::do_csplit::h9017a56c540dfa97(&var_1a8, &var_c8, &var_88, &var_120);
        bool rax_3 = true;
        rbp = 1;
        
        if (var_1a8 != 0xc)
            goto label_56097b;
        
        char var_e8_1 = 1;
        rbp = 1;
        void var_50;
        _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&var_50, &var_120);
        rbp = 1;
        int64_t var_48;
        
        if (var_48 != -0x7fffffffffffffff)
        {
            int128_t var_138 = var_48;
            int64_t rax_6 = uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(&var_c8);
            
            if (!rax_6)
            {
                int64_t rax_7 = var_138;
                int64_t rsi_3 = *var_138[8];
                
                if (rax_7 != -0x8000000000000000)
                {
                    var_178 = rax_7;
                    var_170 = rsi_3;
                    uint64_t var_38;
                    *var_170[8] = var_38;
                    void** rax_8 =
                        uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(&var_c8, rsi_3, var_38);
                    
                    if (!rax_8)
                    {
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_178);
                        int128_t var_148_1 = var_f0;
                        var_158 = rax;
                        var_170 = var_110;
                        var_178 = var_120;
                        
                        while (true)
                        {
                            void var_70;
                            _$LT$uu_csplit..InputSplitter$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92638e6c16058415(&var_70, &var_178);
                            int64_t var_68;
                            
                            if (var_68 == -0x7fffffffffffffff)
                            {
                                core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::h7600f799ef9ed619(&var_178);
                                uu_csplit::SplitWriter::finish_split::h2b71f2c0808d1b8b(&var_c8);
                                rbp = 0;
                                goto label_56096f;
                            }
                            
                            int64_t var_60;
                            
                            if (var_68 == -0x8000000000000000)
                            {
                                *arg1 = 0;
                                arg1[1] = var_60;
                            }
                            else
                            {
                                int64_t var_e0 = var_68;
                                int64_t var_d8_1 = var_60;
                                uint64_t var_58;
                                uint64_t var_d0_1 = var_58;
                                void** rax_10 = uu_csplit::SplitWriter::writeln::he8d9df3e4a94ba9d(
                                    &var_c8, var_60, var_58);
                                
                                if (rax_10)
                                {
                                    *arg1 = 0;
                                    arg1[1] = rax_10;
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
                                }
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(&var_e0);
                                    continue;
                                }
                            }
                            core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::h7600f799ef9ed619(&var_178);
                            rbp = 0;
                            break;
                        }
                    }
                    else
                    {
                        *arg1 = 0;
                        arg1[1] = rax_8;
                        rbp = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h43f353fdb3e00327(
                            &var_178);
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
                arg1[1] = rax_6;
                rbp = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hee3cf79169426f18(&var_138);
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1a8);
            result =
                core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(&var_c8);
        }
        else
        {
            label_56096f:
            rax_3 = var_1a8 != 0xc;
            label_56097b:
            void** rax_4;
            
            if (rax_3 && !*(arg2 + 0x60))
                rax_4 = uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(&var_c8);
            
            if (!rax_3 || *(arg2 + 0x60) || !rax_4)
            {
                int64_t var_188;
                arg1[4] = var_188;
                int128_t zmm0_1 = var_1a8;
                *(arg1 + 0x10) = var_160;
                *arg1 = zmm0_1;
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_c8);
            }
            else
            {
                *arg1 = 0;
                arg1[1] = rax_4;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_csplit..csplit_error..CsplitError$GT$$GT$::h99db2ffc8dffbdb1(&var_1a8);
                result = core::ptr::drop_in_place$LT$uu_csplit..SplitWriter$GT$::hbd6d8c3456abefcf(
                    &var_c8);
            }
        }
    }
    
    if (!rbp)
        return result;
    
    return core::ptr::drop_in_place$LT$uu_csplit..InputSplitter$LT$core..iter..adapters..enumerate..Enumerate$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$$GT$$GT$::h7600f799ef9ed619(&var_120);
}
