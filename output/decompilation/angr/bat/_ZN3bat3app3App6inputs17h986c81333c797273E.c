void bat::app::App::inputs(unsigned long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x20c]
    unsigned long long v1;  // [bp-0x208]
    unsigned long long v2;  // [bp-0x200]
    unsigned long long v3;  // [bp-0x1f8]
    unsigned long long v4;  // [bp-0x1f0]
    void* v5;  // [bp-0x1e8]
    void* v6;  // [bp-0x1e0]
    unsigned long long v7;  // [bp-0x1d8]
    void* v8;  // [bp-0x1d0]
    unsigned long long v10;  // [bp-0x1c8]
    unsigned long long v11;  // [bp-0x1c0]
    char v12;  // [bp-0x1b8]
    int v13;  // [bp-0x1b8]
    int v14;  // [bp-0x1a8]
    int v15;  // [bp-0x198]
    char v16;  // [bp-0x188]
    unsigned long long v17;  // [bp-0x128]
    unsigned long long v18;  // [bp-0x120]
    unsigned long long v19;  // [bp-0x118]
    unsigned long long v20;  // [bp-0x110]
    unsigned long long v21;  // [bp-0x108]
    unsigned long long v22;  // [bp-0x100]
    unsigned long long v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xf0]
    char v25;  // [bp-0xe8]
    char v26;  // [bp-0xb0]
    char v27;  // [bp-0x70]
    unsigned long long v29;  // r14
    char *v30;  // r15
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rcx
    char v33;  // r12b
    unsigned int v34;  // eax
    unsigned long long v35;  // rcx
    int v36;  // xmm0
    unsigned long long v38;  // rbp
    struct_1 *v39;  // rbx
    char v40;  // r13b
    unsigned long long v44;  // rsi
    unsigned long long v46;  // rdi
    unsigned long long v48;  // rdi
    void* v52;  // rax
    void* v53;  // r14

    v29 = "file-name-numberstyles present";
    v30 = &(char)v10;
    (char)v10.try_get_many(a1, "file-name-numberstyles present", 9);
    v26.unwrap("file-name-numberstyles present", 9, &(char)v10);
    if (*((long long *)&v26))
    {
        (char)v10.collect(&v26);
        v1 = v10;
        v4 = v11;
        v29 = *((long long *)&v12);
    }
    else
    {
        v1 = 0x8000000000000000;
    }
    (char)v10.try_get_many(a1, "FILE", 4);
    v27.unwrap("FILE", 4, &(char)v10);
    if (*((long long *)&v27))
    {
        (char)v10.collect(&v27);
        v31 = v10;
        v3 = v11;
        v30 = (long long)v13;
        v32 = v1;
        v2 = v31;
        v33 = v31 == 0x8000000000000000;
        v34 = (unsigned int)v3 & 0xffffff00 | v32 == 0x8000000000000000 | v31 == 0x8000000000000000;
        if (((v32 == 0x8000000000000000 | v31 == 0x8000000000000000) & 1))
        {
            v35 = v32;
            if (v35 == 0x8000000000000000)
                goto LABEL_7a8005;
        }
        else if (v29 == v30)
        {
            v35 = v1;
        }
        else
        {
            v0 = v34 & 0xffffff00 | 1;
            (char)v10.from("Must be one file name per input type.file-name-numberstyles present", 37);
            *((int128_t *)&v5[64]) = *((int128_t *)&v16);
            v36 = *((int128_t *)&v10);
            v5[48] = v15;
            v5[32] = v14;
            v5[16] = v13;
            *(v5) = v36;
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<&std::path::Path>>>(v2, v3);
LABEL_7a8334:
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v1, v4);
            return;
        }
LABEL_7a81c2:
        v17 = v35;
        v18 = v4;
        v19 = v29;
        (char)v10.into_iter(&v17);
        v0 = 0;
        v38 = (char)v10.new();
        v39 = &g_ac8428.padding_0[0];
        v0 = 0;
        if (v33)
        {
LABEL_7a8225:
            v52 = 8.alloc_impl(160);
            if (!v52)
                alloc::alloc::handle_alloc_error(8, 160); /* do not return */
            v53 = v52;
            v39->field_18(&(char)v10, v38);
            if (!(char)v10)
                v11 = 0;
            bat::input::new_stdin_input(&(char)v10, v11, (long long)v13);
            ::libc.so.0::memcpy(v53, &(char)v10, 160);
            *((unsigned long long *)&v5[8]) = 1;
            *((void* *)&v5[16]) = v53;
            *((unsigned long long *)&v5[24]) = 1;
            *((char *)v5) = 13;
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v38, v39);
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<&std::path::Path>>>(v2, v3);
            if (v40)
            {
                return;
            }
            else if (!(char)v0)
            {
                return;
            }
            goto LABEL_7a8334;
        }
    }
    else
    {
        v33 = 1;
        v34 = 0;
        v2 = 0x8000000000000000;
        v35 = v1;
        if (v35 != 0x8000000000000000)
            goto LABEL_7a81c2;
LABEL_7a8005:
        v0 = v34 & 0xffffff00 | 1;
        v38 = alloc::boxed::Box<T>::new();
        v0 = (unsigned int)v38 & 0xffffff00 | 1;
        v39 = &g_ac83f0.padding_0[0];
        v40 = 1;
        if (v33)
            goto LABEL_7a8225;
    }
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v25.zip(v3.new(v30 * 16 + v3), &g_ac8460, v38, v39);
    while (true)
    {
        do
        {
            v20.next(&v25);
            if ((int)v20 != 1)
            {
                core::ptr::drop_in_place<core::iter::adapters::zip::Zip<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = core::option::Option<&std::path::Path>>,alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = core::option::Option<&std::path::Path>>>>(&v25);
                *((unsigned long long *)&v5[24]) = 0;
                *((int128_t *)&v5[8]) = *((int128_t *)&v6);
                *((char *)v5) = 13;
                core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<&std::path::Path>>>(v2, v3);
                return;
            }
        } while (!v21);
        core::str::converts::from_utf8(&(char)v10, v21, v22);
        v44 = (long long)v13;
        if ((char)v10)
            v44 = 0;
        if ((char)v10)
            v46 = 1;
        else
            v46 = v11;
        v48 = v46;
        if ((char)v48.equal(v44, "-numberstyles present", 1))
        {
            bat::input::new_stdin_input(&(char)v10, v23, v24);
            v6.push(&(char)v10, &g_ac84b0);
        }
        else
        {
            bat::input::new_file_input(&(char)v10, v21, v22, v23, v24);
            v6.push(&(char)v10, &g_ac8498);
        }
    }
}
