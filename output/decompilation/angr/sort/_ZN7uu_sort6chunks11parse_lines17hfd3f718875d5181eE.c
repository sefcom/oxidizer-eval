void uu_sort::chunks::parse_lines(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3[12], char a4, unsigned long long a5)
{
    void* v0;  // [bp-0xb8], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    unsigned long long v3[12];  // [bp-0x98]
    char *v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    uint128_t v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x70]
    char v8;  // [bp-0x68]
    unsigned short v9;  // [bp-0x38]
    unsigned int v11;  // ebp
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // r13
    unsigned long long v15;  // 4096

    v11 = a4;
    v0 = 0;
    v13 = ::0x4b2540::core::char::methods::encode_utf8_raw(v11, &v0).strip_suffix_of(v12, a0, a1);
    if (!v13)
    {
        v14 = a1;
        if (v13)
            goto LABEL_4c2504;
LABEL_4c2503:
        v15 = a0;
    }
    else
    {
        v14 = v12;
        if (!v13)
            goto LABEL_4c2503;
LABEL_4c2504:
        v15 = v13;
    }
    if (a2->field_10)
    {
        core::panicking::panic("assertion failed: lines.is_empty()src/uu/sort/src/ext_sort.rs", 34, &g_58c5a0); /* do not return */
    }
    else if (a3[2])
    {
        core::panicking::panic("assertion failed: line_data.selections.is_empty()assertion failed: lines.is_empty()src/uu/sort/src/ext_sort.rs", 49, &g_58c588); /* do not return */
    }
    else if (a3[5])
    {
        core::panicking::panic("assertion failed: line_data.num_infos.is_empty()assertion failed: line_data.selections.is_empty()assertion failed: lines.is_empty()src/uu/sort/src/ext_sort.rs", 48, &g_58c570); /* do not return */
    }
    else if (a3[8])
    {
        core::panicking::panic("assertion failed: line_data.parsed_floats.is_empty()assertion failed: line_data.num_infos.is_empty()assertion failed: line_data.selections.is_empty()assertion failed: lines.is_empty()src/uu/sort/src/ext_sort.rs", 52, &g_58c558); /* do not return */
    }
    else if (!a3[11])
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v8.into_searcher(v11, v15, v14);
        v6 = 0;
        v7 = v14;
        v9 = 1;
        v3[0] = a3;
        v4 = &v0;
        v5 = a5;
        a2.extend_desugared(&v3);
        core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpmc::array::Slot<uu_sort::chunks::Chunk>>>(v0, 8);
        return;
    }
    else
    {
        core::panicking::panic("assertion failed: line_data.line_num_floats.is_empty()assertion failed: line_data.parsed_floats.is_empty()assertion failed: line_data.num_infos.is_empty()assertion failed: line_data.selections.is_empty()assertion failed: lines.is_empty()src/uu/sort/src/ext", 54, &g_58c540); /* do not return */
    }
}
