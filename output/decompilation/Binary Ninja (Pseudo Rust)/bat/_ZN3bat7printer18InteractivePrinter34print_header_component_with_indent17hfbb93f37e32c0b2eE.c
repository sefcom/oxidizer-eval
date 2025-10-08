
  fn bat::printer::InteractivePrinter::print_header_component_with_indent::hfbb93f37e32c0b2e(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i32, arg4: i64) -> *mut i8

{
    let mut var_80: i64 = arg4;
    let r8: i64;
    let var_78: i64 = r8;
    let mut var_60: i8;
    let result: i64 =
        bat::printer::InteractivePrinter::print_header_component_indent::h7aeede11860fa092(&var_60, 
        arg2, arg3);
    let mut var_50: i128;
    let mut var_40: i128;
    
    if var_60 != 0xd
    {
        let var_20: i128;
        *arg1.byte_offset(0x40) = var_20;
        let zmm0: i128 = var_60;
        let var_30: i128;
        *arg1.byte_offset(0x30) = var_30;
        *arg1.byte_offset(0x20) = var_40;
        *arg1.byte_offset(0x10) = var_50;
        *arg1 = zmm0;
        return result;
    }
    
    let mut var_70: *mut i64 = &var_80;
    let var_68: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
    var_60 = &data_acea80;
    let var_58: i64 = 2;
    var_40 = 0;
    var_50 = &var_70;
    *var_50[8] = 1;
    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1, arg3, &var_60)
}
