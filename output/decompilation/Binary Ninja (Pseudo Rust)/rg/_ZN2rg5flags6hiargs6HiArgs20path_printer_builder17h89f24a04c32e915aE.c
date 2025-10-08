
  fn rg::flags::hiargs::HiArgs::path_printer_builder::h89f24a04c32e915a(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_68: i128;
    grep_printer::path::PathPrinterBuilder::new::h9f86aafacf1073e8(&var_68);
    _$LT$grep_printer..color..ColorSpecs$u20$as$u20$core..clone..Clone$GT$::clone::h2672960dbfd8f738(&*var_68[9], arg2.byte_offset(0x325));
    let rsi_1: *mut i64 = *arg2.byte_offset(0x308);
    let temp0: i64 = *rsi_1;
    *rsi_1 += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let rax: *mut i64 =
        grep_printer::path::PathPrinterBuilder::hyperlink::h2e0784cb0da3d9d7(&var_68, rsi_1);
    *rax.byte_offset(0x54) = *arg2.byte_offset(0x31c);
    let mut rdx: i8 = 0xa;
    
    if *arg2.byte_offset(0x31e) != 0
    {
        rdx = *arg2.byte_offset(0x31f);
    }
    
    rax[1] = rdx;
    let result: i64;
    arg1[5] = result;
    let var_28: i128;
    arg1[4] = var_28;
    let zmm0: i128 = var_68;
    let var_38: i128;
    arg1[3] = var_38;
    let var_48: i128;
    arg1[2] = var_48;
    let var_58: i128;
    arg1[1] = var_58;
    *arg1 = zmm0;
    result
}
