
  int64_t bat::terminal::as_terminal_escaped::h774f64753c895bd7(int128_t* arg1, int32_t arg2, uint8_t arg3, int64_t arg4, int64_t arg5, char arg6, char arg7, char arg8, int64_t arg9)

{
    if (!arg5)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6553538e39c64234(arg1, arg4, 0);
    
    int32_t r15 = 0x15;
    int32_t rax_1;
    uint8_t rbx_1;
    uint8_t rbp;
    uint8_t r13_1;
    
    if (!arg7)
    {
        r13_1 = 0;
        rbp = 0;
        rbx_1 = 0;
        rax_1 = 0x15;
        
        if (arg9 & 1)
            r15 = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg9 >> 8, arg6);
    }
    else
    {
        rax_1 = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg2, arg6);
        rbx_1 = arg3 & 1;
        r13_1 = arg3 >> 1 & 1;
        rbp = arg3 >> 2 & arg8;
        
        if (arg9 & 1)
            r15 = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg9 >> 8, arg6);
    }
    
    uint8_t var_48 = rbx_1;
    char var_47 = 0;
    uint8_t var_46 = rbp;
    uint8_t var_45 = r13_1;
    int32_t var_44 = 0;
    char var_40 = 0;
    int32_t var_3f = rax_1;
    int32_t var_3b = r15;
    int64_t var_78 = -0x8000000000000000;
    int64_t var_70 = arg4;
    int64_t var_68 = arg5;
    int64_t var_60 = -0x7ffffffffffffffe;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf5336000855022da(arg1, 
        &var_78);
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_78);
}
