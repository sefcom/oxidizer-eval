
  fn uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h69a145175e6beff8(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut i128) -> *mut i128

{
    let mut result: *mut i128;
    let mut var_58: i64;
    
    if arg2[0xb] == 0
    {
        if arg2[2] >= arg2[0xa]
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::ha187cc186cdc8061(&var_58, arg2, 0);
            let var_40_3: i64 = arg4[1];
            let mut var_50_3: i128 = *arg4;
            var_58 = arg3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h59c271c22061c5db(arg2, &var_58);
            let var_40: i64;
            *var_50_3[8] = var_40;
            let var_50: i128;
            var_58 = var_50;
            return core::result::Result$LT$T$C$E$GT$::unwrap::hc4cee2f6f31529f0(arg1, &var_58);
        }
        
        let var_40_2: i64 = arg4[1];
        let var_50_2: i128 = *arg4;
        var_58 = arg3;
        result = alloc::vec::Vec$LT$T$C$A$GT$::push::h59c271c22061c5db(arg2, &var_58);
    }
    else
    {
        let var_40_1: i64 = arg4[1];
        let var_50_1: i128 = *arg4;
        var_58 = arg3;
        result = alloc::vec::Vec$LT$T$C$A$GT$::insert::hfd2eab809c60b3f4(arg2, 0, &var_58);
    }
    *arg1 = -0x8000000000000000;
    result
}
