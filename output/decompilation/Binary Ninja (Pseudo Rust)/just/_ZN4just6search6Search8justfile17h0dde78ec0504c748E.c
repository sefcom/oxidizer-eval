
  fn just::search::Search::justfile::h0dde78ec0504c748(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64) -> i64

{
    let mut var_158: i64;
    let mut var_128: i128;
    let mut var_110: i128;
    let mut var_100: i8;
    let mut var_b0: i64;
    
    loop
    {
        let mut rax_1: *mut i8;
        let mut rdx: u64;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
        var_158 = 0;
        let var_148_1: i64 = 0;
        let mut var_88: i64;
        std::fs::read_dir::h1eb2d460fa0fb3e7(&var_88, arg4);
        let rcx: i64 = var_88;
        let var_80: i8;
        let var_ff: i64;
        
        if var_80 == 2
        {
            just::search::Search::project_root::_$u7b$$u7b$closure$u7d$$u7d$::h6f630030a6b37751(
                &var_110, arg4, arg5, rcx);
            let zmm0_5: i128 = var_110;
            *arg1.byte_offset(0x11) = var_ff;
            arg1[3] = var_ff;
            *arg1 = zmm0_5;
            arg1[2] = var_100;
        }
        else
        {
            let mut var_138: i64 = rcx;
            let var_130_1: i8 = var_80;
            'label_688f98:
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_88, &var_138);
            
            if var_88 != 1
            {
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_138);
                let mut result: i64;
                let mut rcx_7: *mut i64;
                
                if var_148_1 != 0
                {
                    if var_148_1 == 1
                    {
                        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_110, &var_158);
                        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf7c3db92e6462bc5(&var_88, &var_110);
                        let rax_10: i64 = var_88;
                        
                        if -(rax_10) == -0x8000000000000000
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        *arg1.byte_offset(0x10) = var_80;
                        arg1[1] = rax_10;
                        *arg1 = -0x7ffffffffffffffa;
                        return core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$std..path..PathBuf$GT$$GT$::h22984423921e359d(&var_110);
                    }
                    
                    rcx_7 = arg1;
                    rcx_7[3] = var_148_1;
                    *rcx_7.byte_offset(8) = var_158;
                    result = -0x7ffffffffffffffc;
                }
                else
                {
                    let mut rax_6: bool;
                    
                    if arg2 != 0
                    {
                        std::path::Path::components::hd0346d362206f2e9(&var_88, arg4, arg5);
                        std::path::Path::components::hd0346d362206f2e9(&var_110, arg2, arg3);
                        rax_6 = _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd9623c64792f17b1(&var_88, &var_110);
                    }
                    
                    if arg2 != 0 && rax_6 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$std..path..PathBuf$GT$$GT$::h1d51d97bda338c51(&var_158);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$std..path..PathBuf$GT$$GT$::h1d51d97bda338c51(&var_158);
                        arg5 = rdx;
                        arg4 = rax_1;
                        
                        if rax_1 != 0
                        {
                            continue;
                        }
                    }
                    
                    result = -0x7ffffffffffffffb;
                    rcx_7 = arg1;
                }
                
                *rcx_7 = result;
                return result;
            }
            
            let rax_3: i64 = var_80;
            let var_78: i64;
            
            if rax_3 != 0
            {
                let var_60: i64;
                let var_90_1: i64 = var_60;
                let var_70: i128;
                let var_a0_1: i128 = var_70;
                var_b0 = rax_3;
                let var_a8_1: i64 = var_78;
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_128, &var_b0);
                let var_118: i64;
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_110, *var_128[8], var_118);
                break;
            }
            
            just::search::Search::project_root::_$u7b$$u7b$closure$u7d$$u7d$::h6f630030a6b37751(
                &var_110, arg4, arg5, var_78);
            let rax_8: i64 = var_110;
            let zmm0_4: i128 = var_110;
            var_128 = zmm0_4;
            let var_118_1: i64 = var_ff;
            arg1[3] = var_ff;
            *arg1.byte_offset(8) = zmm0_4;
            *arg1 = rax_8;
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_138);
        }
        return core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$std..path..PathBuf$GT$$GT$::h1d51d97bda338c51(&var_158);
    }
    
    if var_110 != 1
    {
        let r12_1: *mut i8 = *var_110[8];
        let rbp_1: i64 = var_100;
        var_110 = 0;
        *var_110[8] = 2;
        let var_f0_1: i128 = *data_82e5c0;
        var_100 = *data_82e5b0;
        let mut i: *mut i8;
        let mut rdx_4: i64;
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_110);
        
        if i != 0
        {
            let mut rcx_2: i64 = rdx_4;
            
            do
            {
                if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(r12_1, rbp_1, i, rcx_2) != 0
                {
                    let mut var_48: ();
                    std::fs::DirEntry::path::hc95af67dccb42f03(&var_48, &var_b0);
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h4e2cb9f131b2fb60(&var_158, &var_48);
                }
                
                let mut rdx_5: i64;
                i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_110);
                rcx_2 = rdx_5;
            } while i != 0;
        }
    }
    
    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_b0);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(&var_128);
    goto 'label_688f98;
}
