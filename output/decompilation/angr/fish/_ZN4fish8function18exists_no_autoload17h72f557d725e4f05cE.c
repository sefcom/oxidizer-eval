long long fish::function::exists_no_autoload(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    int v3;  // [bp-0x70], Other Possible Types: char
    unsigned long long v4;  // [bp-0x60]
    char v5;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    char v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    char v10;  // [bp-0x30]
    unsigned long long v13;  // rbx
    char v14;  // dl
    char v15;  // bpl
    unsigned long long v16;  // rax
    unsigned int v17;  // r15d
    unsigned long long v18;  // r12

    if (!(char)fish::common::valid_func_name(a0, a1) || (char)fish::parser_keywords::parser_keywords_is_reserved(a0, a1))
        return 0;
    v3.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v13 = v3.unwrap(&g_14d8eb8);
    v15 = v14 & 1;
    v16 = v13 + 56.get_inner(a0, a1);
    if (!v13 + 8.get_inner(a0, a1) && (v16 || !(char)v13 + 104.can_autoload(a0, a1)))
    {
        fish::common::wcs2osstring(&v5, a0, a1);
        core::str::converts::from_utf8(&v8, v6, v7);
        if ((v8 & 1))
        {
            v17 = 0;
        }
        else
        {
            v18 = *((long long *)&v10);
            v3.to_vec("functions/assertion failed: !success.preserve_failure_exit_statussrc/builtins/shared.rs", 10);
            v2 = v4;
            v0 = v3;
            v3.add(&(char)v0, v9, v18);
            (char)v0.add(&v3, ".fish/", 5);
            v17 = fish::autoload::has_asset(v1, v2);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v13, v15);
        return v17;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v13, v15);
    return (unsigned int)a0 & 0xffffff00 | 1;
    return 0;
}
