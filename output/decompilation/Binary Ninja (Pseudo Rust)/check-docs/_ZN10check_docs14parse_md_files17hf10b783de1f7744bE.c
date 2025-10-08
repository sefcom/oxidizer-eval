
  fn check_docs::parse_md_files::hf10b783de1f7744b(arg1: *mut i128, arg2: *mut i64, arg3: i64) -> *mut i128

{
    let mut var_a8: i64 = arg3;
    let rcx: i64;
    let var_a0: i64 = rcx;
    let mut var_98: *mut i64;
    regex::regex::string::Regex::new::hc0aabeb8c92c5bf9(&var_98, 
        "\((.*\.md)\) could not canonical…");
    let mut var_40: ();
    core::result::Result$LT$T$C$E$GT$::expect::h35d8f95db58b79ed(&var_40, &var_98);
    let r12: i64 = arg2[2];
    let mut var_78: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_78, 
        arg2[1], r12);
    let var_90: *mut c_void = &var_40;
    let var_88: i64 = 0;
    let var_80: i64 = r12;
    let var_48: i16 = 0;
    var_98 = &var_a8;
    core::iter::traits::iterator::Iterator::collect::h49421b740ee691c8(arg1, &var_98);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h5096ee0291be299b(&var_40);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfaeafffef128df0d(arg2);
    arg1
}
