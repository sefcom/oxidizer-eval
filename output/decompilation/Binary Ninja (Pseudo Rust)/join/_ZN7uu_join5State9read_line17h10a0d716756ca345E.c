
  fn uu_join::State::read_line::h10a0d716756ca345(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let mut result_1: i64;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h200110f257df7b0a(&result_1, arg2.byte_offset(0x28));
    let mut result: i64 = result_1;
    
    if result != -0x7fffffffffffffff
    {
        *arg2.byte_offset(0x50) += 1;
        let var_78: i64;
        
        if result != -0x8000000000000000
        {
            let mut result_2: i64 = result;
            let var_60_1: i64 = var_78;
            let var_70: i64;
            let var_58_1: i64 = var_70;
            let r12_1: i64 = *arg2.byte_offset(0x48);
            let mut var_50: i128;
            uu_join::Line::new::h75a15c4b4d7b95ca(&var_50, &result_2, arg3, r12_1);
            let result_3: i64;
            result = result_3;
            
            if result > r12_1
            {
                *arg2.byte_offset(0x48) = result;
            }
            
            let zmm0_1: i128 = var_50;
            let var_30: i128;
            *arg1.byte_offset(0x20) = var_30;
            *arg1.byte_offset(0x10) = result_3;
            *arg1 = zmm0_1;
        }
        else
        {
            arg1[1] = var_78;
            *arg1 = -0x7fffffffffffffff;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    result
}
