
  uint64_t fd::filetypes::FileTypes::should_ignore::h9972755040be5d00(char* arg1, int64_t* arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    char rax_1;
    int32_t rdx;
    rax_1 = fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg2);
    uint64_t rbx;
    rbx = 1;
    
    if (rax_1 & 1)
    {
        int32_t rax_3 = rdx & 0xf000;
        
        if ((rax_3 != 0x8000 || *arg1) && (rax_3 != 0x4000 || arg1[1])
            && (rax_3 != 0xa000 || arg1[2]) && (rax_3 != 0x6000 || arg1[3])
            && (rax_3 != 0x2000 || arg1[4]) && (rax_3 != 0xc000 || arg1[5])
            && (rax_3 != 0x1000 || arg1[6]))
        {
            char rax_5;
            
            if (arg1[7])
            {
                char* rax_4;
                uint64_t rdx_1;
                rax_4 = fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg2);
                rax_5 = faccess::PathExt::executable::hc6a3f3fddf09c694(rax_4, rdx_1);
            }
            
            if (!arg1[7] || rax_5)
            {
                char rax_6;
                
                if (arg1[8])
                    rax_6 = fd::filesystem::is_empty::hcba4d2bbc1884a13(arg2);
                
                if (!arg1[8] || rax_6)
                {
                    if ((rdx & 0xd000) != 0x8000)
                        rbx = 0xfa9e >> (rdx + 0x4000) >> 0xc;
                    else
                        rbx = 0;
                }
            }
        }
    }
    
    rbx &= 1;
    return rbx;
}
