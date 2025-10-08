
  fn bat::assets::HighlightingAssets::get_syntax::hae1062e96f01c264(arg1: *mut i8, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut c_void, arg6: *mut c_void) -> u64

{
    let mut result: u64;
    let mut result_1: i8;
    let var_e7: i32;
    let mut result_2: *mut c_void;
    let mut var_d8: i128;
    let var_c8: i128;
    let var_b8: i128;
    let var_a8: i128;
    let mut var_98: i8;
    let mut var_97: i128;
    
    if arg3 != 0
    {
        bat::assets::HighlightingAssets::get_syntax_set::h9a5acb7c2790c837(&result_1, arg2);
        result = result_1;
        
        if result != 0xd
        {
            *arg1.byte_offset(4) = var_e7;
            *arg1.byte_offset(1) = var_e7;
            *arg1.byte_offset(0x20) = var_c8;
            *arg1.byte_offset(0x30) = var_b8;
            *arg1.byte_offset(0x40) = var_a8;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1 = result;
            *arg1.byte_offset(8) = result_2;
        }
        else
        {
            result =
                syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token::hd2ebbb585b2e3395(
                result_2, arg3, arg4);
            
            if result == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_98, arg3, arg4);
                *var_d8[7] = *var_97[0xf];
                let var_e1_1: i128 = var_98;
                *arg1 = 8;
                result = result_2;
                *arg1.byte_offset(1) = result_1;
                *arg1.byte_offset(0x10) = result;
                *arg1.byte_offset(0x18) = *var_d8[7];
            }
            else
            {
                *arg1.byte_offset(8) = result;
                *arg1.byte_offset(0x10) = result_2;
                *arg1 = 0xd;
            }
        }
    }
    else
    {
        let mut var_48: i128;
        let mut rbp_1: *mut c_void;
        let mut r12_2: *mut c_void;
        let mut r14_1: *mut i64;
        let mut r15_2: *mut c_void;
        
        if !(0 + -(*arg5.byte_offset(0x10)))
        {
            r15_2 = arg6;
            r14_1 = arg2;
            rbp_1 = arg5;
            r12_2 = arg5.byte_offset(0x10);
            'label_835f39:
            path_abs::abs::PathAbs::new::hf633db794d4335f6(&result_1, r12_2);
            core::result::Result$LT$T$C$E$GT$::map_or_else::h4d7d3b5126eadf34(&var_48, &result_1, 
                *r12_2.byte_offset(8), *r12_2.byte_offset(0x10));
            result = bat::assets::HighlightingAssets::get_syntax_for_path::h81a93406f6b01928(
                &var_98, r14_1, &var_48, r15_2);
            
            if var_98 == 7
            {
                goto 'label_83605f;
            }
            
            let var_58: i128;
            *arg1.byte_offset(0x40) = var_58;
            let zmm0_2: i128 = var_98;
            let zmm1_1: i128 = var_97;
            let var_68: i128;
            *arg1.byte_offset(0x30) = var_68;
            let var_78: i128;
            *arg1.byte_offset(0x20) = var_78;
            *arg1.byte_offset(0x10) = zmm1_1;
            *arg1 = zmm0_2;
        }
        else
        {
            if *arg5.byte_offset(0xb8) > -0x7fffffffffffffff
            {
                r15_2 = arg6;
                r14_1 = arg2;
                rbp_1 = arg5;
                r12_2 = arg5.byte_offset(0xb8);
                goto 'label_835f39;
            }
            
            rbp_1 = arg5;
            r14_1 = arg2;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(&var_48, "[unknow", 9);
            let var_38: i64;
            *var_d8[7] = var_38;
            let var_e1_2: i128 = var_48;
            var_98 = 7;
            var_97 = result_1;
            *var_97[0xf] = result_2;
            let var_80: i64 = *var_d8[7];
            'label_83605f:
            bat::assets::HighlightingAssets::get_first_line_syntax::h6c56271b9f5531af(&result_1, 
                r14_1, *rbp_1.byte_offset(0x30), *rbp_1.byte_offset(0x38));
            let result_3: i8 = result_1;
            
            if result_3 != 0xd
            {
                *arg1.byte_offset(4) = var_e7;
                *arg1.byte_offset(1) = var_e7;
                *arg1.byte_offset(0x18) = var_d8;
                *arg1.byte_offset(0x28) = var_c8;
                *arg1.byte_offset(0x38) = var_b8;
                *arg1.byte_offset(0x48) = *var_a8[8];
                *arg1 = result_3;
                *arg1.byte_offset(8) = result_2;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                    &*var_97[7]);
            }
            
            let result_4: *mut c_void = result_2;
            let rcx_6: i64 = var_d8;
            *var_d8[8] = var_80;
            result_2 = var_97;
            result_1 = 7;
            
            if result_4 != 0
            {
                *arg1.byte_offset(8) = result_4;
                *arg1.byte_offset(0x10) = rcx_6;
                *arg1 = 0xd;
                return core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(
                    &result_1);
            }
            
            *arg1.byte_offset(0x40) = var_a8;
            result = result_1;
            *arg1.byte_offset(0x30) = var_b8;
            *arg1.byte_offset(0x20) = var_c8;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1.byte_offset(0x18) = *var_d8[8];
            *arg1 = result;
            *arg1.byte_offset(1) = var_e7;
            *arg1.byte_offset(9) = *result_2[1];
            *arg1.byte_offset(0xd) = *result_2[5];
            arg1[0xf] = *result_2[7];
        }
    }
    result
}
