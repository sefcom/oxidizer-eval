
  int64_t uu_dd::BlockWriter::truncate::haed78b6dd922a309(int64_t* arg1)

{
    int64_t result_1;
    int64_t result = result_1;
    int64_t result_2;
    
    if (*arg1 != -0x8000000000000000)
        result_2 = uu_dd::bufferedoutput::BufferedOutput::truncate::h2d9d362dd2e62035(arg1);
    else
        result_2 = uu_dd::Output::truncate::h03e8e893bfb9669a(&arg1[1]);
    
    result = result_2;
    
    if (result_2)
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&result);
    
    return result;
}
