
  int128_t* uu_uniq::map_clap_errors::he2c06110a1bd6a68(int32_t* arg1)

{
    int32_t* var_b0 = arg1;
    int64_t r15;
    r15 = 1;
    int128_t var_a8;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&var_a8, 
        "--group is mutually exclusive wi…", 0x2f);
    int64_t var_98;
    int64_t var_78 = var_98;
    int128_t var_88 = var_a8;
    int128_t var_58;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_58, &var_88);
    int64_t rbp;
    rbp = 1;
    r15 = 1;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&var_a8, 
        "invalid argument 'badoption' for…", 0x75);
    int64_t var_78_1 = var_98;
    var_88 = var_a8;
    r15 = 1;
    int128_t var_40;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_40, &var_88);
    int64_t r12;
    r12 = 1;
    rbp = 1;
    r15 = 1;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&var_a8, 
        "invalid argument 'badoption' for…", 0x6f);
    int64_t var_78_2 = var_98;
    var_88 = var_a8;
    rbp = 1;
    r15 = 1;
    int128_t var_70;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_70, &var_88);
    uint32_t rax_4 = *(var_b0 + 0xd5);
    int128_t* result;
    
    if (!rax_4)
    {
        rbp = 1;
        r12 = 1;
        r15 = 1;
        char* rax_7 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 5);
        
        if (!rax_7)
        {
            label_4bdf1d:
            r12 = 1;
            r15 = 1;
            char* rax_13 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 5);
            
            if (!rax_13)
                goto label_4bdfa4;
            
            r12 = 1;
            r15 = 1;
            
            if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h0ffee90582114660(rax_13))
                goto label_4bdfa4;
            
            r12 = 1;
            r15 = 1;
            char* rax_15 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 1);
            
            if (!rax_15)
                goto label_4bdfa4;
            
            r12 = 1;
            r15 = 1;
            
            if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::he517f75479310f2d(rax_15))
                goto label_4bdfa4;
            
            int32_t var_90_3 = 1;
            var_a8 = var_70;
            int64_t var_60;
            int64_t var_98_3 = var_60;
            result = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_a8);
            rbp = 1;
            r12 = 0;
            goto label_4bde3a;
        }
        
        r12 = 1;
        r15 = 1;
        
        if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::hd3da8a85969e5e42(rax_7))
            goto label_4bdf1d;
        
        r12 = 1;
        r15 = 1;
        char* rax_9 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&var_b0, 1);
        
        if (!rax_9)
            goto label_4bdf1d;
        
        r12 = 1;
        r15 = 1;
        
        if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h896d76687ee462ab(rax_9))
            goto label_4bdf1d;
        
        int32_t var_90_2 = 1;
        var_a8 = var_40;
        int64_t var_30;
        int64_t var_98_2 = var_30;
        r15 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_a8);
        rbp = 1;
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_70);
        label_4bde4c:
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_58);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdafbdf8e9e6375cf(var_b0);
    }
    else if (rax_4 != 8)
    {
        label_4bdfa4:
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
        int32_t var_90_1 = 1;
        var_a8 = var_58;
        int64_t var_48;
        int64_t var_98_1 = var_48;
        r12 = 1;
        r15 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_a8);
        r12 = 1;
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_70);
        label_4bde3a:
        r15 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&var_40);
        
        if (!r12)
            goto label_4bde4c;
        
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdafbdf8e9e6375cf(var_b0);
    }
    
    return result;
}
