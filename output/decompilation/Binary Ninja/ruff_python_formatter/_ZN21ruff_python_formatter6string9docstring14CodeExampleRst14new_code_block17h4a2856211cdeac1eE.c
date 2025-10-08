
  int64_t ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block::h4a2856211cdeac1e(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    std::sync::poison::once::Once::call_once::h1a70ca06d963a972(&data_9c19b8, 
        &ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block::DIRECTIVE_START::h822cadd0e9c18456);
    int32_t var_78 = 0;
    int64_t var_70 = arg2;
    int64_t var_60 = 0;
    char var_50 = 1;
    regex_automata::util::search::Input::set_span::h3ad304913d28e6d8(&var_78);
    int128_t var_28 = arg3;
    int128_t var_38 = arg3;
    int128_t var_48 = var_78;
    int64_t result =
        regex_automata::meta::regex::Regex::search_half::h616a8b42bdada3fb(&var_78, &var_48);
    
    if (!var_78)
        *arg1 = -0x8000000000000000;
    else
    {
        ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(&var_78, 
            arg2, arg3);
        result = arg3;
        arg1[5] = result;
        *(arg1 + 0x18) = var_78;
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        arg1[6] = 5;
        arg1[9] = 1;
    }
    
    return result;
}
