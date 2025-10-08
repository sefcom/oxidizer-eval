
  fn rg::flags::hiargs::HiArgs::buffer_writer::hca11ab9044d40209(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_60: i128;
    termcolor::BufferWriter::stdout::h9ebd8187d1df1ab7(&var_60, 
        0x1000203 >> *arg2.byte_offset(0x395) << 3);
    let mut var_98: i128;
    
    if !(0 + -(*arg2.byte_offset(0x280)))
    {
        let mut var_78: i128;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_78, *arg2.byte_offset(0x288), *arg2.byte_offset(0x290));
        let var_68: i64;
        let var_88_1: i64 = var_68;
        var_98 = var_78;
    }
    else
    {
        var_98 = -0x8000000000000000;
    }
    
    let result: i64 = termcolor::BufferWriter::separator::h5ba86de9085671e6(&var_60, &var_98);
    let var_20: i128;
    arg1[4] = var_20;
    let zmm0_2: i128 = var_60;
    let var_30: i128;
    arg1[3] = var_30;
    let var_40: i128;
    arg1[2] = var_40;
    let var_50: i128;
    arg1[1] = var_50;
    *arg1 = zmm0_2;
    result
}
