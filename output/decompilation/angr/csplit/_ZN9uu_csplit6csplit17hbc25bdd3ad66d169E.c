int uu_csplit::csplit(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, uint128_t a4[3])
{
    int v0;  // [bp-0x1e8], Other Possible Types: char
    int v1;  // [bp-0x1e8]
    unsigned long long v2;  // [bp-0x1d8]
    char v3;  // [bp-0x1c8]
    int v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1b0]
    unsigned long long v6;  // [bp-0x1a8]
    unsigned long long v7;  // [bp-0x1a0]
    unsigned long long v8;  // [bp-0x198]
    unsigned long long v9;  // [bp-0x190]
    char v10;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [bp-0x188]
    char v12;  // [bp-0x180], Other Possible Types: unsigned long long
    int v13;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x170]
    char v15;  // [bp-0x168]
    char v16;  // [bp-0x158]
    char v17;  // [bp-0x148]
    char v18;  // [bp-0x138]
    void* v19;  // [bp-0x128]
    unsigned long long v20;  // [bp-0x120]
    void* v21;  // [bp-0x118]
    int v22;  // [bp-0x110]
    int v23;  // [bp-0x100]
    int v24;  // [bp-0xf0]
    void* v25;  // [bp-0xe0]
    unsigned long long v26;  // [bp-0xd8]
    char v27;  // [bp-0xd0]
    unsigned long long v28;  // [bp-0xc8]
    struct_1 *v29;  // [bp-0xa8]
    uint128_t v30;  // [bp-0xa0]
    char v31;  // [bp-0x90]
    int v32;  // [bp-0x88]
    unsigned long long v33;  // [bp-0x78]
    char v34;  // [bp-0x70]
    int v35;  // [bp-0x68], Other Possible Types: char
    unsigned long long v36;  // [bp-0x58]
    unsigned long long v37;  // [bp-0x50]
    unsigned long long v38;  // [bp-0x48]
    unsigned long long v39;  // [bp-0x40]
    char v40;  // [bp-0x38]
    int v42;  // xmm0
    int v43;  // xmm1
    char v44;  // bpl
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    int v47;  // xmm0
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    unsigned int v50;  // eax
    unsigned long long v51;  // rcx

    v42 = a4[0];
    v43 = a4[1];
    *((uint128_t *)&v24) = a4[2];
    v23 = v43;
    v22 = v42;
    v25 = 0;
    v19 = 0;
    v20 = 8;
    v21 = 0;
    v26 = 1;
    v27 = 0;
    v29 = a1;
    v30 = 0;
    v28 = 0x8000000000000000;
    v31 = 0;
    uu_csplit::patterns::get_patterns(&v10, a2, a3);
    memcpy(&v0, &v12, 16);
    v2 = v14;
    if (v10 != 13)
    {
        v51 = *((long long *)&v15);
        a0->field_10[1] = v2;
        *((void*)&a0->field_8) = v0;
        *((unsigned long *)&a0->field_0) = v10;
        a0->field_20 = v51;
        v44 = 1;
        goto LABEL_5929b9;
    }
    v32 = v1;
    v33 = v2;
    uu_csplit::do_csplit(&v0, &v28, &v32, &v19);
    v44 = 1;
    if ((int)v1 != 13)
    {
LABEL_5928af:
        if (a1->field_60 == 1)
            goto LABEL_592acb;
        v49 = v28.delete_all_splits();
        if (!v49)
            goto LABEL_592acb;
        *((unsigned long long *)&a0->field_0) = 0;
        *((unsigned long long *)&a0->field_8) = v49;
        goto LABEL_5929b1;
    }
    v27 = 1;
    v34.next(&v19);
    if (*((long long *)&v35) == 9223372036854775809)
    {
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v34);
        v44 = 1;
        if (!((long long)v1 == 13))
            goto LABEL_5928af;
        goto LABEL_592acb;
    }
    v6 = v36;
    v4 = v35;
    v45 = v28.new_writer();
    if (v45)
    {
        *((unsigned long long *)&a0->field_0) = 0;
        *((unsigned long long *)&a0->field_8) = v45;
        v44 = 1;
        ::0x58e560::core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&(char)v4);
        goto LABEL_5929b1;
    }
    if ((long long)v4 == 0x8000000000000000)
    {
        *((unsigned long long *)&a0->field_0) = 12;
        *((unsigned long long *)&a0->field_8) = v12;
        a0->field_10[0] = v13;
        goto LABEL_5929ae;
    }
    v10 = (long long)v4;
    v12 = v5;
    v13 = v6;
    v46 = v28.writeln(v12, v13);
    if (v46)
    {
        *((unsigned long long *)&a0->field_0) = 0;
        *((unsigned long long *)&a0->field_8) = v46;
        ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v10);
LABEL_5929ae:
        v44 = 1;
        goto LABEL_5929b1;
    }
    else
    {
        ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v10);
        memcpy(&v18, &v26, 16);
        memcpy(&v17, &v24, 16);
        v47 = *((int128_t *)&v19);
        memcpy(&v16, &v23, 16);
        memcpy(&v15, &v22, 16);
        *((int128_t *)&v13) = *((int128_t *)&v21);
        v11 = v47;
    }
    while (true)
    {
        v37.next(&v10);
        if (v38 == 9223372036854775809)
            break;
        if (v38 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0->field_0) = 12;
            *((unsigned long long *)&a0->field_8) = v8;
            a0->field_10[0] = v9;
            goto LABEL_592b3b;
        }
        v7 = v38;
        v8 = v39;
        v9 = *((long long *)&v40);
        v48 = v28.writeln(v8, v9);
        if (!v48)
        {
            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v7);
        }
        else
        {
            *((unsigned long long *)&a0->field_0) = 0;
            *((unsigned long long *)&a0->field_8) = v48;
            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v7);
LABEL_592b3b:
            core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v10);
LABEL_5929b1:
            core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v0);
LABEL_5929b9:
            v50 = core::ptr::drop_in_place<uu_csplit::SplitWriter>(&v28);
            goto LABEL_592af1;
        }
    }
    core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v10);
    v28.finish_split();
    if (!((long long)v1 == 13))
        goto LABEL_5928af;
LABEL_592acb:
    a0->field_20 = *((long long *)&v3);
    *((int128_t *)&a0->field_10[0]) = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v1;
    v50 = core::ptr::drop_in_place<uu_csplit::SplitWriter>(&v28);
LABEL_592af1:
    if (v44)
        v50 = (unsigned int)core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v19);
    return v50;
}
