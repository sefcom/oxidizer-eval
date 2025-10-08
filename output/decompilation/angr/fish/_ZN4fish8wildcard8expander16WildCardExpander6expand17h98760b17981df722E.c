long long fish::wildcard::expander::WildCardExpander::expand(void* a0, unsigned long long a1, unsigned long long a2, unsigned int *a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, char a7)
{
    unsigned long long v0;  // [bp-0x130]
    int v1;  // [bp-0x128], Other Possible Types: unsigned int *, unsigned long long
    unsigned int *v2;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned int *v3;  // [bp-0x128]
    unsigned int *v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x120]
    int v7;  // [bp-0x118], Other Possible Types: char
    unsigned long long v8;  // [bp-0x110]
    int v9;  // [bp-0x108]
    int v10;  // [bp-0xf8], Other Possible Types: char
    int v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xd8]
    int v13;  // [bp-0xc8], Other Possible Types: char
    char v14;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v15;  // [bp-0xb8]
    int v16;  // [bp-0xa8]
    int v17;  // [bp-0x98], Other Possible Types: char
    int v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x78]
    unsigned long v20;  // [bp-0x68]
    char v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x58]
    unsigned long long v23;  // [bp-0x50]
    char v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x40]
    char v26;  // [bp-0x38]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    void* v29;  // rax
    unsigned long long v30;  // rbx
    unsigned int *v31;  // r15
    char v32;  // al
    unsigned long long v33;  // rax
    char v34;  // al
    unsigned long v35;  // cc_ndep
    unsigned long long v36;  // r15
    unsigned long long v37;  // r14
    unsigned int v38;  // eax
    unsigned int v39;  // eax
    char *v44;  // rdi

    v27 = a0.interrupted_or_overflowed();
    if ((char)v27)
        return v27;
    if (((char)a3.find_char(a4, 47) & 1))
    {
        (char)v2.split_at(a3, a4, v28);
        v29 = *((long long *)&v7).slice_from(v8, 1);
        v0 = v28;
        v3 = v1;
        v6 = v5;
        v4 = v1;
    }
    else
    {
        v29 = 0;
        v4 = a3;
        v5 = a4;
    }
    v30 = v5;
    v31 = v4;
    v32 = fish::wildcard::wildcard_has_internal(v31, v30);
    if (v30)
    {
        if (v32 || !v29)
        {
            if (v30 == 1 && v29 && *(v31) == 64994)
            {
                a0.expand(a1, a2, v29, v0, a5, a6, a7);
                v33 = a0.interrupted_or_overflowed();
                if ((char)v33)
                    return v33;
            }
            (char)v2.open_dir(a0, a1, a2, ((short)a0[136] & 8) >> 3);
            if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
                return core::ptr::drop_in_place<core::result::Result<fish::wutil::dir_iter::DirIter,std::io::error::Error>>(&(char)v2);
            v19 = v12;
            v18 = v11;
            memcpy(&v17, &v10, 16);
            v16 = v9;
            memcpy(&v14, &v7, 16);
            memcpy(&v13, &v2, 16);
            if (v29)
                a0.expand_intermediate_segment(a1, a2, &v13, v31, v30, v29, v0, a5, a6, a7);
            else
                a0.expand_last_segment(a1, a2, &v13, v31, v30, a5, a6, a7);
            v34 = v31.find_char(v30, 64994);
            if (!(v34 & 1))
                return core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&v13);
            if (!((char)_ccall(4, 24, v28 + 1, 0, _ccall(17, (unsigned long long)(v34 & 1), 0, v35))))
            {
                v36 = v31.slice_to(v30, v28 + 1);
                v37 = a3.slice_from(a4, v28);
                v1 = v36;
                v5 = v1 + v28 * 4;
                v38 = v1.next_back();
                if (v38 == 2)
                    core::option::unwrap_failed(&g_14e4e80); /* do not return */
                v38.unwrap((unsigned int)v28, &g_14bd3d0);
                if ((unsigned int)v28 != 64994)
                    core::panicking::panic("assertion failed: head_any.chars().next_back().unwrap() == ANY_STRING_RECURSIVEassertion failed: any_tail.chars().next().unwrap() == ANY_STRING_RECURSIVEassertion failed: before <= afterassertion failed: !self.flags.contains(ExpandFlags::FOR_COMPLETIONS)as", 79, &g_14e4e98); /* do not return */
                v2 = v37;
                v5 = v37 + v28 * 4;
                v39 = v2.next();
                if (v39 == 2)
                    core::option::unwrap_failed(&g_14e4eb0); /* do not return */
                v39.unwrap((unsigned int)v28, &g_14bd1b0);
                if ((unsigned int)v28 != 64994)
                    core::panicking::panic("assertion failed: any_tail.chars().next().unwrap() == ANY_STRING_RECURSIVEassertion failed: before <= afterassertion failed: !self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: !start_point.is_empty() && start_point.starts_with('/')assertio", 74, &g_14e4ec8); /* do not return */
                v13.rewind();
                a0.expand_intermediate_segment(a1, a2, &v13, v1, v28, v37, v28, a5, a6, a7);
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e4e68); /* do not return */
            }
            return core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&v13);
        }
        (char)v2.to_vec(a1, a2);
        v13.add(&(char)v2, v31, v30);
        v21.add(&v13, "/", 1);
        v20 = *((long long *)((long long)a0[128] + 16));
        (char)v2.to_vec(a5, a6);
        v14 = *((long long *)&v7);
        memcpy(&v13, &v2, 16);
        (char)v2.add(&v13, v31, v30);
        v24.add(&(char)v2, "/", 1);
        a0.expand(v22, v23, v29, v0, v25, *((long long *)&v26), a7);
        if (((short)a0[136] & 0x300) == 0x100 && *((long long *)((long long)a0[128] + 16)) == v20 && (int)fish::wutil::waccess(v22, v23, 0))
        {
            if (((char)a0[136] & 8))
            {
                v13.open_dir(a0, a1, a2, 0);
                if ((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63))
                {
                    core::ptr::drop_in_place<core::result::Result<fish::wutil::dir_iter::DirIter,std::io::error::Error>>(&v13);
                }
                else
                {
                    v12 = v19;
                    v11 = v18;
                    v10 = v17;
                    v9 = v16;
                    v7 = v15;
                    v1 = v13;
                    a0.expand_literal_intermediate_segment_with_fuzz(a1, a2, &(char)v2, v31, v30, v29, v0, a5, a6);
                    core::ptr::drop_in_place<fish::wutil::dir_iter::DirIter>(&(char)v2);
                }
            }
            else
            {
                core::panicking::panic("assertion failed: self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: head_any.chars().next_back().unwrap() == ANY_STRING_RECURSIVEassertion failed: any_tail.chars().next().unwrap() == ANY_STRING_RECURSIVEassertion failed: before <= afterass", 67, &g_14e4e50); /* do not return */
            }
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v24);
        v44 = &v21;
    }
    else if (v32)
    {
        core::panicking::panic("assertion failed: !segment_has_wildcardsassertion failed: self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: head_any.chars().next_back().unwrap() == ANY_STRING_RECURSIVEassertion failed: any_tail.chars().next().unwrap() == ANY_STRING_RECUR", 40, &g_14e4e38); /* do not return */
    }
    else if (v29)
    {
        (char)v2.to_vec(a5, a6);
        (char)v2.push(47);
        a0.expand(a1, a2, v29, v0, v6, *((long long *)&v7), a7);
        v44 = &(char)v2;
    }
    else
    {
        return a0.expand_trailing_slash(a1, a2, a5, a6, a7);
    }
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v44);
}
