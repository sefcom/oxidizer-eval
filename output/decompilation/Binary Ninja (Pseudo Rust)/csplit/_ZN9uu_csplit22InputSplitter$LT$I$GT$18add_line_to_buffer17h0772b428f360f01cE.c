
  fn uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h0772b428f360f01c(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: *mut i128) -> *mut i128

{
    let mut result: *mut i128;
    let mut var_58: i64;
    
    if arg2[0xb] == 0
    {
        if arg2[2] >= arg2[0xa]
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h1fd652b2cb545617(&var_58, arg2);
            let var_40: i64;
            let var_28_1: i64 = var_40;
            let var_50: i128;
            let mut var_38: i128 = var_50;
            var_58 = arg3;
            let var_50_3: i128 = *arg4;
            let var_40_3: i64 = arg4[1];
            alloc::vec::Vec$LT$T$C$A$GT$::push::hcf44091d9b41540a(arg2, &var_58);
            return core::result::Result$LT$T$C$E$GT$::unwrap::h93be4edd8ab7bad5(arg1, &var_38);
        }
        
        var_58 = arg3;
        let var_50_2: i128 = *arg4;
        let var_40_2: i64 = arg4[1];
        result = alloc::vec::Vec$LT$T$C$A$GT$::push::hcf44091d9b41540a(arg2, &var_58);
    }
    else
    {
        var_58 = arg3;
        let var_50_1: i128 = *arg4;
        let var_40_1: i64 = arg4[1];
        result = alloc::vec::Vec$LT$T$C$A$GT$::insert::he51302ddad578716(arg2, &var_58);
    }
    *arg1 = -0x8000000000000000;
    result
}
