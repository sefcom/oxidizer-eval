
  fn uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    let rax: i64 = *arg3.byte_offset(0xd);
    *arg2.byte_offset(0x15) = rax;
    *arg2.byte_offset(8) = *arg3;
    let mut var_79: i64;
    let r12: u64;
    lscolors::style::Style::to_nu_ansi_term_style::hd70be39300867c91(&var_79, arg3, rax, r12);
    let var_71: i8 = 0;
    let var_69: i8;
    let var_10: i8 = var_69;
    let var_20: i64 = var_79;
    let var_18: i8 = 0;
    let var_70: i32;
    let var_17: i32 = var_70;
    let var_6c: i16;
    let var_13: i16 = var_6c;
    let var_6a: i8;
    let var_11: i8 = var_6a;
    let mut var_50: i64 = -0x8000000000000000;
    let var_48: i64 = 1;
    let var_40: i64 = 0;
    let var_38: i64 = -0x7ffffffffffffffe;
    let mut var_68: i128;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hce018959f2b6d404(&var_68, &var_50);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::h9e949c0413661d2a(&var_50);
    let result: i64;
    alloc::string::String::truncate::hafe089c60c3201e9(&var_68, result - 4);
    arg1[1] = result;
    *arg1 = var_68;
    result
}
