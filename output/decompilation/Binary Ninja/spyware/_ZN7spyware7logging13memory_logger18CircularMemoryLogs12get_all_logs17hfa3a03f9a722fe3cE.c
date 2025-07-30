
  int64_t spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs::hfa3a03f9a722fe3c(int64_t* arg1, int32_t* arg2)

{
    std::sys::sync::rwlock::futex::RwLock::read::hbe2226c9acb137cd(arg2);
    void var_30;
    std::sync::rwlock::RwLockReadGuard$LT$T$GT$::new::haf4ee7d01335bbb9(&var_30, arg2);
    void* rax;
    int32_t* rdx;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::h8e28e672987e3baa(&var_30);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he350fd6b813e3a35(
        arg1, rax);
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..sync..rwlock..RwLockReadGuard$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hb0b5943e5e9bd725(rdx);
}
