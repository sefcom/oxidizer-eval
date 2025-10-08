
  int64_t rg::flags::hiargs::HiArgs::path_printer_builder::h89f24a04c32e915a(int128_t* arg1, void* arg2)

{
    int128_t var_68;
    grep_printer::path::PathPrinterBuilder::new::h9f86aafacf1073e8(&var_68);
    _$LT$grep_printer..color..ColorSpecs$u20$as$u20$core..clone..Clone$GT$::clone::h2672960dbfd8f738(&*var_68[9], arg2 + 0x325);
    int64_t* rsi_1 = *(arg2 + 0x308);
    int64_t temp0 = *rsi_1;
    *rsi_1 += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    int64_t* rax =
        grep_printer::path::PathPrinterBuilder::hyperlink::h2e0784cb0da3d9d7(&var_68, rsi_1);
    *(rax + 0x54) = *(arg2 + 0x31c);
    char rdx = 0xa;
    
    if (*(arg2 + 0x31e))
        rdx = *(arg2 + 0x31f);
    
    rax[1] = rdx;
    int64_t result;
    arg1[5] = result;
    int128_t var_28;
    arg1[4] = var_28;
    int128_t zmm0 = var_68;
    int128_t var_38;
    arg1[3] = var_38;
    int128_t var_48;
    arg1[2] = var_48;
    int128_t var_58;
    arg1[1] = var_58;
    *arg1 = zmm0;
    return result;
}
