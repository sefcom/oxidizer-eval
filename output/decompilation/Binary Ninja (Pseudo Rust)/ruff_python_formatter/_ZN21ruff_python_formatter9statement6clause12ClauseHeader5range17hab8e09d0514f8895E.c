
  fn ruff_python_formatter::statement::clause::ClauseHeader::range::hab8e09d0514f8895(arg1: *mut i32, arg2: i64, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> i64

{
    let mut result_1: i32;
    ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range::h4514c6d97d3066b6(
        &result_1, arg2, arg3, arg4, arg5);
    let mut result: i32 = result_1;
    let result_2: i32;
    let mut result_3: i32 = result_2;
    let var_4c: i32;
    let var_44: i64;
    let var_3c: i32;
    
    if result != 4
    {
        arg1[5] = var_3c;
        *arg1.byte_offset(0xc) = var_44;
        *arg1 = result;
        arg1[1] = var_4c;
        arg1[2] = result_3;
    }
    else
    {
        let mut var_58: i32 = 0;
        ruff_python_formatter::statement::clause::ClauseHeader::visit::ha21c76b62b7c1677(arg2, 
            arg3, &var_58);
        let mut rax: i64 = 0xc;
        
        if arg2 - 3 < 0xc
        {
            rax = arg2 - 3;
        }
        
        let mut result_5: u64 = jump_table_487978[rax] + &jump_table_487978;
        let result_4: i32;
        let mut rcx: i8;
        
        match result_5
        {
            0x717f76 =>
            {
                rcx = var_58;
                result_5 = result_4;
                'label_717f7d:
                
                if (rcx & 1) != 0
                {
                    result_3 = result_5;
                }
            }
            0x718000 =>
            {
                if (var_58 & 1) == 0
                {
                    result_3 = *arg3.byte_offset(0x34);
                }
                else
                {
                    result_3 = result_4;
                }
            }
            0x718019 =>
            {
                let rcx_8: i8 = *arg3.byte_offset(0x37);
                
                if rcx_8 != 0xda
                {
                    result_5 = *arg3.byte_offset(0x1c);
                }
                
                if rcx_8 == 0xda
                {
                    result_5 = result_4;
                }
                
                rcx = 1;
                
                if rcx_8 == 0xda
                {
                    rcx = var_58;
                }
                
                goto 'label_717f7d;
            }
        }
        
        ruff_python_formatter::statement::clause::colon_range::ha3df4110d5faf4ca(&result_1, 
            result_3, arg4, arg5);
        result = result_1;
        
        if result != 4
        {
            arg1[5] = var_3c;
            *arg1.byte_offset(0xc) = var_44;
            *arg1 = result;
            *arg1.byte_offset(4) = var_4c;
        }
        else
        {
            result = result_2;
            
            if var_4c > result
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            arg1[1] = var_4c;
            arg1[2] = result;
            *arg1 = 4;
        }
    }
    result
}
