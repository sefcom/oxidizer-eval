
  int64_t uu_dd::BlockWriter::truncate::h683e1b01b8f66d73(int64_t* arg1)

{
    int64_t result_1;
    int64_t result = result_1;
    
    if (!(0 + -(*arg1)))
    {
        int64_t result_3 = uu_dd::bufferedoutput::BufferedOutput::truncate::h188d6170b2c0aed9(arg1);
        result = result_3;
        
        if (result_3)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7a03f57d9b19cc5(&result);
    }
    else
    {
        int64_t result_2 = uu_dd::Output::truncate::h5b640e56859ee733(&arg1[1]);
        result = result_2;
        
        if (result_2)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc7a03f57d9b19cc5(&result);
    }
    
    return result;
}
