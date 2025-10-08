
  int64_t uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hd3e3d7b672ec7630(void* arg1)

{
    void var_20;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h2a065fc042bff740(&var_20, 
        *(arg1 + 0x30) + 0x10);
    int32_t* rax;
    char rdx;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::hd0a5bb82409ec627(&var_20);
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..StdinRaw$GT$$GT$$GT$::h1d94eac551d99a4d(rax, rdx & 1);
}
