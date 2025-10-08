
  fn uu_join::State::extend::h2ec74ec0241156b7(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8) -> u64

{
    let mut i_1: i64;
    uu_join::State::next_line::h97dbe53d754c4271(&i_1, arg2, arg3);
    let mut i: i64 = i_1;
    let mut var_e8: i128;
    let mut var_90: i128;
    let var_80: i64;
    let mut result: u64;
    
    if i != -0x7fffffffffffffff
    {
        let rcx_1: i8 = *arg3;
        
        do
        {
            var_e8 = var_90;
            let var_48_1: i64 = var_80;
            let zmm0_1: i128 = var_e8;
            let mut i_2: i64 = i;
            
            if i == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&i_2);
                result = arg1;
                *result = -0x8000000000000000;
                return result;
            }
            
            let mut i_3: i64 = i_2;
            let var_c0_1: i64 = zmm0_1;
            let mut rax_1: i64;
            let mut rdx: u64;
            rax_1 = uu_join::State::get_current_key::hb0aa7b8c555c38dc(arg2);
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 = uu_join::Line::get_field::h5172ba7928bd7492(&i_3, arg2[8]);
            
            if uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(rcx_1, rax_1, rdx, rax_2, 
                rdx_1) != 0
            {
                let zmm0_2: i128 = i_3;
                result = arg1;
                let var_78: i128;
                *(result + 0x20) = var_78;
                *(result + 0x10) = zmm0_1;
                *result = zmm0_2;
                return result;
            }
            
            var_90 = zmm0_1;
            i_1 = i_3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h1e462bd96175ed88(arg2, &i_1);
            uu_join::State::next_line::h97dbe53d754c4271(&i_1, arg2, arg3);
            i = i_1;
        } while i != -0x7fffffffffffffff;
    }
    
    let var_d8_2: i64 = var_80;
    var_e8 = var_90;
    result = alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_e8);
    arg1[1] = result;
    arg1[2] = &data_4fd398;
    *arg1 = -0x7fffffffffffffff;
    result
}
