
  int64_t rg::haystack::Haystack::is_dir::hd6f752fd2c8f0e5c(int64_t* arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    
    if (*arg1)
    {
        int32_t result = 0xf000 & arg1[6];
        
        if (result == 0x4000)
        {
            result = 1;
            return result;
        }
        
        if (result == 0xa000 || *(arg1 + 0x34))
        {
            char* rax_2;
            uint64_t rdx;
            rax_2 = ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
            /* tailcall */
            return std::path::Path::is_dir::h02edbc48c38d7d9e(rax_2, rdx);
        }
    }
    
    return 0;
}
