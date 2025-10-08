
  int64_t rg::search::SearchWorker$LT$W$GT$::search_decompress::h02b13c13a49ba7f6(int64_t* arg1, int32_t* arg2, int64_t arg3)

{
    int32_t var_a8;
    grep_cli::decompress::DecompressionReaderBuilder::build::hb91cdb578e206b05(&var_a8, 
        &arg2[0xa8], arg3);
    int32_t rax = var_a8;
    int128_t var_c8;
    int128_t var_a4;
    int64_t var_90;
    
    if (rax == 3)
    {
        int128_t var_bc;
        *var_bc[8] = var_90;
        int128_t zmm0 = var_a4;
        var_c8 = zmm0;
        *var_a4[0xc] = var_90;
        var_a8 = zmm0;
        int64_t result = grep_cli::process::_$LT$impl$u20$core..convert..From$LT$grep_cli..process..CommandError$GT$$u20$for$u20$std..io..error..Error$GT$::from::h51fc9fd89019e605(&var_a8);
        *arg1 = result;
        arg1[7] = 0x3b9aca01;
        return result;
    }
    
    var_c8 = var_a4;
    int128_t var_88;
    int128_t var_40_1 = var_88;
    int128_t var_78;
    int128_t var_30_1 = var_78;
    int128_t var_5c_1 = var_c8;
    var_5c_1 = var_a4;
    int32_t var_60 = rax;
    int32_t* var_d8_1 = &var_60;
    rg::search::search_reader::h1373a3ec018458d5(&var_a8, &arg2[0xb8], arg2, &arg2[0x42], arg3);
    int64_t rax_2 = grep_cli::decompress::DecompressionReader::close::ha37792dd94278c65(&var_60);
    var_c8 = rax_2;
    int64_t rdx_1 = var_a8;
    int32_t rcx_2 = *var_78[8];
    
    if (rcx_2 == 0x3b9aca01)
    {
        *arg1 = rdx_1;
        arg1[7] = 0x3b9aca01;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_c8);
    }
    else if (!rax_2)
    {
        *arg1 = rdx_1;
        *(arg1 + 8) = var_a4;
        *(arg1 + 0x18) = var_90;
        *(arg1 + 0x28) = var_88;
        arg1[7] = rcx_2;
        *(arg1 + 0x3c) = *var_78[0xc];
        int32_t var_64;
        *(arg1 + 0x44) = var_64;
    }
    else
    {
        *arg1 = rax_2;
        arg1[7] = 0x3b9aca01;
    }
    
    return core::ptr::drop_in_place$LT$grep_cli..decompress..DecompressionReader$GT$::hc1b515400d04321c(&var_60);
}
