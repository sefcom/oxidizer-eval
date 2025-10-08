
  int64_t ruff_python_formatter::expression::binary_like::is_simple_power_operand::h106dbb259fc1f4c9(int32_t* arg1)

{
    int64_t result = 0;
    
    while (true)
    {
        uint64_t rsi_2 = *arg1 - 3;
        
        if (rsi_2 > 0x19)
            break;
        
        switch (rsi_2)
        {
            case 0:
            {
                if (arg1[7] == 1)
                    return 0;
                
                arg1 = *(arg1 + 8);
                continue;
            }
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xa:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x15:
            case 0x17:
            case 0x18:
            {
                break;
                break;
            }
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x19:
            {
                result = 1;
                break;
                break;
            }
            case 0x16:
            {
                arg1 = *(arg1 + 0x30);
                continue;
            }
        }
    }
    
    return result;
}
