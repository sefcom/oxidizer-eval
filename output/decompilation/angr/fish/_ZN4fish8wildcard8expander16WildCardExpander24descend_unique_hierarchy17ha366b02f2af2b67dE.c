void fish::wildcard::expander::WildCardExpander::descend_unique_hierarchy(unsigned long a0, void* a1, unsigned long long a2[3])
{
    void* v0;  // [bp-0x188]
    int v1;  // [bp-0x188]
    unsigned long long v2;  // [bp-0x180]
    unsigned long long v3;  // [bp-0x178]
    void* v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    void* v6;  // [bp-0x158]
    struct_0 *v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x140]
    unsigned long long v9[5];  // [bp-0x138]
    int v10;  // [bp-0x130]
    int v12;  // [bp-0x120]
    int v13;  // [bp-0x110]
    int v14;  // [bp-0x100]
    int v15;  // [bp-0xf0]
    unsigned long long v16;  // [bp-0xe0]
    int v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xd0]
    int v19;  // [bp-0xc8]
    int v20;  // [bp-0xb8]
    int v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0x98]
    int v23;  // [bp-0x88]
    int v24;  // [bp-0x78]
    int v25;  // [bp-0x68]
    int v26;  // [bp-0x58]
    int v27;  // [bp-0x48]
    unsigned long long v28;  // [bp-0x38]
    unsigned long long v30[5];  // rdx

    if (a2[2] && a2[1].starts_with(a2[2], 47))
    {
        v4 = 0;
        v5 = 4;
        v6 = 0;
        (char)v10.default();
        v20 = v13;
        v19 = v12;
        v17 = v10;
        while (true)
        {
            v0 = 0;
            v2 = 4;
            v3 = 0;
            (char)v10.new(a2[1], a2[2]);
            if (!((char)(((0 ^ (long long)v10) & (0 ^ -((long long)v10))) >> 63)))
            {
                v28 = v16;
                v27 = v15;
                v26 = v14;
                v25 = v13;
                v24 = v12;
                v23 = v10;
                while (true)
                {
                    v8 = v23.next();
                    v9[0] = v30;
                    if (v8 == 2 || ((char)v8 & 1))
                        break;
                    if (v30[2] && !v30[1].starts_with(v30[2], 46))
                    {
                        if ((char)(char)v17.insert(v30[4]))
                            break;
                        if (v30.is_dir() && !v3)
                        {
                            fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v10, v30[1], v30[2]);
                            v22 = (long long)v12;
                            v21 = v10;
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                            v3 = v22;
                            v1 = v21;
                        }
                        else
                        {
                            v3 = 0;
                            break;
                        }
                    }
                    core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v8);
                }
                core::ptr::drop_in_place<core::option::Option<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>>(&v8);
                if (v3 && !(char)a1.interrupted_or_overflowed())
                {
                    fish::path::append_path_component(&v4, 0x4, v3);
                    v4.push(47);
                    fish::path::append_path_component(a2, 0x4, v3);
                    a2.push(47);
                    core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&v23);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                }
                else
                {
                    core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&v23);
                    break;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<fish::wutil::dir_iter::DirIter,std::io::error::Error>>(&(char)v10);
                break;
            }
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v7->field_10 = 0;
        v7->field_0 = *((int128_t *)&v4);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<&widestring::utfstring::Utf32String>>((long long)v17, v18);
        return;
    }
    core::panicking::panic("assertion failed: !start_point.is_empty() && start_point.starts_with('/')assertion failed: flags.contains(ExpandFlags::FOR_COMPLETIONS) ||\n    !flags.contains(ExpandFlags::FUZZY_MATCH)assertion failed: !(flags.contains(ExpandFlags::SPECIAL_FOR_CD)) ||\n    ", 73, &g_14e4f28); /* do not return */
}
