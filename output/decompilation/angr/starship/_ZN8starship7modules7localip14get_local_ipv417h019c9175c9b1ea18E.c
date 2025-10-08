long long starship::modules::localip::get_local_ipv4(void* a0)
{
    char v0;  // [bp-0x4c], Other Possible Types: unsigned int
    char v1;  // [bp-0x48], Other Possible Types: unsigned short
    char v2;  // [bp-0x44]
    unsigned short v3;  // [bp-0x42]
    unsigned long long v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x21]
    unsigned int v7;  // [bp-0x20]
    unsigned short v8;  // [bp-0x1e]
    unsigned long long v9;  // [bp-0x1c]
    unsigned int v10;  // [bp-0x14]
    unsigned int v12;  // ebp
    unsigned long long v13;  // rax
    unsigned long v14;  // rcx
    unsigned int v15;  // edi
    unsigned int v16;  // eax
    unsigned int *v17;  // rcx
    char v18;  // dl

    std::net::each_addr(&v1);
    if (*((int *)&v1) == 1)
    {
        *((unsigned long long *)&a0[8]) = v4;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v12 = *((int *)&v2);
    v13 = std::net::each_addr(&v0);
    if (v13)
    {
        *((unsigned long long *)&a0[8]) = v13;
        goto LABEL_ba74bc;
    }
    else
    {
        v1.local_addr(&v0);
        v14 = v1;
        if ((unsigned short)v14 == 2)
        {
            *((unsigned long long *)&a0[8]) = v4;
            v12 = v0;
LABEL_ba74bc:
            *((unsigned long long *)a0) = 0x8000000000000000;
            v15 = v12;
        }
        else
        {
            v16 = *((int *)&(&v1)[2]);
            if (((char)v14 & 1))
            {
                v17 = &v10;
                v16 = *((int *)&v5);
                *((short *)&v7) = *((int *)&(&v1)[2]) >> 16;
                v8 = v3;
                v9 = v4;
                v18 = 1;
            }
            else
            {
                v17 = &(char)v7;
            }
            *(v17) = v16;
            v6 = v18;
            v1.spec_to_string(&v6);
            *((long long *)&a0[16]) = *((long long *)&v5);
            *((int128_t *)a0) = *((int128_t *)&v1);
            v15 = v0;
        }
    }
    return core::ptr::drop_in_place<gix_packetline_blocking::write::blocking_io::Writer<std::process::ChildStdin>>(v15);
}
