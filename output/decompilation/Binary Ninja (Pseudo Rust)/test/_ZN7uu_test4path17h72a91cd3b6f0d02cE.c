
  fn uu_test::path::h72a91cd3b6f0d02c(arg1: i64, arg2: i64, arg3: i8) -> u64

{
    let mut var_188: i32;
    let rdi: *mut i32 = &var_188;
    let mut rbx: i32;
    
    if arg3 != 8
    {
        std::fs::metadata::h59562c409af00ed3(rdi, arg1);
        
        if var_188 != 2
        {
            'label_4ad569:
            let mut var_d8: i128 = var_188;
            let var_178: i128;
            let var_c8_1: i128 = var_178;
            let var_168: i128;
            let var_b8_1: i128 = var_168;
            let var_158: i64;
            let var_a8_1: i64 = var_158;
            let var_150: i32;
            let var_a0_1: i32 = var_150;
            let var_14c: i32;
            let var_9c_1: i32 = var_14c;
            let var_148: i32;
            let var_98_1: i32 = var_148;
            let var_144: i64;
            let var_94_1: i64 = var_144;
            let var_13c: i32;
            let var_8c_1: i32 = var_13c;
            let var_138: i64;
            let var_88_1: i64 = var_138;
            let var_e0: i64;
            let var_30_1: i64 = var_e0;
            let var_f0: i128;
            let var_40_1: i128 = var_f0;
            let var_100: i128;
            let var_50_1: i128 = var_100;
            let var_110: i128;
            let var_60_1: i128 = var_110;
            let var_120: i128;
            let var_70_1: i128 = var_120;
            let var_130: i128;
            let var_80_1: i128 = var_130;
            let mut var_248: i128;
            
            match arg3
            {
                0 =>
                {
                    rbx = (var_150 & 0xf000) == 0x6000;
                }
                1 =>
                {
                    rbx = (var_150 & 0xf000) == 0x2000;
                }
                2 =>
                {
                    rbx = (var_150 & 0xf000) == 0x4000;
                }
                3 =>
                {
                    rbx = 1;
                }
                4 =>
                {
                    std::fs::Metadata::accessed::h83f649a5a12d68e0(&var_248, &var_d8);
                    let mut rax_3: i64;
                    let mut rdx_11: i32;
                    rax_3 = core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_248);
                    std::fs::Metadata::modified::h6f16921acf618ae6(&var_248, &var_d8);
                    let mut rax_4: i64;
                    let mut rdx_12: i32;
                    rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&var_248);
                    rbx = rdx_11 < rdx_12;
                    let mut rcx_2: i32;
                    rcx_2 = rax_3 < rax_4;
                    
                    if rax_3 != rax_4
                    {
                        rbx = rcx_2;
                    }
                }
                5 =>
                {
                    rbx = (var_150 & 0xf000) == 0x8000;
                }
                6 =>
                {
                    rbx = var_150 >> 0xa & 1;
                }
                7 =>
                {
                    rbx = var_148 == uucore::features::process::getegid::hb05cec3c93246a5a();
                }
                8 =>
                {
                    rbx = (var_150 & 0xf000) == 0xa000;
                }
                9 =>
                {
                    rbx = var_150 >> 9 & 1;
                }
                0xa =>
                {
                    rbx = var_14c == uucore::features::process::geteuid::hdc9764945a55bce9();
                }
                0xb =>
                {
                    rbx = (var_150 & 0xf000) == 0x1000;
                }
                0xc =>
                {
                    let var_218_2: i64 = var_158;
                    let var_228_2: i128 = var_168;
                    let var_238_2: i128 = var_178;
                    var_248 = var_188;
                    let var_210_2: i32 = var_150;
                    let var_20c_2: i32 = var_14c;
                    let var_208_2: i32 = var_148;
                    let var_204_2: i64 = var_144;
                    let var_1fc_2: i32 = var_13c;
                    let var_1f8_2: i64 = var_138;
                    let var_1f0_2: i128 = var_130;
                    let var_1e0_2: i128 = var_120;
                    let var_1d0_2: i128 = var_110;
                    let var_1c0_2: i128 = var_100;
                    let var_1b0_2: i128 = var_f0;
                    let var_1a0_2: i64 = var_e0;
                    let var_198_2: i8 = 4;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::haeeca08a8ce8c822(&var_248, 4);
                }
                0xd =>
                {
                    rbx = (var_150 & 0xf000) == 0xc000;
                }
                0xe =>
                {
                    rbx = var_138 != 0;
                }
                0xf =>
                {
                    rbx = var_150 >> 0xb & 1;
                }
                0x10 =>
                {
                    let var_218_1: i64 = var_158;
                    let var_228_1: i128 = var_168;
                    let var_238_1: i128 = var_178;
                    var_248 = var_188;
                    let var_210_1: i32 = var_150;
                    let var_20c_1: i32 = var_14c;
                    let var_208_1: i32 = var_148;
                    let var_204_1: i64 = var_144;
                    let var_1fc_1: i32 = var_13c;
                    let var_1f8_1: i64 = var_138;
                    let var_1f0_1: i128 = var_130;
                    let var_1e0_1: i128 = var_120;
                    let var_1d0_1: i128 = var_110;
                    let var_1c0_1: i128 = var_100;
                    let var_1b0_1: i128 = var_f0;
                    let var_1a0_1: i64 = var_e0;
                    let var_198_1: i8 = 2;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::haeeca08a8ce8c822(&var_248, 2);
                }
                0x11 =>
                {
                    let var_218_3: i64 = var_158;
                    let var_228_3: i128 = var_168;
                    let var_238_3: i128 = var_178;
                    var_248 = var_188;
                    let var_210_3: i32 = var_150;
                    let var_20c_3: i32 = var_14c;
                    let var_208_3: i32 = var_148;
                    let var_204_3: i64 = var_144;
                    let var_1fc_3: i32 = var_13c;
                    let var_1f8_3: i64 = var_138;
                    let var_1f0_3: i128 = var_130;
                    let var_1e0_3: i128 = var_120;
                    let var_1d0_3: i128 = var_110;
                    let var_1c0_3: i128 = var_100;
                    let var_1b0_3: i128 = var_f0;
                    let var_1a0_3: i64 = var_e0;
                    let var_198_3: i8 = 1;
                    rbx =
                        uu_test::path::_$u7b$$u7b$closure$u7d$$u7d$::haeeca08a8ce8c822(&var_248, 1);
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
        
        if var_188 != 2
        {
            goto 'label_4ad569;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&var_188);
        rbx = 0;
    }
    
    rbx
}
