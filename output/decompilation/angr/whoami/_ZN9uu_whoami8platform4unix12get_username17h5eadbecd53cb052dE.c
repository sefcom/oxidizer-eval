long long uu_whoami::platform::unix::get_username(unsigned long long a0[2])
{
    char v0;  // [bp-0xa0]
    char v1;  // [bp-0x88], Other Possible Types: unsigned long long
    char v2;  // [bp-0x80]

    v1.locate(uucore::features::process::geteuid());
    if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
    {
        uucore::features::entries::uid2usr::{{closure}}(&v0, &v1);
        memcpy(&v0, &v0, 16);
        return a0.into_resettable(&v0);
    }
    a0[1] = *((long long *)&v2);
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
