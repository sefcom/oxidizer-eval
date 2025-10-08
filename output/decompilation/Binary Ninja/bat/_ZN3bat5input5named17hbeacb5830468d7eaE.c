
  int64_t bat::input::named::hbeacb5830468d7ea(int64_t arg1, int64_t arg2, int64_t arg3)

{
    if (!arg3)
        /* tailcall */
        return memcpy(arg1, arg2, 0xa0);
    
    void var_a8;
    bat::input::Input::with_name::h8273c086a877e6f3(&var_a8, arg2, arg3);
    int128_t var_c0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_c0, "File.InfMarkv", 4);
    int64_t var_b0;
    int64_t var_c8 = var_b0;
    int128_t var_d8 = var_c0;
    void var_80;
    bat::input::InputDescription::set_kind::hc7573ae884c3aeea(&var_80, &var_d8);
    return memcpy(arg1, &var_a8, 0xa0);
}
