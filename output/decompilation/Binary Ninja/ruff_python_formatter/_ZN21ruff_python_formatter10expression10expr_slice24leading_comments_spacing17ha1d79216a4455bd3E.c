
  void ruff_python_formatter::expression::expr_slice::leading_comments_spacing::ha1d79216a4455bd3(int32_t* arg1, int64_t* arg2, void* arg3, int64_t arg4)

{
    if (arg4)
    {
        void* var_40;
        
        if (*(arg3 + 9))
        {
            var_40 = 0x201;
            (*(arg2[1] + 0x18))(*arg2, &var_40);
            *arg1 = 4;
            return;
        }
        
        void var_41;
        var_40 = &var_41;
        void* const var_38_1 = &data_97cbf0;
        void* var_30_1 = &var_41;
        void* const var_28_1 = &data_97cbf0;
        int32_t var_20;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_20, arg2, &var_40, 2);
        
        if (var_20 != 4)
        {
            int64_t var_10;
            *(arg1 + 0x10) = var_10;
            *arg1 = var_20;
            return;
        }
    }
    
    *arg1 = 4;
}
