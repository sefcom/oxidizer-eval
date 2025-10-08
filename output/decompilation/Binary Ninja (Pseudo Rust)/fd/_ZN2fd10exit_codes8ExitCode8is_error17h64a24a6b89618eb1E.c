
  fn fd::exit_codes::ExitCode::is_error::h64a24a6b89618eb1(arg1: i8) -> u32

{
    let mut result_1: i8 = 1;
    
    if arg1 - 2 < 4
    {
        result_1 = arg1 - 2;
    }
    
    let mut result: u32 = result_1;
    
    if result - 2 < 2
    {
        result = 1;
        return result;
    }
    
    if result == 0
    {
        return 0;
    }
    
    result = (arg1 & 1) == 0;
    result
}
