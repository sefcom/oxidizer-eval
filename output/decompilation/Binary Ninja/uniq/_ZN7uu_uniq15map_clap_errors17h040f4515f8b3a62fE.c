
  uint64_t uu_uniq::map_clap_errors::h040f4515f8b3a62f(int32_t* arg1)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int32_t* var_b0 = arg1;
    int128_t var_a8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_a8, "--group is mutually exclusive wi…", 0x2f);
    int64_t var_98;
    int64_t var_78 = var_98;
    int128_t var_88 = var_a8;
    int128_t var_38;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_38, &var_88);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_a8, "invalid argument 'badoption' for…", 0x75);
    int64_t var_78_1 = var_98;
    var_88 = var_a8;
    int128_t var_68;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_68, &var_88);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h555f59bb363643cb(&var_a8, "invalid argument 'badoption' for…", 0x6f);
    int64_t var_78_2 = var_98;
    var_88 = var_a8;
    int128_t var_50;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_50, &var_88);
    uint32_t rax_4 = *(var_b0 + 0xdd);
    uint64_t result;
    int64_t r15;
    
    if (!rax_4)
    {
        rbp = 1;
        r15 = 1;
        char* rax_7 = clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 5);
        int128_t* rdi_15;
        
        if (!rax_7)
        {
            label_46779d:
            r15 = 1;
            char* rax_13 = clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 5);
            
            if (!rax_13)
                goto label_467826;
            
            r15 = 1;
            
            if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h802488a6a466e089(rax_13))
                goto label_467826;
            
            r15 = 1;
            char* rax_15 = clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 1);
            
            if (!rax_15)
                goto label_467826;
            
            r15 = 1;
            
            if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h1365cd9a067ccddf(rax_15))
                goto label_467826;
            
            int32_t var_90_3 = 1;
            var_a8 = var_50;
            int64_t var_40;
            int64_t var_98_3 = var_40;
            result = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_a8);
            rdi_15 = &var_68;
        }
        else
        {
            r15 = 1;
            
            if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h802488a6a466e089(rax_7))
                goto label_46779d;
            
            r15 = 1;
            char* rax_9 = clap_builder::error::Error$LT$F$GT$::get::hdf4db95d6abfa2ae(&var_b0, 1);
            
            if (!rax_9)
                goto label_46779d;
            
            r15 = 1;
            
            if (!uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::hd3d404b63c115abf(rax_9))
                goto label_46779d;
            
            int32_t var_90_2 = 1;
            var_a8 = var_68;
            int64_t var_58;
            int64_t var_98_2 = var_58;
            result = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_a8);
            rdi_15 = &var_50;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(rdi_15);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_38);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd5e017f174f59956(var_b0);
    }
    else if (rax_4 != 8)
    {
        label_467826:
        rbp = 1;
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_b0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_38);
    }
    else
    {
        int32_t var_90_1 = 1;
        var_a8 = var_38;
        int64_t var_28;
        int64_t var_98_1 = var_28;
        r15 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_50);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7d227bf50ae8f346(&var_68);
        core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hd5e017f174f59956(var_b0);
    }
    return result;
}
