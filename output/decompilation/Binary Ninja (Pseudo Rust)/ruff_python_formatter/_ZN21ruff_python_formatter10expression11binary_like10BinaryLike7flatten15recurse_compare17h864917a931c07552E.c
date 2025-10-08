
  fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare::h864917a931c07552(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut i8, arg8: i64, arg9: *mut *mut c_void) -> u64

{
    let mut rax_1: u64;
    let mut rdx: i64;
    rax_1 = smallvec::SmallVec$LT$A$GT$::try_reserve::h1e9b0af026a914f8(arg9, (arg1[4] << 1) + 1);
    smallvec::infallible::heb4b400111f45abd(rax_1);
    let var_b0: i64 = *arg1;
    let var_a8: i64 = arg2;
    let mut var_a0: i64 = arg3;
    let mut var_b8: *mut *mut c_void = nullptr;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_b8, arg6, arg7, arg8, arg9);
    let result: u64 = arg1[4];
    let mut result_1: u64 = result;
    let rcx_1: i64 = arg1[2];
    let mut var_58: i64 = rcx_1;
    
    if result != rcx_1
    {
        var_b8 = &data_97d4a8;
        let var_b0_3: i64 = 1;
        let var_a8_3: i64 = 8;
        var_a0 = {0};
        core::panicking::assert_failed::h449f2a7fe5426575(0, &result_1, &var_58, &var_b8);
        /* no return */
    }
    
    if result == 0
    {
        return result;
    }
    
    let rsi_3: i64 = arg1[1];
    let rcx_2: i64 = arg1[3];
    core::iter::traits::iterator::Iterator::zip::hd5bd690253e7c151(&var_b8, rsi_3, 
        result + rsi_3 - 1, rcx_2, result - 1);
    let mut i: *mut i8;
    let mut rdx_7: i64;
    i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::haf805d6695fcc6f5(&var_b8);
    
    if i != 0
    {
        let mut r15_1: i64 = rdx_7;
        
        do
        {
            let var_48_1: i64 = 4;
            let var_40_1: i64 = 0;
            let var_38_1: i8 = 1;
            let var_37_1: i8 = *i;
            let mut var_50: i64 = 3;
            smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_50);
            let var_48_2: i64 = r15_1;
            var_50 = 1;
            ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(&var_50, arg6, arg7, arg8, arg9);
            let mut rdx_9: i64;
            i = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::haf805d6695fcc6f5(&var_b8);
            r15_1 = rdx_9;
        } while i != 0;
    }
    
    let var_b0_1: i64 = 4;
    let var_a8_1: i64 = 0;
    var_a0 = 1;
    *var_a0[1] = *(result + rsi_3 - 1);
    var_b8 = 3;
    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg9, &var_b8);
    let var_b0_2: i64 = (result - 1) * 0x50 + rcx_2;
    let var_a8_2: i64 = arg4;
    let var_a0_1: i64 = arg5;
    var_b8 = 2;
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(
        &var_b8, arg6, arg7, arg8, arg9)
}
