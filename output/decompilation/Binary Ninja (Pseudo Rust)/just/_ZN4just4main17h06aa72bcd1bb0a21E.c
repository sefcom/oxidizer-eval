
  fn just::main::h06aa72bcd1bb0a21() -> i64

{
    let mut var_28: ();
    std::env::args_os::h5ff0cf6a45e392f2(&var_28);
    let mut result: i8;
    let mut rdx: i32;
    result = just::run::run::h9b9ac305fd2b19cf(&var_28);
    
    if (result & 1) == 0
    {
        return result;
    }
    
    std::process::exit::hcda678ff272dfed1(rdx);
    /* no return */
}
