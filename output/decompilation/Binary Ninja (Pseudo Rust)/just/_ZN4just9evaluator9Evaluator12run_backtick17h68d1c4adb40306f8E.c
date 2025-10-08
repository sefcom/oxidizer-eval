
  fn just::evaluator::Evaluator::run_backtick::h68d1c4adb40306f8(arg1: *mut i8, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut i128) -> i64

{
    let mut var_80: i64;
    just::evaluator::Evaluator::run_command::h86d0b2f36f29e5c6(&var_80, arg2, arg3, arg4, 8, 0);
    let mut result: i64;
    
    if !(0 + -(var_80))
    {
        let var_70: i64;
        *arg1.byte_offset(0x18) = var_70;
        *arg1.byte_offset(8) = var_80;
        result = 0x38;
    }
    else
    {
        let var_78: i128;
        *arg1.byte_offset(0x50) = var_78;
        let rax: i64 = arg5[4];
        let zmm1_1: i128 = arg5[1];
        let zmm2_1: i128 = arg5[2];
        let var_60_1: i128 = *arg5;
        *arg1.byte_offset(0x40) = *arg5[3][8];
        *arg1.byte_offset(0x48) = rax;
        *arg1.byte_offset(0x31) = zmm2_1;
        *arg1.byte_offset(0x21) = zmm1_1;
        *arg1.byte_offset(0x11) = var_60_1;
        let var_67: i128;
        *arg1.byte_offset(1) = var_67;
        result = 3;
    }
    
    *arg1 = result;
    result
}
