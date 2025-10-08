
  fn uu_wc::escape_name_wrapper::haaae7e5c159f0dd0(arg1: *mut i128, arg2: *mut i8, arg3: u64) -> *mut i128

{
    let mut var_28: ();
    uucore::features::quoting_style::escape_name::h942044e1943bd5af(&var_28, arg2, arg3, 
        &data_41a13f);
    let mut var_50: i64;
    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_50, &var_28);
    let o: bool = 0 + -(var_50);
    let mut rcx: i64;
    rcx = o;
    let mut rdx: i64;
    rdx = !o;
    let mut var_48: i128;
    let rax: i64 = *(&*var_48[8]).byte_offset(rcx << 3);
    let var_18: i64 = rax;
    var_48 = *(&var_50).byte_offset(rcx << 3);
    let var_38: i64 = rax;
    var_50 = rdx;
    core::result::Result$LT$T$C$E$GT$::expect::h9cf535346213a901(arg1, &var_50);
    arg1
}
