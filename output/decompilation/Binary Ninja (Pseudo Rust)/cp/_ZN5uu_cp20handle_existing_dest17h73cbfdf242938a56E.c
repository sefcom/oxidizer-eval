
  fn uu_cp::handle_existing_dest::h73cbfdf242938a56(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64, arg5: u64, arg6: *mut c_void, arg7: i8, arg8: *mut i64) -> *mut i128

{
    let mut result: *mut i128;
    let mut result_1: *mut c_void;
    let mut var_100: i64;
    let mut var_e0: *mut i64;
    let mut var_b8: *mut i64;
    
    if uu_cp::is_forbidden_to_copy_to_same_file::h5b788622660e3e62(arg2, arg3, arg4, arg5, arg6, 
        arg7) == 0
    {
        result = *arg6.byte_offset(0x66);
        
        if result == 1
        {
            if *arg6.byte_offset(0x5f) != 0
            {
                var_100 = 1;
                let var_f8_2: i64 = arg4;
                let var_f0_2: u64 = arg5;
                let var_e8_2: i8 = 1;
                var_e0 = &var_100;
                let var_d8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                result_1 = &data_55eb08;
                let var_130_2: i64 = 2;
                let var_118_2: i64 = 0;
                let var_128_2: *mut *mut i64 = &var_e0;
                let var_120_2: i64 = 1;
                result = std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            }
            
            *arg1 = -0x7ffffffffffffff9;
            arg1[1] = 0;
        }
        else
        {
            let var_130: i64;
            let var_120: i64;
            let var_110: i128;
            
            if result == 2
            {
                'label_4a297f:
                let mut var_98: i64;
                uucore::features::backup_control::get_backup_path::hd1136aea6807a071(&var_98, 
                    *arg6.byte_offset(0x65), arg4, arg5, *arg6.byte_offset(8), 
                    *arg6.byte_offset(0x10));
                
                if var_98 != -0x8000000000000000
                {
                    let var_90: i64;
                    let var_88: u64;
                    let mut result_2: *mut c_void;
                    let mut r14_3: *mut c_void;
                    
                    if uucore::features::fs::paths_refer_to_same_file::h63765c86a5a0b9e6(arg2, 
                        arg3, var_90, var_88, 1) != 0
                    {
                        var_e0 = 1;
                        let var_d8_3: i64 = arg4;
                        let var_d0_2: u64 = arg5;
                        let var_c8_2: i8 = 1;
                        var_100 = 1;
                        let var_f8_3: i64 = arg2;
                        let var_f0_3: u64 = arg3;
                        let var_e8_3: i8 = 1;
                        var_b8 = &var_e0;
                        let var_b0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_a8_2: *mut i64 = &var_100;
                        let var_a0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_1 = &data_55ec08;
                        let var_130_3: i64 = 3;
                        let var_118_3: i64 = 0;
                        let var_128_3: *mut *mut i64 = &var_b8;
                        let var_120_3: i64 = 2;
                        let mut var_48: ();
                        r14_3 = &var_48;
                        core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, 
                            &result_1);
                        result_2 = -0x8000000000000003;
                        'label_4a2c40:
                        arg1[3] = *r14_3.byte_offset(0x10);
                        *arg1.byte_offset(8) = *r14_3;
                        *arg1 = result_2;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_98);
                    }
                    
                    let rax_2: i8 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg4, arg5);
                    uu_cp::backup_dest::hdc34a5fbd97a8cc7(&result_1, arg4, arg5, var_90, var_88, 
                        rax_2);
                    result_2 = result_1;
                    let mut var_68: i128 = var_130;
                    let var_58_1: i64 = var_120;
                    
                    if result_2 != -0x7ffffffffffffff4
                    {
                        arg1[6] = *var_110[8];
                        let var_118: i64;
                        *arg1.byte_offset(0x20) = var_118;
                        r14_3 = &var_68;
                        goto 'label_4a2c40;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_68);
                    result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                        &var_98);
                    
                    if rax_2 == 0
                    {
                        goto 'label_4a29c7;
                    }
                    
                    *arg1 = -0x7ffffffffffffff4;
                }
                else
                {
                    'label_4a29c7:
                    uu_cp::delete_dest_if_needed_and_allowed::h89467f703e519ceb(&result_1, arg2, 
                        arg3, arg4, arg5, arg6, arg7, arg8);
                    result = result_1;
                    
                    if result != -0x7ffffffffffffff4
                    {
                        goto 'label_4a2a85;
                    }
                    
                    *arg1 = -0x7ffffffffffffff4;
                }
            }
            else
            {
                uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(&result_1, *arg6.byte_offset(0x54), 
                    arg4, arg5, *arg6.byte_offset(0x5f));
                result = result_1;
                
                if result == -0x7ffffffffffffff4
                {
                    goto 'label_4a297f;
                }
                
                'label_4a2a85:
                *arg1.byte_offset(0x28) = var_110;
                *arg1.byte_offset(0x18) = var_120;
                *arg1.byte_offset(8) = var_130;
                *arg1 = result;
            }
        }
    }
    else
    {
        var_e0 = 1;
        let var_d8_1: i64 = arg2;
        let var_d0_1: u64 = arg3;
        let var_c8_1: i8 = 1;
        var_100 = 1;
        let var_f8_1: i64 = arg4;
        let var_f0_1: u64 = arg5;
        let var_e8_1: i8 = 1;
        var_b8 = &var_e0;
        let var_b0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let var_a8_1: *mut i64 = &var_100;
        let var_a0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        result_1 = &data_55ebd8;
        let var_130_1: i64 = 3;
        let var_118_1: i64 = 0;
        let var_128_1: *mut *mut i64 = &var_b8;
        let var_120_1: i64 = 2;
        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&arg1[1], &result_1);
        *arg1 = -0x7ffffffffffffffd;
    }
    result
}
