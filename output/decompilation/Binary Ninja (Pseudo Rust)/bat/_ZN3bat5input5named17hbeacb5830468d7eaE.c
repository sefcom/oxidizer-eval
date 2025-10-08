
  fn bat::input::named::hbeacb5830468d7ea(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    if arg3 == 0
    {
        /* tailcall */
        return memcpy(arg1, arg2, 0xa0);
    }
    
    let mut var_a8: ();
    bat::input::Input::with_name::h8273c086a877e6f3(&var_a8, arg2, arg3);
    let mut var_c0: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_c0, "File.InfMarkv", 4);
    let var_b0: i64;
    let var_c8: i64 = var_b0;
    let mut var_d8: i128 = var_c0;
    let mut var_80: ();
    bat::input::InputDescription::set_kind::hc7573ae884c3aeea(&var_80, &var_d8);
    memcpy(arg1, &var_a8, 0xa0)
}
