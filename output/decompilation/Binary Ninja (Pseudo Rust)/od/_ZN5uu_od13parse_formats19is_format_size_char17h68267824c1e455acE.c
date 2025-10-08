
  fn uu_od::parse_formats::is_format_size_char::h68267824c1e455ac(arg1: i32, arg2: i8, arg3: *mut i8) -> u32

{
    if arg2 != 0
    {
        let mut result: u32;
        
        if arg2 != 1
        {
            if arg1 == 0x44
            {
                'label_469ecb:
                result = 8;
                'label_469ed5:
                *arg3 = result;
                result = 1;
                return result;
            }
            
            result = 4;
            
            if arg1 == 0x46
            {
                goto 'label_469ed5;
            }
        }
        else
        {
            result = 0;
            let rdi: u64 = arg1 - 0x43;
            
            if rdi > 0x10
            {
                return result;
            }
            
            match rdi
            {
                0 =>
                {
                    result = 1;
                    goto 'label_469ed5;
                }
                1 | 2 | 3 | 4 | 5 | 7 | 8 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf =>
                {
                    return result;
                }
                6 =>
                {
                    result = 4;
                    goto 'label_469ed5;
                }
                9 =>
                {
                    goto 'label_469ecb;
                }
                0x10 =>
                {
                    result = 2;
                    goto 'label_469ed5;
                }
            }
        }
    }
    
    0
}
