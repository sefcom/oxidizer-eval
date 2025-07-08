
  fn uu_cp::handle_existing_dest::h1a418223b4b32809(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i8, arg5: u64, arg6: *mut c_void, arg7: i8, arg8: *mut i64) -> *mut i128

{
    let mut result: *mut i128;
    let mut var_128: i64;
    let mut result_1: *mut c_void;
    let mut var_c8: i64;
    let mut var_88: *mut i64;
    
    if uu_cp::is_forbidden_to_copy_to_same_file::h3bc6a23799758404(arg2, arg3, arg4, arg5, arg6, 
        arg7) == 0
    {
        if *arg6.byte_offset(0x4d) != 2
        {
            uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&result_1, *arg6.byte_offset(0x3c), 
                arg4, arg5, *arg6.byte_offset(0x47));
            result = result_1;
        }
        
        let var_100: i64;
        let var_f0: i64;
        let var_e0: i128;
        
        if *arg6.byte_offset(0x4d) != 2 && result != 0xd
        {
            'label_505d28:
            let var_d0: i64;
            arg1[7] = var_d0;
            *arg1.byte_offset(0x28) = var_e0;
            *arg1.byte_offset(0x18) = var_f0;
            *arg1.byte_offset(8) = var_100;
            *arg1 = result;
        }
        else
        {
            let mut var_60: i64;
            uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&var_60, 
                *arg6.byte_offset(0x4c), arg4, arg5, *arg6.byte_offset(8), *arg6.byte_offset(0x10));
            
            if var_60 != -0x8000000000000000
            {
                let mut var_a8: i128 = var_60;
                let var_50: u64;
                
                if uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(arg2, arg3, 
                    *var_a8[8], var_50, 1) != 0
                {
                    var_c8 = 1;
                    let var_c0_2: *mut i8 = arg4;
                    let var_b8_2: u64 = arg5;
                    let var_b0_2: i8 = 1;
                    var_128 = 1;
                    let var_120_2: *mut i8 = arg2;
                    let var_118_2: u64 = arg3;
                    let var_110_2: i8 = 1;
                    var_88 = &var_c8;
                    let var_80_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    let var_78_2: *mut i64 = &var_128;
                    let var_70_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    result_1 = &data_5b5ed8;
                    let var_100_2: i64 = 3;
                    let var_e8_2: i64 = 0;
                    let var_f8_2: *mut *mut i64 = &var_88;
                    let var_f0_2: i64 = 2;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_48, 
                        &result_1);
                    let var_38: i64;
                    arg1[3] = var_38;
                    *arg1.byte_offset(8) = var_48;
                    *arg1 = 4;
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                        &var_a8);
                }
                
                let rax_3: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg4, arg5);
                uu_cp::backup_dest::hb9d2dd191dda7572(&result_1, arg4, arg5, *var_a8[8], var_50, 
                    rax_3);
                let result_2: *mut c_void = result_1;
                var_128 = var_100;
                
                if result_2 != 0xd
                {
                    *arg1.byte_offset(0x30) = var_e0;
                    let var_e8: i64;
                    *arg1.byte_offset(0x20) = var_e8;
                    arg1[3] = var_f0;
                    *arg1.byte_offset(8) = var_128;
                    *arg1 = result_2;
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                        &var_a8);
                }
                
                var_c8 = var_128;
                let var_b8_3: i64 = var_f0;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_c8);
                result =
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_a8);
                
                if rax_3 == 0
                {
                    goto 'label_505d03;
                }
                
                *arg1 = 0xd;
            }
            else
            {
                'label_505d03:
                uu_cp::delete_dest_if_needed_and_allowed::h6af23b073bf255d0(&result_1, arg2, arg3, 
                    arg4, arg5, arg6, arg7, arg8);
                result = result_1;
                
                if result != 0xd
                {
                    goto 'label_505d28;
                }
                
                *arg1 = 0xd;
            }
        }
    }
    else
    {
        var_c8 = 1;
        let var_c0_1: *mut i8 = arg2;
        let var_b8_1: u64 = arg3;
        let var_b0_1: i8 = 1;
        var_128 = 1;
        let var_120_1: *mut i8 = arg4;
        let var_118_1: u64 = arg5;
        let var_110_1: i8 = 1;
        var_88 = &var_c8;
        let var_80_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        let var_78_1: *mut i64 = &var_128;
        let var_70_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        result_1 = &data_5b5ea8;
        let var_100_1: i64 = 3;
        let var_e8_1: i64 = 0;
        let var_f8_1: *mut *mut i64 = &var_88;
        let var_f0_1: i64 = 2;
        result = core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &result_1);
        *arg1 = 4;
    }
    result
}
