long long uu_sort::open(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x84]
    unsigned long long v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v10;  // r14
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdx

    v10 = a1.as_ref(a2);
    if ((char)v10.equal(v11, "-argsort-invalid-suffix-in-option-argsort-option-arg-too-largesort-invalid-option-argOpenFailedParseKeyErrormsgReadFailedOpenTmpFileFailedCompressProgExecutionFailedTmpFileCreationFailedFileOperandsCombinedUft8ErrorMultipleOutputFilesMinusInStdInEmptyInput", 1))
    {
        a0->field_8 = std::io::stdio::stdin().new();
        a0->field_10 = &g_670ba8;
        a0->field_0 = 0;
        return a0;
    }
    v0.open(v10, v11);
    if ((v0 & 1))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v3, v10, v11);
        v7 = v4;
        memcpy(&v6, &v3, 16);
        v8 = v2;
        v5 = 9223372036854775810;
        v12 = v5.new();
        v13 = 1;
        v14 = &g_6702c0;
    }
    else
    {
        v12 = v1.new();
        v14 = &g_670b50;
        v13 = 0;
    }
    a0->field_8 = v12;
    a0->field_10 = v14;
    a0->field_0 = v13;
    return a0;
}
