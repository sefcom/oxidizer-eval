
  fn uu_shred::wipe_name::he9016127f4be3579(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i8, arg5: i8) -> *mut *mut i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = std::path::Path::file_name::h6d40d88bf3fb287a(arg2, arg3);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_138: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_138, rax, rdx);
    
    if (var_138 & 1) != 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc7ad242b1d3efe8e(&var_138, arg2, arg3);
    let mut result_1: *mut *mut i64;
    let mut result: *mut *mut i64 = result_1;
    let mut var_1f8: i128 = var_138;
    let mut var_150: i64 = 1;
    let result_4: *mut *mut i64 = result_1;
    let var_140: i8 = 0;
    let mut rax_2: i8;
    let mut rdx_2: i64;
    rax_2 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h4ff96a92f286cfe4(&var_150);
    
    if (rax_2 & 1) != 0
    {
        let mut rax_5: i8;
        
        do
        {
            let mut var_68: i128;
            uu_shred::FilenameIter::new::hd6443cd1750eb6da(&var_68, rdx_2);
            let var_58: i128;
            let var_168_1: i128 = var_58;
            let mut var_178: i128 = var_68;
            
            loop
            {
                let mut var_48: i64;
                _$LT$uu_shred..FilenameIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7014cc2a98dde122(&var_48, &var_178);
                
                if 0 + -(var_48)
                {
                    break;
                }
                
                let mut var_1d8: i64;
                std::path::Path::with_file_name::h8d4e31eec5c8dbb1(&var_1d8, arg2, arg3, &var_48);
                let var_1d0: i64;
                std::fs::metadata::ha5a1382d2d84ac19(&var_138, var_1d0);
                let r14_1: i32 = var_138;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf505446dc2c0cf57(&var_138);
                
                if r14_1 == 2
                {
                    let rax_6: i64 = std::fs::rename::h627f7751548d14cb(&var_1f8, &var_1d8);
                    let mut var_218: *mut i64;
                    let mut var_1b8: *mut c_void;
                    let mut var_88: i64;
                    
                    if rax_6 != 0
                    {
                        let mut var_188: i64 = rax_6;
                        let mut rax_12: *mut c_void;
                        let mut rdx_8: i64;
                        rax_12 = uucore::util_name::h074417a1e6395129();
                        var_1b8 = rax_12;
                        let var_1b0_2: i64 = rdx_8;
                        var_218 = &var_1b8;
                        let mut var_210_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                        var_138 = &data_4f9f98;
                        let var_130_3: i64 = 2;
                        let var_118_3: i64 = 0;
                        let var_128_1: *mut *mut i64 = &var_218;
                        let var_120_3: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                        let zmm0_6: i128 = var_1f8;
                        var_88 = 1;
                        let var_80: i128 = zmm0_6;
                        let var_70: i8 = 0;
                        var_218 = 1;
                        var_210_2 = var_1d0;
                        let var_200_1: i8 = 1;
                        var_138 = &var_88;
                        let var_130_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_128_2: *mut *mut i64 = &var_218;
                        let var_120_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_118_4: *mut i64 = &var_188;
                        let var_110: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_1b8 = &data_4fa250;
                        let var_1b0_3: i64 = 4;
                        let var_198: i64 = 0;
                        let var_1a8_1: *mut i8 = &var_138;
                        let var_1a0_1: i64 = 3;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_1b8);
                        std::process::exit::hcda678ff272dfed1(1);
                        /* no return */
                    }
                    
                    let mut var_210: fn(arg1: *mut i32, arg2: *mut i64) -> i64;
                    
                    if arg4 != 0
                    {
                        let mut rax_7: *mut c_void;
                        let mut rdx_5: i64;
                        rax_7 = uucore::util_name::h074417a1e6395129();
                        var_1b8 = rax_7;
                        let mut var_1b0_1: i64 = rdx_5;
                        var_218 = &var_1b8;
                        let var_210_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                        var_138 = &data_4f9f98;
                        let var_130_1: i64 = 2;
                        let var_118_1: i64 = 0;
                        let var_128: *mut *mut i64 = &var_218;
                        let var_120_1: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                        let zmm0_4: i128 = var_1f8;
                        var_1b8 = 1;
                        var_1b0_1 = zmm0_4;
                        let mut var_1a0: i64;
                        var_1a0 = 0;
                        var_88 = var_1d0;
                        var_218 = &var_1b8;
                        var_210 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_208_1: *mut i64 = &var_88;
                        let mut var_200: i8;
                        var_200 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_138 = &data_4fa220;
                        let var_130_2: i64 = 3;
                        let var_118_2: i64 = 0;
                        result_1 = &var_218;
                        let var_120_2: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                    }
                    
                    let result_2: u64;
                    
                    if arg5 == 3
                    {
                        var_218 = 0x1b600000000;
                        *var_210[4] = 0;
                        var_210 = 0;
                        *var_210[1] = 1;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3081668db5704993(&var_138, var_1d0, result_2);
                        let result_3: *mut *mut i64 = result_1;
                        var_1b8 = var_138;
                        std::fs::OpenOptions::open::h4118912c5a12bddb(&var_138, &var_218, &var_1b8);
                        var_1b8 =
                            core::result::Result$LT$T$C$E$GT$::expect::h34b28eb743e6c5c9(&var_138);
                        core::result::Result$LT$T$C$E$GT$::expect::h240243edbda98b4a(
                            std::fs::File::sync_all::hd9ac1cd9a387b5e9(&var_1b8));
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h242f54cc5db43aa8(var_1b8);
                    }
                    
                    result_1 = result_2;
                    var_138 = var_1d8;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha28b79d3b0f8016b(var_1f8, 
                        *var_1f8[8]);
                    result = result_1;
                    var_1f8 = var_138;
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha28b79d3b0f8016b(var_1d8, 
                    var_1d0);
            }
            
            core::ptr::drop_in_place$LT$uu_shred..FilenameIter$GT$::h677fc060bd465f8f(var_178, 
                *var_178[8]);
            rax_5 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next_back::h4ff96a92f286cfe4(&var_150);
        } while (rax_5 & 1) != 0;
    }
    
    arg1[1] = result;
    *arg1 = var_1f8;
    result
}
