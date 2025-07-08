
  fn uu_join::parse_field_number_option::h48fa1297dd47f55b(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i512

{
    let mut result: i512;
    
    if arg2 == 0
    {
        result = {0};
        *arg1 = {0};
    }
    else
    {
        let mut var_18: i64;
        result = uu_join::parse_field_number::h9316b11a89c3fc26(&var_18, arg2, arg3);
        let rax_1: i64 = var_18;
        let var_10: i64;
        
        if rax_1 == 0
        {
            arg1[1] = 1;
            arg1[2] = var_10;
            *arg1 = 0;
        }
        else
        {
            arg1[1] = rax_1;
            arg1[2] = var_10;
            *arg1 = 1;
        }
    }
    
    result
}
