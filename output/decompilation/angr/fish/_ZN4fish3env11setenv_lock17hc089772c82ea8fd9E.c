void fish::env::setenv_lock(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    char *v2;  // r14
    char *v3;  // r12
    unsigned long long v4;  // rdx

    v2 = a0.to_cstring(a1);
    v3 = a2.to_cstring();
    v0.lock(&_ZN4fish3env11SETENV_LOCK17h5643ceefdaf51fc5E);
    setenv(v2, v3, 1);
    core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<()>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<()>>>>(&v0);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, v4);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v4);
    return;
}
