
  fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool::hbfd4616a4c6c4b7a(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut i8, arg8: i64, arg9: *mut *mut c_void) -> u64

{
    let mut result: u64;
    let mut rdx: i64;
    result = smallvec::SmallVec$LT$A$GT$::try_reserve::h1e9b0af026a914f8(arg9, 
        (*arg1.byte_offset(0x10) << 1) + -ffffffffffffffff);
    smallvec::infallible::heb4b400111f45abd(result);
    let r15: i64 = *arg1.byte_offset(0x10);
    
    if r15 != 0
    {
        let rbp_1: i64 = *arg1.byte_offset(8);
        let var_68_1: i64 = rbp_1;
        let var_60_1: i64 = arg2;
        let mut var_58_1: i64 = arg3;
        let mut var_70: i64 = 0;
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
            &var_70, arg6, arg7, arg8, arg9);
        let var_68_2: i64 = 4;
        let var_60_2: i64 = 0;
        var_58_1 = 2;
        *var_58_1[1] = *arg1.byte_offset(0x24);
        var_70 = 3;
        result = smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_70);
        
        if r15 != 1
        {
            let r15_2: i64 = r15 * 0x50;
            let mut rbp_2: i64 = rbp_1 + 0x50;
            let r8_1: *mut i64 = arg9;
            
            if rbp_2 != r15_2 + rbp_1 - 0x50
            {
                let mut i_1: i64 = r15_2 - 0xa0;
                let mut i: i64;
                
                do
                {
                    let var_68_3: i64 = rbp_2;
                    rbp_2 += 0x50;
                    var_70 = 1;
                    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(&var_70, arg6, arg7, arg8, r8_1);
                    let var_68_4: i64 = 4;
                    let var_60_3: i64 = 0;
                    var_58_1 = 2;
                    *var_58_1[1] = *arg1.byte_offset(0x24);
                    var_70 = 3;
                    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(r8_1, &var_70);
                    i = i_1;
                    i_1 -= 0x50;
                } while i != 0x50;
            }
            
            let var_68_5: i64 = r15_2 + rbp_1 - 0x50;
            let var_60_4: i64 = arg4;
            let var_58_2: i64 = arg5;
            var_70 = 2;
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(&var_70, arg6, arg7, arg8, r8_1);
        }
    }
    
    result
}
