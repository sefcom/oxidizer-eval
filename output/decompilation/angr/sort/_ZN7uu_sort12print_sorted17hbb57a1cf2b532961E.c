long long uu_sort::print_sorted(struct_0 *a0, char a1[154], int a2[17])
{
    int v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xe8]
    int v2;  // [bp-0xd8], Other Possible Types: char
    int v3;  // [bp-0xc8], Other Possible Types: char
    int v4;  // [bp-0xb8]
    int v5;  // [bp-0xa8]
    int v6;  // [bp-0x98]
    int v7;  // [bp-0x88]
    int v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x68]
    char v10;  // [bp-0x60]
    unsigned long v12;  // cc_ndep
    unsigned long long v13[2];  // rax
    unsigned long long v14;  // rax

    v2.to_owned(((char)amd64g_calculate_condition(1, 8, 0, (long long)a2[0], v12) ? (long long)a2[8] : "standard output-argsort-invalid-suffix-in-option-argsort-option-arg-too-largesort-invalid-option-argOpenFailedParseKeyErrormsgReadFailedOpenTmpFileFailedCompressProgExecutionFailedTmpFileCreationFailedFileOperandsCombinedUft8ErrorMultipleOutputFilesMinusIn"), ((char)amd64g_calculate_condition(1, 8, 0, (long long)a2[0], v12) ? (long long)a2[16] : 15));
    v1 = *((long long *)&v3);
    v0 = v2;
    *((int128_t *)&v3) = (int128_t)a2[16];
    *((int128_t *)&v2) = (int128_t)a2[0];
    v10.into_write(&v2);
    v9 = a0->field_70;
    *((uint128_t *)&v8) = a0->field_60;
    *((uint128_t *)&v7) = a0->field_50;
    *((uint128_t *)&v6) = a0->field_40;
    *((uint128_t *)&v5) = a0->field_30;
    *((uint128_t *)&v4) = a0->field_20;
    *((uint128_t *)&v3) = a0->field_10;
    *((uint128_t *)&v2) = a0->field_0;
    do
    {
        v13 = v2.next();
        if (!v13 && !v10.flush().map_err_context(&v0))
        {
            ::0x506690::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v10);
            ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
            return 0;
        }
        v14 = v13.print(&v10, a1).map_err_context(&v0);
    } while (!v14);
    ::0x506690::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v10);
    ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
    return v14;
}
