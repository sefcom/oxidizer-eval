long long starship::utils::render_time(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0x134]
    struct_0 *v1;  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    void* v3;  // [bp-0x118]
    int v4;  // [bp-0x110], Other Possible Types: char
    unsigned long v5;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    unsigned long long v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    void* v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    void* v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long long v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    void* v21;  // [bp-0x80]
    unsigned long long v22;  // [bp-0x78]
    unsigned long long v23;  // [bp-0x70]
    char v24;  // [bp-0x68]
    unsigned long long v25;  // [bp-0x58]
    char v26;  // [bp-0x48]
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rcx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rcx
    unsigned long v40;  // r13

    if ((a3 & (!a1 && !a2)))
    {
        v28 = "0msdms";
        v29 = 3;
    }
    else
    {
        if ((char)_ccall(2, 16, 0, a2 ^ (unsigned long long)(char)(999 < a1), (unsigned long long)(char)(999 < a1)) || a3)
        {
            v0 = a3;
            v30 = __udivti3(a1, a2, 1000, 0, a4, a5);
            v31 = v30;
            v6 = a1 - v30 * 1000;
            v35 = (v34 * 0x4000000000000000 | v31 >> 2) + (v34 >> 2) + (((v34 * 0x4000000000000000 | v31 >> 2) + (v34 >> 2) <= (v34 * 0x4000000000000000 | v31 >> 2) ? 1 : 0) & 1);
            v7 = a2 - (v34 * 1000 + v30 / 18446744073709552) - (a1 < v30 * 1000);
            v36 = __udivti3(a1, a2, 60000, 0, a2 - (v34 * 1000 + v30 / 18446744073709552) - (a1 < v30 * 1000), a5);
            v37 = __udivti3(a1, a2, 3600000, 0, a4, a5);
            v38 = __udivti3(a1, a2, 0x5265c00, 0, a4, a5);
            v39 = 3;
            if (!((char)_ccall(2, 16, a2 - 1 + ((a1 + -1 <= a1 ? 1 : 0) & 1), (unsigned long long)(char)(a1 - 1 < 59), (unsigned long long)(char)(a1 - 1 < 59))))
            {
                v39 = 6;
                if (!((char)_ccall(2, 16, a2 - 1 + ((a1 + -60 <= a1 ? 1 : 0) & 1), (unsigned long long)(char)(a1 - 60 < 3540), (unsigned long long)(char)(a1 - 60 < 3540))))
                    v39 = (_ccall(2, 16, 0, a2 - 1 + ((a1 + -3600 <= a1 ? 1 : 0) & 1) ^ (unsigned long long)(char)(82799 < a1 - 3600), (unsigned long long)(char)(82799 < a1 - 3600)) & 1) * 3 + 9;
            }
            v40 = (char)v0;
            v8 = v38;
            v9 = v34;
            v10 = "dms";
            v11 = 1;
            v12 = ((unsigned int)v37 & 7) + ((v34 >> 3) + (v34 * 0x2000000000000000 | v37 >> 3) + (((v34 >> 3) + (v34 * 0x2000000000000000 | v37 >> 3) <= v34 >> 3 ? 1 : 0) & 1)) % 3 * 8;
            v13 = 0;
            v14 = "hccgccclangvia [$symbol($version(-$name) )]($style)C ";
            v15 = 1;
            v16 = ((unsigned int)v36 & 3) + ((v34 >> 2) + (v34 * 0x4000000000000000 | v36 >> 2) + (((v34 >> 2) + (v34 * 0x4000000000000000 | v36 >> 2) <= v34 >> 2 ? 1 : 0) & 1)) % 15 * 4;
            v17 = 0;
            v18 = "ms";
            v19 = 1;
            v20 = ((unsigned int)v31 & 3) + (v35 - (unsigned int)(v35 / 15) * 15) * 4;
            v21 = 0;
            v22 = "s";
            v23 = 1;
            v2 = v40 * 5 + v39.with_capacity_in(1, 1, &g_11ed440);
            v3 = 0;
            v4.fold(&v8, &v24, &v2);
            if (!(char)v40)
            {
                v1->field_10 = v5;
                *((void*)&v1->field_0) = v4;
                return v5;
            }
            v25 = v5;
            memcpy(&v24, &v4, 16);
            v2.spec_to_string(&v6);
            v26.add(&v24, v34, 0);
            a0.add(&v26, "msError parsing continuation prompt:  not foundinternal error: entered unreachable code: Continuation prompt should have been handled aboveError parsing Error parsing right_format: ", 2);
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v2);
        }
        v28 = "0s0msdms";
        v29 = 2;
    }
    return a0.to_vec(v28, v29);
}
