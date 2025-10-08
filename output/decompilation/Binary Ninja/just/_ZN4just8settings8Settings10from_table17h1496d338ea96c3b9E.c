
  int64_t just::settings::Settings::from_table::h1496d338ea96c3b9(int64_t arg1)

{
    int64_t var_268 = -0x8000000000000000;
    int64_t var_130 = 0;
    int64_t var_250 = -0x8000000000000000;
    *var_130[7] = 0;
    int64_t var_238 = -0x8000000000000000;
    int64_t var_1f0 = -0x8000000000000000;
    int64_t var_1a8 = -0x8000000000000000;
    int16_t var_125 = 0;
    int64_t var_190 = -0x8000000000000000;
    int64_t var_148 = -0x8000000000000000;
    void var_78;
    int64_t* rsi;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_78, rsi);
    
    while (true)
    {
        void var_120;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d1ed2fb1b2d38fa(&var_120, &var_78);
        char var_110;
        uint32_t rcx_1 = var_110;
        
        if (rcx_1 == 0x14)
            break;
        
        char var_10f;
        int128_t var_108;
        int64_t var_f8;
        int64_t var_f0;
        int64_t var_e8;
        char var_e0;
        char var_df;
        char var_de;
        int128_t var_dd;
        int64_t* r14_2;
        
        switch (jump_table_46ac50[rcx_1])
        {
            case 0x21ef66:
            {
                var_125 = var_10f & 1;
                continue;
            }
            case 0x21efd3:
            {
                var_130 = var_10f & 1;
                continue;
            }
            case 0x21efde:
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..interpreter..Interpreter$GT$$GT$::h095f6b2489a2b51c(&var_1f0);
                int64_t var_1e0_1 = var_f8;
                var_1f0 = var_108;
                int64_t var_1d8_1 = var_f0;
                int64_t var_1d0_1 = var_e8;
                char var_1c8_1 = var_e0;
                char var_1c7_1 = var_df;
                char var_1c6_1 = var_de;
                int128_t var_1b8_1 = var_dd;
                int128_t var_1c5_1 = var_dd;
                continue;
            }
            case 0x21f058:
            {
                char var_127_1 = var_10f & 1;
                continue;
            }
            case 0x21f066:
            {
                *var_130[3] = var_10f & 1;
                continue;
            }
            case 0x21f074:
            {
                char var_126_1 = var_10f & 1;
                continue;
            }
            case 0x21f082:
            {
                *var_130[7] = var_10f & 1;
                continue;
            }
            case 0x21f090:
            {
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_268);
                int64_t var_258_1 = var_f8;
                var_268 = var_108;
                continue;
            }
            case 0x21f0b8:
            {
                r14_2 = &var_1a8;
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_1a8);
                label_689e7e:
                r14_2[2] = var_f8;
                *r14_2 = var_108;
                continue;
            }
            case 0x21f0cd:
            {
                *var_130[2] = var_10f & 1;
                continue;
            }
            case 0x21f0db:
            {
                *var_130[5] = var_10f & 1;
                continue;
            }
            case 0x21f0e9:
            {
                *var_130[1] = var_10f & 1;
                continue;
            }
            case 0x21f0f7:
            {
                *var_125[1] = var_10f & 1;
                continue;
            }
            case 0x21f105:
            {
                r14_2 = &var_250;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_250);
                goto label_689e7e;
            }
            case 0x21f10f:
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..interpreter..Interpreter$GT$$GT$::h095f6b2489a2b51c(&var_238);
                int64_t var_228_1 = var_f8;
                var_238 = var_108;
                int64_t var_220_1 = var_f0;
                int64_t var_218_1 = var_e8;
                char var_210_1 = var_e0;
                char var_20f_1 = var_df;
                char var_20e_1 = var_de;
                int128_t var_200_1 = var_dd;
                int128_t var_20d_1 = var_dd;
                continue;
            }
            case 0x21f16e:
            {
                *var_130[4] = var_10f & 1;
                continue;
            }
            case 0x21f1f6:
            {
                char var_128_1 = var_10f & 1;
                continue;
            }
            case 0x21f204:
            {
                *var_130[6] = var_10f & 1;
                continue;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$$RF$str$C$just..set..Set$GT$$GT$::h926159b504ea4310(&var_78);
    return memcpy(arg1, &var_268, 0x148);
}
