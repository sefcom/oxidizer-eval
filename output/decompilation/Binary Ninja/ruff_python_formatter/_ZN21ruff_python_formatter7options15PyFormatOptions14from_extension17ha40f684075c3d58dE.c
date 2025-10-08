
  int16_t* ruff_python_formatter::options::PyFormatOptions::from_extension::ha40f684075c3d58d(int16_t* arg1, int64_t arg2)

{
    char rax = ruff_python_ast::PySourceType::try_from_path::heea19f1ec501a14c(arg2);
    char rsi_1 = rax;
    
    if (rax == 3)
        rsi_1 = 0;
    
    ruff_python_formatter::options::PyFormatOptions::from_source_type::h6a19db39fcd77493(arg1, 
        rsi_1);
    return arg1;
}
