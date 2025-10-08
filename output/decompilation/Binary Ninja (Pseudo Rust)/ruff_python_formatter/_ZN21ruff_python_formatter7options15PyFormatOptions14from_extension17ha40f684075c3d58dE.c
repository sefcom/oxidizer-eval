
  fn ruff_python_formatter::options::PyFormatOptions::from_extension::ha40f684075c3d58d(arg1: *mut i16, arg2: i64) -> *mut i16

{
    let rax: i8 = ruff_python_ast::PySourceType::try_from_path::heea19f1ec501a14c(arg2);
    let mut rsi_1: i8 = rax;
    
    if rax == 3
    {
        rsi_1 = 0;
    }
    
    ruff_python_formatter::options::PyFormatOptions::from_source_type::h6a19db39fcd77493(arg1, 
        rsi_1);
    arg1
}
