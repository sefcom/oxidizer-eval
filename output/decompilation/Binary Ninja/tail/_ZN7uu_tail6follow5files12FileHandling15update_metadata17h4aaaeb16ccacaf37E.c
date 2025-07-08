
  int64_t uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(void* arg1, char* arg2, size_t arg3, int64_t* arg4)

{
    int64_t r12 = *arg4;
    void var_c8;
    
    if (r12 != 2)
        memcpy(&var_c8, &arg4[1], 0xa8);
    else
    {
        int64_t var_178;
        std::fs::metadata::h5a76b0b01e9dc15d(&var_178, arg2);
        r12 = var_178;
        int64_t var_170;
        
        if (r12 != 2)
            memcpy(&var_c8, &var_170, 0xa8);
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(var_170);
    }
    
    void* rax = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    *rax = r12;
    return memcpy(rax + 8, &var_c8, 0xa8);
}
