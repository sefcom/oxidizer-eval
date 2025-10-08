
  fn just::argument_parser::ArgumentParser::parse_arguments::hcf80b6b83f04fab6(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_140: i64 = 0;
    let var_138: i64 = 8;
    let result: i64 = 0;
    let mut var_128: i64 = arg3;
    let var_120: i64 = arg4;
    let var_110: i64 = 0;
    let var_118: i64 = arg2;
    
    do
    {
        let mut var_d0: i8;
        just::argument_parser::ArgumentParser::parse_group::he9047b36eb965085(&var_d0, &var_128);
        let rax_1: i8 = var_d0;
        let var_bf: i128;
        let var_af: i128;
        
        if rax_1 != 0x38
        {
            let var_78: i128;
            *arg1.byte_offset(0x58) = var_78;
            let var_88: i128;
            *arg1.byte_offset(0x48) = var_88;
            let var_98: i128;
            *arg1.byte_offset(0x38) = var_98;
            let var_a0: i64;
            *arg1.byte_offset(0x30) = var_a0;
            *arg1.byte_offset(0x21) = var_af;
            *arg1.byte_offset(0x11) = var_bf;
            let var_cf: i128;
            *arg1.byte_offset(1) = var_cf;
            *arg1 = rax_1;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..argument_parser..ArgumentGroup$GT$$GT$::h723770c4ad86c3c3(&var_140);
        }
        
        let var_c8: i128;
        let mut var_68: i128 = var_c8;
        let var_58_1: i128 = var_bf;
        let var_48_1: i128 = var_af;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hfe40c2a3257e7a9f(&var_140, &var_68);
    } while var_110 != arg4;
    
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(8) = var_140;
    *arg1 = 0x38;
    result
}
