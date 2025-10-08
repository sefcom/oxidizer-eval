
  fn just::string_kind::StringKind::from_token_start::h243afdb46a506377(arg1: i64, arg2: i64) -> *mut i8

{
    let mut var_10: *mut c_void = &data_47187d;
    let var_8: *const i8 = "(`.*?`)|(`[^`]*$)src/subcommand.…";
    let mut result: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h02e2b855d1a1521a(&var_10, arg1, arg2);
    
    if result != 0
    {
        result[1];
        return *result;
    }
    
    result = 2;
    result
}
