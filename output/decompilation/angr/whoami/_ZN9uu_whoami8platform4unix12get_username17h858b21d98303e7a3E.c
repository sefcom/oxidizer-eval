long long uu_whoami::platform::unix::get_username(unsigned long long a0[3])
{
    char v0;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x98]
    unsigned long v2;  // [bp-0x90]
    char v3;  // [bp-0x88], Other Possible Types: unsigned long long
    char v4;  // [bp-0x80]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx

    v3.locate(uucore::features::process::geteuid());
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        v7 = 0x8000000000000000;
        v8 = *((long long *)&v4);
    }
    else
    {
        uucore::features::entries::uid2usr::{{closure}}(&v0, &v3);
        v7 = v0;
        v8 = v1;
        a0[2] = v2;
    }
    a0[1] = v8;
    a0[0] = v7;
    return v7;
}
