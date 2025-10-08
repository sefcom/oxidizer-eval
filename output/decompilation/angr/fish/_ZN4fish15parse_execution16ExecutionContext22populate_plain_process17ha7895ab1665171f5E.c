long long fish::parse_execution::ExecutionContext::populate_plain_process(void* a0, unsigned long a1, unsigned long a2, unsigned long long a3[6])
{
    unsigned long v0;  // [bp-0x148], Other Possible Types: unsigned long long
    void* v1;  // [bp-0x140], Other Possible Types: char, unsigned long long
    void* v2;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x130], Other Possible Types: unsigned long long
    int v4;  // [bp-0x128], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    void* v7;  // [bp-0x118], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x118]
    int v9;  // [bp-0x110], Other Possible Types: char, unsigned long long
    unsigned int v10;  // [bp-0x10c]
    unsigned long long v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x100]
    int v13;  // [bp-0xf8], Other Possible Types: char
    void* v14;  // [bp-0xf8]
    unsigned long long v15;  // [bp-0xf0]
    void* v16;  // [bp-0xe8]
    void* v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xd0]
    void* v19;  // [bp-0xc8]
    char v20;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned long v21;  // [bp-0xb0]
    int v22;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v23;  // [bp-0xa0]
    unsigned long long v24;  // [bp-0x98]
    void* v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    void* v27;  // [bp-0x78]
    void* v28;  // [bp-0x70]
    unsigned long long v29;  // [bp-0x68]
    void* v30;  // [bp-0x60]
    void* v31;  // [bp-0x58]
    struct_0 *v32;  // [bp-0x50]
    void* v33;  // [bp-0x48]
    unsigned long long v34;  // [bp-0x40]
    void* v35;  // [bp-0x38]
    unsigned long v37;  // r13
    unsigned long long v38;  // rax
    unsigned int v39;  // ebx
    unsigned long v40;  // rbx
    void* v41;  // rax
    void* v42;  // r15
    int v43;  // xmm0
    unsigned int v44;  // eax
    char v45;  // bpl
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax

    v17 = 0;
    v18 = 4;
    v19 = 0;
    v25 = 0;
    v26 = 8;
    v27 = 0;
    v37 = (long long)a0[24];
    v38 = v37.expand_command(a1, a3, &v17, &v25);
    v39 = v38;
    if (!(char)v38)
    {
        if (fish::proc::no_exec())
        {
            v39 = 0;
        }
        else if (v19)
        {
            v0 = v18;
            v31 = v19;
            v20.process_type_for_command(a1, a3, v18, v19);
            if (!(v20 & 3))
            {
                v40 = a1.parser() + 472;
                fish::path::path_try_get_path(&v4, v0, v31, v40, &g_14c7518);
                v33 = 0;
                v34 = 4;
                v35 = 0;
                if (!*((int *)&v9))
                {
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v33);
                    v16 = v7;
                    *((int128_t *)&v13) = (int128_t)v4;
LABEL_13dd911:
                    v1 = 0;
                    v2 = 8;
                    v3 = 0;
                    v28 = 0;
                    v29 = 8;
                    v30 = 0;
                    v5 = "s";
                    v6 = 3;
                    v7 = "c";
                    v9 = 5;
                    v11 = "p";
                    v12 = 4;
                    v22 = v0.index(v31, &g_14dce58);
                    v23 = v46;
                    v22.slice_contains(&v5, 3);
                    v1.push(&v17, &g_14dce70);
                    v1.extend_trusted(8, 8);
                    v0 = a3[4];
                    v5.get_argument_nodes_no_redirs(a3[4], a3[5]);
                    v47 = v37.expand_arguments_from_nodes((int)a0[40], a1, 3, "c", &v1);
                    v39 = v47;
                    if (!(char)v47)
                    {
                        v48 = v37.determine_redirections(a1, v0, a3[5], &v28);
                        v39 = v48;
                        if ((v48 & 255))
                            goto LABEL_13dda83;
                        core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v5, 3);
                    }
                    else
                    {
LABEL_13dda83:
                        core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v5, 3);
                        core::ptr::drop_in_place<alloc::vec::Vec<fish::redirection::RedirectionSpec>>(&v28);
                        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v1);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v14);
LABEL_13ddab3:
                        core::ptr::drop_in_place<fish::proc::ProcessType>(&v20);
                        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v25);
                        if (!v45)
                            return v39;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
                        return v39;
                    }
                }
                else if (!(char)a3.decoration() && !a3[5])
                {
                    v22.get_pwd_slash(v40);
                    fish::path::path_as_implicit_cd(&v1, v0, v31, v23, v24, v40, &g_14c7518);
                    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v1);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
                    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
                        goto LABEL_13dd878;
                    v16 = 0;
                    memcpy(&v13, &v33, 16);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    v1 = 0;
                    v2 = 8;
                    v3 = 0;
                    v28 = 0;
                    v29 = 8;
                    v30 = 0;
                    v41 = 8.alloc_impl(48, 0);
                    if (!v41)
                        alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                    v42 = v41;
                    v4.to_vec("c", 2);
                    v24 = v7;
                    v43 = *((int128_t *)&v4);
                    v22 = v43;
                    v8 = v19;
                    *((int128_t *)&v4) = *((int128_t *)&v17);
                    *((unsigned long long *)&v42[16]) = v7;
                    *(v42) = v43;
                    *((void* *)&v42[40]) = v8;
                    *((int128_t *)&v42[24]) = (int128_t)v4;
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v1);
                    v1 = 2;
                    v2 = v42;
                    v3 = 2;
                    v44 = fish::function::exists("c", 2, a1.parser());
                    core::ptr::drop_in_place<fish::proc::ProcessType>(&v20);
                    v20 = v44 + 1;
                }
                else
                {
LABEL_13dd878:
                    if (v7)
                    {
                        v0 = v6;
                        v31 = v7;
                    }
                    v39 = a0.handle_command_not_found(a1, v0, v31, a3, v10 * 0x100000000 | 2);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v33);
                    core::ptr::drop_in_place<fish::path::BaseDirectory>(&v4);
                    v45 = 1;
                    goto LABEL_13ddab3;
                }
                core::ptr::drop_in_place<fish::proc::ProcessType>(v32);
                v32->field_10 = v21;
                v32->field_0 = *((int128_t *)&v20);
                v7 = v3;
                *((int128_t *)&v4) = *((int128_t *)&v1);
                v32.set_argv(&v4);
                v32.set_redirection_specs(&v28);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v32->field_30);
                v32->field_40 = v16;
                v32->field_30 = (int128_t)v13;
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v25);
                return 0;
            }
            v14 = 0;
            v15 = 4;
            v16 = 0;
            goto LABEL_13dd911;
        }
        else
        {
            v4 = &g_14dce30;
            v6 = 1;
            v7 = 8;
            *((uint128_t *)&v9) = 0;
            core::panicking::panic_fmt(&v4, &g_14dce40); /* do not return */
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v25);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
    return v39;
}
