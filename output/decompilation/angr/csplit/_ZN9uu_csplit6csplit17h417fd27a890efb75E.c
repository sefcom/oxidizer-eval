int uu_csplit::csplit(void* a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, uint128_t a4[3])
{
    int v0;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1b8]
    unsigned long long v2;  // [bp-0x1a8]
    char v3;  // [bp-0x1a0]
    unsigned long long v4;  // [bp-0x198]
    unsigned long long v5;  // [bp-0x190]
    unsigned long long v6;  // [bp-0x188]
    unsigned long long v7;  // [bp-0x180]
    unsigned long long v8;  // [bp-0x178]
    unsigned long long v9;  // [bp-0x170]
    char v10;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [bp-0x168]
    char v12;  // [bp-0x160], Other Possible Types: unsigned long long
    int v13;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x150]
    char v15;  // [bp-0x148]
    char v16;  // [bp-0x138]
    char v17;  // [bp-0x128]
    char v18;  // [bp-0x118]
    void* v19;  // [bp-0x108]
    unsigned long long v20;  // [bp-0x100]
    void* v21;  // [bp-0xf8]
    int v22;  // [bp-0xf0]
    int v23;  // [bp-0xe0]
    int v24;  // [bp-0xd0]
    void* v25;  // [bp-0xc0]
    unsigned long long v26;  // [bp-0xb8]
    char v27;  // [bp-0xb0]
    unsigned long long v28;  // [bp-0xa8]
    struct_0 *v29;  // [bp-0x88]
    uint128_t v30;  // [bp-0x80]
    char v31;  // [bp-0x70]
    int v32;  // [bp-0x68]
    unsigned long long v33;  // [bp-0x58]
    unsigned long long v34;  // [bp-0x50]
    unsigned long long v35;  // [bp-0x48]
    unsigned long long v36;  // [bp-0x40]
    char v37;  // [bp-0x38]
    int v39;  // xmm0
    int v40;  // xmm1
    char v41;  // bpl
    unsigned long long v42;  // r12
    unsigned long long v43;  // r14
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    int v46;  // xmm0
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned int v49;  // eax
    unsigned long long v50;  // rcx

    v39 = a4[0];
    v40 = a4[1];
    *((uint128_t *)&v24) = a4[2];
    v23 = v40;
    v22 = v39;
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
    v1 = v14;
    if (v10 != 13)
    {
        v50 = *((long long *)&v15);
        *((unsigned long long *)&a0[24]) = v1;
        a0[8] = v0;
        *((unsigned long *)a0) = v10;
        *((unsigned long long *)&a0[32]) = v50;
        v41 = 1;
        goto LABEL_518be2;
    }
    v32 = v0;
    v33 = v1;
    uu_csplit::do_csplit(&v0, &v28, &v32, &v19);
    if ((int)v0 == 13)
    {
        v27 = 1;
        v3.next(&v19);
        if (v4 == 9223372036854775809)
        {
            v41 = 1;
            core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v3);
            goto LABEL_518b80;
        }
        v42 = v5;
        v43 = v6;
        v44 = v28.new_writer();
        if (v44)
        {
            *((unsigned long long *)a0) = 0;
            *((unsigned long long *)&a0[8]) = v44;
            v41 = 1;
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v4);
        }
        else if (v4 == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = 12;
            *((unsigned long long *)&a0[8]) = v42;
            *((unsigned long long *)&a0[16]) = v43;
            v41 = 1;
        }
        else
        {
            v10 = v4;
            v12 = v42;
            v13 = v43;
            v45 = v28.writeln(v42, v43);
            if (v45)
            {
                *((unsigned long long *)a0) = 0;
                *((unsigned long long *)&a0[8]) = v45;
                core::ptr::drop_in_place<alloc::string::String>(&v10);
                v41 = 1;
            }
            else
            {
                core::ptr::drop_in_place<alloc::string::String>(&v10);
                memcpy(&v18, &v26, 16);
                memcpy(&v17, &v24, 16);
                v46 = *((int128_t *)&v19);
                memcpy(&v16, &v23, 16);
                memcpy(&v15, &v22, 16);
                *((int128_t *)&v13) = *((int128_t *)&v21);
                v11 = v46;
                while (true)
                {
                    v34.next(&v10);
                    if (v35 == 9223372036854775809)
                    {
                        core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v10);
                        v28.finish_split();
LABEL_518b80:
                        *((unsigned long long *)&a0[32]) = v2;
                        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                        *(a0) = v0;
                        v49 = core::ptr::drop_in_place<uu_csplit::SplitWriter>(&v28);
                        goto LABEL_518bef;
                    }
                    if (v35 == 0x8000000000000000)
                    {
                        *((unsigned long long *)a0) = 12;
                        *((unsigned long long *)&a0[8]) = v8;
                        *((unsigned long long *)&a0[16]) = v9;
                        goto LABEL_518bce;
                    }
                    v7 = v35;
                    v8 = v36;
                    v9 = *((long long *)&v37);
                    if (v28.writeln(v8, v9))
                        break;
                    core::ptr::drop_in_place<alloc::string::String>(&v7);
                }
                *((unsigned long long *)a0) = 0;
                *((unsigned long long *)&a0[8]) = v47;
                core::ptr::drop_in_place<alloc::string::String>(&v7);
LABEL_518bce:
                core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v10);
            }
        }
    }
    else
    {
        v41 = 1;
        if (a1->field_60)
            goto LABEL_518b80;
        v48 = v28.delete_all_splits();
        if (!v48)
            goto LABEL_518b80;
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = v48;
        v41 = 1;
    }
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v0);
LABEL_518be2:
    v49 = core::ptr::drop_in_place<uu_csplit::SplitWriter>(&v28);
LABEL_518bef:
    if (v41)
        v49 = (unsigned int)core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v19);
    return v49;
}
