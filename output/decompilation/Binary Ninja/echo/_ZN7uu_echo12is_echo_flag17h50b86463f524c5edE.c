
  char* uu_echo::is_echo_flag::h50b86463f524c5ed(void* arg1, char* arg2)

{
    int64_t rbx = *(arg1 + 0x10);
    
    if (rbx)
    {
        char* r14_1 = *(arg1 + 8);
        
        if (*r14_1 == 0x2d && !_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(r14_1, rbx))
        {
            char rcx_1 = *arg2;
            uint32_t rsi_1 = arg2[1];
            char* rdi;
            
            if (rbx != 1)
            {
                int64_t rdx_1 = 1;
                
                do
                {
                    uint32_t r8_1 = r14_1[rdx_1];
                    
                    if (r8_1 == 0x45)
                        rdi = nullptr;
                    else
                    {
                        rdi = 1;
                        
                        if (r8_1 != 0x65)
                        {
                            if (r8_1 != 0x6e)
                                return 0;
                            
                            rcx_1 = 0;
                            rdi = rsi_1;
                        }
                    }
                    
                    rdx_1 += 1;
                    rsi_1 = rdi;
                } while (rbx != rdx_1);
            }
            else
                rdi = rsi_1;
            
            rdi &= 1;
            arg2[1] = rdi;
            *arg2 = rcx_1 & 1;
            char* result;
            result = 1;
            return result;
        }
    }
    
    return 0;
}
