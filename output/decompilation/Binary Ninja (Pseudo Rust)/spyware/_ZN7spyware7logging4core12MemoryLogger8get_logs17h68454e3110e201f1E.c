
  fn spyware::logging::core::MemoryLogger::get_logs::h68454e3110e201f1(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    std::sys::sync::rwlock::futex::RwLock::read::hbe2226c9acb137cd(arg2.byte_offset(0x18));
    let mut var_30: ();
    std::sync::rwlock::RwLockReadGuard$LT$T$GT$::new::h096560ed84c59029(&var_30, 
        arg2.byte_offset(0x18));
    let mut rax: *mut i32;
    let mut rdx: *mut i32;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::h0ee99c6f1ef24d89(&var_30);
    spyware::logging::memory_logger::CircularMemoryLogs::get_all_logs::hfa3a03f9a722fe3c(arg1, rax);
    /* tailcall */
    core::ptr::drop_in_place$LT$std..sync..rwlock..RwLockReadGuard$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::hb0b5943e5e9bd725(rdx)
}
