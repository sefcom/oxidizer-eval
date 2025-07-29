long long uu_cp::delete_dest_if_needed_and_allowed(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[90], char a6, unsigned long long a7)
{
    char v0;  // [bp-0x298]
    char v1;  // [bp-0x290]
    char v2;  // [bp-0x260]
    int v3;  // [bp-0x1e8], Other Possible Types: char
    int v4;  // [bp-0x1d8]
    int v5;  // [bp-0x1c8]
    char v6;  // [bp-0x1b8]
    int v7;  // [bp-0x158]
    int v8;  // [bp-0x148]
    int v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x128]
    char v11;  // [bp-0xc0]
    unsigned int v12;  // eax
    unsigned long long v13;  // rax
    unsigned long v14;  // rax

    if (a5[84] < 2)
    {
        v12 = a5[85];
        if (v12 != 2)
        {
            if (v12 == 1 || (char)uucore::features::fs::is_symlink_loop(a3, a4))
                goto LABEL_4df816;
            std::fs::metadata(&v0, a3, a4);
            if (*((int *)&v0) == 2)
            {
                v13 = *((long long *)&v1);
                *((unsigned long long *)&a0->field_0) = 9223372036854775809;
                *((unsigned long long *)&a0->padding_1[7]) = v13;
                return v13;
            }
            if (!(v2 & 146))
                goto LABEL_4df816;
        }
        else if (a5[80])
        {
            v14 = a5[89];
            if (a6 == 1 && !(char)v14)
                v14 = a5[88];
            v0.from_path(a1, a2, v14 & 4294967295);
            if ((v0 & 1))
            {
                uu_cp::delete_dest_if_needed_and_allowed::{{closure}}(&v3, a1, a2, *((long long *)&v1));
                v10 = *((long long *)&v6);
                v9 = v5;
                v8 = v4;
                v7 = v3;
                a0->field_30 = v10;
                *((void*)&a0->field_20) = v5;
                *((void*)&a0->field_10) = v4;
                *((void*)&a0->field_0) = v3;
                return v10;
            }
            memcpy(&(char)v3, &v1, 144);
            memcpy(&(char)v7, &(char)v3, 144);
            memcpy(&v11, &(char)v7, 144);
            if (a7.get_inner(&v11))
            {
LABEL_4df816:
                v13 = std::fs::remove_file(a3, a4);
                if (v13)
                {
                    *((unsigned long long *)&a0->field_0) = 9223372036854775809;
                    *((unsigned long long *)&a0->padding_1[7]) = v13;
                    return v13;
                }
            }
        }
    }
    *((unsigned long long *)&a0->field_0) = 9223372036854775820;
    return 9223372036854775820;
}
