
  void* uu_cp::show_debug::hb7db704407dbf64f(char* arg1, void* arg2, int64_t* arg3, int64_t arg4, int64_t arg5, void* arg6, int128_t arg7 @ zmm0, int128_t arg8 @ zmm1, int128_t arg9 @ zmm2, uint64_t arg10 @ rbx, int64_t arg11 @ rbp, int64_t arg12 @ r10, int32_t* arg13 @ r12, uint64_t arg14 @ r13, int64_t* arg15 @ r14, char* arg16 @ r15, int32_t* arg17)

{
    int64_t* var_98;
    int64_t* rsp_1 = &var_98;
    char const* const var_90;
    void* result;
    int64_t rax_18;
    int64_t* rdx_1;
    void* r12_1;
    bool cond:4_1;
    
    switch (*arg1)
    {
        case 0:
        {
            var_90 = "unknownnoyesavoidedunsupportedze…";
            int64_t var_88 = 7;
            bool c_1;
            
            switch (arg1[1])
            {
                case 0:
                {
                    label_4ff673:
                    char const* const var_80_1 = "unknownnoyesavoidedunsupportedze…";
                    int64_t var_78_1 = 7;
                    int64_t rax_9 = *(&jump_table_42bd0c + (arg1[2] << 2));
                    result = rax_9 + &jump_table_42bd0c;
                    c_1 = rax_9 + &jump_table_42bd0c < rax_9;
                    
                    switch (result)
                    {
                        case 0x4ff73e:
                        {
                            label_4ff745:
                            char const* const var_70_1 = "unknownnoyesavoidedunsupportedze…";
                            rax_18 = 7;
                            goto label_4ff7ae;
                        }
                        case 0x4ff751:
                        {
                            goto label_4ff758;
                        }
                        case 0x4ff764:
                        {
                            goto label_4ff76b;
                        }
                        case 0x4ff777:
                        {
                            label_4ff77e:
                            void* const var_70_3 = "SEEK_HOLESEEK_HOLE + zerosowners…";
                            rax_18 = 9;
                            goto label_4ff7ae;
                        }
                        case 0x4ff78a:
                        {
                            goto label_4ff791;
                        }
                        case 0x4ff79d:
                        {
                            label_4ff7a4:
                            char const* const var_70_5 = "unsupportedzerosSEEK_HOLESEEK_HO…";
                            rax_18 = 0xb;
                            goto label_4ff7ae;
                        }
                        case 0x5066e9:
                        {
                            label_5066e9:
                            rsp_1 = var_98;
                            result &= 0x38;
                            goto label_5066ec;
                        }
                        case 0x50684d:
                        {
                            label_50684d:
                            cond:4_1 = !result;
                            label_50684f:
                            
                            if (!cond:4_1)
                            {
                                *arg15 = 2;
                                arg15[1] = result;
                                result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[0x26]);
                                goto label_5070fe;
                            }
                            
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                                &rsp_1[0x26]);
                            arg14 = rsp_1[4];
                            arg16 = rsp_1[0x21];
                            r12_1 = rsp_1[3];
                            label_506d8b:
                            char rax_40 = _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(*(r12_1 + 0x3c), *(r12_1 + 0x3d));
                            uint64_t rcx_14 = arg10;
                            
                            if (rax_40)
                            {
                                result = std::fs::remove_file::h38159f05e7b4dc34(arg16);
                                rcx_14 = rsp_1[6];
                            }
                            
                            if (rax_40 && result)
                            {
                                *arg15 = 2;
                                arg15[1] = result;
                                
                                if (arg10 == arg11 && rcx_14 != arg11)
                                    result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[6]);
                                
                                goto label_5070fe;
                            }
                            
                            if (arg10 == arg11 && rcx_14 != arg11)
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[6]);
                            
                            rdx_1 = rsp_1[2];
                            break;
                        }
                        case 0x5068ab:
                        {
                            goto label_5068b2;
                        }
                        case 0x5068f8:
                        {
                            label_5068f8:
                            result += *result;
                            *arg10[1] *= 2;
                            *result[1] = 0x24;
                            *result += result;
                            goto label_506902;
                        }
                        case 0x5069d0:
                        {
                            label_5069d0:
                            char var_20;
                            char var_20_1 = var_20 + arg3;
                            label_5069d4:
                            *(arg3 + 0x28) = arg9;
                            *(arg3 + 0x18) = arg8;
                            *(arg3 + 8) = arg7;
                            *arg3 = result;
                            goto label_5070fe;
                        }
                    }
                    break;
                }
                case 1:
                {
                    label_4ff71b:
                    char const* const var_80_5 = "noyesavoidedunsupportedzerosSEEK…";
                    int64_t var_78_5 = 2;
                    label_4ff735:
                    int64_t rax_17 = *(&jump_table_42bd0c + (arg1[2] << 2));
                    result = rax_17 + &jump_table_42bd0c;
                    c_1 = rax_17 + &jump_table_42bd0c < rax_17;
                    
                    switch (result)
                    {
                        case 0x4ff73e:
                        {
                            goto label_4ff745;
                        }
                        case 0x4ff751:
                        {
                            goto label_4ff758;
                        }
                        case 0x4ff764:
                        {
                            goto label_4ff76b;
                        }
                        case 0x4ff777:
                        {
                            goto label_4ff77e;
                        }
                        case 0x4ff78a:
                        {
                            goto label_4ff791;
                        }
                        case 0x4ff79d:
                        {
                            goto label_4ff7a4;
                        }
                        case 0x5066e9:
                        {
                            goto label_5066e9;
                        }
                        case 0x50684d:
                        {
                            goto label_50684d;
                        }
                        case 0x5068ab:
                        {
                            goto label_5068b2;
                        }
                        case 0x5068f8:
                        {
                            goto label_5068f8;
                        }
                        case 0x5069d0:
                        {
                            goto label_5069d0;
                        }
                    }
                    break;
                }
                case 2:
                {
                    label_4ff6c7:
                    char const* const var_80_3 = "yesavoidedunsupportedzerosSEEK_H…";
                    int64_t var_78_3 = 3;
                    int64_t rax_13 = *(&jump_table_42bd0c + (arg1[2] << 2));
                    result = rax_13 + &jump_table_42bd0c;
                    c_1 = rax_13 + &jump_table_42bd0c < rax_13;
                    
                    switch (result)
                    {
                        case 0x4ff73e:
                        {
                            goto label_4ff745;
                        }
                        case 0x4ff751:
                        {
                            goto label_4ff758;
                        }
                        case 0x4ff764:
                        {
                            goto label_4ff76b;
                        }
                        case 0x4ff777:
                        {
                            goto label_4ff77e;
                        }
                        case 0x4ff78a:
                        {
                            goto label_4ff791;
                        }
                        case 0x4ff79d:
                        {
                            goto label_4ff7a4;
                        }
                        case 0x5066e9:
                        {
                            goto label_5066e9;
                        }
                        case 0x50684d:
                        {
                            goto label_50684d;
                        }
                        case 0x5068ab:
                        {
                            goto label_5068b2;
                        }
                        case 0x5068f8:
                        {
                            goto label_5068f8;
                        }
                        case 0x5069d0:
                        {
                            goto label_5069d0;
                        }
                    }
                    break;
                }
                case 3:
                {
                    label_4ff6f1:
                    char const* const var_80_4 = "avoidedunsupportedzerosSEEK_HOLE…";
                    int64_t var_78_4 = 7;
                    int64_t rax_15 = *(&jump_table_42bd0c + (arg1[2] << 2));
                    result = rax_15 + &jump_table_42bd0c;
                    c_1 = rax_15 + &jump_table_42bd0c < rax_15;
                    
                    switch (result)
                    {
                        case 0x4ff73e:
                        {
                            goto label_4ff745;
                        }
                        case 0x4ff751:
                        {
                            goto label_4ff758;
                        }
                        case 0x4ff764:
                        {
                            goto label_4ff76b;
                        }
                        case 0x4ff777:
                        {
                            goto label_4ff77e;
                        }
                        case 0x4ff78a:
                        {
                            goto label_4ff791;
                        }
                        case 0x4ff79d:
                        {
                            goto label_4ff7a4;
                        }
                        case 0x5066e9:
                        {
                            goto label_5066e9;
                        }
                        case 0x50684d:
                        {
                            goto label_50684d;
                        }
                        case 0x5068ab:
                        {
                            goto label_5068b2;
                        }
                        case 0x5068f8:
                        {
                            goto label_5068f8;
                        }
                        case 0x5069d0:
                        {
                            goto label_5069d0;
                        }
                    }
                    break;
                }
                case 4:
                {
                    label_4ff69d:
                    char const* const var_80_2 = "unsupportedzerosSEEK_HOLESEEK_HO…";
                    int64_t var_78_2 = 0xb;
                    int64_t rax_11 = *(&jump_table_42bd0c + (arg1[2] << 2));
                    result = rax_11 + &jump_table_42bd0c;
                    c_1 = rax_11 + &jump_table_42bd0c < rax_11;
                    
                    switch (result)
                    {
                        case 0x4ff73e:
                        {
                            goto label_4ff745;
                        }
                        case 0x4ff751:
                        {
                            goto label_4ff758;
                        }
                        case 0x4ff764:
                        {
                            goto label_4ff76b;
                        }
                        case 0x4ff777:
                        {
                            goto label_4ff77e;
                        }
                        case 0x4ff78a:
                        {
                            goto label_4ff791;
                        }
                        case 0x4ff79d:
                        {
                            goto label_4ff7a4;
                        }
                        case 0x5066e9:
                        {
                            goto label_5066e9;
                        }
                        case 0x50684d:
                        {
                            goto label_50684d;
                        }
                        case 0x5068ab:
                        {
                            goto label_5068b2;
                        }
                        case 0x5068f8:
                        {
                            goto label_5068f8;
                        }
                        case 0x5069d0:
                        {
                            goto label_5069d0;
                        }
                    }
                    break;
                }
            }
            break;
        }
        case 1:
        {
            var_90 = "noyesavoidedunsupportedzerosSEEK…";
            int64_t var_88_1 = 2;
            int64_t rax_7 = *(&jump_table_42bcf8 + (arg1[1] << 2));
            result = rax_7 + &jump_table_42bcf8;
            
            switch (result)
            {
                case 0x4ff66c:
                {
                    goto label_4ff673;
                }
                case 0x4ff696:
                {
                    goto label_4ff69d;
                }
                case 0x4ff6c0:
                {
                    goto label_4ff6c7;
                }
                case 0x4ff6ea:
                {
                    goto label_4ff6f1;
                }
                case 0x4ff714:
                {
                    goto label_4ff71b;
                }
                case 0x4ff72a:
                {
                    goto label_4ff735;
                }
                case 0x4ff73d:
                {
                    if (rax_7 == -0x42bcf8)
                        goto label_4ff745;
                    
                    arg10 = arg10;
                    label_4ff791:
                    char const* const var_70_4 = "noyesavoidedunsupportedzerosSEEK…";
                    rax_18 = 2;
                    goto label_4ff7ae;
                }
                case 0x4ff750:
                {
                    rsp_1 = &var_90;
                    label_4ff758:
                    rsp_1[5] = "SEEK_HOLE + zerosownershiptimest…";
                    rax_18 = 0x11;
                    label_4ff7ae:
                    rsp_1[6] = rax_18;
                    rsp_1[7] = &rsp_1[1];
                    rsp_1[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    rsp_1[9] = &rsp_1[3];
                    rsp_1[0xa] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    rsp_1[0xb] = &rsp_1[5];
                    rsp_1[0xc] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    rsp_1[0xd] = &data_5b5b00;
                    rsp_1[0xe] = 4;
                    rsp_1[0x11] = 0;
                    rsp_1[0xf] = &rsp_1[7];
                    rsp_1[0x10] = 3;
                    return std::io::stdio::_print::he918bceb0c89db46(&rsp_1[0xd]);
                    break;
                }
                case 0x4ff763:
                {
                    label_4ff76b:
                    char const* const var_70_2 = "zerosSEEK_HOLESEEK_HOLE + zeroso…";
                    rax_18 = 5;
                    goto label_4ff7ae;
                }
                case 0x4ff776:
                {
                    /* undefined */
                    break;
                }
                case 0x4ff789:
                {
                    goto label_4ff791;
                }
                case 0x5066d5:
                {
                    arg15 = &jump_table_42bcf8;
                    arg13 = arg17;
                    arg10 = 0xf000 & arg13[0xe];
                    label_5066ec:
                    
                    switch (*(arg6 + 0x4e))
                    {
                        case 0:
                        {
                            rsp_1[3] = arg6;
                            rsp_1[1] = arg2;
                            std::fs::metadata::h003d8cdbffde7c56(&rsp_1[0xa], arg16);
                            int32_t rbx = rsp_1[0xa];
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&rsp_1[0xa]);
                            rdx_1 = arg3;
                            
                            if (rbx != 2)
                            {
                                rsp_1[2] = rdx_1;
                                arg11 = -0x8000000000000000;
                                r12_1 = rsp_1[3];
                                uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&rsp_1[6], *(r12_1 + 0x4c), arg16, arg14, *(r12_1 + 8), 
                                    *(r12_1 + 0x10));
                                arg10 = rsp_1[6];
                                
                                if (arg10 == -0x8000000000000000)
                                    goto label_506d8b;
                                
                                uint64_t r12_2 = rsp_1[8];
                                rsp_1[0x28] = r12_2;
                                *(rsp_1 + 0x130) = *(rsp_1 + 0x30);
                                rsp_1[0x2a] = rsp_1[0x27];
                                rsp_1[0x21] = arg16;
                                rsp_1[4] = arg14;
                                uint32_t r9_1 =
                                    std::path::Path::is_symlink::h6ab8b58756c51c6b(arg16, arg14);
                                uu_cp::backup_dest::hb9d2dd191dda7572(&rsp_1[0xa], rsp_1[0x21], 
                                    rsp_1[4], rsp_1[0x2a], r12_2, r9_1);
                                int64_t rax_27 = rsp_1[0xa];
                                *(rsp_1 + 0x160) = *(rsp_1 + 0x58);
                                rsp_1[0x2e] = rsp_1[0xd];
                                
                                if (rax_27 == 0xd)
                                {
                                    *(rsp_1 + 0x110) = *(rsp_1 + 0x160);
                                    rsp_1[0x24] = rsp_1[0x2e];
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[0x22]);
                                    rsp_1[4];
                                    result = std::fs::remove_file::h38159f05e7b4dc34(rsp_1[0x21]);
                                    cond:4_1 = !result;
                                    goto label_50684f;
                                }
                                
                                int128_t zmm0_1 = *(rsp_1 + 0x70);
                                *(arg15 + 0x30) = *(rsp_1 + 0x80);
                                *(arg15 + 0x20) = zmm0_1;
                                arg15[3] = rsp_1[0x2e];
                                *(arg15 + 8) = *(rsp_1 + 0x160);
                                *arg15 = rax_27;
                                result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&rsp_1[0x26]);
                                goto label_5070fe;
                            }
                            break;
                        }
                        case 1:
                        {
                            rsp_1[1] = arg2;
                            rsp_1[2] = arg3;
                            std::fs::metadata::h003d8cdbffde7c56(&rsp_1[0xa], arg16);
                            int32_t rbx_1 = rsp_1[0xa];
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&rsp_1[0xa]);
                            
                            if (rbx_1 != 2 && _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba025a570c73f0e5(*(arg6 + 0x3c), *(arg6 + 0x3d)))
                            {
                                result = std::fs::remove_file::h38159f05e7b4dc34(arg16);
                                
                                if (result)
                                {
                                    *arg15 = 2;
                                    arg15[1] = result;
                                    goto label_5070fe;
                                }
                            }
                            
                            uu_cp::symlink_file::h73880cbbf32f0256(&rsp_1[0xa], rsp_1[1], rsp_1[2], 
                                arg16, arg14, rsp_1[0x53]);
                            goto label_506a6b;
                        }
                        case 2:
                        {
                            goto label_5068cb;
                        }
                        case 3:
                        {
                            rsp_1[3] = arg6;
                            rsp_1[1] = arg2;
                            rsp_1[2] = arg3;
                            rsp_1[5] = arg15;
                            std::fs::metadata::h003d8cdbffde7c56(&rsp_1[0xa], arg16);
                            int32_t r14 = rsp_1[0xa];
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&rsp_1[0xa]);
                            
                            if (r14 != 2)
                            {
                                void* r9_4 = rsp_1[3];
                                result = jump_table_42bd38[*(r9_4 + 0x4d)] + &jump_table_42bd38;
                                void** rbp_4 = rsp_1[5];
                                int64_t rax_34;
                                char* rcx_11;
                                int64_t rdx_9;
                                void* rsp_12;
                                int64_t rsi_11;
                                void* rdi_18;
                                uint64_t r8_4;
                                int64_t r10_1;
                                
                                switch (result)
                                {
                                    case 0x506ad6:
                                    {
                                        rax_34 = arg10 == 0x1000;
                                        r10_1 = arg10 == 0xa000;
                                        rsp_12 = rsp_1 - 8;
                                        rdi_18 = rsp_12 + 0x58;
                                        rsi_11 = *(rsp_12 + 0x10);
                                        rdx_9 = *(rsp_12 + 0x18);
                                        rcx_11 = arg16;
                                        r8_4 = arg14;
                                        label_506b07:
                                        *(rsp_12 - 8) = *(rsp_12 + 0x2a0);
                                        *(rsp_12 - 0x10) = rax_34;
                                        *(rsp_12 - 0x18) = r10_1;
                                        *(rsp_12 - 0x20) = *(rsp_12 + 0x290);
                                        *(rsp_12 - 0x28) = *(rsp_12 + 0x288);
                                        uu_cp::copy_helper::hc7e19de02e15c80a(rdi_18, rsi_11, 
                                            rdx_9, rcx_11, r8_4, r9_4);
                                        rsp_1 = rsp_12 + 8;
                                        result = rsp_1[0xa];
                                        
                                        if (result == 0xd)
                                            *rbp_4 = 0xd;
                                        else
                                        {
                                            label_506b3f:
                                            rbp_4[7] = rsp_1[0x11];
                                            int128_t zmm0_3 = *(rsp_1 + 0x58);
                                            int128_t zmm1_2 = *(rsp_1 + 0x68);
                                            *(rbp_4 + 0x28) = *(rsp_1 + 0x78);
                                            *(rbp_4 + 0x18) = zmm1_2;
                                            *(rbp_4 + 8) = zmm0_3;
                                            *rbp_4 = result;
                                        }
                                        break;
                                    }
                                    case 0x506b67:
                                    {
                                        std::fs::symlink_metadata::h8589e79b0a107dee(&rsp_1[0xa], 
                                            arg16);
                                        int64_t r13 = rsp_1[0xa];
                                        result = rsp_1[0xb];
                                        
                                        if (r13 != 2)
                                        {
                                            rsp_1[4] = result;
                                            memcpy(&rsp_1[0x2e], &rsp_1[0xc], 0xa0);
                                            rsp_1[0x2c] = r13;
                                            rsp_1[0x2d] = rsp_1[4];
                                            result = std::fs::Metadata::modified::h6f16921acf618ae6(
                                                &rsp_1[0xa], arg13);
                                            int32_t r12_4 = rsp_1[0xb];
                                            int64_t r13_1 = rsp_1[0xa];
                                            
                                            if (r12_4 != 0x3b9aca00)
                                            {
                                                std::fs::Metadata::modified::h6f16921acf618ae6(
                                                    &rsp_1[0xa], &rsp_1[0x2c]);
                                                result = rsp_1[0xb];
                                                int64_t rcx_21 = rsp_1[0xa];
                                                
                                                if (result != 0x3b9aca00)
                                                {
                                                    bool rdx_16 = r13_1 != rcx_21;
                                                    
                                                    if (r13_1 < rcx_21)
                                                        rdx_16 = true;
                                                    
                                                    bool rsi_27 = r12_4 != result;
                                                    
                                                    if (r12_4 < result)
                                                        rsi_27 = true;
                                                    
                                                    if (rdx_16)
                                                        rsi_27 = rdx_16;
                                                    
                                                    if (rsi_27 == 1)
                                                    {
                                                        void* r12_7 = rsp_1[3];
                                                        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&rsp_1[0xa], *(r12_7 + 0x3c), arg16, arg14, 
                                                            *(r12_7 + 0x47));
                                                        result = rsp_1[0xa];
                                                        
                                                        if (result != 0xd)
                                                            goto label_506b3f;
                                                        
                                                        rax_34 = arg10 == 0x1000;
                                                        r10_1 = arg10 == 0xa000;
                                                        rsp_12 = rsp_1 - 8;
                                                        rdi_18 = rsp_12 + 0x58;
                                                        rsi_11 = *(rsp_12 + 0x10);
                                                        rdx_9 = *(rsp_12 + 0x18);
                                                        rcx_11 = arg16;
                                                        r8_4 = arg14;
                                                        r9_4 = r12_7;
                                                        goto label_506b07;
                                                    }
                                                    
                                                    *rbp_4 = 0xd;
                                                }
                                                else
                                                {
                                                    *rbp_4 = 2;
                                                    rbp_4[1] = rcx_21;
                                                }
                                            }
                                            else
                                            {
                                                *rbp_4 = 2;
                                                rbp_4[1] = r13_1;
                                            }
                                        }
                                        else
                                        {
                                            *rbp_4 = 2;
                                            rbp_4[1] = result;
                                        }
                                        break;
                                    }
                                    case 0x506b9c:
                                    {
                                        rsp_1[0x2c] = arg16;
                                        rsp_1[0x2d] = arg14;
                                        rsp_1[0x22] = &rsp_1[0x2c];
                                        rsp_1[0x23] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                        rsp_1[0xa] = &data_5b5f98;
                                        rsp_1[0xb] = 2;
                                        rsp_1[0xe] = 0;
                                        rsp_1[0xc] = &rsp_1[0x22];
                                        rsp_1[0xd] = 1;
                                        result = core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&rbp_4[1], &rsp_1[0xa]);
                                        *rbp_4 = 4;
                                        break;
                                    }
                                    case 0x506c1a:
                                    {
                                        if (!*(r9_4 + 0x47))
                                            *rbp_4 = 0xd;
                                        else
                                        {
                                            rsp_1[0x2c] = 1;
                                            rsp_1[0x2d] = arg16;
                                            rsp_1[0x2e] = arg14;
                                            rsp_1[0x2f] = 1;
                                            rsp_1[0x22] = &rsp_1[0x2c];
                                            rsp_1[0x23] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                            rsp_1[0xa] = &data_5b5dd8;
                                            rsp_1[0xb] = 2;
                                            rsp_1[0xe] = 0;
                                            rsp_1[0xc] = &rsp_1[0x22];
                                            rsp_1[0xd] = 1;
                                            result = std::io::stdio::_print::he918bceb0c89db46(
                                                &rsp_1[0xa]);
                                            *rbp_4 = 0xd;
                                        }
                                        break;
                                    }
                                }
                                
                                goto label_5070fe;
                            }
                            
                            int64_t rax_30;
                            rax_30 = arg10 == 0x1000;
                            int64_t r10;
                            r10 = arg10 == 0xa000;
                            int64_t rsi_6 = rsp_1[1];
                            int64_t rdx_6 = rsp_1[2];
                            int64_t r9_2 = rsp_1[3];
                            *(rsp_1 - 0x10) = rsp_1[0x53];
                            *(rsp_1 - 0x18) = rax_30;
                            *(rsp_1 - 0x20) = r10;
                            *(rsp_1 - 0x28) = rsp_1[0x51];
                            *(rsp_1 - 0x30) = rsp_1[0x50];
                            uu_cp::copy_helper::hc7e19de02e15c80a(&rsp_1[0xa], rsi_6, rdx_6, arg16, 
                                arg14, r9_2);
                            result = rsp_1[0xa];
                            arg3 = rsp_1[5];
                            
                            if (result == 0xd)
                            {
                                *arg3 = 0xd;
                                goto label_5070fe;
                            }
                            
                            arg3[7] = rsp_1[0x11];
                            arg7 = *(rsp_1 + 0x58);
                            goto label_5069ca;
                        }
                        case 4:
                        {
                            rsp_1[0xa] = 0x1b600000000;
                            label_506874:
                            rsp_1[0xb] = 0;
                            *(rsp_1 + 0x5c) = 0;
                            *(rsp_1 + 0x59) = 1;
                            *(rsp_1 + 0x5c) = 1;
                            arg13 = &rsp_1[0x2c];
                            arg2 = &rsp_1[0xa];
                            goto label_5068a3;
                        }
                    }
                    break;
                }
                case 0x506839:
                {
                    *(result - 0x75) -= 1;
                    rsp_1 = 0x10824;
                    char temp6_1 = *(result - 0x75);
                    *(result - 0x75) += 0xf8;
                    
                    if (temp6_1 != 8)
                    {
                        result = nullptr;
                        trap(0xd);
                    }
                    
                    *(arg2 + 0x48000001) += *arg3[1];
                    *0x10874 = result;
                    goto label_506874;
                }
                case 0x506897:
                {
                    if (rax_7 != -0x42bcf8)
                    {
                        void* result_1 = result;
                        rsp_1 = &result_1;
                        label_5068a3:
                        std::fs::OpenOptions::open::h9051a5b14c2a871a(arg13, arg2, arg16);
                        arg1 = arg13;
                        label_5068b2:
                        result = core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(
                            core::result::Result$LT$T$C$E$GT$::unwrap::hd2e0f198d57ce974(arg1));
                        *arg15 = 0xd;
                        label_5070fe:
                        rsp_1[0x49];
                        rsp_1[0x4a];
                        rsp_1[0x4b];
                        rsp_1[0x4c];
                        rsp_1[0x4d];
                        rsp_1[0x4e];
                        return result;
                    }
                    
                    uint32_t* const rcx;
                    rcx = 0xb4;
                    result ^= 8;
                    *result += result;
                    label_5068cb:
                    result = arg10 == 0x1000;
                    arg12 = arg10 == 0xa000;
                    rsp_1 -= 8;
                    arg1 = &rsp_1[0xb];
                    label_5068ea:
                    *(rsp_1 - 8) = rsp_1[0x54];
                    *(rsp_1 - 0x10) = result;
                    *(rsp_1 - 0x18) = arg12;
                    *(rsp_1 - 0x20) = rsp_1[0x52];
                    *(rsp_1 - 0x28) = rsp_1[0x51];
                    rsp_1 -= 0x28;
                    label_506902:
                    uu_cp::copy_helper::hc7e19de02e15c80a(arg1);
                    rsp_1 = &rsp_1[6];
                    label_506a6b:
                    result = rsp_1[0xa];
                    
                    if (result != 0xd)
                    {
                        arg15[7] = rsp_1[0x11];
                        int128_t zmm0_2 = *(rsp_1 + 0x58);
                        int128_t zmm1_1 = *(rsp_1 + 0x68);
                        *(arg15 + 0x28) = *(rsp_1 + 0x78);
                        *(arg15 + 0x18) = zmm1_1;
                        *(arg15 + 8) = zmm0_2;
                        *arg15 = result;
                    }
                    else
                        *arg15 = 0xd;
                    
                    goto label_5070fe;
                }
                case 0x5068e4:
                {
                    goto label_5068ea;
                }
                case 0x5069bc:
                {
                    result &= 0x88;
                    *result += result;
                    *(result - 0x77) += 0xf8;
                    char var_40;
                    char var_40_1 = var_40 + result;
                    label_5069ca:
                    arg8 = *(rsp_1 + 0x68);
                    arg9 = *(rsp_1 + 0x78);
                    goto label_5069d4;
                }
            }
            break;
        }
    }
    
    void* rax_41 = rsp_1[3];
    bool cond:2_1 = *(rax_41 + 0x41);
    char* r12_5 = rsp_1[1];
    rsp_1[5] = arg15;
    char rax_42;
    
    if (cond:2_1 || (rsp_1[0x54] && *(rax_41 + 0x40)))
        rax_42 = std::path::Path::is_symlink::h6ab8b58756c51c6b(r12_5, rdx_1);
    
    char const (** rax_43)[0xa1];
    int64_t* r12_6;
    
    if ((!cond:2_1 && (!rsp_1[0x54] || !*(rax_41 + 0x40))) || !rax_42)
    {
        r12_6 = rdx_1;
        rax_43 = std::fs::hard_link::h57f77023afa0952c(r12_5, rdx_1, arg16);
    }
    else
    {
        r12_6 = rdx_1;
        uucore::features::fs::canonicalize::hb17a5541a57984e7(&rsp_1[0xa], r12_5, rdx_1, 2, 1);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha6a806893804951f(&rsp_1[0x46], &rsp_1[0xa]);
        rax_43 = std::fs::hard_link::hb933e6d9c097124b(&rsp_1[0x46], arg16);
    }
    
    rsp_1[0x2b] = rax_43;
    char const* const rax_44;
    int64_t rdx_13;
    rax_44 = uucore::features::fs::get_filename::h4988c52a18f1d407(arg16, arg14);
    
    if (!rax_44)
        rdx_13 = 0x11;
    
    char const* const r14_3 = "invalid file namecannot create s…";
    
    if (!rax_44)
        rax_44 = "invalid file namecannot create s…";
    
    rsp_1[0x22] = 0;
    rsp_1[0x23] = rax_44;
    rsp_1[0x24] = rdx_13;
    rsp_1[0x25] = 1;
    char* rax_45;
    int64_t rdx_14;
    rax_45 = uucore::features::fs::get_filename::h4988c52a18f1d407(rsp_1[1], r12_6);
    
    if (rax_45)
        r14_3 = rax_45;
    
    if (!rax_45)
        rdx_14 = 0x11;
    
    rsp_1[0x2c] = 0;
    rsp_1[0x2d] = r14_3;
    rsp_1[0x2e] = rdx_14;
    rsp_1[0x2f] = 1;
    rsp_1[0x26] = &rsp_1[0x22];
    rsp_1[0x27] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    rsp_1[0x28] = &rsp_1[0x2c];
    rsp_1[0x29] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    rsp_1[0xa] = &data_5b5f78;
    rsp_1[0xb] = 2;
    rsp_1[0xe] = 0;
    rsp_1[0xc] = &rsp_1[0x26];
    rsp_1[0xd] = 2;
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&rsp_1[0x43], &rsp_1[0xa]);
    rsp_1[0xc] = rsp_1[0x45];
    *(rsp_1 + 0x50) = *(rsp_1 + 0x218);
    
    if (!rax_43)
    {
        result = core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0c139c7d53bd4e4a(&rsp_1[0xa]);
        *rsp_1[5] = 0xd;
        goto label_5070fe;
    }
    
    result = rsp_1[0xa];
    rsp_1[6] = rsp_1[0xb];
    rsp_1[7] = rsp_1[0xc];
    arg3 = rsp_1[5];
    
    if (result == -0x8000000000000000)
    {
        *arg3 = 0xd;
        goto label_5070fe;
    }
    
    arg3[2] = rsp_1[6];
    arg3[3] = rsp_1[7];
    *arg3 = 3;
    arg3[1] = result;
    arg3[4] = rax_43;
    goto label_5070fe;
}
