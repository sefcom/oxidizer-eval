long long uu_chmod::Chmoder::walk_dir(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xbc]
    unsigned long long v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x80]
    int v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    char v13;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x50]
    int v15;  // [bp-0x48]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // r14
    unsigned int v19;  // eax
    char v20;  // al
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // rbx
    unsigned long long v26;  // r13
    unsigned long long v27;  // rax

    v18 = a0.chmod_file(a1, a2);
    v19 = a0->field_26;
    if (v19)
    {
        if (v19 == 1)
        {
            std::fs::canonicalize(&v7, a1, a2);
            std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v12, a1, a2);
            (char)v2.unwrap_or(&v7, &(char)v12);
            v0 = a1.eq(a2, v3, v4);
            core::ptr::drop_in_place<std::path::PathBuf>(v2, v3);
            v20 = a1.is_symlink(a2);
            if (v20 == 1 && !(char)v0)
                return v18;
        }
        else
        {
            v0 = 1;
            a1.is_symlink(a2);
        }
    }
    else
    {
        if (!(char)a1.is_symlink(a2))
            v0 = 0;
        else
            return v18;
    }
    if (!(char)a1.is_dir(a2))
        return v18;
    std::fs::read_dir(&(char)v12, a1, a2);
    if (v13 == 2)
    {
        v21 = v12.from();
    }
    else
    {
        v5 = v12;
        v6 = v13;
        while (true)
        {
            (char)v12.next(&v5);
            if ((int)v12 != 1)
            {
                core::ptr::drop_in_place<std::fs::ReadDir>(&v5);
                return v18;
            }
            if (!v13)
                break;
            v10 = *((long long *)&v16);
            v9 = v15;
            v7 = v13;
            v8 = v14;
            (char)v2.path(&v7);
            core::ptr::drop_in_place<std::fs::DirEntry>(&v7);
            v24 = v3;
            v25 = v4;
            if (!(char)v24.is_symlink(v25))
            {
                v27 = a0.walk_dir(v24, v25);
                core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v18, v23);
                v18 = v27;
                v26 = v22;
            }
            else if (!(char)v0)
            {
                v26 = v23;
            }
            else
            {
                v18 = a0.chmod_file(v24, v25).and(v22, v18, v23);
                v26 = v22;
            }
            v23 = v26;
            core::ptr::drop_in_place<std::path::PathBuf>(v2, v3);
        }
        v21 = v8.from();
        core::ptr::drop_in_place<std::fs::ReadDir>(&v5);
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v18, v23);
    return v21;
}
