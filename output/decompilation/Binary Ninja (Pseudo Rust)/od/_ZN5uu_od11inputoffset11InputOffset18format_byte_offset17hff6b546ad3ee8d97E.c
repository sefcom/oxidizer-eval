
  fn uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let rcx: i64 = *arg2;
    let rax: i64 = arg2[1];
    let mut var_d0: *mut c_void;
    let mut var_a0: i64;
    let mut var_98: *mut c_void;
    let mut var_78: i64;
    let mut rax_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64;
    let mut rax_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64;
    
    match arg2[3]
    {
        0 =>
        {
            if rcx == 0
            {
                var_98 = &arg2[2];
                rax_2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                'label_4cf502:
                let var_90_4: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = rax_2;
                var_78 = 2;
                let var_68_4: i64 = 0;
                let var_60_4: i64 = 7;
                goto 'label_4cf554;
            }
            
            var_a0 = rax;
            var_98 = &arg2[2];
            rax_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            'label_4cf2d4:
            let var_90_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = rax_1;
            let var_88_1: *mut i64 = &var_a0;
            let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = rax_1;
            var_78 = 2;
            let var_68_1: i64 = 0;
            let var_60_1: i64 = 7;
            let var_58_1: i64 = 0;
            let var_50_1: i64 = 0x800000020;
            let var_48_1: i8 = 3;
            let var_40_1: i64 = 2;
            let var_30_1: i64 = 0;
            let mut var_28: i64;
            __builtin_memcpy(&var_28, 
                "\x07\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x08\x00\x00\x00", 0x18);
            goto 'label_4cf47c;
        }
        1 =>
        {
            if rcx == 0
            {
                var_98 = &arg2[2];
                let var_90_5: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::h6330a933029ad3d6;
                var_78 = 2;
                let var_68_5: i64 = 0;
                let var_60_5: i64 = 6;
                'label_4cf554:
                let var_58_4: i64 = 0;
                let var_50_4: i64 = 0x800000020;
                let var_48_4: i8 = 3;
                var_d0 = &data_40dad0;
                let var_c8_3: i64 = 1;
                goto 'label_4cf594;
            }
            
            var_a0 = rax;
            var_98 = &arg2[2];
            let var_90_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::h6330a933029ad3d6;
            let var_88_2: *mut i64 = &var_a0;
            let var_80_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::h6330a933029ad3d6;
            var_78 = 2;
            let var_68_3: i64 = 0;
            let var_60_3: i64 = 6;
            let var_58_3: i64 = 0;
            let var_50_3: i64 = 0x800000020;
            let var_48_3: i8 = 3;
            let var_40_2: i64 = 2;
            let var_30_2: i64 = 0;
            let mut var_28_1: i64;
            __builtin_memcpy(&var_28_1, 
                "\x06\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x08\x00\x00\x00", 0x18);
            'label_4cf47c:
            let var_10_1: i8 = 3;
            var_d0 = &data_541a30;
            let var_c8_2: i64 = 3;
            let var_b0_1: *mut i64 = &var_78;
            let var_a8_1: i64 = 2;
            let var_c0_1: *mut *mut c_void = &var_98;
            let var_b8_1: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_d0);
        }
        2 =>
        {
            if rcx == 0
            {
                var_98 = &arg2[2];
                rax_2 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::hbfb7d5c20b1afefa;
                goto 'label_4cf502;
            }
            
            var_a0 = rax;
            var_98 = &arg2[2];
            rax_1 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::hbfb7d5c20b1afefa;
            goto 'label_4cf2d4;
        }
        3 =>
        {
            if rcx == 0
            {
                *arg1 = 0;
                *arg1.byte_offset(8) = 1;
                arg1[1] = 0;
            }
            else
            {
                var_a0 = rax;
                var_98 = &var_a0;
                let var_90_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::hbfb7d5c20b1afefa;
                var_78 = 2;
                let var_68_2: i64 = 0;
                let var_60_2: i64 = 7;
                let var_58_2: i64 = 0;
                let var_50_2: i64 = 0x800000020;
                let var_48_2: i8 = 3;
                var_d0 = &data_541a60;
                let var_c8_1: i64 = 2;
                'label_4cf594:
                let var_b0_2: *mut i64 = &var_78;
                let var_a8_2: i64 = 1;
                let var_c0_2: *mut *mut c_void = &var_98;
                let var_b8_2: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_d0);
            }
        }
    }
    
    arg1
}
