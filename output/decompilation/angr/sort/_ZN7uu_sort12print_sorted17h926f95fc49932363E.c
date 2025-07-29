long long uu_sort::print_sorted(uint128_t a0[3], char a1[154], int a2[17])
{
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xa8]
    int v2;  // [bp-0x98], Other Possible Types: char
    int v3;  // [bp-0x88], Other Possible Types: char
    int v4;  // [bp-0x78]
    char v5;  // [bp-0x60]
    unsigned long v7;  // cc_ndep
    unsigned long long v8[2];  // rax
    unsigned long long v9;  // rax

    v2.to_owned(((char)amd64g_calculate_condition(1, 8, 0, (long long)a2[0], v7) ? (long long)a2[8] : "standard output-argsort-invalid-suffix-in-option-argsort-option-arg-too-largesort-invalid-option-argOpenFailedParseKeyErrormsgReadFailedOpenTmpFileFailedCompressProgExecutionFailedTmpFileCreationFailedFileOperandsCombinedUft8ErrorMultipleOutputFilesMinusIn"), ((char)amd64g_calculate_condition(1, 8, 0, (long long)a2[0], v7) ? (long long)a2[16] : 15));
    v1 = *((long long *)&v3);
    v0 = v2;
    *((int128_t *)&v3) = (int128_t)a2[16];
    *((int128_t *)&v2) = (int128_t)a2[0];
    v5.into_write(&v2);
    *((uint128_t *)&v4) = a0[2];
    *((uint128_t *)&v3) = a0[1];
    *((uint128_t *)&v2) = a0[0];
    do
    {
        v8 = v2.next();
        if (!v8 && !v5.flush().map_err_context(&v0))
        {
            ::0x506690::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v5);
            ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
            return 0;
        }
        v9 = v8.print(&v5, a1).map_err_context(&v0);
    } while (!v9);
    ::0x506690::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v5);
    ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
    return v9;
}
