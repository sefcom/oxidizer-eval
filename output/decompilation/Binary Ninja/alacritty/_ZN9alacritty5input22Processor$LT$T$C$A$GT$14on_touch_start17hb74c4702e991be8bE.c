
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::on_touch_start::hb74c4702e991be8b(int64_t* arg1, uint128_t* arg2)

{
    int64_t r14 = arg1[1];
    uint128_t zmm1 = *(arg1 + 0x20);
    int64_t rbp = arg1[6];
    int64_t result_2 = arg1[7];
    uint128_t result_3 = arg1[8];
    char rdi = *(arg1 + 0x44);
    int64_t r13 = arg1[0xe];
    int64_t rdx_1 = *arg1 - 4;
    int64_t rsi = 3;
    
    if (rdx_1 < 7)
        rsi = rdx_1;
    
    *arg1 = 4;
    int16_t var_bc;
    char var_ba;
    uint128_t var_b8;
    uint128_t var_a8;
    uint128_t var_98;
    int64_t result;
    int32_t var_80;
    int64_t var_70;
    uint128_t result_1;
    uint128_t var_58;
    uint128_t var_48;
    char r13_1;
    
    switch (rsi)
    {
        case 0:
        {
            var_48 = *arg2;
            var_58 = arg2[1];
            rbp = arg2[2];
            result_2 = *(arg2 + 0x28);
            result_1 = arg2[3];
            r13_1 = *(arg2 + 0x34);
            var_ba = *(arg2 + 0x37);
            var_bc = *(arg2 + 0x35);
            var_70 = *(arg2 + 0x38);
            r14 = 9;
            break;
        }
        case 1:
        case 2:
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(&var_b8);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, 
                result_2);
            label_85a8cd:
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
            break;
        }
        case 3:
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(&var_b8);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, rbp);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, r13);
            goto label_85a8cd;
        }
        case 4:
        case 5:
        {
            var_48 = *(arg1 + 0x10);
            var_bc = *(arg1 + 0x45);
            var_ba = *(arg1 + 0x47);
            var_70 = *arg2;
            var_b8 = *(arg2 + 8);
            var_a8 = *(arg2 + 0x18);
            var_98 = *(arg2 + 0x28);
            result = *(arg2 + 0x38);
            var_58 = zmm1;
            result_1 = result_3;
            r13_1 = rdi;
            break;
        }
        case 6:
        {
            var_b8 = r14;
            var_b8 = *(arg1 + 0x10);
            var_a8 = zmm1;
            *var_98[8] = rbp;
            result = result_2;
            var_80 = result_3;
            char var_7c_1 = rdi;
            int16_t var_7b_1 = *(arg1 + 0x45);
            char var_79_1 = *(arg1 + 0x47);
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb8109ba4e3020215(&var_b8, 
                arg2[3]);
            goto label_85a8cd;
        }
    }
    
    core::ptr::drop_in_place$LT$alacritty..event..TouchPurpose$GT$::ha715079efdd062ac(arg1);
    *arg1 = r14;
    *(arg1 + 8) = var_48;
    *(arg1 + 0x18) = var_58;
    arg1[5] = rbp;
    arg1[6] = result_2;
    arg1[7] = result_1;
    *(arg1 + 0x3c) = r13_1;
    *(arg1 + 0x3d) = var_bc;
    *(arg1 + 0x3f) = var_ba;
    arg1[8] = var_70;
    *(arg1 + 0x48) = var_b8;
    *(arg1 + 0x58) = var_a8;
    *(arg1 + 0x68) = var_98;
    arg1[0xf] = result;
    arg1[0x10] = 0;
    return result;
}
