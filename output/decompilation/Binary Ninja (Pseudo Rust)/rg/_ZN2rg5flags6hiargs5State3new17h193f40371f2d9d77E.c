
  fn rg::flags::hiargs::State::new::h193f40371f2d9d77(arg1: *mut i64) -> i64

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let rax: i8 = std::sys::io::is_terminal::isatty::is_terminal::h5a307767fb64e049();
    let mut result_1: i64;
    rg::flags::hiargs::current_dir::hccfc382326763d75(&result_1);
    let result: i64 = result_1;
    
    if -(result) != -0x8000000000000000
    {
        let var_18: i64;
        arg1[2] = var_18;
        arg1[3] = rax;
        *arg1.byte_offset(0x19) = 0;
    }
    
    let var_20: i64;
    arg1[1] = var_20;
    *arg1 = result;
    result
}
