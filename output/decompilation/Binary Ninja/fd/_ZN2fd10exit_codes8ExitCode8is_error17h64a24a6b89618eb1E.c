
  uint32_t fd::exit_codes::ExitCode::is_error::h64a24a6b89618eb1(char arg1) __pure

{
    char result_1 = 1;
    
    if (arg1 - 2 < 4)
        result_1 = arg1 - 2;
    
    uint32_t result = result_1;
    
    if (result - 2 < 2)
    {
        result = 1;
        return result;
    }
    
    if (!result)
        return 0;
    
    result = !(arg1 & 1);
    return result;
}
