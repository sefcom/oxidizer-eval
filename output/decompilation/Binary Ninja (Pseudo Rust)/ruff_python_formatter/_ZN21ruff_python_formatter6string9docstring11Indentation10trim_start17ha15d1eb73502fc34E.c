
  fn ruff_python_formatter::string::docstring::Indentation::trim_start::ha15d1eb73502fc34(arg1: *mut i32, arg2: *mut i32, arg3: *mut i32) -> *mut c_void

{
    let mut result: *mut c_void = jump_table_487b64[*arg2] + &jump_table_487b64;
    let mut result_6: i64;
    
    match result
    {
        0x7267a2 =>
        {
            result = *arg2.byte_offset(8);
            result_6 = 0;
            let mut rdx_1: i64;
            let mut rsi_11: i64;
            let mut result_3: *mut c_void;
            
            match *arg3
            {
                0 =>
                {
                    'label_726841:
                    rdx_1 = *arg3.byte_offset(8);
                    rsi_11 = 0;
                    result_3 = result_6;
                    
                    if result_6 >= 0
                    {
                        'label_726871:
                        let result_4: *mut c_void = result;
                        result -= rdx_1;
                        
                        if result_4 >= rdx_1
                        {
                            rdx_1 = result_4 != rdx_1;
                            let mut r9: i32 = 0;
                            
                            if result_6 == rsi_11
                            {
                                result_3 = result;
                            }
                            
                            if result_6 != rsi_11
                            {
                                r9 = rdx_1 + 1;
                            }
                            
                            *arg1 = r9;
                            *arg1.byte_offset(8) = result_3;
                            *arg1.byte_offset(0x10) = result;
                            return result;
                        }
                    }
                }
                1 =>
                {
                    'label_726863:
                    rsi_11 = *arg3.byte_offset(8);
                    rdx_1 = 0;
                    result_3 = result_6 - rsi_11;
                    
                    if result_6 >= rsi_11
                    {
                        goto 'label_726871;
                    }
                }
                2 =>
                {
                    'label_726851:
                    rsi_11 = *arg3.byte_offset(8);
                    rdx_1 = *arg3.byte_offset(0x10);
                    result_3 = result_6 - rsi_11;
                    
                    if result_6 >= rsi_11
                    {
                        goto 'label_726871;
                    }
                }
            }
        }
        0x7267ba =>
        {
            let rcx_1: i64 = *arg2.byte_offset(8);
            result = *arg2.byte_offset(0x10);
            let rsi_3: i32 = *arg3;
            
            if rsi_3 == 0
            {
                let temp4_1: i64 = *arg3.byte_offset(8);
                let mut result_1: *mut c_void = rcx_1 - *arg3.byte_offset(8);
                
                if rcx_1 >= temp4_1
                {
                    arg3 = rcx_1 != temp4_1;
                    
                    if rcx_1 == temp4_1
                    {
                        result_1 = result;
                    }
                    
                    *arg1 = (arg3 << 1) + 1;
                    *arg1.byte_offset(8) = result_1;
                    *arg1.byte_offset(0x10) = result;
                    return result;
                }
            }
            else if rsi_3 == 3
            {
                let r8_1: i64 = *arg3.byte_offset(8);
                let mut result_2: *mut c_void = rcx_1 - r8_1;
                
                if rcx_1 >= r8_1
                {
                    let result_5: *mut c_void = result;
                    let temp8_1: i64 = *arg3.byte_offset(0x10);
                    result -= *arg3.byte_offset(0x10);
                    
                    if result_5 >= temp8_1
                    {
                        arg3 = result_5 != temp8_1;
                        let mut rdx: u32 = 3;
                        
                        if rcx_1 == r8_1
                        {
                            rdx = arg3;
                        }
                        
                        if rcx_1 == r8_1
                        {
                            result_2 = result;
                        }
                        
                        *arg1 = rdx;
                        *arg1.byte_offset(8) = result_2;
                        *arg1.byte_offset(0x10) = result;
                        return result;
                    }
                }
            }
        }
        0x72680f =>
        {
            result_6 = *arg2.byte_offset(8);
            result = nullptr;
            
            match *arg3
            {
                0 =>
                {
                    goto 'label_726841;
                }
                1 =>
                {
                    goto 'label_726863;
                }
                2 =>
                {
                    goto 'label_726851;
                }
            }
        }
        0x726827 =>
        {
            result_6 = *arg2.byte_offset(8);
            result = *arg2.byte_offset(0x10);
            
            match *arg3
            {
                0 =>
                {
                    goto 'label_726841;
                }
                1 =>
                {
                    goto 'label_726863;
                }
                2 =>
                {
                    goto 'label_726851;
                }
            }
        }
    }
    
    *arg1 = 5;
    result
}
