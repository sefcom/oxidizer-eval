long long zoxide::cmd::add::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Add>::run(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x118]
    char v1;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x110]
    unsigned long long v5;  // [bp-0x108]
    char *v6;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xf8]
    void* v8;  // [bp-0xf0], Other Possible Types: char
    int v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd0]
    unsigned long v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb8]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    unsigned long long v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x90]
    char v18;  // [bp-0x88]
    char v19;  // [bp-0x78]
    int v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x48]
    char *v24;  // [bp-0x40]
    unsigned long long v25;  // [bp-0x38]
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r15
    unsigned long long v29;  // r15
    unsigned long long v30;  // rdx
    unsigned long v31;  // xmm0lq
    unsigned long long v32;  // r14
    unsigned long long v33;  // r14
    unsigned long v36;  // r14
    unsigned long long v37;  // rax

    zoxide::config::exclude_dirs(&v1);
    v27 = v5;
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v27;
    v14 = v3;
    v15 = v27;
    v16 = v6;
    zoxide::config::maxage(&v1);
    v28 = v5;
    v29 = v28;
    if (!(v1 & 1))
    {
        if (((char)zoxide::util::current_time() & 1))
        {
            v29 = v30;
        }
        else
        {
            v1.open();
            v29 = v17;
            if ((int)v3 != 1)
            {
                v13 = v28;
                v21 = v10;
                v20 = v9;
                memcpy(&v19, &v8, 16);
                memcpy(&v18, &v6, 16);
                v17 = v5;
                if (a0->field_20)
                {
                    v12 = v16 * 56;
                    v31 = (!(a0->field_0 & 1) ? 0x3ff0000000000000 : a0->field_8);
                    *((int *)&v11) = (!(a0->field_0 & 1) ? 0x3ff0000000000000 : a0->field_8);
                    v12 += v27;
                    v32 = a0->field_20 * 24;
                    do
                    {
                        v33 = v32;
                        v2 = v3;
                        ((char)zoxide::config::resolve_symlinks() ? zoxide::util::canonicalize : zoxide::util::resolve_path)();
                        if (v2 == 0x8000000000000000)
                            goto LABEL_48eab0;
                        v0 = v5;
                        zoxide::util::path_to_str(&v1, v0, v6);
                        if (v2)
                        {
                            v22 = v2;
                            v23 = v5;
                            v3 = v2;
                            if ((char)v3.is_contained_in(v23))
                                continue;
                            v4 = v27;
                            v5 = v12;
                            v3 = v4;
                            if (v3.any(v2, v23))
                                continue;
                            if ((char)v2.is_dir(v23))
                            {
                                v17.add_update(v2, v23, v30);
                                v3 = v4;
                            }
                            else
                            {
                                v24 = &v22;
                                v25 = <&T as core::fmt::Display>::fmt;
                                v1 = &g_5348d0;
                                v5 = 1;
                                v8 = 0;
                                v6 = &v24;
                                v7 = 1;
                                v23 = anyhow::__private::format_err(&v1);
                                goto LABEL_48eaa4;
                            }
                        }
                        else
                        {
LABEL_48eaa4:
                            core::mem::drop(v2, v0);
                            v0 = v23;
LABEL_48eab0:
                            core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v17);
                            v29 = v0;
                            goto LABEL_48eac0;
                        }
                        core::mem::drop(v2, v0);
                        v36 = v33 - 24;
                        v32 = v36;
                    } while (v33 != 24);
                }
                if ((char)v21 == 1)
                    v17.age();
                v37 = v17.save();
                core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v17);
                v29 = v37;
            }
LABEL_48eac0:
        }
    }
    v14.drop_in_place<alloc::vec::Vec<glob::Pattern>>();
    return v29;
}
