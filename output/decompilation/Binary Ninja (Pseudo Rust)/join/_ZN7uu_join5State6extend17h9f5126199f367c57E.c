
  fn uu_join::State::extend::h9f5126199f367c57(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut i_1: i64;
    uu_join::State::next_line::hadb8004dc320d34b(&i_1, arg2, arg3);
    let mut i: i64 = i_1;
    let mut var_e0: i128;
    let var_d0: i64;
    let mut result: *mut i128;
    
    if i != -0x7fffffffffffffff
    {
        let rcx_1: i8 = *arg3.byte_offset(0x120);
        
        do
        {
            let var_48_1: i64 = var_d0;
            let mut i_2: i64 = i;
            
            if i == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&i_2);
                result = arg1;
                *result = -0x8000000000000000;
                return result;
            }
            
            let mut i_3: i64 = i_2;
            let var_90_1: i64 = var_e0;
            let mut rax_1: i64;
            let mut rdx: u64;
            rax_1 = uu_join::State::get_current_key::h6b22667ac5a703a7(arg2);
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 = uu_join::Line::get_field::h7dd14bed39768627(&i_3, arg2[8]);
            
            if uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(rcx_1, rax_1, rdx, rax_2, 
                rdx_1) != 0
            {
                let zmm0_2: i128 = i_3;
                result = arg1;
                let var_c8: i128;
                result[2] = var_c8;
                result[1] = var_e0;
                *result = zmm0_2;
                return result;
            }
            
            i_1 = i_3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hb39c05ee85860ab5(arg2, &i_1);
            uu_join::State::next_line::hadb8004dc320d34b(&i_1, arg2, arg3);
            i = i_1;
        } while i != -0x7fffffffffffffff;
    }
    
    let var_a8_2: i64 = var_d0;
    let zmm0_1: i128 = var_e0;
    let var_b8_2: i128 = zmm0_1;
    *var_e0[8] = var_d0;
    i_1 = zmm0_1;
    result = alloc::boxed::Box$LT$T$GT$::new::h06a7bb4fb867f987(&i_1);
    arg1[1] = result;
    arg1[2] = &data_5326b8;
    *arg1 = -0x7fffffffffffffff;
    result
}
