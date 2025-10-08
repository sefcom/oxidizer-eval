
  fn uu_join::parse_field_number_option::hc351970518f2dd89(arg1: *mut i64, arg2: *mut i8, arg3: i64)

{
    if arg2 == 0
    {
        *arg1 = {0};
        return;
    }
    
    let mut var_18: i64;
    uu_join::parse_field_number::h7876c58ca785f0e6(&var_18, arg2, arg3);
    let rax: i64 = var_18;
    let var_10: i64;
    
    if rax != 0
    {
        arg1[1] = rax;
        arg1[2] = var_10;
        *arg1 = 1;
        return;
    }
    
    arg1[1] = 1;
    arg1[2] = var_10;
    *arg1 = 0;
}
