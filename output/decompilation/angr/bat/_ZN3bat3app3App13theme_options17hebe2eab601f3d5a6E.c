double bat::app::App::theme_options(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0xa8]
    int v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x68]
    int v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned long long v12[3];  // rax
    unsigned long long v13;  // rax
    unsigned long long v14[3];  // rax
    unsigned long long v15[3];  // rax
    unsigned long long v16;  // rax
    int v17;  // xmm0

    v3.try_get_one(a1, "themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ", 5);
    v12 = "themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ".unwrap(5, &v3);
    if (v12)
    {
        v3.from_str(v12[1], v12[2]);
        v4.from_residual(&v3);
        v13 = v5;
        v1 = v6;
    }
    else
    {
        v1 = 0;
        v13 = 9223372036854775809;
    }
    v0 = v13;
    v3.try_get_one(a1, "theme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache", 10);
    v14 = "theme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache".unwrap(10, &v3);
    if (v14)
    {
        v3.from_str(v14[1], v14[2]);
        v7.from_residual(&v3);
    }
    else
    {
        v8 = 9223372036854775809;
    }
    v3.try_get_one(a1, "theme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) ", 11);
    v15 = "theme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) ".unwrap(11, &v3);
    if (v15)
    {
        v3.from_str(v15[1], v15[2]);
        v4.from_residual(&v3);
        v16 = v5;
        memcpy(&v10, &v6, 16);
    }
    else
    {
        v16 = 9223372036854775809;
    }
    a0->field_40 = v2;
    a0->field_30 = *((int128_t *)&v0);
    a0->field_0 = *((int128_t *)&v8);
    a0->field_10 = v9;
    a0->field_18 = v16;
    v17 = *((int128_t *)&v10);
    *((void*)&a0->field_20) = v17;
    return (unsigned long long)v17;
}
