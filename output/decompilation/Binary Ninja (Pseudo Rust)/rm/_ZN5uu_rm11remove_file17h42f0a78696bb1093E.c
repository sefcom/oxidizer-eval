
  fn uu_rm::remove_file::h42f0a78696bb1093(arg1: i64, arg2: i64, arg3: *mut c_void) -> i64

{
    if uu_rm::prompt_file::h7c1fa3f92c48040a(arg1, arg2, *arg3.byte_offset(6), *arg3.byte_offset(7))
        != 0
    {
        let rax_1: *mut i64 = std::fs::remove_file::h5bdbb078dd574c13(arg1);
        let mut var_a8: *mut c_void;
        let mut var_78: i64;
        let mut var_58: *mut i64;
        let mut var_38: *mut i64;
        
        if rax_1 != 0
        {
            let mut r15_1: *mut i64 = rax_1;
            var_38 = rax_1;
            
            if std::io::error::Error::kind::h135fe00c4e7365f3(rax_1) != 1
            {
                let mut rax_5: i64;
                let mut rdx_3: i64;
                rax_5 = uucore::util_name::h074417a1e6395129();
                var_78 = rax_5;
                let var_70_4: i64 = rdx_3;
                var_58 = &var_78;
                let var_50_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a8 = &data_4ea4a0;
                let var_a0_4: i64 = 2;
                let var_88_4: i64 = 0;
                let var_98_4: *mut *mut i64 = &var_58;
                let var_90_4: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                var_78 = 1;
                let var_70_5: i64 = arg1;
                let var_68_3: i64 = arg2;
                let var_60_3: i8 = 1;
                var_58 = &var_78;
                let var_50_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_48_1: *mut i64 = &var_38;
                let var_40_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_a8 = &data_4ea5e0;
                let var_a0_5: i64 = 3;
                let var_88_5: i64 = 0;
                let var_98_5: *mut *mut i64 = &var_58;
                let var_90_5: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                r15_1 = var_38;
            }
            else
            {
                let mut rax_3: i64;
                let mut rdx_1: i64;
                rax_3 = uucore::util_name::h074417a1e6395129();
                var_78 = rax_3;
                let var_70_1: i64 = rdx_1;
                var_58 = &var_78;
                let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f6f103f460297c8;
                var_a8 = &data_4ea4a0;
                let var_a0_1: i64 = 2;
                let var_88_1: i64 = 0;
                let var_98_1: *mut *mut i64 = &var_58;
                let var_90_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                var_78 = 1;
                let var_70_2: i64 = arg1;
                let var_68_1: i64 = arg2;
                let var_60_1: i8 = 1;
                var_58 = &var_78;
                let var_50_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_a8 = &data_4ea500;
                let var_a0_2: i64 = 2;
                let var_88_2: i64 = 0;
                let var_98_2: *mut *mut i64 = &var_58;
                let var_90_2: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haf081cf9ad72b71d(r15_1);
            let mut result: i64;
            result = 1;
            return result;
        }
        
        if *arg3.byte_offset(5) == 1
        {
            uu_rm::normalize::h371ce75c5c819b8d();
            var_78 = 1;
            let var_50: i64;
            let var_70_3: i64 = var_50;
            let var_48: i64;
            let var_68_2: i64 = var_48;
            let var_60_2: i8 = 1;
            var_38 = &var_78;
            let var_30_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a8 = &data_4ea5c0;
            let var_a0_3: i64 = 2;
            let var_88_3: i64 = 0;
            let var_98_3: *mut *mut i64 = &var_38;
            let var_90_3: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hec94fc61a491c65b(var_58, var_50);
        }
    }
    
    0
}
