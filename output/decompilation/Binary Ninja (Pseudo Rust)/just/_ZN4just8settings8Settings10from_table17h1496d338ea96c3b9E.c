
  fn just::settings::Settings::from_table::h1496d338ea96c3b9(arg1: i64) -> i64

{
    let mut var_268: i64 = -0x8000000000000000;
    let mut var_130: i64 = 0;
    let mut var_250: i64 = -0x8000000000000000;
    *var_130[7] = 0;
    let mut var_238: i64 = -0x8000000000000000;
    let mut var_1f0: i64 = -0x8000000000000000;
    let mut var_1a8: i64 = -0x8000000000000000;
    let mut var_125: i16 = 0;
    let mut var_190: i64 = -0x8000000000000000;
    let var_148: i64 = -0x8000000000000000;
    let mut var_78: ();
    let rsi: *mut i64;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_78, rsi);
    
    loop
    {
        let mut var_120: ();
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d1ed2fb1b2d38fa(&var_120, &var_78);
        let var_110: i8;
        let rcx_1: u32 = var_110;
        
        if rcx_1 == 0x14
        {
            break;
        }
        
        let var_10f: i8;
        let var_108: i128;
        let var_f8: i64;
        let var_f0: i64;
        let var_e8: i64;
        let var_e0: i8;
        let var_df: i8;
        let var_de: i8;
        let var_dd: i128;
        let mut r14_2: *mut i64;
        
        match jump_table_46ac50[rcx_1]
        {
            0x21ef66 =>
            {
                var_125 = var_10f & 1;
                continue;
            }
            0x21efd3 =>
            {
                var_130 = var_10f & 1;
                continue;
            }
            0x21efde =>
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..interpreter..Interpreter$GT$$GT$::h095f6b2489a2b51c(&var_1f0);
                let var_1e0_1: i64 = var_f8;
                var_1f0 = var_108;
                let var_1d8_1: i64 = var_f0;
                let var_1d0_1: i64 = var_e8;
                let var_1c8_1: i8 = var_e0;
                let var_1c7_1: i8 = var_df;
                let var_1c6_1: i8 = var_de;
                let var_1b8_1: i128 = var_dd;
                let var_1c5_1: i128 = var_dd;
                continue;
            }
            0x21f058 =>
            {
                let var_127_1: i8 = var_10f & 1;
                continue;
            }
            0x21f066 =>
            {
                *var_130[3] = var_10f & 1;
                continue;
            }
            0x21f074 =>
            {
                let var_126_1: i8 = var_10f & 1;
                continue;
            }
            0x21f082 =>
            {
                *var_130[7] = var_10f & 1;
                continue;
            }
            0x21f090 =>
            {
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_268);
                let var_258_1: i64 = var_f8;
                var_268 = var_108;
                continue;
            }
            0x21f0b8 =>
            {
                r14_2 = &var_1a8;
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_1a8);
                'label_689e7e:
                r14_2[2] = var_f8;
                *r14_2 = var_108;
                continue;
            }
            0x21f0cd =>
            {
                *var_130[2] = var_10f & 1;
                continue;
            }
            0x21f0db =>
            {
                *var_130[5] = var_10f & 1;
                continue;
            }
            0x21f0e9 =>
            {
                *var_130[1] = var_10f & 1;
                continue;
            }
            0x21f0f7 =>
            {
                *var_125[1] = var_10f & 1;
                continue;
            }
            0x21f105 =>
            {
                r14_2 = &var_250;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_250);
                goto 'label_689e7e;
            }
            0x21f10f =>
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..interpreter..Interpreter$GT$$GT$::h095f6b2489a2b51c(&var_238);
                let var_228_1: i64 = var_f8;
                var_238 = var_108;
                let var_220_1: i64 = var_f0;
                let var_218_1: i64 = var_e8;
                let var_210_1: i8 = var_e0;
                let var_20f_1: i8 = var_df;
                let var_20e_1: i8 = var_de;
                let var_200_1: i128 = var_dd;
                let var_20d_1: i128 = var_dd;
                continue;
            }
            0x21f16e =>
            {
                *var_130[4] = var_10f & 1;
                continue;
            }
            0x21f17c =>
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..interpreter..Interpreter$GT$$GT$::h095f6b2489a2b51c(&var_190);
                let var_180_1: i64 = var_f8;
                var_190 = var_108;
                let var_178_1: i64 = var_f0;
                let var_170_1: i64 = var_e8;
                let var_168_1: i8 = var_e0;
                let var_167_1: i8 = var_df;
                let var_166_1: i8 = var_de;
                let var_158_1: i128 = var_dd;
                let var_165_1: i128 = var_dd;
                continue;
            }
            0x21f1f6 =>
            {
                let var_128_1: i8 = var_10f & 1;
                continue;
            }
            0x21f204 =>
            {
                *var_130[6] = var_10f & 1;
                continue;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$$RF$str$C$just..set..Set$GT$$GT$::h926159b504ea4310(&var_78);
    memcpy(arg1, &var_268, 0x148)
}
