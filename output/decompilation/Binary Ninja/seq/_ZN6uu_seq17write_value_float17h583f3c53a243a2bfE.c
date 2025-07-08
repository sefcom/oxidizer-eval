
  int64_t uu_seq::write_value_float::h583f3c53a243a2bf(int64_t arg1, int64_t* arg2)

{
    int64_t* var_a0 = arg2;
    char rax = _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h03c6b2bee9905bee(arg2, &data_423b30);
    char rax_1;
    
    if (!rax)
        rax_1 = _$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialEq$GT$::eq::h03c6b2bee9905bee(arg2, &data_423b58);
    
    void* const var_d8;
    int64_t** var_98;
    int64_t rcx;
    int64_t rdx;
    
    if (!rax && !rax_1)
    {
        var_98 = &var_a0;
        int64_t (* var_90_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2233a37d2c19bdda;
        int64_t var_88_1 = rcx;
        int64_t var_80_1 = 0;
        int64_t var_78_1 = rdx;
        int64_t var_70_1 = 0;
        __builtin_memcpy(&var_d8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
        int64_t var_b8_1 = 0;
        int64_t var_b0_1 = 0x800000020;
    }
    else
    {
        var_98 = &var_a0;
        int64_t (* var_90)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2233a37d2c19bdda;
        int64_t var_88 = rcx;
        int64_t var_80 = 0;
        int64_t var_78 = rdx;
        int64_t var_70 = 0;
        __builtin_memcpy(&var_d8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
        int64_t var_b8 = 0;
        int64_t var_b0 = 0x20;
    }
    char var_a8 = 1;
    void* const var_68 = &data_4176c0;
    int64_t var_60 = 1;
    int64_t* var_48 = &var_d8;
    int64_t var_40 = 1;
    int64_t*** var_58 = &var_98;
    int64_t var_50 = 3;
    void var_38;
    core::option::Option$LT$T$GT$::map_or_else::h91a2236e2fc5d115(&var_38, &var_68);
    var_98 = &var_38;
    int64_t (* var_90_2)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_d8 = &data_4176c0;
    int64_t var_d0 = 1;
    int64_t var_b8_2 = 0;
    int64_t*** var_c8 = &var_98;
    int64_t var_c0 = 1;
    int64_t result = std::io::Write::write_fmt::ha89a837e03ebc8db(arg1, &var_d8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&var_38);
    return result;
}
