long long uu_split::Settings::instantiate_current_writer(unsigned long long a0[2], unsigned long long a1[20], unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    char v5;  // [bp-0x90]
    int v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x48]
    void* v13;  // rsi

    if ((char)uu_split::platform::unix::paths_refer_to_same_file(a1[15], a1[16], a2, a3))
    {
        v0.to_vec("filesizei128", 4);
        v2 = 0;
        v3 = a2;
        v4 = a3;
        v5 = 1;
        v10.spec_to_string(&v2);
        v7 = v1;
        v6 = v0;
        memcpy(&v8, &v10, 16);
        v9 = *((long long *)&v11);
        v10.from_iter(&v6);
        uucore::mods::locale::get_message_with_args(&v0, "split-error-would-overwrite-inputsplit-error-cannot-determine-file-sizesplit-error-cannot-determine-input-sizecreating file \n", 33, &v10);
        a0[1] = 40._new(v0.new(), &g_5a6e60);
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v13 = 0;
    if (!((char)(((0 ^ a1[17]) & (0 ^ -(a1[17]))) >> 63)))
        v13 = a1[18];
    uu_split::platform::unix::instantiate_current_writer(a0, v13, a1[19], a2, a3, a4);
    return a0;
}
