
  int64_t bat::printer::InteractivePrinter::print_header_multiline_component::h31213c27dd2e3712(char* arg1, void* arg2, int32_t* arg3, char* arg4, int64_t arg5)

{
    void* rdi = *(arg2 + 0x200);
    int64_t r13 = *(rdi + 0x100);
    int64_t rax;
    int32_t zmm0[0x4];
    rax = bat::printer::InteractivePrinter::get_header_component_indent_length::hd64a2392c9e377f1(
        rdi, *(arg2 + 0x210));
    int64_t r13_1 = r13 - rax;
    
    if (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg4, &arg4[arg5], zmm0) <= r13_1)
        /* tailcall */
        return
            bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(
            arg1, arg2, arg3, arg4);
    
    char* var_60 = arg4;
    int64_t var_58 = arg5;
    int64_t var_110 = 0;
    int64_t var_100 = 0;
    int64_t var_f0 = 0;
    int64_t var_e0 = 0;
    int64_t var_d8 = arg5;
    int64_t var_d0 = 0;
    char var_c8 = 2;
    int32_t var_c4 = 0x10020001;
    char var_c0 = 0x10;
    int64_t var_b8 = 0;
    int64_t var_a8 = 0;
    int64_t var_98 = 0;
    int64_t var_88 = arg5;
    int64_t var_80 = arg5;
    int64_t var_78 = 0;
    char var_70 = 2;
    int32_t var_6c = 0x10020001;
    char var_68 = 0x10;
    int64_t var_178;
    core::iter::traits::iterator::Iterator::collect::h8d2a77f30e1e4d47(&var_178, &var_110);
    int64_t var_168;
    int64_t rdx = var_168;
    int64_t var_170;
    int128_t var_148;
    
    while (rdx > r13_1)
    {
        int64_t var_50;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha2be0b953148dba9(&var_50, 
            var_170, rdx, r13_1);
        int64_t var_48;
        alloc::str::join_generic_copy::he93d229304a012f3(&var_148, var_50, var_48, 1, 0);
        int64_t var_138;
        int64_t var_118_1 = var_138;
        int128_t var_128 = var_148;
        bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(
            &var_110, arg2, arg3, *var_128[8]);
        
        if (var_110 != 0xd)
        {
            *(arg1 + 0x40) = var_d0;
            int128_t zmm0_2 = var_110;
            *(arg1 + 0x30) = var_e0;
            *(arg1 + 0x20) = var_f0;
            *(arg1 + 0x10) = var_100;
            *arg1 = zmm0_2;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_128);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_178, var_170);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_128);
        int64_t var_40;
        int64_t var_38;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7bf91e9bef7c0e32(&var_110, var_40, var_38);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_178, var_170);
        rdx = var_100;
        int64_t var_168_1 = rdx;
        var_178 = var_110;
    }
    
    alloc::str::join_generic_copy::he93d229304a012f3(&var_110, var_170, rdx, 1, 0);
    int64_t var_138_1 = var_100;
    var_148 = var_110;
    bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(arg1, 
        arg2, arg3, *var_148[8]);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_178, var_170);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_148);
}
