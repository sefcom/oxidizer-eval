
  fn uu_du::file_as_vec::ha4cb87d59a25f84c(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_50: ();
    std::fs::File::open::hc0282a67b51c44be(&var_50, arg2);
    let mut var_40: ();
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha4ed61db034c9bb6(&var_40, 
        0x2000, core::result::Result$LT$T$C$E$GT$::expect::hc7cbe91f3679df68(&var_50));
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha82b4e3bbe951e30(arg1, &var_40)
}
