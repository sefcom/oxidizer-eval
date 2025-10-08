
  fn uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hd3e3d7b672ec7630(arg1: *mut c_void) -> i64

{
    let mut var_20: ();
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h2a065fc042bff740(&var_20, 
        (*arg1.byte_offset(0x30)).byte_offset(0x10));
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::hd0a5bb82409ec627(&var_20);
    /* tailcall */
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..StdinRaw$GT$$GT$$GT$::h1d94eac551d99a4d(rax, rdx & 1)
}
