
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_touch_start::hb74c4702e991be8b(arg1: *mut i64, arg2: *mut u128) -> i64

{
    let mut r14: i64 = arg1[1];
    let zmm1: u128 = *arg1.byte_offset(0x20);
    let mut rbp: i64 = arg1[6];
    let mut result_2: i64 = arg1[7];
    let result_3: u128 = arg1[8];
    let rdi: i8 = *arg1.byte_offset(0x44);
    let r13: i64 = arg1[0xe];
    let rdx_1: i64 = *arg1 - 4;
    let mut rsi: i64 = 3;
    
    if rdx_1 < 7
    {
        rsi = rdx_1;
    }
    
    *arg1 = 4;
    let mut var_bc: i16;
    let mut var_ba: i8;
    let mut var_b8: u128;
    let mut var_a8: u128;
    let mut var_98: u128;
    let mut result: i64;
    let mut var_80: i32;
    let mut var_70: i64;
    let mut result_1: u128;
    let mut var_58: u128;
    let mut var_48: u128;
    let mut r13_1: i8;
    
    match rsi
    {
        0 =>
        {
            var_48 = *arg2;
            var_58 = arg2[1];
            rbp = arg2[2];
            result_2 = *arg2.byte_offset(0x28);
            result_1 = arg2[3];
            r13_1 = *arg2.byte_offset(0x34);
            var_ba = *arg2.byte_offset(0x37);
            var_bc = *arg2.byte_offset(0x35);
            var_70 = *arg2.byte_offset(0x38);
            r14 = 9;
        }
        1 | 2 =>
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(&var_b8);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, 
                result_2);
            'label_85a8cd:
            var_48 = var_b8;
            var_58 = var_a8;
            rbp = var_98;
            result_2 = *var_98[8];
            result_1 = result;
            r13_1 = *result[4];
            var_bc = *result[5];
            var_ba = *result[7];
            var_70 = var_80;
            r14 = 0xa;
        }
        3 =>
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(&var_b8);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, rbp);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, r13);
            goto 'label_85a8cd;
        }
        4 | 5 =>
        {
            var_48 = *arg1.byte_offset(0x10);
            var_bc = *arg1.byte_offset(0x45);
            var_ba = *arg1.byte_offset(0x47);
            var_70 = *arg2;
            var_b8 = *arg2.byte_offset(8);
            var_a8 = *arg2.byte_offset(0x18);
            var_98 = *arg2.byte_offset(0x28);
            result = *arg2.byte_offset(0x38);
            var_58 = zmm1;
            result_1 = result_3;
            r13_1 = rdi;
        }
        6 =>
        {
            var_b8 = r14;
            var_b8 = *arg1.byte_offset(0x10);
            var_a8 = zmm1;
            *var_98[8] = rbp;
            result = result_2;
            var_80 = result_3;
            let var_7c_1: i8 = rdi;
            let var_7b_1: i16 = *arg1.byte_offset(0x45);
            let var_79_1: i8 = *arg1.byte_offset(0x47);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, 
                arg2[3]);
            goto 'label_85a8cd;
        }
    }
    
    core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(arg1);
    *arg1 = r14;
    *arg1.byte_offset(8) = var_48;
    *arg1.byte_offset(0x18) = var_58;
    arg1[5] = rbp;
    arg1[6] = result_2;
    arg1[7] = result_1;
    *arg1.byte_offset(0x3c) = r13_1;
    *arg1.byte_offset(0x3d) = var_bc;
    *arg1.byte_offset(0x3f) = var_ba;
    arg1[8] = var_70;
    *arg1.byte_offset(0x48) = var_b8;
    *arg1.byte_offset(0x58) = var_a8;
    *arg1.byte_offset(0x68) = var_98;
    arg1[0xf] = result;
    arg1[0x10] = 0;
    result
}
