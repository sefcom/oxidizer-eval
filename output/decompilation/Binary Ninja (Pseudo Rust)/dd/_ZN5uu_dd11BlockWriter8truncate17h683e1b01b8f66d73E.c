
  fn uu_dd::BlockWriter::truncate::h683e1b01b8f66d73(arg1: *mut i64) -> i64

{
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if !(0 + -(*arg1))
    {
        let result_3: i64 =
            uu_dd::bufferedoutput::BufferedOutput::truncate::h188d6170b2c0aed9(arg1);
        result = result_3;
        
        if result_3 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7a03f57d9b19cc5(&result);
        }
    }
    else
    {
        let result_2: i64 = uu_dd::Output::truncate::h5b640e56859ee733(&arg1[1]);
        result = result_2;
        
        if result_2 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7a03f57d9b19cc5(&result);
        }
    }
    
    result
}
