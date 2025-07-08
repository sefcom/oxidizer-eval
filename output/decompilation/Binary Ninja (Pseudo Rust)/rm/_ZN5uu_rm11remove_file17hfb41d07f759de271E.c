
  fn uu_rm::remove_file::hfb41d07f759de271(arg1: i64, arg2: u64, arg3: i8, arg4: i8) -> i64

{
    if uu_rm::prompt_file::h2c52052acc0b58bb(arg1, arg2, arg4) != 0
    {
        let rax_1: *mut i64 = std::fs::remove_file::hccd6459e5c502755(arg1);
        let mut var_a8: *mut c_void;
        let mut var_78: i64;
        let mut var_58: *mut i64;
        let mut var_50: i128;
        let mut var_38: *mut i64;
        
        if rax_1 != 0
        {
            var_38 = rax_1;
            let mut var_70: i128;
            
            if std::io::error::Error::kind::hb2ff5fa058639b3d(rax_1) != 1
            {
                let mut rax_4: i64;
                let mut rdx_3: i64;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_78 = rax_4;
                var_70 = rdx_3;
                var_58 = &var_78;
                var_50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_a8 = &data_527970;
                let var_a0_4: i64 = 2;
                let var_88_4: i64 = 0;
                let var_98_4: *mut *mut i64 = &var_58;
                let var_90_4: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
                var_78 = 1;
                var_70 = arg1;
                *var_70[8] = arg2;
                let var_60_3: i8 = 1;
                var_58 = &var_78;
                var_50 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                *var_50[8] = &var_38;
                let var_40_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_a8 = &data_5279d0;
                let var_a0_5: i64 = 3;
                let var_88_5: i64 = 0;
                let var_98_5: *mut *mut i64 = &var_58;
                let var_90_5: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
            }
            else
            {
                let mut rax_3: i64;
                let mut rdx_1: i64;
                rax_3 = uucore::util_name::h60d842bf27b05e82();
                var_78 = rax_3;
                var_70 = rdx_1;
                var_58 = &var_78;
                var_50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_a8 = &data_527970;
                let var_a0_1: i64 = 2;
                let var_88_1: i64 = 0;
                let var_98_1: *mut *mut i64 = &var_58;
                let var_90_1: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
                var_78 = 1;
                var_70 = arg1;
                *var_70[8] = arg2;
                let var_60_1: i8 = 1;
                var_58 = &var_78;
                var_50 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_a8 = &data_5279b0;
                let var_a0_2: i64 = 2;
                let var_88_2: i64 = 0;
                let var_98_2: *mut *mut i64 = &var_58;
                let var_90_2: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a8);
            }
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_38);
            let mut result: i64;
            result = 1;
            return result;
        }
        
        if arg3 != 0
        {
            uu_rm::normalize::hc5c72b2dd9f7b482(&var_58, arg1);
            var_78 = 1;
            let var_70_1: i128 = var_50;
            let var_60_2: i8 = 1;
            var_38 = &var_78;
            let var_30_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_a8 = &data_527ac8;
            let var_a0_3: i64 = 2;
            let var_88_3: i64 = 0;
            let var_98_3: *mut *mut i64 = &var_38;
            let var_90_3: i64 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_a8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7c5c2bfda3b8aa48(&var_58);
        }
    }
    
    0
}
