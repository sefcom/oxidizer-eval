long long uu_sort::print_sorted(unsigned long long a0, unsigned long long a1, char a2[154], int a3[17])
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0x98]
    int v2;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x80]
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x60], Other Possible Types: char
    char v6;  // [bp-0x50]
    unsigned long v8;  // cc_ndep
    unsigned long long v9[2];  // rax
    unsigned long long v10;  // r14

    v5.to_owned(((char)amd64g_calculate_condition(1, 8, 0, (long long)a3[0], v8) ? (long long)a3[8] : "standard output-argsort-invalid-suffix-in-option-argsort-option-arg-too-largesort-invalid-option-argOpenFailedParseKeyErrormsgReadFailedOpenTmpFileFailedCompressProgExecutionFailedTmpFileCreationFailedFileOperandsCombinedUft8ErrorMultipleOutputFilesMinusIn"), ((char)amd64g_calculate_condition(1, 8, 0, (long long)a3[0], v8) ? (long long)a3[16] : 15));
    v1 = *((long long *)&v6);
    v0 = v5;
    *((int128_t *)&v4) = (int128_t)a3[16];
    *((int128_t *)&v2) = (int128_t)a3[0];
    v5.into_write(&(char)v2);
    v2 = a0;
    v3 = a1;
    do
    {
        v9 = v2.next();
        if (!v9 && !v5.flush().map_err_context(&v0))
        {
            ::0x506690::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v5);
            ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
            return 0;
        }
        v10 = v9.print(&v5, a2).map_err_context(&v0);
    } while (!v10);
    ::0x506690::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v5);
    ::0x506b30::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v0);
    return v10;
}
