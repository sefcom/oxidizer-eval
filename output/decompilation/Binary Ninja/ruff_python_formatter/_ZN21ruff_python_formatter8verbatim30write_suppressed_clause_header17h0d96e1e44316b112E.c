
  void* ruff_python_formatter::verbatim::write_suppressed_clause_header::h0d96e1e44316b112(int32_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t* rax_1 = (*(arg3[1] + 0x30))(*arg3);
    int64_t r15 = *arg2;
    void* r12_1 = arg2[1];
    int32_t result_1;
    ruff_python_formatter::statement::clause::ClauseHeader::range::hab8e09d0514f8895(&result_1, 
        r15, r12_1, *rax_1, rax_1[1]);
    void* result = result_1;
    int32_t var_6c;
    int32_t var_68;
    int64_t var_64;
    
    if (result != 4)
    {
        int32_t var_5c;
        arg1[5] = var_5c;
        *(arg1 + 0xc) = var_64;
        *arg1 = result;
        arg1[1] = var_6c;
        arg1[2] = var_68;
    }
    else
    {
        int32_t var_80 = var_6c;
        int32_t rax_2;
        int32_t rdx_1;
        rax_2 = ruff_python_formatter::verbatim::verbatim_text::heeec4ed9639d83ab(var_6c, var_68);
        int32_t var_78 = rax_2;
        int32_t var_74_1 = rdx_1;
        int32_t var_7c = var_68;
        result_1 = &var_80;
        var_68 = &data_97fac8;
        var_64 = &var_78;
        void* const var_58_1 = &data_97e210;
        int32_t* var_50_1 = &var_7c;
        void* const var_48_1 = &data_97fac8;
        int32_t var_40;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_40, arg3, &result_1, 3);
        
        if (var_40 != 4)
        {
            void* result_2;
            result = result_2;
            *(arg1 + 0x10) = result;
            *arg1 = var_40;
        }
        else
        {
            result =
                ruff_python_formatter::statement::clause::ClauseHeader::visit::hb9b9601842cd12f2(
                r15, r12_1, (*(arg3[1] + 0x30))(*arg3) + 0x10);
            *arg1 = 4;
        }
    }
    return result;
}
