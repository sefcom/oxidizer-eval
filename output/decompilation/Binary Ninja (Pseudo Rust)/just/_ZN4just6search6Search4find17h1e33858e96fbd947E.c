
  fn just::search::Search::find::h1e33858e96fbd947(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64, arg6: *mut i64) -> i64

{
    let rax_1: i64 = *arg6 ^ 0x8000000000000000;
    let mut r10: i64 = 4;
    
    if rax_1 < 4
    {
        r10 = rax_1;
    }
    
    let mut var_d8: i128;
    let mut var_c8_1: u64;
    let var_c0: u64;
    let mut var_c0_1: i128;
    let mut var_b0_1: u64;
    let mut var_a8: i128;
    let var_98: u64;
    let mut var_88: i128;
    let mut result: i64;
    let mut zmm0_1: i128;
    
    match r10
    {
        0 =>
        {
            /* tailcall */
            return just::search::Search::find_in_directory::h02746fb8a7674a3d(arg1, arg2, arg3, 
                arg4, arg5);
        }
        1 =>
        {
            arg6[2];
            arg6[3];
            let mut var_48: ();
            just::search::Search::clean::hd91959d13e0c6030(&var_48, arg4, arg5);
            let var_40: *mut i8;
            let var_38: u64;
            just::search::Search::justfile::h0dde78ec0504c748(&var_d8, arg2, arg3, var_40, var_38);
            let rax_20: i64 = var_d8;
            var_88 = var_d8;
            
            if rax_20 != -0x7ffffffffffffffa
            {
                arg1[2] = var_c0;
                arg1[1] = var_88;
                *arg1.byte_offset(8) = rax_20;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                var_a8 = var_88;
                just::search::Search::working_directory_from_justfile::hd51585d6fd438247(&var_d8, 
                    *var_a8[8], var_c0);
                let rax_21: i64 = var_d8;
                var_88 = var_d8;
                
                if rax_21 != -0x7ffffffffffffffa
                {
                    arg1[2] = var_c0;
                    arg1[1] = var_88;
                    *arg1.byte_offset(8) = rax_21;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a8);
                }
                else
                {
                    let var_c0_3: i128 = var_88;
                    let zmm0_5: i128 = var_a8;
                    var_d8 = zmm0_5;
                    arg1[2] = *var_c0_3[8];
                    *arg1.byte_offset(0x28) = var_c0;
                    arg1[1] = var_c0;
                    *arg1.byte_offset(0x18) = var_c0_3;
                    *arg1 = zmm0_5;
                }
            }
            
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_48);
        }
        2 =>
        {
            just::search::Search::find_global_justfile::hebd54203e27fdeac(&var_88);
            result = var_88;
            let mut var_68: i128 = var_88;
            let var_70: i64;
            
            if result != -0x7ffffffffffffffa
            {
                arg1[2] = var_70;
                arg1[1] = var_68;
                *arg1.byte_offset(8) = result;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                just::search::Search::project_root::hdf3a1681c569c3d2(&var_88, arg2, arg3, arg4, 
                    arg5);
                let rax_6: i64 = var_88;
                var_a8 = var_88;
                
                if rax_6 != -0x7ffffffffffffffa
                {
                    arg1[2] = var_70;
                    arg1[1] = var_a8;
                    *arg1.byte_offset(8) = rax_6;
                    *arg1 = -0x8000000000000000;
                    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                        &var_68);
                }
                
                let var_c0_2: i128 = var_a8;
                let zmm0_3: i128 = var_68;
                var_d8 = zmm0_3;
                *arg1 = zmm0_3;
                arg1[2] = *var_c0_2[8];
                *arg1.byte_offset(0x28) = var_70;
                arg1[1] = var_70;
                result = var_c0_2;
                *arg1.byte_offset(0x18) = result;
            }
        }
        3 =>
        {
            arg6[2];
            arg6[3];
            just::search::Search::clean::hd91959d13e0c6030(&var_a8, arg4, arg5);
            just::search::Search::working_directory_from_justfile::hd51585d6fd438247(&var_d8, 
                *var_a8[8], var_98);
            let rax_13: i64 = var_d8;
            var_88 = var_d8;
            
            if rax_13 == -0x7ffffffffffffffa
            {
                var_b0_1 = var_c0;
                var_c0_1 = var_88;
                var_c8_1 = var_98;
                zmm0_1 = var_a8;
                var_d8 = zmm0_1;
                goto 'label_6882e4;
            }
            
            arg1[2] = var_c0;
            arg1[1] = var_88;
            *arg1.byte_offset(8) = rax_13;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a8);
        }
        4 =>
        {
            arg6[1];
            arg6[2];
            just::search::Search::clean::hd91959d13e0c6030(&var_a8, arg4, arg5);
            arg6[4];
            arg6[5];
            just::search::Search::clean::hd91959d13e0c6030(&var_88, arg4, arg5);
            var_c8_1 = var_98;
            zmm0_1 = var_a8;
            var_d8 = zmm0_1;
            var_c0_1 = var_88;
            let var_78: u64;
            var_b0_1 = var_78;
            'label_6882e4:
            arg1[2] = *var_c0_1[8];
            *arg1.byte_offset(0x28) = var_b0_1;
            arg1[1] = var_c8_1;
            result = var_c0_1;
            *arg1.byte_offset(0x18) = result;
            *arg1 = zmm0_1;
        }
    }
    
    result
}
