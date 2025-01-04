long long uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h98cc8f29e16f1909(struct_1 *a0)
{
    char v0;  // [bp-0xe0]
    char v1;  // [bp-0xd0]
    void* v2;  // [bp-0xc8], Other Possible Types: int, char
    int v3;  // [bp-0xc7]
    int v4;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long *v5;  // [sp-0xb0]
    int v6;  // [sp-0xa8]
    int v7;  // [sp-0x98]
    unsigned int v8;  // [sp-0x88]
    unsigned long long v9;  // [sp-0x80]
    unsigned long long v10;  // [sp-0x78]
    unsigned long long v11;  // [sp-0x70]
    void* v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x60]
    unsigned short v14;  // [sp-0x58]
    char v15;  // [bp-0x50]
    char v16;  // [bp-0x4f]
    char v17;  // [bp-0x40]
    char v18;  // [bp-0x30]
    char v19;  // [bp-0x20]
    struct_0 *v21;  // r14
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    char v24;  // al
    void* v25;  // rax
    unsigned long long v26;  // cc_dep1
    unsigned long long *v27;  // rax
    unsigned long long v28;  // 4097
    unsigned long v29;  // cc_ndep

    if (a0->field_28 != 2)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    if (a0->field_38)
    {
        v2 = 0;
        core::panicking::assert_failed::hd9eafe0b9dbc486f(); /* do not return */
    }
    v13 = 6;
    v11 = 1;
    v12 = 0;
    v14 = 0;
    v8 = 0;
    v9 = "uutils_sort";
    v10 = 11;
    tempfile::Builder::tempdir_in::h2c1cb977497001f4(&v0, &v8, a0);
    if (v1 == 2)
    {
        uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::h483fa247c502359f(&v15, a0, *((long long *)&v0));
        v24 = v15;
        *((int128_t *)&v4) = *((int128_t *)&v17);
        *((int128_t *)&v3) = *((int128_t *)&v16);
        *((int128_t *)&v6) = *((int128_t *)&v18);
        *((int128_t *)&v7) = *((int128_t *)&v19);
        v2 = v24;
        v25 = ::0x547370::alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&v2);
        return v25;
    }
    v21 = &a0->field_18;
    core::ptr::drop_in_place$LT$core..option..Option$LT$tempfile..dir..TempDir$GT$$GT$::h781346d64f7035c3(v21, v22, v23);
    v21->field_10 = *((long long *)&v1);
    v21->field_0 = *((int128_t *)&v0);
    v26 = a0->field_28;
    if (a0->field_28 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v15, a0->field_18, a0->field_20);
    v27 = a0->field_30;
    v28 = *(v27);
    *(v27) = v28 + 1;
    if (CasCmpNE(*(v27), v28))
        goto LABEL_0x548860;
    if ((char)amd64g_calculate_condition(14, 24, v28 + 1, 0, amd64g_calculate_rflags_c(5, v26, 2, v29)))
        [D] Unsupported jumpkind Ijk_NoDecode at address 5540130()
    v5 = &a0->field_30->field_0;
    *((int128_t *)&v2) = *((int128_t *)&v15);
    v4 = *((long long *)&v17);
    ctrlc::init_and_set_handler::h6af8d99ede2ba210(&v8, &v2, 1);
    if (v8 == 3)
    {
        v25 = 0;
    }
    else
    {
        *((int128_t *)&v2) = *((int128_t *)&v8);
        v25 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::_$u7b$$u7b$closure$u7d$$u7d$::hdf55d06592a2f2db(&v2);
    }
    return v25;
}
