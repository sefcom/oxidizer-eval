
  char* bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(char* arg1, int32_t* arg2, int64_t arg3)

{
    int64_t rdi = *(arg2 + 8);
    int64_t rax = *(arg2 + 0x10);
    
    if (*arg2 != 1)
    {
        int64_t rax_3 = (*(rax + 0x48))(rdi, arg3);
        
        if (rax_3)
        {
            *arg1 = 0;
            *(arg1 + 8) = rax_3;
            return arg1;
        }
    }
    else if ((*(rax + 0x28))(rdi, arg3))
    {
        *arg1 = 1;
        return arg1;
    }
    
    *arg1 = 0xd;
    return arg1;
}
