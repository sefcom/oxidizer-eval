
  fn ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block::h4a2856211cdeac1e(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    std::sync::poison::once::Once::call_once::h1a70ca06d963a972(&data_9c19b8, 
        &ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block::DIRECTIVE_START::h822cadd0e9c18456);
    let mut var_78: i32 = 0;
    let var_70: i64 = arg2;
    let var_60: i64 = 0;
    let var_50: i8 = 1;
    regex_automata::util::search::Input::set_span::h3ad304913d28e6d8(&var_78);
    let var_28: i128 = arg3;
    let var_38: i128 = arg3;
    let mut var_48: i128 = var_78;
    let mut result: i64 =
        regex_automata::meta::regex::Regex::search_half::h616a8b42bdada3fb(&var_78, &var_48);
    
    if var_78 == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(&var_78, 
            arg2, arg3);
        result = arg3;
        arg1[5] = result;
        *arg1.byte_offset(0x18) = var_78;
        *arg1 = 0;
        arg1[1] = 8;
        arg1[2] = 0;
        arg1[6] = 5;
        arg1[9] = 1;
    }
    
    result
}
