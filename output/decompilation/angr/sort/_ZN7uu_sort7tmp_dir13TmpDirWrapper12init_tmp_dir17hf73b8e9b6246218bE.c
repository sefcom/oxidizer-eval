long long uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(struct_0 *a0)
{
    int v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x108]
    void* v2;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    unsigned long long *v5;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v6;  // [bp-0xd8]
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xb8], Other Possible Types: char
    char v9;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned int v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    void* v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    unsigned short v16;  // [bp-0x70]
    char v17;  // [bp-0x68], Other Possible Types: unsigned long long
    char v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x58]
    unsigned long long v20;  // [bp-0x50]
    char v21;  // [bp-0x48]
    int v22;  // [bp-0x38]
    int v23;  // [bp-0x28], Other Possible Types: char
    unsigned long long v24;  // [bp-0x18]
    unsigned long long v26;  // rcx
    int v27;  // xmm0
    unsigned long v28;  // r14
    unsigned long long v29;  // 4097
    unsigned long v30;  // cc_ndep

    if (a0->field_28 != 2)
    {
        core::panicking::panic("assertion failed: self.temp_dir.is_none()src/uu/sort/src/tmp_dir.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 41, &g_672810); /* do not return */
    }
    else if (!a0->field_38)
    {
        v15 = 6;
        v13 = 1;
        v14 = 0;
        v16 = 0;
        v10 = 0;
        v11 = "uutils_sortassertion failed: self.temp_dir.is_none()src/uu/sort/src/tmp_dir.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs";
        v12 = 11;
        v8.tempdir_in(&v10, a0);
        if (v9 == 2)
        {
            uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v17, a0, *((long long *)&v8));
            v26 = v20;
            v24 = v20;
            v27 = *((int128_t *)&v18);
            memcpy(&v23, &v18, 16);
            v7 = v22;
            memcpy(&v6, &v21, 16);
            v0 = v23;
            v1 = v24;
            v3 = v23;
            v5 = v1;
            v2 = v17;
            return v2.new();
        }
        v28 = &a0->field_18;
        v0 = v8;
        v1 = v9;
        core::ptr::drop_in_place<core::option::Option<tempfile::dir::TempDir>>(v28);
        *((unsigned long long *)(v28 + 16)) = v1;
        *((void*)v28) = v0;
        if (a0->field_28 == 2)
            core::option::unwrap_failed(&g_672840); /* do not return */
        std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v17, *((long long *)&a0->field_18), *((long long *)&a0->padding_19[7]));
        v29 = a0->field_30->field_0;
        vvar_176 = CAS(Load(addr=(vvar_0 + 0x30<64>), size=8, endness=Iend_LE), (vvar_175 + 0x1<64>), vvar_175)
        if (CasCmpNE(vvar_176, v29))
            goto LABEL_0x5391d4;
        if (!((char)amd64g_calculate_condition(14, 24, v29 + 1, 0, amd64g_calculate_rflags_c(5, (unsigned long long)a0->field_28, 2, v30))))
        {
            v5 = &a0->field_30->field_0;
            memcpy(&(char)v2, &(char)v17, 16);
            v4 = v19;
            ctrlc::init_and_set_handler(&v10, &(char)v2, 1);
            if (v10 != 3)
            {
                memcpy(&(char)v2, &v10, 16);
                return uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&(char)v2);
            }
            return 0;
        }
        [D] Unsupported jumpkind Ijk_NoDecode at address 5477015()
    }
    else
    {
        v2 = 0;
        core::panicking::assert_failed(0, &a0->field_38, &g_440f10, &v2, &g_672828); /* do not return */
    }
}
