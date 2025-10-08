
  fn just::subcommand::Subcommand::run::h0caeb55d50695da5(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut i128, arg5: *mut i64, arg6: i64, arg7: i64, arg8: *mut i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = std::path::Path::parent::hef287f60afa56900(*arg4.byte_offset(8), arg4[1]);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_798: ();
    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(
        &var_798, rax, rdx);
    let mut rbp: *mut i64 = arg5;
    let mut var_8d8_1: i64;
    
    if *rbp.byte_offset(0x1e6) == 1
    {
        var_8d8_1 = 0;
        
        if !(0 + -(*arg2.byte_offset(0x78)))
        {
            var_8d8_1 = *arg2.byte_offset(0x80);
        }
    }
    
    let mut var_860: i128;
    let var_850: i128;
    let var_840: i128;
    let var_830: i128;
    let var_820: i128;
    let var_810: i128;
    let var_800: i64;
    let mut rcx_9: *mut i8;
    let mut zmm0_1: i128;
    let mut zmm1_1: i128;
    let mut zmm2_1: i128;
    let mut zmm3_1: i128;
    
    if *rbp.byte_offset(0x1e6) != 1 || *arg2.byte_offset(0x108) >= -0x7ffffffffffffffe
    {
        'label_68cb60:
        just::justfile::Justfile::run::h44a153d0be889dd4(&var_860, rbp, arg2, arg4, arg8, arg6, 
            arg7);
    }
    else
    {
        let rax_2: i64 = *arg2.byte_offset(0x88);
        let r15_1: *mut c_void = &rbp[1];
        let rax_4: i8 = *arg2.byte_offset(0x1a7);
        
        loop
        {
            just::justfile::Justfile::run::h44a153d0be889dd4(&var_860, rbp, arg2, arg4, arg8, arg6, 
                arg7);
            
            if (var_860 & 0x3e) != 0x34
            {
                break;
            }
            
            let var_698_1: i64 = var_800;
            let var_6a8_1: i128 = var_810;
            let var_6b8_1: i128 = var_820;
            let var_6c8_1: i128 = var_830;
            let var_6d8_1: i128 = var_840;
            let var_6e8_1: i128 = var_850;
            let var_6f8_1: i128 = var_860;
            let mut var_770: i64;
            just::search::Search::search_parent_directory::h53a5a1157ef24091(&var_770, 
                *arg4.byte_offset(8), arg4[1], var_8d8_1, rax_2);
            let var_628_1: i64 = var_800;
            let mut var_668_1: i128 = var_840;
            let mut var_678_1: i128 = var_850;
            let mut var_688: i128 = var_860;
            let mut var_7d8: i128;
            let mut var_7d1: i128;
            let mut var_7c1: i128;
            let mut var_7b1: i128;
            
            if var_770 != -0x8000000000000000
            {
                let var_750: i128;
                var_7b1 = var_750;
                let var_760: i128;
                var_7c1 = var_760;
                var_7d1 = var_770;
                core::ptr::drop_in_place$LT$just..subcommand..Subcommand..run..$u7b$$u7b$closure$u7d$$u7d$$GT$::h4501022010847662(&var_688);
            }
            else
            {
                let rbp_1: i8 = var_688;
                let mut var_768: ();
                core::ptr::drop_in_place$LT$just..search_error..SearchError$GT$::h2183513fbbcaac96(
                    &var_768);
                *var_7b1[8] = var_830;
                var_7c1 = var_840;
                var_7d1 = var_850;
                var_7d8 = var_860;
                
                if rbp_1 != 0x38
                {
                    *arg1.byte_offset(0x58) = var_810;
                    *arg1.byte_offset(0x48) = var_820;
                    *arg1.byte_offset(0x38) = var_830;
                    *arg1.byte_offset(0x30) = var_830;
                    let zmm0_3: i128 = var_860;
                    *arg1.byte_offset(0x21) = var_840;
                    *arg1.byte_offset(0x11) = var_850;
                    *arg1.byte_offset(1) = zmm0_3;
                    *arg1 = rbp_1;
                    goto 'label_68cc00;
                }
            }
            
            core::ptr::drop_in_place$LT$just..search..Search$GT$::h18f5d3903328307e(arg4);
            arg4[2] = var_7b1;
            arg4[1] = var_7c1;
            *arg4 = var_7d1;
            
            if rax_4 >= 2
            {
                let mut rax_12: *mut i8;
                let mut rdx_5: i64;
                rax_12 = std::path::Path::parent::hef287f60afa56900(*arg4.byte_offset(8), arg4[1]);
                
                if rax_12 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let var_790: i64;
                let var_788: i64;
                let mut rax_13: i64;
                let mut rdx_7: i64;
                rax_13 = std::path::Path::strip_prefix::h70061c692fa4f661(var_790, var_788, rax_12);
                let mut rax_14: i64;
                let mut rdx_9: i64;
                rax_14 = core::result::Result$LT$T$C$E$GT$::unwrap::h773514536ee4f961(rax_13);
                std::path::Path::components::hd0346d362206f2e9(&var_688, rax_14, rdx_9);
                var_7b1 = var_830;
                var_7c1 = var_668_1;
                var_7d8 = var_688;
                let mut var_730: ();
                core::iter::traits::iterator::Iterator::collect::h5ff346cd2ef2f52a(&var_730, 
                    &var_7d8);
                let mut rax_15: i64;
                let mut rdx_10: i64;
                rax_15 =
                    std::path::Path::file_name::h6d40d88bf3fb287a(*arg4.byte_offset(8), arg4[1]);
                
                if rax_15 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                std::path::Path::join::h1eac0ae5e7efa361(&var_7d8, *var_7d1[1], *var_7d1[9], 
                    rax_15);
                let mut var_740: i128 = var_678_1;
                let mut var_780: *mut i128 = &var_740;
                let var_778_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                var_688 = &data_831090;
                *var_688[8] = 2;
                var_668_1 = 0;
                var_678_1 = &var_780;
                *var_678_1[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_688);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_7d8);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_730);
            }
            
            just::subcommand::Subcommand::compile::hd4ddb48c754af338(&var_688, arg2, arg3, 
                *arg4.byte_offset(8), arg4[1]);
            let r13_2: i64 = var_688;
            let var_8c8_1: i128 = var_688;
            let var_620: i64;
            
            if r13_2 == -0x8000000000000000
            {
                rcx_9 = arg1;
                *rcx_9.byte_offset(0x60) = var_620;
                *rcx_9.byte_offset(0x50) = var_810;
                *rcx_9.byte_offset(0x40) = var_820;
                zmm0_1 = var_8c8_1;
                zmm1_1 = var_678_1;
                zmm2_1 = var_668_1;
                zmm3_1 = var_830;
                goto 'label_68cbe9;
            }
            
            let mut var_618: ();
            let mut var_320: ();
            memcpy(&var_320, &var_618, 0x2f0);
            rbp = arg5;
            core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(rbp);
            *rbp = r13_2;
            *r15_1.byte_offset(0x60) = var_620;
            *r15_1.byte_offset(0x50) = var_810;
            *r15_1.byte_offset(0x40) = var_820;
            *r15_1.byte_offset(0x30) = var_830;
            *r15_1.byte_offset(0x20) = var_668_1;
            *r15_1.byte_offset(0x10) = var_678_1;
            *r15_1 = var_8c8_1;
            memcpy(&rbp[0xe], &var_320, 0x2f0);
            
            if *rbp.byte_offset(0x1e6) == 0
            {
                goto 'label_68cb60;
            }
        }
    }
    
    let mut rax_20: i8;
    
    if *arg2.byte_offset(0x196) != 0
    {
        rax_20 = var_860;
    }
    
    if *arg2.byte_offset(0x196) == 0 || (rax_20 & 0x3e) != 0x34
    {
        rcx_9 = arg1;
        *rcx_9.byte_offset(0x60) = var_800;
        *rcx_9.byte_offset(0x50) = var_810;
        *rcx_9.byte_offset(0x40) = var_820;
        zmm0_1 = var_860;
        zmm1_1 = var_850;
        zmm2_1 = var_840;
        zmm3_1 = var_830;
        'label_68cbe9:
        *rcx_9.byte_offset(0x30) = zmm3_1;
        *rcx_9.byte_offset(0x20) = zmm2_1;
        *rcx_9.byte_offset(0x10) = zmm1_1;
        *rcx_9 = zmm0_1;
    }
    else
    {
        *arg1 = 0x38;
        
        if rax_20 != 0x38
        {
            core::ptr::drop_in_place$LT$just..error..Error$GT$::ha62e3e0ecfcf56b5(&var_860);
        }
    }
    
    'label_68cc00:
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_798);
    core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg5);
    core::ptr::drop_in_place$LT$just..search..Search$GT$::h18f5d3903328307e(arg4)
}
