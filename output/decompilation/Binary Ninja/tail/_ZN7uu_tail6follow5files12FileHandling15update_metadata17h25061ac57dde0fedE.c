
  int64_t uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(void* arg1, char* arg2, uint64_t arg3, int64_t* arg4)

{
    int64_t r12 = *arg4;
    void var_c8;
    
    if (r12 != 2)
        memcpy(&var_c8, &arg4[1], 0xa8);
    else
    {
        int64_t var_178;
        std::fs::metadata::h5c248dd9820946eb(&var_178, arg2);
        r12 = var_178;
        void var_170;
        
        if (r12 != 2)
            memcpy(&var_c8, &var_170, 0xa8);
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_178);
    }
    
    int64_t* rax =
        uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    *rax = r12;
    return memcpy(&rax[1], &var_c8, 0xa8);
}
