long long fish::wutil::fileid::file_id_for_path(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v1 = fish::common::wcs2zstring(a1, a2);
    fish::wutil::fileid::file_id_for_path_narrow(a0, v1, a2);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v1, v2);
    return a0;
}
