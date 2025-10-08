long long uu_pr::mpr(unsigned long a0, unsigned long long a1[2], void* a2)
{
    void* v0;  // [bp-0x280]
    void* v1;  // [bp-0x278]
    unsigned long long v2;  // [bp-0x270]
    void* v3;  // [bp-0x268]
    void* v4;  // [bp-0x258], Other Possible Types: unsigned long
    char *v5;  // [bp-0x250]
    int v6;  // [bp-0x248]
    unsigned long long v7;  // [bp-0x240]
    int v8;  // [bp-0x238]
    int v9;  // [bp-0x228]
    unsigned long long v10;  // [bp-0x220]
    int v11;  // [bp-0x218]
    unsigned long long v12;  // [bp-0x200]
    int v13;  // [bp-0x1f8], Other Possible Types: char
    int v14;  // [bp-0x1f8]
    unsigned long long v15;  // [bp-0x1f8]
    int v16;  // [bp-0x1e8], Other Possible Types: char
    int v17;  // [bp-0x1d8], Other Possible Types: char
    int v18;  // [bp-0x1c8]
    int v19;  // [bp-0x1b8]
    unsigned long long v20;  // [bp-0x1b0]
    int v21;  // [bp-0x1a8], Other Possible Types: char
    int v22;  // [bp-0x198]
    int v23;  // [bp-0x188]
    int v24;  // [bp-0x188]
    int v25;  // [bp-0x188]
    int v26;  // [bp-0x188]
    int v27;  // [bp-0x178]
    int v28;  // [bp-0x168]
    int v29;  // [bp-0x168]
    int v30;  // [bp-0x168]
    int v31;  // [bp-0x158]
    unsigned long long v32[2];  // [bp-0x140]
    unsigned long long v33;  // [bp-0x138]
    void* v34;  // [bp-0x130]
    char v35;  // [bp-0x128]
    char *v36;  // [bp-0x120]
    char v37;  // [bp-0x118]
    int v38;  // [bp-0xf8]
    unsigned long long v39;  // [bp-0xe8]
    unsigned long long v40;  // [bp-0xe0]
    unsigned long long v41;  // [bp-0xd8]
    char v42;  // [bp-0xd0]
    unsigned long long v44[2];  // 4096
    unsigned long long v45[2];  // r13
    unsigned long long v46[2];  // r13
    unsigned long long v47;  // rcx
    int v48;  // xmm0
    struct_0 *v50;  // r12
    struct_1 *v51;  // rcx
    unsigned long long v52;  // r13
    char *v53;  // rsi
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rdx
    int v57;  // xmm0

    v4 = a2;
    if (a2)
    {
        v44 = a1;
        do
        {
            v45 = v44;
            uu_pr::open(&v39, v45[0], v45[1]);
            if (v39 != 9223372036854775813)
            {
                v47 = *((long long *)&v42);
                v48 = *((int128_t *)&v40);
                *((unsigned long long *)v0) = v39;
                v0[8] = v48;
                *((unsigned long long *)&v0[24]) = v47;
                return a0;
            }
            v46 = v45 + 1;
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v40, v41);
            v44 = v46;
        } while (v44 != 0x10 * a2 + (char *)a1);
        v4 = v4;
    }
    else
    {
        v4 = 0;
    }
    v32[0] = a1;
    v33 = 0x10 * v4 + (char *)a1;
    v34 = 0;
    v36 = &v4;
    v50 = &v32;
    itertools::kmerge_impl::kmerge_by(&v13, &v32);
    itertools::groupbylazy::new(&v39, &v13);
    v52 = v51->field_130;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v5 = &v39;
    v53 = &v5;
    v12 = 9223372036854775810;
    while (true)
    {
        v32.next(v53);
        if (v33 == 9223372036854775810)
            break;
        v19 = v38;
        *((int128_t *)&v18) = *((int128_t *)&(&v50->padding_1)[1]);
        memcpy(&v17, &v37, 16);
        memcpy(&v16, &v35, 16);
        memcpy(&v13, &v33, 16);
        v54 = (long long)v19;
        v14 = v13;
        while (true)
        {
            v6 = v14;
            v11 = v18;
            v9 = v17;
            v8 = v16;
            v15 = 9223372036854775809;
            if ((long long)v6 == 9223372036854775809)
            {
                (char)v6.drop_in_place<core::option::Option<uu_pr::FileLine>>();
                v23.step(v54, v20);
                v24 = v23;
                v29 = v28;
                v25 = v23;
                if (*((long long *)&vvar_670{stack -392}) == 9223372036854775809)
                    break;
                goto LABEL_536a02;
            }
            v31 = v11;
            memcpy(&v28, &v9, 16);
            v27 = v8;
            memcpy(&v23, &v6, 16);
            v24 = v26;
            v29 = v30;
            v25 = v26;
            v28 = v30;
            if (*((long long *)&vvar_670{stack -392}) == 9223372036854775809)
                break;
LABEL_536a02:
            v28 = v29;
            *((int *)&v23) = vvar_670{stack -392};
            memcpy(&(char)v6, &v23, 16);
            v11 = v31;
            v9 = v28;
            v8 = v27;
            if ((long long)v6 == 0x8000000000000000)
            {
                v21.from(v7);
                v0[16] = v22;
                *(v0) = v21;
                goto LABEL_536b26;
            }
            if (v52 == v10)
            {
                v10 = v52;
                goto LABEL_536aa4;
            }
            if (!((char)uu_pr::print_page(8, 0, v51, v52) & 1))
            {
                v1.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
                v1 = 0;
                v2 = 8;
                v3 = 0;
LABEL_536aa4:
                v1.push(&v23, &g_669578);
                v52 = v10;
                v14 = v13;
            }
            else
            {
                v21.from(v55);
                v0[16] = v22;
                *(v0) = v21;
                if ((long long)v6 == 0x8000000000000000)
                    core::ptr::drop_in_place<std::io::error::Error>(&v7);
                else
                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&(char)v6);
LABEL_536b26:
                core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v15);
                goto LABEL_536b33;
            }
        }
        v23 = v25;
        core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v15);
        v50 = &v32;
        v53 = &v5;
    }
    if (((char)uu_pr::print_page(8, 0, v51, v52) & 1))
    {
        v32.from(v56);
        v57 = *((int128_t *)&v32);
        *((int128_t *)&v0[16]) = *((int128_t *)&v34);
        *(v0) = v57;
LABEL_536b33:
        v1.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
    }
    else
    {
        *((unsigned int *)&v0[8]) = 0;
        *((unsigned long long *)v0) = 9223372036854775813;
        v1.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
    }
    core::ptr::drop_in_place<itertools::groupbylazy::ChunkBy<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v39);
    return a0;
}
