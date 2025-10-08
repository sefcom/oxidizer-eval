
  fn ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern::he68f7da45c4f1f30(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64) -> *mut i32

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: *mut i32 = -0x8000000000000000 ^ *arg2;
    let mut result_1: *mut i32 = 3;
    
    if result < 8
    {
        result_1 = result;
    }
    
    let rbx: *mut i64 = arg1;
    
    match result_1
    {
        nullptr =>
        {
            result = *arg2.byte_offset(8);
            
            if *result == 2
            {
                result = *rbx.byte_offset(0x21);
                let mut rcx_1: *mut c_void;
                rcx_1 = result <= 0;
                result = result >= 2;
                let temp2_1: i8 = result;
                result -= rcx_1;
                
                if temp2_1 == rcx_1
                {
                    rbx[2] += 1;
                }
                else
                {
                    result = result;
                    
                    if result != 1
                    {
                        rbx[2] = 1;
                        *rbx.byte_offset(0x21) = 1;
                    }
                }
            }
        }
        2 | 3 =>
        {
            rbx[4] = 1;
        }
        4 =>
        {
            rbx[4] = 1;
            
            if *rbx == 0
            {
                *rbx = 1;
            }
        }
        7 =>
        {
            result = *arg2.byte_offset(0x18);
            let mut rcx_2: *mut c_void = nullptr;
            
            if result >= 1
            {
                rcx_2 = result.byte_offset(-1);
            }
            
            let mut rdx_2: u64 = *rbx.byte_offset(0x21);
            arg1 = rdx_2 < 2;
            rdx_2 = rdx_2 > 2;
            let temp1_1: i8 = rdx_2;
            rdx_2 -= arg1;
            
            if temp1_1 == arg1
            {
                rbx[2] += rcx_2;
            }
            else if rdx_2 != 1
            {
                rbx[2] = rcx_2;
                *rbx.byte_offset(0x21) = 2;
            }
            
            if result != 0
            {
                let mut rsi: *mut i64 = *arg2.byte_offset(0x10);
                let mut i_1: i64 = result * 0x68;
                let mut i: i64;
                
                do
                {
                    result = ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern::hfa2475e1b6bf2f40(rbx, rsi, arg3);
                    rsi = &rsi[0xd];
                    i = i_1;
                    i_1 -= 0x68;
                } while i != 0x68;
            }
        }
    }
    
    result
}
