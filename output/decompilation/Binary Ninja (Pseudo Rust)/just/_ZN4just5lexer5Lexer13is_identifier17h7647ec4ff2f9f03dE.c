
  fn just::lexer::Lexer::is_identifier::h7647ec4ff2f9f03d(arg1: i64, arg2: i64) -> i64

{
    let rbx_1: u64 = arg2 + arg1;
    let mut var_28: i64 = arg1;
    let var_20: u64 = rbx_1;
    let mut rax: i8;
    let mut rdx: i32;
    rax = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_28, rbx_1);
    
    if (rax & 1) != 0
    {
        if rdx - 0x61 < 0x1a
        {
            'label_670e25:
            var_28 = arg1;
            let var_20_1: u64 = rbx_1;
            let mut var_18_1: i64 = 1;
            let mut rsi: i64 = 1;
            
            loop
            {
                let mut result: i64;
                
                if rsi != 0
                {
                    var_18_1 = 0;
                    result = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_28, rsi);
                }
                
                if rsi == 0 || result == 0
                {
                    let mut rdx_1: i32;
                    result = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_28, 
                        &var_28);
                    
                    if (result & 1) != 0
                    {
                        if rdx_1 - 0x61 >= 0x1a
                        {
                            let mut rax_3: i32;
                            
                            if rdx_1 >= 0x41
                            {
                                rax_3 = rdx_1 < 0x5b;
                            }
                            
                            if rdx_1 < 0x41 || (rdx_1 == 0x5f | rax_3) == 0
                            {
                                let mut rax_2: i32;
                                rax_2 = rdx_1 - 0x30 < 0xa;
                                
                                if (rdx_1 == 0x2d | rax_2) == 0
                                {
                                    break;
                                }
                            }
                        }
                        
                        rsi = var_18_1;
                        continue;
                    }
                }
                
                result = 1;
                return result;
            }
        }
        else if rdx >= 0x41
        {
            let mut rax_1: i32;
            rax_1 = rdx >= 0x5b;
            
            if (rax_1 & rdx != 0x5f) == 0
            {
                goto 'label_670e25;
            }
        }
    }
    
    0
}
