long long fish::universal_notifier::inotify::InotifyNotifier::new_at(void* a0, unsigned long long a1, void* a2)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int v7;  // edx
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax

    v4 = fish::wutil::wdirname(a1, a2);
    v5 = fish::wutil::wbasename(a1, a2);
    v6 = nix::sys::inotify::Inotify::init();
    if (((char)v6 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<nix::sys::inotify::Inotify,nix::errno::consts::Errno>>(v6 & 4294967295, v7);
    }
    else if (v7 != -1)
    {
        fish::common::wcs2osstring(&v0, v4, v9);
        if (!((char)v7.add_watch(v1, *((long long *)&v2)) & 1))
        {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
            fish::common::wcs2osstring(&v0, v5, v9);
            v10 = *((long long *)&v2);
            *((unsigned long long *)&a0[16]) = v10;
            *((int128_t *)a0) = *((int128_t *)&v0);
            *((unsigned int *)&a0[24]) = v7;
            return v10;
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
        return core::ptr::drop_in_place<nix::sys::inotify::Inotify>(v7);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
