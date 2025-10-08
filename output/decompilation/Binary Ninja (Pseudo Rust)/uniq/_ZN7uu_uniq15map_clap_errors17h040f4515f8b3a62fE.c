
  fn uu_uniq::map_clap_errors::h040f4515f8b3a62f(arg1: *mut i32) -> u64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_b0: *mut i32 = arg1;
    let mut var_a8: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_a8, "--group is mutually exclusive wi…", 0x2f);
    let var_98: i64;
    let var_78: i64 = var_98;
    let mut var_88: i128 = var_a8;
    let mut var_38: i128;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_38, &var_88);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_a8, "invalid argument 'badoption' for…", 0x75);
    let var_78_1: i64 = var_98;
    var_88 = var_a8;
    let mut var_68: i128;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_68, &var_88);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_a8, "invalid argument 'badoption' for…", 0x6f);
    let var_78_2: i64 = var_98;
    var_88 = var_a8;
    let mut var_50: i128;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_50, &var_88);
    let rax_4: u32 = *var_b0.byte_offset(0xdd);
    let mut result: u64;
    let mut r15: i64;
    
    if rax_4 == 0
    {
        rbp = 1;
        r15 = 1;
        let rax_7: *mut i8 =
            clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 5);
        let mut rdi_15: *mut i128;
        
        if rax_7 == 0
        {
            'label_46779d:
            r15 = 1;
            let rax_13: *mut i8 =
                clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 5);
            
            if rax_13 == 0
            {
                goto 'label_467826;
            }
            
            r15 = 1;
            
            if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h802488a6a466e089(rax_13)
                == 0
            {
                goto 'label_467826;
            }
            
            r15 = 1;
            let rax_15: *mut i8 =
                clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 1);
            
            if rax_15 == 0
            {
                goto 'label_467826;
            }
            
            r15 = 1;
            
            if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h1365cd9a067ccddf(rax_15)
                == 0
            {
                goto 'label_467826;
            }
            
            let var_90_3: i32 = 1;
            var_a8 = var_50;
            let var_40: i64;
            let var_98_3: i64 = var_40;
            result = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_a8);
            rdi_15 = &var_68;
        }
        else
        {
            r15 = 1;
            
            if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h802488a6a466e089(rax_7) == 0
            {
                goto 'label_46779d;
            }
            
            r15 = 1;
            let rax_9: *mut i8 =
                clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 1);
            
            if rax_9 == 0
            {
                goto 'label_46779d;
            }
            
            r15 = 1;
            
            if uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::hd3d404b63c115abf(rax_9) == 0
            {
                goto 'label_46779d;
            }
            
            let var_90_2: i32 = 1;
            var_a8 = var_68;
            let var_58: i64;
            let var_98_2: i64 = var_58;
            result = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_a8);
            rdi_15 = &var_50;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(rdi_15);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_38);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd5e017f174f59956(var_b0);
    }
    else if rax_4 != 8
    {
        'label_467826:
        rbp = 1;
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_b0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_38);
    }
    else
    {
        let var_90_1: i32 = 1;
        var_a8 = var_38;
        let var_28: i64;
        let var_98_1: i64 = var_28;
        r15 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_68);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd5e017f174f59956(var_b0);
    }
    result
}
