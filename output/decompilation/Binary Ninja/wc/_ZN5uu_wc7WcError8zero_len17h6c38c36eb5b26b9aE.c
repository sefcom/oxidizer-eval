
  int64_t* uu_wc::WcError::zero_len::h6c38c36eb5b26b9a(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rcx = -0x8000000000000000;
    
    if (!arg2)
    {
        *arg1 = -0x7ffffffffffffffd;
        return arg1;
    }
    
    char const* const rsi;
    int64_t rdi;
    
    if (*arg2 != -0x7fffffffffffffff)
    {
        int64_t var_28;
        uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_28, arg2[1], arg2[2], 
            &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
        rcx = var_28;
        char* var_20;
        rsi = var_20;
        int64_t var_18;
        rdi = var_18;
    }
    else
    {
        rsi = &data_41e2be[0x29];
        rdi = 1;
    }
    
    *arg1 = rcx;
    arg1[1] = rsi;
    arg1[2] = rdi;
    arg1[3] = arg3;
    return arg1;
}
