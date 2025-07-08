
  int64_t uu_uniq::handle_extract_obs_skip_fields::h10397979e7d3d01d(int64_t* arg1, int64_t arg2, size_t arg3, int64_t* arg4)

{
    int64_t var_a8 = 0;
    int64_t var_a0 = 4;
    int64_t var_98 = 0;
    char var_c9 = 0;
    char var_ca = 0;
    int64_t var_60 = arg2;
    int64_t var_58 = arg2 + arg3;
    char* var_50 = &var_ca;
    char* var_48 = &var_c9;
    int64_t* var_40 = &var_a8;
    void var_90;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h12fe7ef8e84b82a1(&var_90, &var_60);
    int128_t var_c8;
    
    if (!var_98)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, arg2, arg3);
        int64_t var_b8;
        arg1[2] = var_b8;
        *arg1 = var_c8;
    }
    else
    {
        if (!var_ca)
        {
            int128_t var_78;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h251793bacb3d3b4d(&var_78, var_a0);
            
            if (*arg4 != -0x8000000000000000)
            {
                int64_t rdi_4 = arg4[1];
                int64_t rax_3;
                uint64_t rdx_2;
                rax_3 = core::slice::iter::Iter$LT$T$GT$::make_slice::hefccf66255f5452a(rdi_4, 
                    arg4[2] + rdi_4);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3b7ebe941ba9df82(&var_78, rax_3, 
                    rdx_2);
            }
            
            var_c8 = var_78;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
            int64_t var_68;
            arg4[2] = var_68;
            *arg4 = var_c8;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::haaebd7cc9f7d6887(arg4);
            *arg4 = -0x8000000000000000;
        }
        
        int64_t var_80;
        
        if (var_80 >= 2)
        {
            int64_t var_88;
            int128_t var_38;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h251793bacb3d3b4d(&var_38, var_88);
            int64_t var_28;
            arg1[2] = var_28;
            *arg1 = var_38;
        }
        else
            *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h9e7c6a67d86540d0(&var_90);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h9e7c6a67d86540d0(&var_a8);
}
