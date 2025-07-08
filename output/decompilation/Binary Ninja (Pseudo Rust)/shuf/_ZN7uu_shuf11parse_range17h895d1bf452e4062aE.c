
  fn uu_shuf::parse_range::h895d1bf452e4062a(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_50: *mut i8;
    core::str::_$LT$impl$u20$str$GT$::split_once::h8f190cd472d8d64b(&var_50, arg2, arg3);
    let r12: *mut i8 = var_50;
    let mut var_b8: i64;
    let mut var_98: *mut *mut c_void;
    let mut var_60: *mut i64;
    
    if r12 == 0
    {
        var_b8 = 0;
        let var_b0_1: i64 = arg2;
        let var_a8_1: i64 = arg3;
        let var_a0_1: i8 = 1;
        var_60 = &var_b8;
        'label_4c1cbf:
        let var_58_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_98 = &data_537d38;
        let var_90_1: i64 = 1;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut i64 = &var_60;
        let var_80_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7c94a57f03ee0317(&arg1[1], &var_98);
        *arg1 = 1;
    }
    else
    {
        let var_48: i64;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_b8, r12, var_48);
        let var_90: i64;
        let mut rax_2: *mut *mut c_void;
        
        if var_b8 == 0
        {
            let var_40: *mut i8;
            let var_38: i64;
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_b8, var_40, var_38);
            let var_b0: i64;
            let mut rax_5: i64;
            
            if var_b8 == 0
            {
                rax_5 = var_b0;
                
                if var_b0 > rax_5 && var_b0 != rax_5 + 1
                {
                    'label_4c1d88:
                    var_b8 = 0;
                    let var_b0_2: i64 = arg2;
                    let var_a8_2: i64 = arg3;
                    let var_a0_2: i8 = 1;
                    var_60 = &var_b8;
                    goto 'label_4c1cbf;
                }
            }
            else
            {
                uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::ha46b1477c8a092d1(&var_98);
                rax_2 = var_98;
                
                if rax_2 != -0x8000000000000000
                {
                    goto 'label_4c1c88;
                }
                
                rax_5 = var_90;
                
                if var_b0 > rax_5 && var_b0 != rax_5 + 1
                {
                    goto 'label_4c1d88;
                }
            }
            
            arg1[1] = var_b0;
            arg1[2] = rax_5;
            arg1[3] = 0;
            *arg1 = 0;
        }
        else
        {
            uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::h12498d1826f58d1e(&var_98);
            rax_2 = var_98;
            'label_4c1c88:
            arg1[1] = rax_2;
            *arg1.byte_offset(0x10) = var_90;
            *arg1 = 1;
        }
    }
    arg1
}
