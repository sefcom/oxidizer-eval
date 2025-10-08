
  int64_t uu_ls::classify_file::hfca466d8ec9ab1d0(void* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    void* rax_1 = uu_ls::PathData::file_type::h413d2014e9fb015b(arg1, arg2);
    int64_t result = 0x110000;
    
    if (rax_1)
    {
        uint64_t rax_4 = ((0xf000 & *rax_1) - 0x1000) >> 0xc;
        
        if (rax_4 > 0xb)
            return 0x110000;
        
        switch (rax_4)
        {
            case 0:
            {
                return 0x7c;
                break;
            }
            case 1:
            case 2:
            case 4:
            case 5:
            case 6:
            case 8:
            case 0xa:
            {
                return 0x110000;
                break;
            }
            case 3:
            {
                return 0x2f;
                break;
            }
            case 7:
            {
                void* rax_7 = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg1, arg2);
                
                if (!rax_7)
                    return 0x110000;
                
                result = 0x2a;
                
                if (!(*(rax_7 + 0x38) & 0x49))
                    return 0x110000;
                break;
            }
            case 9:
            {
                return 0x40;
                break;
            }
            case 0xb:
            {
                return 0x3d;
                break;
            }
        }
    }
    
    return result;
}
