
  fn uu_rm::remove_dir::h55820dedda8befb2(arg1: i64, arg2: i64, arg3: *mut c_void) -> *mut c_void

{
    if uu_rm::prompt_dir::h2b47d5798effefb0(arg1, arg2, *arg3.byte_offset(6), *arg3.byte_offset(7))
        != 0
    {
        let mut var_a0: *mut c_void;
        let mut var_70: *mut i64;
        let mut var_58: *mut u64;
        let mut result: *mut c_void;
        
        if *arg3.byte_offset(4) == 0 && *arg3.byte_offset(3) != 1
        {
            let mut rax_5: *mut u64;
            let mut rdx_4: i64;
            rax_5 = uucore::util_name::h074417a1e6395129();
            var_58 = rax_5;
            let var_50_4: i64 = rdx_4;
            var_70 = &var_58;
            let var_68_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_a0 = &data_4ea4a0;
            let var_98_4: i64 = 2;
            let var_80_4: i64 = 0;
            let var_90_4: *mut *mut i64 = &var_70;
            let var_88_4: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            var_58 = 1;
            let var_50_5: i64 = arg1;
            let var_48_2: i64 = arg2;
            let var_40_2: i8 = 1;
            var_70 = &var_58;
            let var_68_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a0 = &data_4ea5a0;
            let var_98_5: i64 = 2;
            let var_80_5: i64 = 0;
            let var_90_5: *mut *mut i64 = &var_70;
            let var_88_5: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            result = 1;
            return result;
        }
        
        let mut var_38: u64;
        
        if std::fs::remove_dir::hddc5f5b6184df82a(arg1) != 0
        {
            var_38 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h38f2107b9f174514();
            let mut rax_3: *mut u64;
            let mut rdx_2: i64;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_58 = rax_3;
            let var_50_1: i64 = rdx_2;
            var_70 = &var_58;
            let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
            var_a0 = &data_4ea4a0;
            let var_98_1: i64 = 2;
            let var_80_1: i64 = 0;
            let var_90_1: *mut *mut i64 = &var_70;
            let var_88_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            var_58 = &var_38;
            let var_50_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h29c983c066893c20;
            var_a0 = &data_4ea4e0;
            let var_98_2: i64 = 2;
            let var_80_2: i64 = 0;
            let var_90_2: *mut *mut u64 = &var_58;
            let var_88_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_a0);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h186a117efda8c6b1(var_38);
            result = 1;
            return result;
        }
        
        if *arg3.byte_offset(5) == 1
        {
            uu_rm::normalize::h371ce75c5c819b8d();
            var_58 = 1;
            let var_68: i64;
            let var_50_3: i64 = var_68;
            let var_60: i64;
            let var_48_1: i64 = var_60;
            let var_40_1: i8 = 1;
            var_38 = &var_58;
            let var_30_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a0 = &data_4ea520;
            let var_98_3: i64 = 2;
            let var_80_3: i64 = 0;
            let var_90_3: *mut u64 = &var_38;
            let var_88_3: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_a0);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(var_70, var_68);
        }
    }
    
    nullptr
}
