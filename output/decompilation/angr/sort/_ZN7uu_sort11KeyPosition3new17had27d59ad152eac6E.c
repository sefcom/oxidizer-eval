long long uu_sort::KeyPosition::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x18d]
    int v1;  // [bp-0x188], Other Possible Types: char
    unsigned long long v2;  // [bp-0x180]
    unsigned long v3;  // [bp-0x178], Other Possible Types: unsigned long long
    int v4;  // [bp-0x170]
    unsigned long long v5;  // [bp-0x168]
    unsigned long long v6;  // [bp-0x160]
    char v7;  // [bp-0x158], Other Possible Types: unsigned long long
    char v8;  // [bp-0x157]
    unsigned long long v9;  // [bp-0x150]
    char v10;  // [bp-0x148]
    char v11;  // [bp-0x138]
    int v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x110]
    unsigned long long v15;  // [bp-0x108]
    unsigned long long v16;  // [bp-0x100]
    int v17;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v18;  // [bp-0xd8]
    char v19;  // [bp-0xc8]
    unsigned long long v20;  // [bp-0xb8]
    int v21;  // [bp-0xb0]
    unsigned long long v22;  // [bp-0xa0]
    void* v23;  // [bp-0x98]
    unsigned long long v24;  // [bp-0x90]
    unsigned long long v25;  // [bp-0x88]
    char v26;  // [bp-0x80]
    void* v27;  // [bp-0x78]
    unsigned long long v28;  // [bp-0x70]
    char v29;  // [bp-0x68]
    unsigned short v30;  // [bp-0x38]
    unsigned long long v32;  // rax
    unsigned long long v33;  // r15
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // r14
    unsigned long long v37;  // rax

    v29.into_searcher(46, a1, a2);
    v27 = 0;
    v28 = a2;
    v30 = 1;
    v32 = v27.next();
    if (v32)
    {
        v33 = v32;
        v34 = v27.next();
        ::0x506490::core::num::<impl u64>::from_str_radix(&v7, v33, v35);
        if (v7)
        {
            v36 = 18446744073709551615;
            if (v8 == 2)
                goto LABEL_50d1a0;
            v0 = v8;
            (char)v1.to_vec("fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0,", 5);
            v23 = 0;
            v24 = v33;
            v25 = v35;
            v26 = 1;
            v7.spec_to_string(&v23);
            v20 = v3;
            memcpy(&v19, &v1, 16);
            *((int128_t *)&v21) = *((int128_t *)&v7);
            v22 = *((long long *)&v10);
            v7.to_vec("errorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0, but ", 5);
            v18 = *((long long *)&v10);
            memcpy(&v17, &v7, 16);
            v7.spec_to_string(&v0);
            v3 = v18;
            v1 = v17;
            *((int128_t *)&v4) = *((int128_t *)&v7);
            v6 = *((long long *)&v10);
            memcpy(&v7, &v19, 16);
            memcpy(&v10, &v20, 16);
            memcpy(&v11, &v21, 16);
            v15 = v5;
            v16 = v6;
            v13 = v3;
            v14 = (long long)v4;
            v12 = v17;
            (char)v1.from_iter(&v7);
            v37 = uucore::mods::locale::get_message_with_args(&a0->field_8, "sort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0, but that should already have caused an e", 29, &(char)v1);
        }
        else if (v36)
        {
LABEL_50d1a0:
            v9 = a3;
            v7 = 0x8000000000000000;
            (char)v1.map_or(v34, v35, &v7);
            v37 = v2;
            if ((char)(((0 ^ (long long)v1) & (0 ^ -((long long)v1))) >> 63))
            {
                *((unsigned long long *)&a0->field_8) = v36;
                *((unsigned long long *)&a0->padding_9[7]) = v2;
                a0->field_18 = a4;
                a0->field_0 = 0;
                return a4;
            }
            *((long long *)&a0->field_8) = (long long)v1;
            *((unsigned long long *)&a0->padding_9[7]) = v2;
            *((unsigned long *)&a0->field_18) = v3;
        }
        else
        {
            v37 = uucore::mods::locale::get_message(&a0->field_8, "sort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unreachable code: This should only happen if the field start index is 0, but that ", 31);
        }
    }
    else
    {
        uu_sort::KeyPosition::new::{{closure}}(&(char)v7, a1, a2);
        v37 = *((long long *)&v10);
        *((int128_t *)&a0->field_8) = *((int128_t *)&v7);
        *((unsigned long long *)&a0->field_18) = v37;
    }
    a0->field_0 = 1;
    return v37;
}
