long long uu_join::State::next_line(struct_1 *a0, struct_0 *a1, char a2[2])
{
    char v0;  // [bp-0x229]
    char *v1;  // [bp-0x228], Other Possible Types: int
    unsigned long long v2;  // [bp-0x220]
    char *v3;  // [bp-0x218], Other Possible Types: unsigned long long
    char v4;  // [bp-0x210], Other Possible Types: unsigned long long
    char v5;  // [bp-0x208]
    unsigned long long v6;  // [bp-0x200]
    char v7;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x1f0]
    int v9;  // [bp-0x1e8], Other Possible Types: char *, char, unsigned long long
    unsigned long long v10;  // [bp-0x1e0]
    int v11;  // [bp-0x1d8], Other Possible Types: void*, char
    char v12;  // [bp-0x1c8]
    char v13;  // [bp-0x1b8]
    char v14;  // [bp-0x1a8]
    char v15;  // [bp-0x198]
    unsigned long long v16;  // [bp-0x188]
    unsigned long long v17;  // [bp-0x180]
    char v18;  // [bp-0x178]
    unsigned long long v19;  // [bp-0x168]
    unsigned long long v20;  // [bp-0x160]
    int v21;  // [bp-0x158]
    char v22;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x140]
    int v24;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x130]
    unsigned long long v26;  // [bp-0x128]
    int v27;  // [bp-0x120]
    unsigned long long v28;  // [bp-0x110]
    int v29;  // [bp-0x108], Other Possible Types: char
    unsigned long long v30;  // [bp-0xf8]
    unsigned long long v31;  // [bp-0xe8]
    unsigned long long v32;  // [bp-0xe0]
    int v33;  // [bp-0xd8], Other Possible Types: char
    int v34;  // [bp-0xc8], Other Possible Types: char
    int v35;  // [bp-0xb8], Other Possible Types: char
    unsigned long v36;  // [bp-0xa8]
    char v37;  // [bp-0xa0]
    unsigned long long v38;  // [bp-0x98]
    unsigned long long v39;  // [bp-0x90]
    char v40;  // [bp-0x88]
    unsigned long long v41;  // [bp-0x78]
    int v42;  // [bp-0x70]
    unsigned long long v43;  // [bp-0x60]
    void* v44;  // [bp-0x50]
    int v45;  // [bp-0x48]
    char v46;  // [bp-0x38]
    unsigned long long v48;  // rax
    unsigned long v49;  // rax
    int v50;  // xmm0
    int v51;  // xmm2
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rdx
    int v55;  // xmm2

    v7.read_line(a1, a2 + 1);
    if (v7 == 9223372036854775809)
    {
        *((unsigned long long *)&a0->field_8) = 0x8000000000000000;
        a0->field_10[0] = v32;
        *((unsigned long long *)&a0->field_0) = 9223372036854775809;
        return v8;
    }
    memcpy(&v34, &v11, 16);
    memcpy(&v33, &v9, 16);
    v31 = v7;
    v32 = v8;
    if (v7 == 0x8000000000000000)
    {
        v48 = v31.drop_in_place<core::option::Option<uu_join::Line>>();
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        return v48;
    }
    memcpy(&v22, &v34, 16);
    v21 = v33;
    v19 = v31;
    v20 = v32;
    v49 = a2[1];
    v0 = v49;
    if (v0 == 1)
    {
        v50 = *((int128_t *)&v31);
        v51 = v34;
    }
    else
    {
        v52 = a1.get_current_key();
        v53 = v19.get_field(*((long long *)&a1->padding_28[16]));
        v49 = a2[0].compare(v52, v54, v53, v54);
        if ((char)v49 == 1 && (v0 == 2 || a1->padding_48[11] == 1 && !a1->padding_48[10]))
        {
            v7.to_vec("filesizespeci128", 4);
            v3 = v9;
            *((int128_t *)&v1) = *((int128_t *)&v7);
            v44 = 0;
            *((int128_t *)&v45) = *((int128_t *)&(&a1->padding_0)[1]);
            v46 = 0;
            v7.spec_to_string(&v44);
            v41 = v3;
            memcpy(&v40, &v1, 16);
            *((int128_t *)&v42) = *((int128_t *)&v7);
            v43 = v9;
            v7.to_vec("line_num", 8);
            v3 = v9;
            *((int128_t *)&v1) = *((int128_t *)&v7);
            v7.spec_to_string(&a1->padding_48);
            v26 = v3;
            *((int128_t *)&v24) = (int128_t)v1;
            *((int128_t *)&v27) = *((int128_t *)&v7);
            v28 = v9;
            v7.to_vec("contentjoin-error-not-sorted", 7);
            v30 = v9;
            memcpy(&v29, &v7, 16);
            v37.from_utf8_lossy(v22, v23);
            v7.to_vec(v38, v39);
            v6 = v9;
            memcpy(&v4, &v7, 16);
            v1 = v29;
            v3 = v30;
            v55 = (int128_t)(&v42)[8];
            memcpy(&v7, &v40, 16);
            *((int128_t *)&v9) = *((int128_t *)&v41);
            v11 = v55;
            memcpy(&v14, &(char)v27, 16);
            memcpy(&v13, &v26, 16);
            memcpy(&v12, &v24, 16);
            memcpy(&v18, &v5, 16);
            v16 = v3;
            v17 = v4;
            memcpy(&v15, &v1, 16);
            (char)v1.from_iter(&v7);
            uucore::mods::locale::get_message_with_args(&v35, "join-error-not-sorted", 21, &(char)v1);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v37);
            if (v0 == 2)
            {
                a0->field_10[1] = v36;
                *((void*)&a0->field_8) = v35;
                *((unsigned long long *)&a0->field_0) = 9223372036854775809;
                return ::0x4a0db0::core::ptr::drop_in_place<uu_join::Line>(&v19);
            }
            v24 = uucore::execution_phrase();
            v25 = v54;
            v1 = &v24;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &v35;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v7 = &g_593a90;
            v8 = 3;
            v11 = 0;
            v9 = &v1;
            v10 = 2;
            std::io::stdio::_eprint(&v7);
            a1->padding_48[10] = 1;
            v49 = ::0x4a0f00::core::ptr::drop_in_place<alloc::string::String>(&v35);
        }
        v50 = *((int128_t *)&v19);
        v51 = *((int128_t *)&v22);
        v33 = v21;
    }
    *((void*)&a0->field_20) = v51;
    *((void*)&a0->field_10[0]) = v33;
    *((void*)&a0->field_0) = v50;
    return v49;
}
