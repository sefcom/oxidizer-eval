
  int64_t uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(int32_t* arg1, int64_t* arg2)

{
    int32_t result =
        uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
    
    if (result == 0x110000)
        *arg1 = 8;
    else
    {
        int32_t result_1 = result;
        result -= 0x30;
        
        if (result >= 0xa)
            *arg1 = 8;
        else
        {
            int64_t r14_1 = arg2[4];
            int32_t* var_50 = &result_1;
            int64_t (* var_48_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            void** const var_40 = &data_548e28;
            int64_t var_38_1 = 2;
            int64_t var_20_1 = 0;
            int32_t** var_30_1 = &var_50;
            int64_t var_28_1 = 1;
            result =
                core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&arg1[4], &var_40);
            *arg1 = 4;
            *(arg1 + 8) = r14_1;
        }
    }
    
    return result;
}
