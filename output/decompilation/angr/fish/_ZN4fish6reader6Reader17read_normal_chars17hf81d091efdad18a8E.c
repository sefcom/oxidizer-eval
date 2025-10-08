void fish::reader::Reader::read_normal_chars(unsigned long a0, struct_1 **a1)
{
    void* v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    uint128_t v3[3];  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    int v5;  // [bp-0x98]
    int v6;  // [bp-0x88], Other Possible Types: char
    int v7;  // [bp-0x78], Other Possible Types: char
    int v8;  // [bp-0x60]
    char v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // rax
    struct_0 *v15;  // rdx
    unsigned int v16;  // eax
    unsigned int v17;  // eax

    v4 = 9223372036854775812;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    if (*((long long *)(*(a1).rls() + 32)).map_or(*(a1)).min(0x100))
    {
        while (true)
        {
            v8.read_char(a1);
            if ((long long)v8 <= 9223372036854775811 || !(char)fish::fd_readable_set::poll_fd_readable(*(a1)->field_4f0))
            {
                core::ptr::drop_in_place<core::option::Option<fish::input_common::CharEvent>>(&v4);
                memcpy(&v7, &v11, 16);
                memcpy(&v6, &v9, 16);
                v5 = v8;
                if (1)
                    break;
LABEL_13fd41f:
                v17 = *(a1).active_edit_line();
                *(a1).insert_string(v17 & 1, 4, 0);
                if (!((char)v17 & 1))
                    *(a1).clear_pager();
                *((char *)(*(a1).rls_mut() + 42)) = 95;
                break;
            }
            if (v12 == 1)
            {
                *(a1).active_edit_line();
                if (!v15->field_78)
                    goto LABEL_13fd370;
            }
            v16 = v10.codepoint_text();
            if (v16 != 0x110000)
                v0.push(v16);
LABEL_13fd370:
            core::ptr::drop_in_place<fish::input_common::CharEvent>(&v8);
            if (0 >= v14)
                goto LABEL_13fd41f;
        }
    }
    *((void*)&v3[2]) = v7;
    *((void*)&v3[1]) = v6;
    *((void*)&v3[0]) = v5;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
