long long uu_head::Mode::from(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x77]
    char v3;  // [bp-0x74]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    char v6;  // [bp-0x58]
    char v7;  // [bp-0x48]
    char v8;  // [bp-0x38]
    unsigned long long v10[3];  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12[3];  // rax

    v7.try_get_one(a1, "BYTESbytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIET");
    v10 = "BYTESbytes[-]NUMprint the first NUM bytes of each file;\nwith the leading '-', print all but the last\nNUM bytes of each fileLINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIET".unwrap(&v7);
    if (v10)
    {
        uu_head::parse::parse_num(&v4, v10[1], v10[2]);
        if (*((int *)&v4) != 4)
        {
            memcpy(&v8, &v6, 16);
            memcpy(&v7, &v4, 16);
            uu_head::Mode::from::{{closure}}(&v0, &v7);
            *((int *)&a0[20]) = *((int *)&v3);
            *((int *)&a0[17]) = *((int *)&v2);
            *(a0) = v0;
            *((char *)&a0[16]) = v1;
            return v1;
        }
        v11 = v6 | 2;
    }
    else
    {
        v7.try_get_one(a1, "LINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpres");
        v12 = "LINESlinesprint the first NUM lines instead of the first 10;\nwith the leading '-', print all but the last\nNUM lines of each fileQUIETquietsilentnever print headers giving file namesVERBOSEverbosealways print headers giving file names-PRESUME-INPUT-PIPEpres".unwrap(&v7);
        if (!v12)
        {
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned long long *)&a0[16]) = 10;
            *((unsigned long long *)a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
        uu_head::parse::parse_num(&v4, v12[1], v12[2]);
        if (*((int *)&v4) != 4)
        {
            memcpy(&v8, &v6, 16);
            memcpy(&v7, &v4, 16);
            uu_head::Mode::from::{{closure}}(&v0, &v7);
            *((int *)&a0[20]) = *((int *)&v3);
            *((int *)&a0[17]) = *((int *)&v2);
            *(a0) = v0;
            *((char *)&a0[16]) = v1;
            return v1;
        }
        v11 = v6;
    }
    *((unsigned long long *)&a0[8]) = v11;
    *((unsigned long long *)&a0[16]) = v5;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
