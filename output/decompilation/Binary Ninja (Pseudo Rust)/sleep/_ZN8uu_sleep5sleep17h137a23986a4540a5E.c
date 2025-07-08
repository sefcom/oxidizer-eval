
  fn uu_sleep::sleep::h137a23986a4540a5(arg1: *mut i64, arg2: i64) -> *mut i128

{
    let mut var_89: i8 = 0;
    let mut var_68: ();
    fundu::standard::parser::DurationParser::with_time_units::hbe13b4e07c1ddf4b(&var_68, 
        &data_40ab78, 4);
    let mut rax: i64;
    let mut rdx_1: i32;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h372e90875fe935f3(arg1, &arg1[arg2 * 2], &var_68, &var_89);
    
    if var_89 == 0
    {
        std::thread::sleep::hdad53e7e356cecc8(rax, rdx_1);
        return nullptr;
    }
    
    let mut var_88: ();
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb47bd66474e52f21(&var_88, 1, 0);
    let var_70_1: i32 = 1;
    alloc::boxed::Box$LT$T$GT$::new::h4f6840875b47ef13(&var_88)
}
