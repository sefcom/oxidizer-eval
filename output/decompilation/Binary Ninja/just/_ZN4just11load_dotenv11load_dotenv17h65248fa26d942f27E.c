
  char* just::load_dotenv::load_dotenv::h65248fa26d942f27(char* arg1, void* arg2, int64_t* arg3, char* arg4, uint64_t arg5)

{
    uint64_t rbp = arg5;
    char* i_1 = arg4;
    int64_t r9 = *(arg2 + 0x90);
    int64_t rax = *(arg2 + 0xa8);
    int64_t r8 = *arg3;
    int64_t rdi = arg3[3];
    int64_t* rbx = arg3;
    
    if (-(r8) == -0x8000000000000000)
        rbx = nullptr;
    
    if (-(r9) != -0x8000000000000000)
        rbx = arg2 + 0x90;
    
    void* rcx_1 = &arg3[3];
    
    if (-(rdi) == -0x8000000000000000)
        rcx_1 = nullptr;
    
    if (-(rax) != -0x8000000000000000)
        rcx_1 = arg2 + 0xa8;
    
    char* result;
    
    if (*(arg3 + 0x13a) || *(arg3 + 0x13b) == 1 || r9 != -0x8000000000000000
        || r8 != -0x8000000000000000 || *(arg3 + 0x13c))
    {
        void var_50;
        char* var_48;
        uint64_t var_40;
        
        if ((rax ^ 0x8000000000000000) | (rdi ^ 0x8000000000000000))
        {
            label_674d18:
            std::path::Path::join::h509d33a3bbf89c2c(&var_50, i_1, rbp, rcx_1);
            
            if (!std::path::Path::is_file::h6e28d87ff76ffc41(var_48, var_40))
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_50);
                goto label_674d88;
            }
            
            just::load_dotenv::load_from_file::h94978de6d8bd46bb(arg1, var_48, var_40, 
                *(arg3 + 0x13b));
            label_674e2e:
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_50);
        }
        
        label_674d88:
        int64_t rax_7;
        int64_t rdx_2;
        rax_7 = core::option::Option$LT$T$GT$::map_or::hbda13e54d0b493bf(rbx);
        char* i;
        
        do
        {
            uint64_t rdx_3;
            i = std::path::Path::parent::hef287f60afa56900(i_1, rbp);
            std::path::Path::join::h1eac0ae5e7efa361(&var_50, i_1, rbp, rax_7);
            
            if (std::path::Path::is_file::h6e28d87ff76ffc41(var_48, var_40))
            {
                just::load_dotenv::load_from_file::h94978de6d8bd46bb(arg1, var_48, var_40, 
                    *(arg3 + 0x13b));
                goto label_674e2e;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_50);
            i_1 = i;
            rbp = rdx_3;
        } while (i);
        
        if (!*(arg3 + 0x13c))
            goto label_674e35;
        
        result = arg1;
        *result = 0x11;
    }
    else
    {
        if ((rax ^ 0x8000000000000000) | (rdi ^ 0x8000000000000000))
            goto label_674d18;
        
        label_674e35:
        result = arg1;
        *(result + 8) = 0;
        *(result + 0x18) = 0;
        *result = 0x38;
    }
    
    return result;
}
