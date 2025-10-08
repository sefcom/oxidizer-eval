
  uint64_t just::error::Error::code::he02be28f49ae8d15(char* arg1)

{
    uint64_t rax = 0;
    uint64_t rcx = *arg1 - 3;
    
    if (rcx > 0x29)
        return 0;
    
    uint64_t var_8;
    
    switch (rcx)
    {
        case 0:
        {
            void* rdi = &arg1[0x50];
            uint32_t rcx_4 = arg1[0x58] - 2;
            rax = 5;
            
            if (rcx_4 < 5)
                rax = rcx_4;
            
            if (!rax)
            {
                *rdi;
                return 1;
            }
            
            rax = rax;
            
            if (rax == 1)
            {
                var_8 = rax;
                return 1;
            }
            
            if (rax != 3)
                return 0;
            
            rax = !(*rdi + 0x80);
            return rax;
            break;
        }
        case 1:
        case 2:
        case 4:
        case 5:
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
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        {
            return rax;
            break;
        }
        case 3:
        case 0x11:
        {
            rax = !((*(arg1 + 4)) & 0x7f);
            return rax;
            break;
        }
        case 6:
        {
            *(arg1 + 4);
            return 1;
            break;
        }
        case 0x1b:
        {
            var_8 = rax;
            return 1;
            break;
        }
        case 0x29:
        {
            rax = !(*(arg1 + 4) + 0x80);
            return rax;
            break;
        }
    }
}
