
  int64_t* forc_crypto::args::read_content_filepath_or_stdin::h735eec317a7ae007(int64_t* arg1, int64_t* arg2)

{
    int64_t var_40;
    forc_crypto::args::checked_read_file::h22b9faaf715a9a45(&var_40, arg2);
    
    if (!(0 + -(var_40)))
    {
        int64_t var_30;
        arg1[2] = var_30;
        *arg1 = var_40;
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        void* var_48 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        int32_t* rax;
        char rdx_1;
        rax = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_48);
        int64_t var_28;
        forc_crypto::args::checked_read_stdin::hc53103be1c9a90d0(&var_28, arg2, rax, rdx_1 & 1);
        
        if (var_28 != -0x8000000000000000)
        {
            int64_t var_18;
            arg1[2] = var_18;
            *arg1 = var_28;
        }
        else
            forc_crypto::args::read_as_binary::h6ffe604cc99fdccc(arg1, arg2);
    }
    
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(arg2);
    return arg1;
}
