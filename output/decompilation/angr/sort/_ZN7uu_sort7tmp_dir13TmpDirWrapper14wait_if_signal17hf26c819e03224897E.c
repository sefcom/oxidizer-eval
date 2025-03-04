long long uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::hf26c819e03224897(struct_0 *a0)
{
    char v0;  // [bp-0x20]
    unsigned int v2;  // edx

    std::sync::mutex::Mutex$LT$T$GT$::lock::h2fdf4238f9db328b(&v0, a0->field_30 + 16);
    return ::0x546600::core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h1ece0fb60dffd106(::0x546e30::core::result::Result$LT$T$C$E$GT$::unwrap::he8ec3f841ca899b2(&v0, &g_6010a8), v2 & 1);
}
