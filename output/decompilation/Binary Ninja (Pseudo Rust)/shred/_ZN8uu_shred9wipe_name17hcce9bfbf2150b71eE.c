
  fn uu_shred::wipe_name::hcce9bfbf2150b71e(arg1: *mut i128, arg2: i64, arg3: size_t, arg4: i8, arg5: i8) -> *mut *mut i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = std::path::Path::file_name::h79ecbb7850a9c7f3(arg2, arg3);
    
    if rax == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_188: *mut c_void;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_188, rax, rdx);
    
    if var_188 != 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_188, arg2, arg3);
    let mut result_1: *mut *mut i64;
    let mut result: *mut *mut i64 = result_1;
    let mut var_208: i128 = var_188;
    let mut var_d8: i64 = 1;
    let result_4: *mut *mut i64 = result_1;
    let var_c8: i8 = 0;
    let mut rax_2: i64;
    let mut rdx_2: i64;
    rax_2 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h81b9c6b41e365607(&var_d8);
    
    if rax_2 != 0
    {
        let mut i: i64;
        
        do
        {
            let mut var_50: i128;
            uu_shred::FilenameIter::new::h75c47570d6e41809(&var_50, rdx_2);
            let var_40: i128;
            let var_78_1: i128 = var_40;
            let mut var_88: i128 = var_50;
            
            loop
            {
                let mut var_a0: i64;
                _$LT$uu_shred..FilenameIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8e8e3d724658b94f(&var_a0, &var_88);
                
                if var_a0 == -0x8000000000000000
                {
                    break;
                }
                
                let var_90: i64;
                let var_58_1: i64 = var_90;
                let mut var_68: i128 = var_a0;
                let mut var_1b0: i128;
                std::path::Path::with_file_name::h6ad9755a55c53ad4(&var_1b0, arg2, arg3, &var_68);
                let var_1a8: i64;
                std::fs::metadata::h605f1ca78403f0bd(&var_188, var_1a8);
                
                if var_188 == 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&var_188);
                    let rax_4: i64 = std::fs::rename::he0e2ca4a2337599c(&var_208, &var_1b0);
                    let mut var_228: *mut i64;
                    let mut var_1e8: *mut c_void;
                    let mut var_c0: i64;
                    
                    if rax_4 != 0
                    {
                        let mut var_198: i64 = rax_4;
                        let mut rax_12: *mut c_void;
                        let mut rdx_7: i64;
                        rax_12 = uucore::util_name::h60d842bf27b05e82();
                        var_1e8 = rax_12;
                        let var_1e0_2: i64 = rdx_7;
                        var_228 = &var_1e8;
                        let mut var_220_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                        var_188 = &data_538698;
                        let var_180_3: i64 = 2;
                        let var_168_3: i64 = 0;
                        let var_178_1: *mut *mut i64 = &var_228;
                        let var_170_3: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                        let zmm0_7: i128 = var_208;
                        var_c0 = 1;
                        let var_b8: i128 = zmm0_7;
                        let var_a8: i8 = 0;
                        var_228 = 1;
                        var_220_2 = var_1a8;
                        let var_210_1: i8 = 1;
                        var_188 = &var_c0;
                        let var_180_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_178_2: *mut *mut i64 = &var_228;
                        let var_170_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_168_4: *mut i64 = &var_198;
                        let var_160: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_1e8 = &data_538888;
                        let var_1e0_3: i64 = 4;
                        let var_1c8: i64 = 0;
                        let var_1d8_1: *const *mut c_void = &var_188;
                        let var_1d0_1: i64 = 3;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1e8);
                        std::process::exit::hf8c1b9d00a2a86fd(1);
                        /* no return */
                    }
                    
                    let mut var_220: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64;
                    
                    if arg4 != 0
                    {
                        let mut rax_5: *mut c_void;
                        let mut rdx_5: i64;
                        rax_5 = uucore::util_name::h60d842bf27b05e82();
                        var_1e8 = rax_5;
                        let mut var_1e0_1: i64 = rdx_5;
                        var_228 = &var_1e8;
                        let var_220_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                        var_188 = &data_538698;
                        let var_180_1: i64 = 2;
                        let var_168_1: i64 = 0;
                        let var_178: *mut *mut i64 = &var_228;
                        let var_170_1: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                        let zmm0_4: i128 = var_208;
                        var_1e8 = 1;
                        var_1e0_1 = zmm0_4;
                        let mut var_1d0: i64;
                        var_1d0 = 0;
                        var_c0 = var_1a8;
                        var_228 = &var_1e8;
                        var_220 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_218_1: *mut i64 = &var_c0;
                        let mut var_210: i8;
                        var_210 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        var_188 = &data_538858;
                        let var_180_2: i64 = 3;
                        let var_168_2: i64 = 0;
                        result_1 = &var_228;
                        let var_170_2: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                    }
                    
                    if arg5 == 3
                    {
                        var_228 = 0x1b600000000;
                        *var_220[4] = 0;
                        var_220 = 0;
                        *var_220[1] = 1;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hd63d5d024cbc8ccc(&var_188, &var_1b0);
                        let result_2: *mut *mut i64 = result_1;
                        var_1e8 = var_188;
                        std::fs::OpenOptions::open::h006d788eda6d20b4(&var_188, &var_228, &var_1e8);
                        var_1e8 =
                            core::result::Result$LT$T$C$E$GT$::expect::hbf7455566ffa5658(&var_188);
                        core::result::Result$LT$T$C$E$GT$::expect::hccf86eaae5770f98(
                            std::fs::File::sync_all::ha0e03da750e69f90(&var_1e8));
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(var_1e8);
                    }
                    
                    let result_3: *mut *mut i64;
                    result_1 = result_3;
                    var_188 = var_1b0;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&var_208);
                    result = result_1;
                    var_208 = var_188;
                    break;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&var_188);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&var_1b0);
            }
            
            core::ptr::drop_in_place$LT$uu_shred..FilenameIter$GT$::h234a690002371487(&var_88);
            i = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h81b9c6b41e365607(&var_d8);
        } while i != 0;
    }
    
    arg1[1] = result;
    *arg1 = var_208;
    result
}
