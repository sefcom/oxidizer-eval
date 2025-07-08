
  void* uu_tail::follow::files::PathData::from_other_with_path::h3c415c2bfeedf353(void* arg1, void* arg2, int64_t arg3)

{
    int128_t* rax = *(arg2 + 0xc8);
    void** const r15 = *(arg2 + 0xd0);
    void** const var_198 = r15;
    int128_t* r14 = rax;
    int128_t* var_1a0 = rax;
    int32_t var_190;
    int32_t var_e0;
    
    if (!rax)
    {
        std::fs::File::open::hcbb28a04a46ba590(&var_190, arg3);
        
        if (!var_190)
        {
            int32_t var_18c;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(
                &var_e0, 0x2000, var_18c);
            r14 = alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&var_e0);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hb4496a4e206aee00(&var_190);
            r14 = nullptr;
        }
        
        r15 = &data_5bc4c8;
    }
    
    std::fs::metadata::h5a76b0b01e9dc15d(&var_e0, arg3);
    
    if (var_e0 != 2)
        memcpy(&var_190, &var_e0, 0xb0);
    else
    {
        var_190 = 2;
        int64_t var_d8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(var_d8);
    }
    
    uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(arg1, r14, r15, &var_190, 
        *(arg2 + 0xb8), *(arg2 + 0xc0));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(arg2 + 0xb0);
    return arg1;
}
