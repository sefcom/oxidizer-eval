
  int64_t uu_ls::classify_file::h531def787e741feb(void* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    void* rax_1 = uu_ls::PathData::file_type::h128ed7d98b354477(arg1);
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
                int32_t* rax_7 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg1);
                
                if (!rax_7)
                    return 0x110000;
                
                result = 0x2a;
                
                if (!core::ops::function::FnOnce::call_once::h37c933d7708fabb0(rax_7[0xe]))
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
