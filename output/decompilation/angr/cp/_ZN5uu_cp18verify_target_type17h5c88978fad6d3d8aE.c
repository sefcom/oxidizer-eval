long long uu_cp::verify_target_type(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char *a3)
{
    int v0;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc8]
    char v5;  // [bp-0xc0]
    int v6;  // [bp-0xb8], Other Possible Types: char
    char v7;  // [bp-0xa8]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x78]
    int v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x60]
    int v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x48]
    int v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x30]
    char v17;  // al
    unsigned long v18;  // rdi
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax

    v17 = a1.is_dir(a2);
    if (*(a3))
    {
        if (!v17)
            goto LABEL_4e2728;
        v0.to_vec("dir/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?", 3);
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v6.spec_to_string(&v2);
        v13 = v1;
        v12 = v0;
        v14 = v6;
        v15 = *((long long *)&v7);
        v6.from_iter(&v12);
        v18 = a0 + 1;
        v19 = "cp-error-cannot-overwrite-directory-with-non-directory  ()?";
        v20 = 54;
        goto LABEL_4e27cb;
    }
    else if (v17)
    {
LABEL_4e2728:
        v21 = 9223372036854775820;
    }
    else
    {
        v0.to_vec("targetcp-error-target-not-directorySkipped copying file (exit with error = )", 6);
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        (char)v6.spec_to_string(&v2);
        v9 = v1;
        v8 = v0;
        v10 = v6;
        v11 = *((long long *)&v7);
        (char)v6.from_iter(&v8);
        v18 = a0 + 1;
        v19 = "cp-error-target-not-directorySkipped copying file (exit with error = )";
        v20 = 29;
LABEL_4e27cb:
        uucore::mods::locale::get_message_with_args(v18, v19, v20, &v6);
        v21 = 9223372036854775811;
    }
    *(a0) = v21;
    return a0;
}
