long long bat::controller::Controller::print_input(void* a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [bp-0x6c8], Other Possible Types: char
    int v1;  // [bp-0x6b8], Other Possible Types: char
    int v2;  // [bp-0x6a8], Other Possible Types: char
    int v3;  // [bp-0x698]
    int v4;  // [bp-0x688], Other Possible Types: char
    int v5;  // [bp-0x678], Other Possible Types: void*
    char v7;  // [bp-0x668]
    char v8;  // [bp-0x658]
    void* v9;  // [bp-0x640]
    int v10;  // [bp-0x638]
    int v11;  // [bp-0x628]
    int v12;  // [bp-0x618]
    int v13;  // [bp-0x608]
    int v14;  // [bp-0x5f8]
    int v15;  // [bp-0x5e8]
    int v16;  // [bp-0x5d8]
    int v17;  // [bp-0x5c8]
    int v18;  // [bp-0x5b8]
    int v19;  // [bp-0x5a8]
    char v20;  // [bp-0x598]
    int v21;  // [bp-0x588]
    unsigned long long v22;  // [bp-0x580]
    unsigned long long v23;  // [bp-0x578]
    char v24;  // [bp-0x570]
    void* v25;  // [bp-0x570]
    char v26;  // [bp-0x568], Other Possible Types: unsigned long long
    char v27;  // [bp-0x560]
    char v28;  // [bp-0x558], Other Possible Types: unsigned long
    char v29;  // [bp-0x550]
    int v30;  // [bp-0x548], Other Possible Types: char
    int v31;  // [bp-0x538]
    char v32;  // [bp-0x528]
    int v33;  // [bp-0x518]
    int v34;  // [bp-0x508]
    int v35;  // [bp-0x4f8]
    int v36;  // [bp-0x4e8]
    int v37;  // [bp-0x4d8]
    char v38;  // [bp-0x4c8]
    int v39;  // [bp-0x4b8]
    char v40;  // [bp-0x4a8]
    void* v41;  // [bp-0x2d0]
    int v42;  // [bp-0x2c8]
    int v43;  // [bp-0x2b8]
    int v44;  // [bp-0x2a8]
    int v45;  // [bp-0x298]
    int v46;  // [bp-0x288]
    char v47;  // [bp-0x278]
    struct_0 *v49;  // r12
    void* v50;  // rdi
    unsigned long long v51;  // rsi
    unsigned long long v52;  // r12
    unsigned long long v53;  // r13

    v24.open(a2, a4);
    memcpy(&v0, &v26, 16);
    memcpy(&v1, &v28, 16);
    memcpy(&v2, &v30, 16);
    v3 = v31;
    memcpy(&v4, &v32, 16);
    if (v25 == 2)
    {
        a0[64] = v4;
        a0[48] = v3;
        a0[32] = v2;
        a0[16] = v1;
        *(a0) = v0;
        return v25;
    }
    v23 = *((long long *)&v40);
    v21 = v39;
    memcpy(&v20, &v38, 16);
    v19 = v37;
    v18 = v36;
    v17 = v35;
    v16 = v34;
    v15 = v33;
    v10 = v0;
    v11 = v1;
    v12 = v2;
    v13 = v3;
    v14 = v4;
    v9 = v25;
    v49 = a1->field_0;
    if ((char)(((0 ^ v49->field_90) & (0 ^ -(v49->field_90))) >> 63) || !v49->field_123 && v49->padding_98[40].changes())
    {
        if ((long long)v21 > 9223372036854775809)
        {
            bat::diff::get_git_diff(&v24, v22, v23);
            if (v49->field_90 == 0x8000000000000000 && v25 && !v28)
            {
                *((char *)a0) = 13;
                v50 = v25;
                v51 = v26;
                core::ptr::drop_in_place<core::option::Option<std::collections::hash::map::HashMap<u32,bat::diff::LineChange>>>(v25, v26);
                return (unsigned long long)core::ptr::drop_in_place<bat::input::OpenedInput>(&v9);
            }
            memcpy(&v8, &v29, 16);
            memcpy(&v7, &v27, 16);
            *((int128_t *)&v5) = *((int128_t *)&v25);
            if (!v49->field_123)
                goto LABEL_8379af;
LABEL_837966:
            v52 = v49.new();
            v53 = &g_ace358;
            goto LABEL_837ac8;
        }
        else if (v49->field_90 == 0x8000000000000000)
        {
            *((char *)a0) = 13;
            return (unsigned long long)core::ptr::drop_in_place<bat::input::OpenedInput>(&v9);
        }
    }
    v5 = 0;
    if (v49->field_123)
        goto LABEL_837966;
LABEL_8379af:
    v24.new(v49, a1->field_8, &v9, &(char)v5);
    memcpy(&v0, &v26, 16);
    memcpy(&v1, &v28, 16);
    memcpy(&v2, &v30, 16);
    v3 = v31;
    memcpy(&v4, &v32, 16);
    if (v25 == 0x8000000000000000)
    {
        a0[64] = v4;
        a0[48] = v3;
        a0[32] = v2;
        a0[16] = v1;
        *(a0) = v0;
    }
    else
    {
        ::libc.so.0::memcpy(&v47, &v33, 584);
        v41 = v25;
        v42 = v0;
        v43 = v1;
        v44 = v2;
        v45 = v3;
        v46 = v4;
        v52 = v41.new();
        v53 = &g_ace320;
LABEL_837ac8:
        a0.print_file(a1, v52, v53, a3, &v9, a5 ^ 1, &(char)v5);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v52, v53);
    }
    core::ptr::drop_in_place<core::option::Option<std::collections::hash::map::HashMap<u32,bat::diff::LineChange>>>(v50, v51);
    return (unsigned long long)core::ptr::drop_in_place<bat::input::OpenedInput>(&v9);
}
