
  fn ruff_python_formatter::expression::binary_like::is_simple_power_operand::h106dbb259fc1f4c9(arg1: *mut i32) -> i64

{
    let mut result: i64 = 0;
    
    loop
    {
        let rsi_2: u64 = *arg1 - 3;
        
        if rsi_2 > 0x19
        {
            break;
        }
        
        match rsi_2
        {
            0 =>
            {
                if arg1[7] == 1
                {
                    return 0;
                }
                
                arg1 = *arg1.byte_offset(8);
                continue;
            }
            1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 |
                0x15 | 0x17 | 0x18 =>
            {
                break;
            }
            0x12 | 0x13 | 0x14 | 0x19 =>
            {
                result = 1;
                break;
            }
            0x16 =>
            {
                arg1 = *arg1.byte_offset(0x30);
                continue;
            }
        }
    }
    
    result
}
