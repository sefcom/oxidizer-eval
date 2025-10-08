long long uu_pinky::platform::unix::gecos_to_fullname(void* a0, unsigned long long a1[4])
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    int v6;  // [bp-0x38], Other Possible Types: char
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rdx

    if ((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0.clone(&a1[3]);
    if (((char)core::str::<impl str>::find(v1, v2) & 1))
        v0.truncate(v9);
    v3.capitalize(a1[1], a1[2]);
    alloc::str::<impl str>::replace(&v6, v1, v2, v4, v5);
    *((long long *)&a0[16]) = *((long long *)&v7);
    *(a0) = v6;
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
