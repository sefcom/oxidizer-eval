long long uu_head::Mode::from(int a0[17], unsigned long long a1)
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

    v7.try_get_one(a1, "BYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-inva", 5);
    v10 = "BYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-inva".unwrap(5, &v7);
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
            a0[0] = v0;
            *((char *)&a0[16]) = v1;
            return v1;
        }
        v11 = v6 | 2;
    }
    else
    {
        v7.try_get_one(a1, "LINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolcha", 5);
        v12 = "LINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolcha".unwrap(5, &v7);
        if (!v12)
        {
            *((unsigned long long *)&a0[8]) = 0;
            *((unsigned long long *)&a0[16]) = 10;
            *((unsigned long long *)&a0[0]) = 0x8000000000000000;
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
            a0[0] = v0;
            *((char *)&a0[16]) = v1;
            return v1;
        }
        v11 = v6;
    }
    *((unsigned long long *)&a0[8]) = v11;
    *((unsigned long long *)&a0[16]) = v5;
    *((unsigned long long *)&a0[0]) = 0x8000000000000000;
    return 0x8000000000000000;
}
