
  fn uu_od::prn_char::format_item_c::hbeff54a2c941035d.llvm.2413193166722088455() -> *mut i128

{
    let rdx: i64;
    
    if rdx == 0
    {
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
        /* no return */
    }
    
    let rsi: *mut i8;
    let mut rax: u32 = *rsi;
    let mut var_a9: i8 = rax;
    let result: *mut i128;
    let mut var_a8: *mut c_void;
    let mut var_98: *mut i128;
    let mut var_68: i64;
    let mut var_30: *mut *mut c_void;
    let mut rax_2: *mut i128;
    let mut rax_3: *mut *mut c_void;
    
    if rax < 0
    {
        if (rax & 0xc0) != 0x80
        {
            let mut rdi_1: i64;
            
            if rdx != 1 && (rax & 0xe0) == 0xc0
            {
                rdi_1 = 2;
            }
            else if rdx < 3 || (rax & 0xf0) != 0xe0
            {
                if rdx >= 4
                {
                    rax &= 0xf8;
                }
                
                if rdx < 4 || rax != 0xf0
                {
                    var_30 = &var_a9;
                    let var_28_2: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
                    var_68 = 2;
                    let var_58_4: i64 = 0;
                    let var_50_4: i64 = 3;
                    let var_48_4: i64 = 0;
                    let var_40_4: i64 = 0x800000020;
                    let var_38_4: i8 = 3;
                    rax_2 = &data_5430c8;
                    goto 'label_4d57dd;
                }
                
                rdi_1 = 4;
            }
            else
            {
                rdi_1 = 3;
            }
            
            let mut rax_4: *mut i8;
            let mut rdx_1: i64;
            rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(rdi_1, rsi, rdx);
            core::str::converts::from_utf8::ha1effb4cca6d9901(&var_30, rax_4, rdx_1);
            let mut rax_5: *mut i128;
            
            if var_30 == 0
            {
                let var_28: i64;
                let mut var_18: i128 = var_28;
                var_a8 = &var_18;
                let var_a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                var_68 = 2;
                let var_58_3: i64 = 0;
                let var_50_3: i64 = 4;
                let var_48_3: i64 = 0;
                let var_40_3: i64 = 0x20;
                let var_38_3: i8 = 1;
                rax_5 = &data_40dad0;
            }
            else
            {
                var_a8 = &var_a9;
                let var_a0_1: fn(arg1: *mut i8, arg2: *mut i64) -> u64 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
                var_68 = 2;
                let var_58_2: i64 = 0;
                let var_50_2: i64 = 3;
                let var_48_2: i64 = 0;
                let var_40_2: i64 = 0x800000020;
                let var_38_2: i8 = 3;
                rax_5 = &data_5430c8;
            }
            
            var_98 = rax_5;
            let var_90_2: i64 = 1;
            let var_78_2: *mut i64 = &var_68;
            let var_70_2: i64 = 1;
            rax_3 = &var_a8;
            goto 'label_4d5984;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(result);
    }
    else
    {
        var_a8 = (&uu_od::prn_char::C_CHARS::h05ab81629a83a794).byte_offset(rax << 4);
        var_30 = &var_a8;
        let var_28_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c73fc09a8c273ab;
        var_68 = 2;
        let var_58_1: i64 = 0;
        let var_50_1: i64 = 4;
        let var_48_1: i64 = 0;
        let var_40_1: i64 = 0x20;
        let var_38_1: i8 = 1;
        rax_2 = &data_40dad0;
        'label_4d57dd:
        var_98 = rax_2;
        let var_90_1: i64 = 1;
        let var_78_1: *mut i64 = &var_68;
        let var_70_1: i64 = 1;
        rax_3 = &var_30;
        'label_4d5984:
        let var_88_1: *mut *mut c_void = rax_3;
        let var_80_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(result, &var_98);
    }
    result
}
