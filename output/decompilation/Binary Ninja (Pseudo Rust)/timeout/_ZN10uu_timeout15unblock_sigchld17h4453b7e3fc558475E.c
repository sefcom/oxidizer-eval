
  fn uu_timeout::unblock_sigchld::h4453b7e3fc558475() -> *mut i64

{
    let mut var_18: ();
    let rcx: __sighandler_t;
    let result: *mut i64 = nix::sys::signal::signal::h36b1180493a8e0aa(&var_18, 0x11, nullptr, rcx);
    core::result::Result$LT$T$C$E$GT$::unwrap::h602d99bdbc930706(&var_18);
    result
}
