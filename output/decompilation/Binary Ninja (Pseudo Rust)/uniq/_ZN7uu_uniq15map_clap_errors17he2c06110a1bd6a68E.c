
  fn uu_uniq::map_clap_errors::he2c06110a1bd6a68(arg1: *mut i32) -> *mut i128

{
    let mut var_b0: *mut i32 = arg1;
    let mut r15: i64;
    r15 = 1;
    let mut var_a8: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&var_a8, 
        "--group is mutually exclusive wi…", 0x2f);
    let var_98: i64;
    let var_78: i64 = var_98;
    let mut var_88: i128 = var_a8;
    let mut var_58: i128;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_58, &var_88);
    let mut rbp: i64;
    rbp = 1;
    r15 = 1;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&var_a8, 
        "invalid argument 'badoption' for…", 0x75);
    let var_78_1: i64 = var_98;
    var_88 = var_a8;
    r15 = 1;
    let mut var_40: i128;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_40, &var_88);
    let mut r12: i64;
    r12 = 1;
    rbp = 1;
    r15 = 1;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&var_a8, 
        "invalid argument 'badoption' for…", 0x6f);
    let var_78_2: i64 = var_98;
    var_88 = var_a8;
    rbp = 1;
    r15 = 1;
    let mut var_70: i128;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_70, &var_88);
    let rax_4: u32 = *var_b0.byte_offset(0xd5);
    let mut result: *mut i128;
    
    if rax_4 == 0
    {
        rbp = 1;
        r12 = 1;
        r15 = 1;
        let rax_7: *mut i8 =
            clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 5);
        
        if rax_7 == 0
        {
            'label_4bdf1d:
            r12 = 1;
            r15 = 1;
            let rax_13: *mut i8 =
                clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 5);
            
            if rax_13 == 0
            {
                goto 'label_4bdfa4;
            }
            
            r12 = 1;
            r15 = 1;
            
            if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h0ffee90582114660(rax_13)
                == 0
            {
                goto 'label_4bdfa4;
            }
            
            r12 = 1;
            r15 = 1;
            let rax_15: *mut i8 =
                clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 1);
            
            if rax_15 == 0
            {
                goto 'label_4bdfa4;
            }
            
            r12 = 1;
            r15 = 1;
            
            if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::he517f75479310f2d(rax_15)
                == 0
            {
                goto 'label_4bdfa4;
            }
            
            let var_90_3: i32 = 1;
            var_a8 = var_70;
            let var_60: i64;
            let var_98_3: i64 = var_60;
            result = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_a8);
            rbp = 1;
            r12 = 0;
            goto 'label_4bde3a;
        }
        
        r12 = 1;
        r15 = 1;
        
        if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::hd3da8a85969e5e42(rax_7) == 0
        {
            goto 'label_4bdf1d;
        }
        
        r12 = 1;
        r15 = 1;
        let rax_9: *mut i8 =
            clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 1);
        
        if rax_9 == 0
        {
            goto 'label_4bdf1d;
        }
        
        r12 = 1;
        r15 = 1;
        
        if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h896d76687ee462ab(rax_9) == 0
        {
            goto 'label_4bdf1d;
        }
        
        let var_90_2: i32 = 1;
        var_a8 = var_40;
        let var_30: i64;
        let var_98_2: i64 = var_30;
        r15 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_a8);
        rbp = 1;
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_70);
        'label_4bde4c:
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_58);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdafbdf8e9e6375cf(var_b0);
    }
    else if rax_4 != 8
    {
        'label_4bdfa4:
        r12 = 1;
        rbp = 1;
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_b0);
        r12 = 1;
        rbp = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_70);
        rbp = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_40);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_58);
    }
    else
    {
        let var_90_1: i32 = 1;
        var_a8 = var_58;
        let var_48: i64;
        let var_98_1: i64 = var_48;
        r12 = 1;
        r15 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_a8);
        r12 = 1;
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_70);
        'label_4bde3a:
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_40);
        
        if r12 == 0
        {
            goto 'label_4bde4c;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdafbdf8e9e6375cf(var_b0);
    }
    
    result
}
