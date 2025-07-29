long long uu_pr::mpr(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    int v0[17];  // [bp-0x2a0]
    void* v1;  // [bp-0x298]
    unsigned long long v2;  // [bp-0x290]
    void* v3;  // [bp-0x288]
    unsigned long long v4;  // [bp-0x278]
    char *v5;  // [bp-0x270]
    unsigned long long v6;  // [bp-0x268]
    unsigned long long v7;  // [bp-0x260]
    int v8;  // [bp-0x258]
    int v9;  // [bp-0x248]
    unsigned long long v10;  // [bp-0x240]
    int v11;  // [bp-0x238]
    int v12;  // [bp-0x228]
    int v13;  // [bp-0x218]
    int v14;  // [bp-0x208]
    int v15;  // [bp-0x1f8]
    unsigned long long v16;  // [bp-0x1e0]
    int v17;  // [bp-0x1d8], Other Possible Types: char
    int v18;  // [bp-0x1d8]
    unsigned long long v19;  // [bp-0x1d8]
    int v20;  // [bp-0x1c8], Other Possible Types: char
    int v21;  // [bp-0x1b8]
    int v22;  // [bp-0x1a8]
    int v23;  // [bp-0x198]
    int v24;  // [bp-0x190]
    unsigned long long v25;  // [bp-0x180]
    unsigned long long v26;  // [bp-0x178]
    void* v27;  // [bp-0x170]
    char v28;  // [bp-0x168]
    char *v29;  // [bp-0x160]
    int v30;  // [bp-0x158]
    int v31;  // [bp-0x148]
    int v32;  // [bp-0x138]
    int v33;  // [bp-0x128]
    int v34;  // [bp-0x118]
    int v35;  // [bp-0x108]
    int v36;  // [bp-0xf8]
    unsigned long long v37[3];  // [bp-0xe8]
    unsigned long long v38;  // [bp-0xe0]
    unsigned long long v39;  // [bp-0xd8]
    char v40;  // [bp-0xd0]
    unsigned long long v42[2];  // rax
    unsigned long long v43;  // 4096
    unsigned long long v44;  // rcx
    unsigned long v45;  // 4096
    struct_0 *v46;  // rcx
    unsigned long long v47;  // r15
    char *v48;  // rsi
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rdx
    int v51;  // xmm0

    v45 = a2;
    v25 = a1;
    v26 = a2 * 16 + a1;
    v43 = a2;
    if (v25.next())
    {
        do
        {
            uu_pr::open(&v37, v42[0], v42[1]);
            if (v37 != 9223372036854775813)
            {
                v44 = *((long long *)&v40);
                *((unsigned long long [3])&v0[0]) = v37;
                *((unsigned long long *)&v0[8]) = v38;
                *((unsigned long long *)&v0[16]) = v39;
                *((unsigned long long *)&v0[24]) = v44;
                return a0;
            }
            ::0x5a62e0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v38, v39);
            v42 = v25.next();
        } while (v42);
        v43 = v4;
    }
    v25 = a1;
    v26 = v43 * 16 + a1;
    v27 = 0;
    v29 = &v45;
    itertools::kmerge_impl::kmerge_by(&v17, &v25);
    itertools::groupbylazy::new(&v37, &v17);
    v47 = v46->field_130;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v5 = &v37[0];
    v48 = &v5;
    v16 = 9223372036854775810;
    while (true)
    {
        v25.next(v48);
        if (v26 == 9223372036854775810)
            break;
        v23 = v32;
        memcpy(&v22, &v31, 16);
        v21 = v30;
        memcpy(&v20, &v28, 16);
        memcpy(&v17, &v26, 16);
        v18 = v17;
        while (true)
        {
            v12 = v18;
            v15 = v22;
            v14 = v21;
            v13 = v20;
            v19 = 9223372036854775809;
            if ((long long)v12 == 9223372036854775809)
            {
                v12.drop_in_place<core::option::Option<uu_pr::FileLine>>();
                v33.step((long long)v23, (long long)v24);
                if ((long long)v33 == 9223372036854775809)
                    break;
                goto LABEL_5ae61e;
            }
            v36 = v15;
            v35 = v14;
            v34 = v13;
            v33 = v12;
            if ((long long)v33 == 9223372036854775809)
                break;
LABEL_5ae61e:
            memcpy(&v6, &v33, 16);
            v11 = v36;
            v9 = v35;
            v8 = v34;
            if (v6 == 0x8000000000000000)
            {
                v12.from(v7);
                v0[16] = v13;
                v0[0] = v12;
                if (v6 == 0x8000000000000000)
                    goto LABEL_5ae7e1;
                goto LABEL_5ae7d7;
            }
            if (v47 == v10)
            {
                v10 = v47;
                goto LABEL_5ae6cf;
            }
            if (!uu_pr::print_page(8, 0, v46, v47))
            {
                v1.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
                v1 = 0;
                v2 = 8;
                v3 = 0;
LABEL_5ae6cf:
                memcpy(&v15, &v11, 16);
                memcpy(&v14, &v9, 16);
                v13 = v8;
                memcpy(&v12, &v6, 16);
                v1.push(&v12, &g_755f40);
                v47 = v10;
                v18 = v17;
            }
            else
            {
                v12.from(v49);
                v0[16] = v13;
                v0[0] = v12;
                if (v6 == 0x8000000000000000)
                {
                    ::0x5a6950::core::ptr::drop_in_place<std::io::error::Error>(v7);
                    goto LABEL_5ae7e1;
                }
LABEL_5ae7d7:
                ::0x5a7ee0::core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v6);
LABEL_5ae7e1:
                core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v19);
                goto LABEL_5ae7ee;
            }
        }
        core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v19);
        v48 = &v5;
    }
    if (uu_pr::print_page(8, 0, v46, v47))
    {
        v25.from(v50);
        v51 = *((int128_t *)&v25);
        *((int128_t *)&v0[16]) = *((int128_t *)&v27);
        v0[0] = v51;
LABEL_5ae7ee:
        v1.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
    }
    else
    {
        *((unsigned int *)&v0[8]) = 0;
        *((unsigned long long *)&v0[0]) = 9223372036854775813;
        v1.drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>();
    }
    core::ptr::drop_in_place<itertools::groupbylazy::ChunkBy<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v37);
    return a0;
}
