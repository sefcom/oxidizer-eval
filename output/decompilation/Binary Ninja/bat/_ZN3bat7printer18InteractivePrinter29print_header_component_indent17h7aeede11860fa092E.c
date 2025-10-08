
  int64_t bat::printer::InteractivePrinter::print_header_component_indent::h7aeede11860fa092(char* arg1, void* arg2, int32_t* arg3)

{
    void* rdi_4;
    void* var_e0;
    char const* const var_c0;
    void* const var_78;
    
    if (!bat::style::StyleComponents::grid::h47e585e5c9942068(0xc0 + *(arg2 + 0x200)))
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_78, 
            " \s +Failed to load one or more …", 1, *(arg2 + 0x210));
        var_e0 = &var_78;
        int64_t (* var_d8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c0 = &data_47f780;
        int64_t var_b8_1 = 1;
        int64_t var_a0_1 = 0;
        void** var_b0_1 = &var_e0;
        int64_t var_a8_1 = 1;
        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1, arg3, &var_c0);
        rdi_4 = &var_78;
    }
    else
    {
        uint64_t r13_1 = *(arg2 + 0x210);
        void var_48;
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_48, 
            " \s +Failed to load one or more …", 1, r13_1);
        int32_t rax_1;
        rax_1 = r13_1;
        int128_t var_90_1 = *(arg2 + 0x220);
        char var_80_1 = *(arg2 + 0x230);
        void* const rcx_2 = &data_480ea4;
        
        if (!r13_1)
            rcx_2 = 1;
        
        var_c0 = -0x8000000000000000;
        void* const var_b8 = rcx_2;
        uint64_t var_b0 = rax_1 << 2;
        int64_t var_a8 = -0x7ffffffffffffffe;
        var_e0 = &var_48;
        int64_t (* var_d8)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int64_t* var_d0_1 = &var_c0;
        uint64_t (* var_c8_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
        var_78 = &data_485820;
        int64_t var_70_1 = 2;
        int64_t var_58_1 = 0;
        void** var_68_1 = &var_e0;
        int64_t var_60_1 = 2;
        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1, arg3, &var_78);
        core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_c0);
        rdi_4 = &var_48;
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(rdi_4);
}
