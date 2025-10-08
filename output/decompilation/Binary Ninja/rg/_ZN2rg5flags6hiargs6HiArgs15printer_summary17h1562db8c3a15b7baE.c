
  int64_t rg::flags::hiargs::HiArgs::printer_summary::h1562db8c3a15b7ba(int64_t* arg1, void* arg2, int128_t* arg3, char arg4)

{
    void var_a0;
    grep_printer::summary::SummaryBuilder::new::hc3e817a686638508(&var_a0);
    void var_7c;
    _$LT$grep_printer..color..ColorSpecs$u20$as$u20$core..clone..Clone$GT$::clone::h2672960dbfd8f738(&var_7c, arg2 + 0x325);
    char var_2f = *(arg2 + 0x377) ^ 1;
    int64_t* rsi_1 = *(arg2 + 0x308);
    int64_t temp0 = *rsi_1;
    *rsi_1 += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    int128_t* rax_1 =
        grep_printer::summary::SummaryBuilder::hyperlink::ha403b9e6f27a74ca(&var_a0, rsi_1);
    *(rax_1 + 0x72) = arg4;
    *rax_1 = *(arg2 + 0x20);
    rax_1[7] = *(arg2 + 0x390);
    *(rax_1 + 0x22) = *(arg2 + 0x31e);
    void var_b8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_b8, ":]/rustc/bf64d66bd58719fac2585ea…", 1);
    int64_t* rax_4 =
        grep_printer::summary::SummaryBuilder::separator_field::hd6adde2c67595e0e(rax_1, &var_b8);
    rax_4[4] = *(arg2 + 0x31c);
    *(rax_4 + 0x6f) = *(arg2 + 0x300) != 0x3b9aca00;
    grep_printer::summary::SummaryBuilder::build::hcac5d63c00310d46(arg1, rax_4, arg3);
    return core::ptr::drop_in_place$LT$grep_printer..summary..SummaryBuilder$GT$::h250652f7d6ba002a(
        &var_a0);
}
