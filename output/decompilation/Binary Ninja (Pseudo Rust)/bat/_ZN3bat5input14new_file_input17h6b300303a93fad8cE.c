
  fn bat::input::new_file_input::h6b300303a93fad8c(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut r14: i64 = arg4;
    let mut var_d0: ();
    bat::input::Input::ordinary_file::he30ef736bfb2a39f(&var_d0, arg2);
    
    if r14 == 0
    {
        r14 = arg2;
    }
    
    bat::input::named::hbeacb5830468d7ea(arg1, &var_d0, r14)
}
