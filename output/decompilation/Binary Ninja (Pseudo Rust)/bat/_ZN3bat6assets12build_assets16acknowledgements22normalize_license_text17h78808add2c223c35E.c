
  fn bat::assets::build_assets::acknowledgements::normalize_license_text::h78808add2c223c35(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_88: ();
    regex::regex::string::Regex::new::h635c92d99ce14a75(&var_88, 
        "\s +Failed to load one or more t…");
    let mut var_48: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::h74cc0bc4b33b4b1e(&var_48, &var_88);
    let mut var_a0: ();
    regex::regex::string::Regex::replacen::h0964786f4d51b6a0(&var_a0, &var_48, arg2, arg3);
    regex::regex::string::Regex::new::h635c92d99ce14a75(&var_88, 
        " +Failed to load one or more the…");
    let mut var_68: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::h74cc0bc4b33b4b1e(&var_68, &var_88);
    let var_98: *mut i8;
    let var_90: i64;
    regex::regex::string::Regex::replacen::h0964786f4d51b6a0(&var_88, &var_68, var_98, var_90);
    let var_80: i64;
    let var_78: u64;
    _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
        arg1, var_80, var_78);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h6c89f9a0fab48c46(&var_68);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_a0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h6c89f9a0fab48c46(&var_48);
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_88)
}
