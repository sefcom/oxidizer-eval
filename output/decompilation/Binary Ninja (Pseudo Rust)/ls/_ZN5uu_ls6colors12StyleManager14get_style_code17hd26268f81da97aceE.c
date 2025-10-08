
  fn uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    *arg2.byte_offset(0x15) = *arg3.byte_offset(0xd);
    *arg2.byte_offset(8) = *arg3;
    let mut var_79: i64;
    lscolors::style::Style::to_nu_ansi_term_style::hd77bc2e0e4b76e0d(&var_79, arg3);
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
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::heb2b5c73285ab811(&var_68, 
        &var_50);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hb01d64a9827d3561(&var_50);
    let result: i64;
    alloc::string::String::truncate::h4c9243e558c5f483(&var_68, result - 4);
    arg1[1] = result;
    *arg1 = var_68;
    result
}
