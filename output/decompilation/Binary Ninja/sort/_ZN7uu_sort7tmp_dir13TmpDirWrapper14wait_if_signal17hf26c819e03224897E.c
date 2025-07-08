
  int64_t uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hf26c819e03224897(void* arg1)

{
    void var_20;
    std::sync::mutex::Mutex$LT$T$GT$::lock::h2fdf4238f9db328b(&var_20, *(arg1 + 0x30) + 0x10);
    int32_t* rax;
    char rdx;
    rax = core::result::Result$LT$T$C$E$GT$::unwrap::he8ec3f841ca899b2(&var_20);
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h1ece0fb60dffd106(rax, rdx & 1);
}
