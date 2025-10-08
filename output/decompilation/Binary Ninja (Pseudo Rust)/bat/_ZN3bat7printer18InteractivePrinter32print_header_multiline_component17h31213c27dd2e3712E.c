
  fn bat::printer::InteractivePrinter::print_header_multiline_component::h31213c27dd2e3712(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i32, arg4: *mut i8, arg5: i64) -> i64

{
    let rdi: *mut c_void = *arg2.byte_offset(0x200);
    let r13: i64 = *rdi.byte_offset(0x100);
    let mut rax: i64;
    let mut zmm0: [i32; 0x4];
    rax = bat::printer::InteractivePrinter::get_header_component_indent_length::hd64a2392c9e377f1(
        rdi, *arg2.byte_offset(0x210));
    let r13_1: i64 = r13 - rax;
    
    if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg4, &arg4[arg5], zmm0) <= r13_1
    {
        /* tailcall */
        return
            bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(
            arg1, arg2, arg3, arg4);
    }
    
    let var_60: *mut i8 = arg4;
    let var_58: i64 = arg5;
    let mut var_110: i64 = 0;
    let var_100: i64 = 0;
    let var_f0: i64 = 0;
    let var_e0: i64 = 0;
    let var_d8: i64 = arg5;
    let var_d0: i64 = 0;
    let var_c8: i8 = 2;
    let var_c4: i32 = 0x10020001;
    let var_c0: i8 = 0x10;
    let var_b8: i64 = 0;
    let var_a8: i64 = 0;
    let var_98: i64 = 0;
    let var_88: i64 = arg5;
    let var_80: i64 = arg5;
    let var_78: i64 = 0;
    let var_70: i8 = 2;
    let var_6c: i32 = 0x10020001;
    let var_68: i8 = 0x10;
    let mut var_178: i64;
    core::iter::traits::iterator::Iterator::collect::h8d2a77f30e1e4d47(&var_178, &var_110);
    let var_168: i64;
    let mut rdx: i64 = var_168;
    let var_170: i64;
    let mut var_148: i128;
    
    while rdx > r13_1
    {
        let mut var_50: i64;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha2be0b953148dba9(&var_50, 
            var_170, rdx, r13_1);
        let var_48: i64;
        alloc::str::join_generic_copy::he93d229304a012f3(&var_148, var_50, var_48, 1, 0);
        let var_138: i64;
        let var_118_1: i64 = var_138;
        let mut var_128: i128 = var_148;
        bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(
            &var_110, arg2, arg3, *var_128[8]);
        
        if var_110 != 0xd
        {
            *arg1.byte_offset(0x40) = var_d0;
            let zmm0_2: i128 = var_110;
            *arg1.byte_offset(0x30) = var_e0;
            *arg1.byte_offset(0x20) = var_f0;
            *arg1.byte_offset(0x10) = var_100;
            *arg1 = zmm0_2;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_128);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_178, var_170);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_128);
        let var_40: i64;
        let var_38: i64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7bf91e9bef7c0e32(&var_110, var_40, var_38);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_178, var_170);
        rdx = var_100;
        let var_168_1: i64 = rdx;
        var_178 = var_110;
    }
    
    alloc::str::join_generic_copy::he93d229304a012f3(&var_110, var_170, rdx, 1, 0);
    let var_138_1: i64 = var_100;
    var_148 = var_110;
    bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(arg1, 
        arg2, arg3, *var_148[8]);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(var_178, var_170);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_148)
}
