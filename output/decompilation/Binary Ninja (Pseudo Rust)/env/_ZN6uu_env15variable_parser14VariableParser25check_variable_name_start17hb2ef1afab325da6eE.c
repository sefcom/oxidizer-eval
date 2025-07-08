
  fn uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(arg1: *mut i32, arg2: *mut i64) -> i64

{
    let mut result: i32 =
        uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
    
    if result == 0x110000
    {
        *arg1 = 8;
    }
    else
    {
        let mut result_1: i32 = result;
        result -= 0x30;
        
        if result >= 0xa
        {
            *arg1 = 8;
        }
        else
        {
            let r14_1: i64 = arg2[4];
            let mut var_50: *mut i32 = &result_1;
            let var_48_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            let mut var_40: *mut *mut c_void = &data_548e28;
            let var_38_1: i64 = 2;
            let var_20_1: i64 = 0;
            let var_30_1: *mut *mut i32 = &var_50;
            let var_28_1: i64 = 1;
            result =
                core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&arg1[4], &var_40);
            *arg1 = 4;
            *arg1.byte_offset(8) = r14_1;
        }
    }
    
    result
}
