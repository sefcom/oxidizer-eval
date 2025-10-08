
  char* bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(char* arg1, void* arg2, int32_t* arg3, int64_t arg4)

{
    int64_t var_80 = arg4;
    int64_t r8;
    int64_t var_78 = r8;
    char var_60;
    int64_t result =
        bat::printer::InteractivePrinter::print_header_component_indent::h7aeede11860fa092(&var_60, 
        arg2, arg3);
    int128_t var_50;
    int128_t var_40;
    
    if (var_60 != 0xd)
    {
        int128_t var_20;
        *(arg1 + 0x40) = var_20;
        int128_t zmm0 = var_60;
        int128_t var_30;
        *(arg1 + 0x30) = var_30;
        *(arg1 + 0x20) = var_40;
        *(arg1 + 0x10) = var_50;
        *arg1 = zmm0;
        return result;
    }
    
    int64_t* var_70 = &var_80;
    int64_t (* var_68)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    var_60 = &data_acea80;
    int64_t var_58 = 2;
    var_40 = 0;
    var_50 = &var_70;
    *var_50[8] = 1;
    return bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1, arg3, &var_60);
}
