void fish::env::unsetenv_lock(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]
    char *v2;  // r14
    unsigned long long v3;  // rdx

    v2 = a0.to_cstring(a1);
    v0.lock(&_ZN4fish3env11SETENV_LOCK17h5643ceefdaf51fc5E);
    unsetenv(v2);
    core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<()>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<()>>>>(&v0);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v3);
    return;
}
