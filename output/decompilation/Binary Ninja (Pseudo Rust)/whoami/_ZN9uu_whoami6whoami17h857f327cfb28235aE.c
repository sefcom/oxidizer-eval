
  fn uu_whoami::whoami::h857f327cfb28235a(arg1: *mut i64) -> *mut i64

{
    let mut var_28: ();
    uu_whoami::platform::unix::get_username::h858b21d98303e7a3(&var_28);
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha8a8266163a002e3(arg1, &var_28);
    arg1
}
