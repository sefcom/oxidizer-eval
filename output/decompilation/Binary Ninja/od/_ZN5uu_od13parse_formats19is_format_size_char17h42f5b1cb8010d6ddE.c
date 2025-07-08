
  uint32_t uu_od::parse_formats::is_format_size_char::h42f5b1cb8010d6dd(int32_t arg1, char arg2, char* arg3)

{
    if (arg2)
    {
        uint32_t result;
        
        if (arg2 != 1)
        {
            if (arg1 == 0x44)
            {
                label_4cb47b:
                result = 8;
                label_4cb485:
                *arg3 = result;
                result = 1;
                return result;
            }
            
            result = 4;
            
            if (arg1 == 0x46)
                goto label_4cb485;
        }
        else
        {
            result = 0;
            uint64_t rdi = arg1 - 0x43;
            
            if (rdi > 0x10)
                return result;
            
            switch (rdi)
            {
                case 0:
                {
                    result = 1;
                    goto label_4cb485;
                }
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 7:
                case 8:
                case 0xa:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                {
                    return result;
                    break;
                }
                case 6:
                {
                    result = 4;
                    goto label_4cb485;
                }
                case 9:
                {
                    goto label_4cb47b;
                }
                case 0x10:
                {
                    result = 2;
                    goto label_4cb485;
                }
            }
        }
    }
    
    return 0;
}
