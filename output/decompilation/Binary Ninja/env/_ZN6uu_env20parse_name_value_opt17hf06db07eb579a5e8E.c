
  int64_t uu_env::parse_name_value_opt::hf06db07eb579a5e8(uint64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_a0 = -0x8000000000000000;
    int64_t var_98 = arg3;
    int64_t var_90 = arg4;
    int64_t var_88;
    uu_env::native_int_str::NativeStr::split_once::hd6fa271acc4759ea(&var_88, &var_a0, "=");
    
    if (var_88 != -0x7fffffffffffffff)
    {
        int64_t var_78;
        int64_t var_48_1 = var_78;
        int128_t var_58 = var_88;
        int128_t var_70;
        int128_t var_40_1 = var_70;
        int64_t var_60;
        int64_t var_30_1 = var_60;
        alloc::vec::Vec$LT$T$C$A$GT$::push::he136959d09d686c7(arg2 + 0x30, &var_58);
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        uint64_t rax = uu_env::parse_program_opt::h7280c27efa5c6406(arg2, arg3, arg4);
        
        if (!rax)
        {
            arg1[1] = 1;
            *arg1 = 0;
        }
        else
        {
            *arg1 = rax;
            arg1[1] = &data_5107e8;
        }
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::h6fa88c11416956ac(
        -0x8000000000000000, arg3);
}
