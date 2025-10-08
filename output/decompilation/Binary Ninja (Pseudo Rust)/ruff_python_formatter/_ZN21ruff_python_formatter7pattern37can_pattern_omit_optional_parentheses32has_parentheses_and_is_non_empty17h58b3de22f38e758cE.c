
  fn ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty::h58b3de22f38e758c(arg1: *mut i64, arg2: *mut i64) -> *mut u32

{
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: i64 = -0x8000000000000000 ^ *arg1;
    let mut rcx: i64 = 3;
    
    if rax_1 < 8
    {
        rcx = rax_1;
    }
    
    let mut rax_3: *mut c_void;
    
    match rcx
    {
        0 | 1 | 5 | 6 | 7 =>
        {
            rax_3 = *(arg2[2] + 0x60);
            /* tailcall */
            return ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(
                arg1, *rax_3.byte_offset(8), *rax_3.byte_offset(0x10), *arg2, arg2[1]);
        }
        2 =>
        {
            if arg1[3] == 0
            {
                'label_717cfc:
                
                if ruff_python_formatter::comments::Comments::dangling::hc16bf927eb814731(arg2[2], 
                    arg1) == 0
                {
                    rax_3 = *(arg2[2] + 0x60);
                    /* tailcall */
                    return
                        ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(
                        arg1, *rax_3.byte_offset(8), *rax_3.byte_offset(0x10), *arg2, arg2[1]);
                }
            }
        }
        3 =>
        {
            if arg1[5] == 0
            {
                goto 'label_717cfc;
            }
        }
        4 =>
        {
            if arg1[3] == 0
            {
                rax_3 = *(arg2[2] + 0x60);
                /* tailcall */
                return ruff_python_formatter::pattern::is_pattern_parenthesized::h69f247e6dcabd7b6(
                    arg1, *rax_3.byte_offset(8), *rax_3.byte_offset(0x10), *arg2, arg2[1]);
            }
        }
    }
    
    let mut result: *mut u32;
    result = 1;
    result
}
