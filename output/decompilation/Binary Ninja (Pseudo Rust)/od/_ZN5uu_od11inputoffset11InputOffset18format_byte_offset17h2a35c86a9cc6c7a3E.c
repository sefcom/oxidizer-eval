
  fn uu_od::inputoffset::InputOffset::format_byte_offset::h2a35c86a9cc6c7a3(arg1: *mut i128, arg2: *mut i8) -> *mut i128

{
    let rcx: i8 = *arg2;
    let rax: i64 = *arg2.byte_offset(8);
    let mut var_60: *mut c_void;
    let mut var_30: i64;
    let mut var_28: *mut c_void;
    let mut rax_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64;
    let mut rax_2: *mut c_void;
    let mut rax_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64;
    let mut rax_5: *mut c_void;
    
    match arg2[0x18]
    {
        0 =>
        {
            if (rcx & 1) == 0
            {
                var_28 = &arg2[0x10];
                rax_3 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                'label_468b8a:
                let var_20_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = rax_3;
                var_60 = &data_41a940;
                let var_58_3: i64 = 1;
                'label_468ba4:
                rax_5 = &data_41cc50;
                goto 'label_468bde;
            }
            
            var_30 = rax;
            var_28 = &arg2[0x10];
            rax_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            'label_468a61:
            let var_20: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = rax_1;
            let var_18_1: *mut i64 = &var_30;
            let var_10_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = rax_1;
            var_60 = &data_5023c8;
            let var_58: i64 = 3;
            rax_2 = &data_41cc88;
            goto 'label_468b22;
        }
        1 =>
        {
            if (rcx & 1) == 0
            {
                var_28 = &arg2[0x10];
                let var_20_4: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::he7646be51d1ce660;
                var_60 = &data_41a940;
                let var_58_4: i64 = 1;
                rax_5 = &data_41cce8;
                'label_468bde:
                let var_40_1: *mut c_void = rax_5;
                let var_38_1: i64 = 1;
                let var_50_1: *mut *mut c_void = &var_28;
                let var_48_1: i64 = 1;
            }
            else
            {
                var_30 = rax;
                var_28 = &arg2[0x10];
                let var_20_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::he7646be51d1ce660;
                let var_18_2: *mut i64 = &var_30;
                let var_10_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i64$GT$::fmt::he7646be51d1ce660;
                var_60 = &data_5023c8;
                let var_58_2: i64 = 3;
                rax_2 = &data_41cd18;
                'label_468b22:
                let var_40: *mut c_void = rax_2;
                let var_38: i64 = 2;
                let var_50: *mut *mut c_void = &var_28;
                let var_48: i64 = 2;
            }
        }
        2 =>
        {
            if (rcx & 1) == 0
            {
                var_28 = &arg2[0x10];
                rax_3 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::h042f6d21a8c17b59;
                goto 'label_468b8a;
            }
            
            var_30 = rax;
            var_28 = &arg2[0x10];
            rax_1 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::h042f6d21a8c17b59;
            goto 'label_468a61;
        }
        3 =>
        {
            if (rcx & 1) == 0
            {
                *arg1 = 0;
                *arg1.byte_offset(8) = 1;
                arg1[1] = 0;
                return arg1;
            }
            
            var_30 = rax;
            var_28 = &var_30;
            let var_20_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i64$GT$::fmt::h042f6d21a8c17b59;
            var_60 = &data_5023f8;
            let var_58_1: i64 = 2;
            goto 'label_468ba4;
        }
    }
    
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_60);
    arg1
}
