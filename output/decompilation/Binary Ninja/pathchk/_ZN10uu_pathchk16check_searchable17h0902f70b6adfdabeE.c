
  uint64_t uu_pathchk::check_searchable::h0902f70b6adfdabe(int64_t arg1)

{
    int32_t var_c0;
    std::fs::symlink_metadata::h5a680290b0bc4f9b(&var_c0, arg1);
    int64_t rbx;
    rbx = 1;
    
    if (var_c0 == 2)
    {
        int64_t var_b8;
        int64_t r14_1 = var_b8;
        int64_t var_110 = r14_1;
        char rax_1 = std::io::error::Error::kind::h135fe00c4e7365f3(r14_1);
        rbx = !rax_1;
        
        if (rax_1)
        {
            void* var_108 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            int64_t* var_100 = &var_110;
            int64_t (* var_f8_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            void* const var_f0 = &data_4deae8;
            int64_t var_e8_1 = 2;
            int64_t var_d0_1 = 0;
            int64_t** var_e0_1 = &var_100;
            int64_t var_d8_1 = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
                &var_108, &var_f0));
            r14_1 = var_110;
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3c82bf2075f98b13(r14_1);
    }
    
    return rbx;
}
