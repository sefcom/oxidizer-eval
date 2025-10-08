long long fish::env_universal_common::EnvUniversal::format_for_contents(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    unsigned short v3;  // [bp-0xb8]
    char v4;  // [bp-0xb6]
    char v5;  // [bp-0xb5]
    int v6;  // [bp-0xb4]
    char v7;  // [bp-0xa4]
    char v8;  // [bp-0x94]
    char v9;  // [bp-0x87]
    unsigned short v10;  // [bp-0x71]
    char v11;  // [bp-0x6f]
    char v12;  // [bp-0x6e]
    int v13;  // [bp-0x6d]
    char v14;  // [bp-0x5d]
    char v15;  // [bp-0x4d]
    char v16;  // [bp-0x40]
    char *v18;  // rax
    unsigned long long v19;  // rdx
    char *v20;  // r15
    unsigned long long v21;  // rdx
    unsigned int v22;  // ebx

    v0 = a0;
    v1 = a1;
    v2 = 0;
    if (!v0.next())
        return 0;
    do
    {
        if (!v19)
            continue;
        if (*(v18) != 35)
            break;
        v3.spec_new_impl(v18, v19);
        v20 = v3.unwrap(&g_14d7378);
        if (__isoc99_sscanf(v20, "# VERSION: %64s", &v10) == 1)
        {
            v4 = v11;
            v3 = v10;
            v6 = v13;
            memcpy(&v7, &v14, 16);
            memcpy(&v8, &v15, 16);
            memcpy(&v9, &v16, 16);
            v5 = v12;
            v22 = 2 - ((char)core::slice::<impl [T]>::starts_with(&v3, 65, "3.0# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", 3) & !v5);
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v20, v21);
            return v22;
        }
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v20, v21);
        v18 = v0.next();
    } while (v18);
    return 0;
}
