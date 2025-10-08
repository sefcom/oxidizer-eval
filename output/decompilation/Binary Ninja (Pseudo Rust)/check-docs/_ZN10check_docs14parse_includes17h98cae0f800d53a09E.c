
  fn check_docs::parse_includes::h98cae0f800d53a09(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let mut var_58: i128;
    regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_58, 
        "^(\S+):(\d+):\s*\{\{\s*#include\…");
    let mut var_30: i128;
    core::result::Result$LT$T$C$E$GT$::expect::h35d8f95db58b79ed(&var_30, &var_58);
    var_58 = var_30;
    let var_20: i128;
    let var_48: i128 = var_20;
    check_docs::parse_includes::_$u7b$$u7b$closure$u7d$$u7d$::h03717f7f9650635d(arg1, arg2, 
        &var_58);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfaeafffef128df0d(arg2);
    arg1
}
