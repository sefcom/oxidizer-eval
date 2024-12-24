long long uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal::h5ad5990a5d77c68c(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    char v0;  // [bp-0x20]
    unsigned int v2;  // edx

    std::sync::mutex::Mutex$LT$T$GT$::lock::hd04a44f325304c80(&v0, a0->field_30 + 16, a2);
    return ::0x540fe0::core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h043a4a94454f766b(::0x541880::core::result::Result$LT$T$C$E$GT$::unwrap::h86d9f5ec62e64a4f(&v0, &g_600368), v2 & 1);
}
