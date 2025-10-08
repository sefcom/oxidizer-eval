
  int64_t rg::flags::hiargs::HiArgs::printer_json::h0c8b4ba512914bf1(int64_t* arg1, void* arg2, int128_t* arg3)

{
    int128_t var_68;
    grep_printer::json::JSONBuilder::new::hd89cf9e777596eca(&var_68);
    char var_50 = 0;
    var_68 = *(arg2 + 0x20);
    char var_4f = 0;
    int64_t rax;
    
    if (!(0 + -(*(arg2 + 0x2b0))))
    {
        int64_t var_30;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_30, *(arg2 + 0x2b8), *(arg2 + 0x2c0));
        rax = var_30;
        int128_t var_28;
        int128_t var_40_1 = var_28;
    }
    else
        rax = -0x8000000000000000;
    
    int64_t var_48 = rax;
    grep_printer::json::JSONBuilder::build::h801341b4b2a5f701(arg1, 
        grep_printer::json::JSONBuilder::replacement::h6ab1db9108ab72de(&var_68, &var_48), arg3);
    return core::ptr::drop_in_place$LT$grep_printer..json..JSONBuilder$GT$::h05b0645f085f78ae(
        &var_68);
}
