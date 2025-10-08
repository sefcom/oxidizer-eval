long long uu_pr::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x6f8], Other Possible Types: char
    unsigned long v1;  // [bp-0x6e8]
    char v2;  // [bp-0x6e0]
    unsigned long long v3;  // [bp-0x6d8]
    unsigned long long v4;  // [bp-0x6d0]
    int v5;  // [bp-0x6c8], Other Possible Types: char
    unsigned long long v6[2];  // [bp-0x6c0]
    int v7;  // [bp-0x6b8], Other Possible Types: char
    unsigned long long v8;  // [bp-0x6a0]
    unsigned long long v9;  // [bp-0x698]
    unsigned long long v10;  // [bp-0x690]
    char v11;  // [bp-0x688], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x688]
    unsigned long long v13;  // [bp-0x680]
    unsigned long long v14;  // [bp-0x678]
    void* v15;  // [bp-0x670]
    unsigned long long v16;  // [bp-0x668]
    int v17;  // [bp-0x660]
    int v18;  // [bp-0x650]
    unsigned long long v19;  // [bp-0x640]
    int v20;  // [bp-0x638]
    int v21;  // [bp-0x628]
    unsigned long long v22;  // [bp-0x618]
    struct_0 *v23;  // [bp-0x610]
    unsigned long long v24;  // [bp-0x608]
    char v25;  // [bp-0x600]
    char v26;  // [bp-0x5e0]
    void* v27;  // [bp-0x5c8]
    void* v28;  // [bp-0x5c8], Other Possible Types: char
    unsigned long long v29;  // [bp-0x5c0]
    unsigned long long v30;  // [bp-0x5c0]
    int v31;  // [bp-0x5b8]
    int v32;  // [bp-0x5a8]
    char v33;  // [bp-0x598]
    char v34;  // [bp-0x480]
    unsigned long long v35;  // [bp-0x440]
    int v36;  // [bp-0x438]
    char v37;  // [bp-0x428]
    char v38;  // [bp-0x2f8]
    void* v40;  // r15
    unsigned long long v41;  // rdx
    unsigned long long v44;  // rbx
    void* v45;  // r14
    struct_0 *v46;  // rax
    unsigned long long v47;  // rbx

    v2.collect_ignore(a0, a1);
    uu_pr::recreate_arguments(&v26, v3, v4);
    uu_pr::uu_app(&v38);
    v28.try_get_matches_from_mut(&v38, &v26);
    if ((char)(((0 ^ v28) & (0 ^ -(v28))) >> 63))
    {
        v40 = v16.from();
LABEL_5240fd:
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v38);
    }
    else
    {
        v19 = *((long long *)&v33);
        v18 = v32;
        v17 = v31;
        v15 = v28;
        v16 = v29;
        v28.try_get_many(&v15);
        v34.unwrap(&v28);
        if (*((long long *)&v34))
        {
            v28.collect(&v34);
            if (v28 == 0x8000000000000000)
                goto LABEL_523d8e;
            v41 = (long long)v31;
            v27 = v28;
            v30 = v29;
        }
        else
        {
LABEL_523d8e:
            v41 = 0;
            v27 = 0;
            v30 = 8;
        }
        v44 = v30;
        v45 = v27;
        v0.clone(v44, v41);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v45, v44);
        if (!v1)
            v0.insert();
        if ((char)v15.get_flag("mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 5))
        {
            v46 = 8.alloc_impl(24);
            if (!v46)
                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
            v46->field_10 = v1;
            *((void*)&v46->field_0) = v0;
            v22 = 1;
            v23 = v46;
            v24 = 1;
        }
        else
        {
            v28.into_iter(&v0);
            (char)v22.collect(&v28);
        }
        v25.into_iter(&v22);
        v11.next(&v25);
        if (v11 != 0x8000000000000000)
        {
            v10 = v3;
            v9 = v4;
            v8 = 9223372036854775813;
            v12 = v11;
            do
            {
                v47 = v12;
                alloc::str::join_generic_copy(&v28, v10, v9);
                uu_pr::build_options(&v35, &v15, v13, v14, v29, (long long)v31);
                core::ptr::drop_in_place<alloc::string::String>(v28, v29);
                if ((int)v35 != 2)
                {
                    memcpy(&v28, &v35, 328);
                    v5.exactly_one(v13, v14 * 16 + v13);
                    if (*((int *)&v5) == 2)
                        uu_pr::pr(&v20, v6[0], v6[1], &v28);
                    else
                        uu_pr::mpr(&v20, v13, v14);
                    if ((long long)v20 != 9223372036854775813)
                    {
                        v7 = v21;
                        v5 = v20;
                        uu_pr::print_error(&v15, &v5);
                        core::ptr::drop_in_place<uu_pr::PrError>(&v20);
                        v40 = 1.from();
                        core::ptr::drop_in_place<uu_pr::OutputOptions>(&v28);
LABEL_5240d8:
                        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v47, v13);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(&v25);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v15);
                        goto LABEL_5240fd;
                    }
                }
                else
                {
                    memcpy(&v7, &v37, 16);
                    v5 = v36;
                    uu_pr::print_error(&v15, &(char)v5);
                    v40 = 1.from();
                    core::ptr::drop_in_place<uu_pr::PrError>(&(char)v5);
                    goto LABEL_5240d8;
                }
                core::ptr::drop_in_place<uu_pr::OutputOptions>(&v28);
                core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v47, v13);
                v11.next(&v25);
                v12 = v11;
            } while (v12 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(&v25);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v15);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v38);
        v40 = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    return v40;
}
