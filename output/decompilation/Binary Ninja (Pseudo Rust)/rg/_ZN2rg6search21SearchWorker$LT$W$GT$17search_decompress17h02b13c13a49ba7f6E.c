
  fn rg::search::SearchWorker$LT$W$GT$::search_decompress::h02b13c13a49ba7f6(arg1: *mut i64, arg2: *mut i32, arg3: i64) -> i64

{
    let mut var_a8: i32;
    grep_cli::decompress::DecompressionReaderBuilder::build::hb91cdb578e206b05(&var_a8, 
        &arg2[0xa8], arg3);
    let rax: i32 = var_a8;
    let mut var_c8: i128;
    let mut var_a4: i128;
    let var_90: i64;
    
    if rax == 3
    {
        let mut var_bc: i128;
        *var_bc[8] = var_90;
        let zmm0: i128 = var_a4;
        var_c8 = zmm0;
        *var_a4[0xc] = var_90;
        var_a8 = zmm0;
        let result: i64 = grep_cli::process::_$LT$impl$u20$core..convert..From$LT$grep_cli..process..CommandError$GT$$u20$for$u20$std..io..error..Error$GT$::from::h51fc9fd89019e605(&var_a8);
        *arg1 = result;
        arg1[7] = 0x3b9aca01;
        return result;
    }
    
    var_c8 = var_a4;
    let var_88: i128;
    let var_40_1: i128 = var_88;
    let var_78: i128;
    let var_30_1: i128 = var_78;
    let mut var_5c_1: i128 = var_c8;
    var_5c_1 = var_a4;
    let mut var_60: i32 = rax;
    let var_d8_1: *mut i32 = &var_60;
    rg::search::search_reader::h1373a3ec018458d5(&var_a8, &arg2[0xb8], arg2, &arg2[0x42], arg3);
    let rax_2: i64 = grep_cli::decompress::DecompressionReader::close::ha37792dd94278c65(&var_60);
    var_c8 = rax_2;
    let rdx_1: i64 = var_a8;
    let rcx_2: i32 = *var_78[8];
    
    if rcx_2 == 0x3b9aca01
    {
        *arg1 = rdx_1;
        arg1[7] = 0x3b9aca01;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_c8);
    }
    else if rax_2 == 0
    {
        *arg1 = rdx_1;
        *arg1.byte_offset(8) = var_a4;
        *arg1.byte_offset(0x18) = var_90;
        *arg1.byte_offset(0x28) = var_88;
        arg1[7] = rcx_2;
        *arg1.byte_offset(0x3c) = *var_78[0xc];
        let var_64: i32;
        *arg1.byte_offset(0x44) = var_64;
    }
    else
    {
        *arg1 = rax_2;
        arg1[7] = 0x3b9aca01;
    }
    
    core::ptr::drop_in_place$LT$grep_cli..decompress..DecompressionReader$GT$::hc1b515400d04321c(
        &var_60)
}
