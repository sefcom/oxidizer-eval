int uu_csplit::csplit(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    int v0;  // [bp-0x1a8], Other Possible Types: char
    int v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x198]
    char v3;  // [bp-0x188]
    char v4;  // [bp-0x178], Other Possible Types: unsigned long, unsigned long long
    int v5;  // [bp-0x178]
    char v6;  // [bp-0x170], Other Possible Types: unsigned long long
    int v7;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x160]
    char v9;  // [bp-0x158]
    char v10;  // [bp-0x148]
    int v11;  // [bp-0x138]
    unsigned long long v12;  // [bp-0x130]
    unsigned long long v13;  // [bp-0x128]
    void* v14;  // [bp-0x120]
    unsigned long long v15;  // [bp-0x118]
    uint128_t v16;  // [bp-0x110]
    unsigned long long v17;  // [bp-0x100]
    char v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xf0]
    char v20;  // [bp-0xe8]
    unsigned long long v21;  // [bp-0xe0]
    unsigned long long v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xd0]
    unsigned long long v24;  // [bp-0xc8]
    struct_1 *v25;  // [bp-0xa8]
    uint128_t v26;  // [bp-0xa0]
    char v27;  // [bp-0x90]
    int v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x78]
    char v30;  // [bp-0x70]
    int v31;  // [bp-0x68], Other Possible Types: char
    unsigned long long v32;  // [bp-0x58]
    unsigned long long v33;  // [bp-0x50]
    unsigned long long v34;  // [bp-0x48]
    unsigned long long v35;  // [bp-0x40]
    char v36;  // [bp-0x38]
    char v38;  // bpl
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    int v41;  // xmm0
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned int v44;  // eax
    unsigned long long v45;  // rcx

    v17 = a4;
    v18 = a5;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v19 = 1;
    v20 = 0;
    v25 = a1;
    v26 = 0;
    v24 = 0x8000000000000000;
    v27 = 0;
    uu_csplit::patterns::get_patterns(&v4, a2, a3);
    memcpy(&v0, &v6, 16);
    v2 = v8;
    if (v4 != 13)
    {
        v45 = *((long long *)&v9);
        a0->field_10[1] = v2;
        *((void*)&a0->field_8) = v0;
        *((unsigned long *)&a0->field_0) = v4;
        a0->field_20 = v45;
        v38 = 1;
        goto LABEL_592536;
    }
    v28 = v1;
    v29 = v2;
    uu_csplit::do_csplit(&v0, &v24, &v28, &v14);
    v38 = 1;
    if ((int)v1 != 13)
    {
LABEL_592429:
        if (a1->field_60 == 1)
            goto LABEL_59262e;
        v43 = v24.delete_all_splits();
        if (!v43)
            goto LABEL_59262e;
        *((unsigned long long *)&a0->field_0) = 0;
        *((unsigned long long *)&a0->field_8) = v43;
        goto LABEL_59252e;
    }
    v20 = 1;
    v30.next(&v14);
    if (*((long long *)&v31) == 9223372036854775809)
    {
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v30);
        v38 = 1;
        if (!((long long)v1 == 13))
            goto LABEL_592429;
        goto LABEL_59262e;
    }
    v13 = v32;
    v11 = v31;
    v39 = v24.new_writer();
    if (v39)
    {
        *((unsigned long long *)&a0->field_0) = 0;
        *((unsigned long long *)&a0->field_8) = v39;
        v38 = 1;
        ::0x58e560::core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&(char)v11);
        goto LABEL_59252e;
    }
    if ((long long)v11 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->field_0) = 12;
        *((unsigned long long *)&a0->field_8) = v6;
        a0->field_10[0] = v7;
        goto LABEL_59252b;
    }
    v4 = (long long)v11;
    v6 = v12;
    v7 = v13;
    v40 = v24.writeln(v6, v7);
    if (v40)
    {
        *((unsigned long long *)&a0->field_0) = 0;
        *((unsigned long long *)&a0->field_8) = v40;
        ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v4);
LABEL_59252b:
        v38 = 1;
        goto LABEL_59252e;
    }
    else
    {
        ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v4);
        v41 = *((int128_t *)&v14);
        memcpy(&v10, &v19, 16);
        memcpy(&v9, &v17, 16);
        *((uint128_t *)&v7) = 0;
        v5 = v41;
    }
    while (true)
    {
        v33.next(&v4);
        if (v34 == 9223372036854775809)
            break;
        if (v34 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0->field_0) = 12;
            *((unsigned long long *)&a0->field_8) = v22;
            a0->field_10[0] = v23;
            goto LABEL_5926a1;
        }
        v21 = v34;
        v22 = v35;
        v23 = *((long long *)&v36);
        v42 = v24.writeln(v22, v23);
        if (!v42)
        {
            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
        }
        else
        {
            *((unsigned long long *)&a0->field_0) = 0;
            *((unsigned long long *)&a0->field_8) = v42;
            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v21);
LABEL_5926a1:
            core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>>(&v4);
LABEL_59252e:
            core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v0);
LABEL_592536:
            v44 = core::ptr::drop_in_place<uu_csplit::SplitWriter>(&v24);
            goto LABEL_592654;
        }
    }
    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>>(&v4);
    v24.finish_split();
    if (!((long long)v1 == 13))
        goto LABEL_592429;
LABEL_59262e:
    a0->field_20 = *((long long *)&v3);
    *((int128_t *)&a0->field_10[0]) = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v1;
    v44 = core::ptr::drop_in_place<uu_csplit::SplitWriter>(&v24);
LABEL_592654:
    if (v38)
        v44 = (unsigned int)core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::stdio::StdinLock>,uu_csplit::csplit<std::io::stdio::StdinLock>::{{closure}}>>>>(&v14);
    return v44;
}
