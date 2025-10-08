int starship::modules::java::get_java_version(unsigned long long *a0, unsigned long long a1)
{
    char v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    int v4;  // [bp-0x90]
    int v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    int v7;  // [bp-0x68], Other Possible Types: char
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x48]
    int v10;  // [bp-0x38]
    char v11;  // [bp-0x28]
    unsigned int v13;  // eax

    v0.get_env("JAVA_HOME-Xinternalversion", 9);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        *((int128_t *)&v4) = *((int128_t *)&v1);
        v3 = v0;
        starship::modules::java::get_java_version::{{closure}}(&v0, &v3);
        if (v0 == 0x8000000000000000)
            goto LABEL_ba3914;
        v8 = v2;
        memcpy(&v7, &v0, 16);
    }
    else
    {
LABEL_ba3914:
        v7.to_vec("javavcsh", 4);
    }
    v13 = v3.exec_cmd(a1, &v7);
    if (v3 != 0x8000000000000000)
    {
        memcpy(&v11, &v6, 16);
        v10 = v5;
        memcpy(&v9, &v3, 16);
        starship::utils::get_command_string_output(&v3, &v9);
        starship::modules::java::parse_java_version(a0, (long long)v4, (long long)v5);
        return (unsigned int)core::ptr::drop_in_place<alloc::string::String>(&v3);
    }
    *(a0) = 0x8000000000000000;
    return v13;
}
