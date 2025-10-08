
  uint64_t uu_runcon::errors::write_full_error::h4b9c997c285ea129(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_80 = arg3;
    void** const var_78 = &data_4ebde0;
    int64_t* var_90 = &var_80;
    int64_t (* var_88)(int64_t* arg1) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h92b54242ab01e361;
    void* const var_60 = &data_4196b0;
    int64_t var_58 = 1;
    int64_t var_40 = 0;
    int64_t** var_50 = &var_90;
    int64_t var_48 = 1;
    uint64_t rbp;
    rbp = 1;
    
    if (!core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg1, arg2, &var_60))
    {
        int64_t i;
        int64_t rdx_1;
        i = var_78[6](var_80);
        
        if (!i)
            rbp = 0;
        else
        {
            do
            {
                int64_t i_1 = i;
                var_90 = &i_1;
                int64_t (* var_88_1)(int64_t* arg1) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h92b54242ab01e361;
                var_60 = &data_4ebdb0;
                int64_t var_58_1 = 1;
                int64_t var_40_1 = 0;
                int64_t** var_50_1 = &var_90;
                int64_t var_48_1 = 1;
                int32_t rax_2 =
                    core::fmt::Formatter::write_fmt::h80c932efe9b76eb7(arg1, arg2, &var_60);
                rbp = rax_2;
                
                if (rax_2)
                    break;
                
                i = (*(rdx_1 + 0x30))(i_1);
            } while (i);
        }
    }
    
    return rbp;
}
