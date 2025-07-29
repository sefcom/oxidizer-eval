long long uu_rm::handle_dir(unsigned long long a0, unsigned long long a1, char a2[5])
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    void* v4;  // [bp-0x98]
    char v5;  // [bp-0x7e]
    char *v6;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char *v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v15;  // r14
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    char v18;  // cl
    unsigned long long v19;  // rax

    v15 = uu_rm::clean_trailing_slashes(a0, a1);
    if ((char)uu_rm::path_is_current_or_parent_directory(v15, v16))
    {
        v9 = uucore::util_name();
        v10 = v16;
        v6 = &v9;
        v7 = <&T as core::fmt::Display>::fmt;
        v0 = &g_57d6d0;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v6 = v15;
        v7 = v16;
        v10.spec_to_string(&v6);
        v9 = 7;
        v12 = &v9;
        v13 = <uu_rm::RmError as core::fmt::Display>::fmt;
        v0 = &g_57d6f0;
        v1 = 2;
        v4 = 0;
        v2 = &v12;
        v3 = 1;
        std::io::stdio::_eprint(&v0);
        v17 = core::ptr::drop_in_place<uu_rm::RmError>(&v9);
    }
    else
    {
        (char)v0.components(v15, v16);
        if (!v5 && (char)v2 - 5 < 2)
        {
            v18 = a2[3];
            if (a2[3])
            {
                return uu_rm::remove_dir_recursive(v15, v16, a2);
            }
            else if (a2[4])
            {
                return uu_rm::remove_dir(v15, v16, a2);
            }
        }
        else
        {
            v19 = v15.parent(v16);
            v18 = a2[3];
            if (v18)
            {
                if (v19)
                    return uu_rm::remove_dir_recursive(v15, v16, a2);
                if (!a2[2])
                    return uu_rm::remove_dir_recursive(v15, v16, a2);
                if (!(!a2[4]))
                    goto LABEL_4a204e;
            }
            else if (a2[4])
            {
                if (v19)
                    return uu_rm::remove_dir(v15, v16, a2);
LABEL_4a204e:
                if (!a2[2])
                    return uu_rm::remove_dir(v15, v16, a2);
            }
        }
        if (v18)
        {
            v9 = uucore::util_name();
            v10 = v16;
            v6 = &v9;
            v7 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = &g_416ee8;
            v10 = <uu_rm::RmError as core::fmt::Display>::fmt;
            v0 = &g_57d6f0;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = uucore::util_name();
            v10 = v16;
            v6 = &v9;
            v7 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = &g_416ec8;
            v10 = <uu_rm::RmError as core::fmt::Display>::fmt;
            v0 = &g_57d6f0;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            v17 = std::io::stdio::_eprint(&v0);
        }
        else
        {
            v9 = uucore::util_name();
            v10 = v16;
            v6 = &v9;
            v7 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v6.to_string_lossy(v15, v16);
            v0.to_vec(<&T as core::fmt::Display>::fmt, v8);
            v11 = v2;
            memcpy(&v10, &v0, 16);
            v9 = 4;
            v12 = &v9;
            v13 = <uu_rm::RmError as core::fmt::Display>::fmt;
            v0 = &g_57d6f0;
            v1 = 2;
            v4 = 0;
            v2 = &v12;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            core::ptr::drop_in_place<uu_rm::RmError>(&v9);
            v17 = (unsigned long long)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v6);
        }
    }
    return v17 & 0xffffffffffffff00 | 1;
}
