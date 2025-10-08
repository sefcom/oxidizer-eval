
  fn uu_od::parse_formats::od_format_type::h8107691a9d67d600(arg1: *mut i64, arg2: i8, arg3: i8) -> *mut c_void

{
    let mut result: *mut c_void = jump_table_41c0ac[arg2] + &jump_table_41c0ac;
    
    match result
    {
        0x469644 =>
        {
            __builtin_memcpy(arg1, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\xd0\xaf\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
            result
        }
        0x46965a =>
        {
            if arg3 <= 8
            {
                result = jump_table_41c110[arg3] + &jump_table_41c110;
                
                match result
                {
                    0x469676 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x50\xe5\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469796 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x30\xe4\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x4697ac =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\xc0\xe4\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x06\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x4697c2 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\xe0\xe5\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                }
            }
            
            *arg1 = 3;
            result
        }
        0x46968c =>
        {
            if arg3 <= 8
            {
                result = jump_table_41c158[arg3] + &jump_table_41c158;
                
                match result
                {
                    0x4696a8 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x90\xe7\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x4697d8 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x70\xe6\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x4697ee =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe7\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x46981a =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x20\xe8\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x15\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                }
            }
            
            *arg1 = 3;
            result
        }
        0x4696be =>
        {
            if arg3 <= 8
            {
                result = jump_table_41c134[arg3] + &jump_table_41c134;
                
                match result
                {
                    0x4696da =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\xd0\xe0\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0c\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469804 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\xb0\xdf\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469830 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x40\xe0\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469846 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x60\xe1\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x17\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                }
            }
            
            *arg1 = 3;
            result
        }
        0x4696f0 =>
        {
            __builtin_memcpy(arg1, 
                "\x02\x00\x00\x00\x00\x00\x00\x00\x60\xb0\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00", 0x20);
            result
        }
        0x469706 =>
        {
            if arg3 <= 8
            {
                result = jump_table_41c0ec[arg3] + &jump_table_41c0ec;
                
                match result
                {
                    0x46971e =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x10\xe3\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x46985c =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\xf0\xe1\x46\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469872 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x80\xe2\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469888 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\xa0\xe3\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                }
            }
            
            *arg1 = 3;
            result
        }
        0x469734 =>
        {
            if arg3 <= 8
            {
                result = jump_table_41c0c8[arg3] + &jump_table_41c0c8;
                
                match result
                {
                    0x46974c =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x30\xb4\x46\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x46976a =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\xd0\xb4\x46\x00\x00\x00\x00\x00\x08\x00\x00\x00\x00\x00\x00\x00\x19\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                    0x469780 =>
                    {
                        __builtin_memcpy(arg1, 
                            "\x01\x00\x00\x00\x00\x00\x00\x00\x70\xb3\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00", 0x20);
                        return result;
                    }
                }
            }
            
            *arg1 = 3;
            result
        }
    }
}
