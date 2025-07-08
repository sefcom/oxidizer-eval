
  uint64_t uu_test::path::h72a91cd3b6f0d02c(int64_t arg1, int64_t arg2, char arg3)

{
    int32_t var_188;
    int32_t* rdi = &var_188;
    int32_t rbx;
    
    if (arg3 != 8)
    {
        std::fs::metadata::h59562c409af00ed3(rdi, arg1);
        
        if (var_188 != 2)
        {
            label_4ad569:
            int128_t var_d8 = var_188;
            int128_t var_178;
            int128_t var_c8_1 = var_178;
            int128_t var_168;
            int128_t var_b8_1 = var_168;
            int64_t var_158;
            int64_t var_a8_1 = var_158;
            int32_t var_150;
            int32_t var_a0_1 = var_150;
            int32_t var_14c;
            int32_t var_9c_1 = var_14c;
            int32_t var_148;
            int32_t var_98_1 = var_148;
            int64_t var_144;
            int64_t var_94_1 = var_144;
            int32_t var_13c;
            int32_t var_8c_1 = var_13c;
            int64_t var_138;
            int64_t var_88_1 = var_138;
            int64_t var_e0;
            int64_t var_30_1 = var_e0;
            int128_t var_f0;
            int128_t var_40_1 = var_f0;
            int128_t var_100;
            int128_t var_50_1 = var_100;
            int128_t var_110;
            int128_t var_60_1 = var_110;
            int128_t var_120;
            int128_t var_70_1 = var_120;
            int128_t var_130;
            int128_t var_80_1 = var_130;
            int128_t var_248;
            
            switch (arg3)
            {
                case 0:
                {
                    rbx = (var_150 & 0xf000) == 0x6000;
                    break;
                }
                case 1:
                {
                    rbx = (var_150 & 0xf000) == 0x2000;
                    break;
                }
                case 2:
                {
                    rbx = (var_150 & 0xf000) == 0x4000;
                    break;
                }
                case 3:
                {
                    rbx = 1;
                    break;
                }
                case 4:
                {
                    std::fs::Metadata::accessed::h83f649a5a12d68e0(&var_248, &var_d8);
                    int64_t rax_3;
                    int32_t rdx_11;
                    rax_3 = core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_248);
                    std::fs::Metadata::modified::h6f16921acf618ae6(&var_248, &var_d8);
                    int64_t rax_4;
                    int32_t rdx_12;
                    rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_248);
                    rbx = rdx_11 < rdx_12;
                    int32_t rcx_2;
                    rcx_2 = rax_3 < rax_4;
                    
                    if (rax_3 != rax_4)
                        rbx = rcx_2;
                    break;
                }
                case 5:
                {
                    rbx = (var_150 & 0xf000) == 0x8000;
                    break;
                }
                case 6:
                {
                    rbx = var_150 >> 0xa & 1;
                    break;
                }
                case 7:
                {
                    rbx = var_148 == uucore::features::process::getegid::hb05cec3c93246a5a();
                    break;
                }
                case 8:
                {
                    rbx = (var_150 & 0xf000) == 0xa000;
                    break;
                }
                case 9:
                {
                    rbx = var_150 >> 9 & 1;
                    break;
                }
                case 0xa:
                {
                    rbx = var_14c == uucore::features::process::geteuid::hdc9764945a55bce9();
                    break;
                }
                case 0xb:
                {
                    rbx = (var_150 & 0xf000) == 0x1000;
                    break;
                }
                case 0xc:
                {
                    int64_t var_218_2 = var_158;
                    int128_t var_228_2 = var_168;
                    int128_t var_238_2 = var_178;
                    var_248 = var_188;
                    int32_t var_210_2 = var_150;
                    int32_t var_20c_2 = var_14c;
                    int32_t var_208_2 = var_148;
                    int64_t var_204_2 = var_144;
                    int32_t var_1fc_2 = var_13c;
                    int64_t var_1f8_2 = var_138;
                    int128_t var_1f0_2 = var_130;
                    int128_t var_1e0_2 = var_120;
                    int128_t var_1d0_2 = var_110;
                    int128_t var_1c0_2 = var_100;
                    int128_t var_1b0_2 = var_f0;
                    int64_t var_1a0_2 = var_e0;
                    char var_198_2 = 4;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::haeeca08a8ce8c822(&var_248, 4);
                    break;
                }
                case 0xd:
                {
                    rbx = (var_150 & 0xf000) == 0xc000;
                    break;
                }
                case 0xe:
                {
                    rbx = var_138;
                    break;
                }
                case 0xf:
                {
                    rbx = var_150 >> 0xb & 1;
                    break;
                }
                case 0x10:
                {
                    int64_t var_218_1 = var_158;
                    int128_t var_228_1 = var_168;
                    int128_t var_238_1 = var_178;
                    var_248 = var_188;
                    int32_t var_210_1 = var_150;
                    int32_t var_20c_1 = var_14c;
                    int32_t var_208_1 = var_148;
                    int64_t var_204_1 = var_144;
                    int32_t var_1fc_1 = var_13c;
                    int64_t var_1f8_1 = var_138;
                    int128_t var_1f0_1 = var_130;
                    int128_t var_1e0_1 = var_120;
                    int128_t var_1d0_1 = var_110;
                    int128_t var_1c0_1 = var_100;
                    int128_t var_1b0_1 = var_f0;
                    int64_t var_1a0_1 = var_e0;
                    char var_198_1 = 2;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::haeeca08a8ce8c822(&var_248, 2);
                    break;
                }
                case 0x11:
                {
                    int64_t var_218_3 = var_158;
                    int128_t var_228_3 = var_168;
                    int128_t var_238_3 = var_178;
                    var_248 = var_188;
                    int32_t var_210_3 = var_150;
                    int32_t var_20c_3 = var_14c;
                    int32_t var_208_3 = var_148;
                    int64_t var_204_3 = var_144;
                    int32_t var_1fc_3 = var_13c;
                    int64_t var_1f8_3 = var_138;
                    int128_t var_1f0_3 = var_130;
                    int128_t var_1e0_3 = var_120;
                    int128_t var_1d0_3 = var_110;
                    int128_t var_1c0_3 = var_100;
                    int128_t var_1b0_3 = var_f0;
                    int64_t var_1a0_3 = var_e0;
                    char var_198_3 = 1;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::haeeca08a8ce8c822(&var_248, 1);
                    break;
                }
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_188);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_188);
            rbx = 0;
        }
    }
    else
    {
        std::fs::symlink_metadata::h8270b7803eb466ec(rdi, arg1);
        
        if (var_188 != 2)
            goto label_4ad569;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_188);
        rbx = 0;
    }
    
    return rbx;
}
