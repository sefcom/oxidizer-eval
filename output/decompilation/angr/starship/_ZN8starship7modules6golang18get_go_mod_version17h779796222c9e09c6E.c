long long starship::modules::golang::get_go_mod_version(void* a0, unsigned long long a1[25])
{
    int v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0x100]
    unsigned long long v2;  // [bp-0xf8]
    char v3;  // [bp-0xf0]
    unsigned long long v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    int v6;  // [bp-0xd8], Other Possible Types: char
    int v7;  // [bp-0xc8], Other Possible Types: char
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    char v12;  // [bp-0x90]
    int v13;  // [bp-0x70], Other Possible Types: char
    int v14;  // [bp-0x60]
    int v15;  // [bp-0x50]
    int v16;  // [bp-0x40]
    char v17;  // [bp-0x30]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx

    v6.read_file_from_pwd(a1, "go.modgo.sumgo.workglide.yamlGopkg.ymlGopkg.lock.go-versionGodeps", 6);
    if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v2 = *((long long *)&v7);
    v0 = v6;
    v6.new("(?:go\\s)(\\d+(\\.\\d+)+)Error in module `gradle`:\nsrc/modules/gradle.rs", 21);
    v12.unwrap(&v6, &g_11f4db0);
    v13.captures_at(&v12, v1, v2);
    if (*((int *)&v13) == 2)
    {
        core::ptr::drop_in_place<core::option::Option<regex::regex::string::Captures>>(&v13);
        *((unsigned long long *)a0) = 0x8000000000000000;
        goto LABEL_b9f47e;
    }
    else
    {
        v11 = *((long long *)&v17);
        v9 = v16;
        v8 = v15;
        v7 = v14;
        v6 = v13;
        v3.get_group(&v7, 1);
        if (*((int *)&v3) == 1)
        {
            v19 = v4.get(v5, v10, v11);
            if (!v19)
                core::str::slice_error_fail(v10, v11, v4, v5, &g_11f4770); /* do not return */
            v3.to_vec(v19, v20);
            *((unsigned long long *)&a0[16]) = v5;
            *((int128_t *)a0) = *((int128_t *)&v3);
            core::ptr::drop_in_place<regex::regex::string::Captures>(&v6);
LABEL_b9f47e:
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v12);
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<regex::regex::string::Captures>(&v6);
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v12);
        }
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    }
}
