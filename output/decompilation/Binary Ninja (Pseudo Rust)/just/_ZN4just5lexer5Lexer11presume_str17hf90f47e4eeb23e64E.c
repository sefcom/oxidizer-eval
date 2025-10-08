
  fn just::lexer::Lexer::presume_str::hf90f47e4eeb23e64(arg1: u64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let mut var_80: i64 = arg3;
    let var_78: i64 = arg4 + arg3;
    let mut result: i8;
    let mut rdx: u64;
    result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_80, arg1);
    
    if (result & 1) == 0
    {
        'label_6709ee:
        *(arg1 + 0x48) = 0x25;
    }
    else
    {
        loop
        {
            let mut var_70: i128;
            result = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_70, arg2, rdx);
            let var_28: i8;
            
            if var_28 != 0x25
            {
                let var_30: i128;
                *(arg1 + 0x40) = var_30;
                let zmm0_1: i128 = var_70;
                let var_40: i128;
                *(arg1 + 0x30) = var_40;
                let var_50: i128;
                *(arg1 + 0x20) = var_50;
                let var_60: i128;
                *(arg1 + 0x10) = var_60;
                *arg1 = zmm0_1;
                break;
            }
            
            result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_80, arg1);
            
            if (result & 1) == 0
            {
                goto 'label_6709ee;
            }
        }
    }
    
    result
}
