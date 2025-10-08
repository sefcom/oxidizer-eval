
  int64_t rg::flags::hiargs::State::new::h193f40371f2d9d77(int64_t* arg1)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    char rax = std::sys::io::is_terminal::isatty::is_terminal::h5a307767fb64e049();
    int64_t result_1;
    rg::flags::hiargs::current_dir::hccfc382326763d75(&result_1);
    int64_t result = result_1;
    
    if (-(result) != -0x8000000000000000)
    {
        int64_t var_18;
        arg1[2] = var_18;
        arg1[3] = rax;
        *(arg1 + 0x19) = 0;
    }
    
    int64_t var_20;
    arg1[1] = var_20;
    *arg1 = result;
    return result;
}
