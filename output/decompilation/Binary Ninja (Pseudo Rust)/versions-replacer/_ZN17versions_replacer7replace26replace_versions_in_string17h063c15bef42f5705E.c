
  fn versions_replacer::replace::replace_versions_in_string::h063c15bef42f5705(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: *mut i64) -> *mut i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    var_28 = 0;
    regex::regex::string::Regex::replacen::hc4c3a388728a78fb(arg1, 
        once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::h080610189289e47a(), arg2, arg3, arg4, 
        &var_28);
    arg1[3] = var_28;
    arg1
}
