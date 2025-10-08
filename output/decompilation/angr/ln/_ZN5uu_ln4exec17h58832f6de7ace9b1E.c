long long uu_ln::exec(unsigned long long a0[9], unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x80]
    int v1;  // [bp-0x78], Other Possible Types: char
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x50]
    int v6;  // [bp-0x48], Other Possible Types: char
    unsigned long long v7;  // [bp-0x38]
    char v8;  // [bp-0x30]
    char v9;  // [bp-0x20]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    if ((char)(((0 ^ a2->field_18) & (0 ^ -(a2->field_18))) >> 63))
    {
        if (a2->field_33)
        {
            if (a1 == 1)
            {
                v1.clone(a0[1], a0[2]);
                v0 = 3;
            }
            else if (a1 > 2)
            {
                v6.clone(a0[7], a0[8]);
                v8.to_vec(uucore::execution_phrase(), a2);
                v5 = *((long long *)&v9);
                memcpy(&v4, &v8, 16);
                v1 = v6;
                v3 = v7;
                v0 = 4;
            }
            else if (!a1)
            {
                core::panicking::panic("assertion failed: !files.is_empty(): Could not update \ncannot stat : No such file or directory\nwill not overwrite just-created ''\n?  (backup: )\ncannot backup failed to access failed to create hard link .~~target  is not a directory and  are the same filemissing destination file operand after extra operand \nTry ' --help' for more information.", 35, &g_4f6020); /* do not return */
            }
            else
            {
                return uu_ln::link(a0[1], a0[2], a0[4], a0[5], a2);
            }
            return v0.new();
        }
        if (a1 == 1)
        {
            (char)v0.to_vec(".//home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/local.rs", 1);
            v12 = uu_ln::link_files_in_dir(a0, 1, (long long)v1, v2, a2);
        }
        else if (a1)
        {
            v13 = a1 * 3;
            if (&a0[v13] == 24)
                core::option::unwrap_failed(&g_4f5f68); /* do not return */
            (char)v0.to_vec(a0[2 + v13], a0[1 + v13]);
            if (a1 <= 2 && !(char)(long long)v1.is_dir(v2))
            {
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
                return uu_ln::link(a0[1], a0[2], a0[4], a0[5], a2);
            }
            v14 = a1 - 1.index(a0, a1);
            v12 = uu_ln::link_files_in_dir(v14, v15, (long long)v1, v2, a2);
        }
        else
        {
            core::option::unwrap_failed(&g_4f5f68); /* do not return */
        }
    }
    else
    {
        (char)v0.to_vec(a2->field_20, a2->field_28);
        v12 = uu_ln::link_files_in_dir(a0, a1, (long long)v1, v2, a2);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v0);
    return v12;
}
