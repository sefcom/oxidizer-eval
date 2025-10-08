long long uu_chcon::process_file(void* a0, char a1[124], unsigned long long a2, struct_2 *a3, struct_3 *a4)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v1;  // [bp-0x1b8]
    int v2;  // [bp-0x1b0]
    int v3;  // [sp-0x1a8]
    int v4;  // [bp-0x1a8]
    char v5;  // [bp-0x1a0]
    int v6;  // [bp-0x198], Other Possible Types: char
    int v7;  // [bp-0x198]
    int v8;  // [bp-0x188], Other Possible Types: char
    unsigned long v9;  // [bp-0x178]
    char v10;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x168]
    unsigned long long v12;  // [bp-0x160]
    char *v13;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x158]
    char v15;  // [bp-0x150], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x148], Other Possible Types: unsigned long long
    char v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x138]
    char v19;  // [bp-0x130]
    int v20;  // [bp-0x128]
    int v21;  // [bp-0x118]
    unsigned long long v22;  // [bp-0x110]
    unsigned long long v24;  // [bp-0x108]
    int v25;  // [bp-0xf8], Other Possible Types: unsigned int
    int v26;  // [bp-0xf8]
    int v27;  // [bp-0xf8], Other Possible Types: unsigned int
    int v28;  // [bp-0xe8], Other Possible Types: char
    int v29;  // [bp-0xe8]
    int v30;  // [bp-0xe8]
    int v31;  // [bp-0xd8]
    int v32;  // [bp-0xd8]
    int v33;  // [bp-0xc8]
    int v34;  // [bp-0xc8]
    unsigned long v35;  // [bp-0xb8]
    unsigned long v37;  // [bp-0xa8]
    unsigned long v38;  // [bp-0xa0]
    unsigned long long v39;  // [bp-0x98]
    unsigned long long v40;  // [bp-0x90]
    unsigned long long v41;  // [bp-0x88]
    unsigned long long v42;  // [bp-0x80]
    char *v43;  // [bp-0x78], Other Possible Types: char
    unsigned long long v44;  // [bp-0x70]
    char *v45;  // [bp-0x68]
    unsigned long long v46;  // [bp-0x60]
    struct_0 *v48;  // r15
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned int v51;  // ecx
    int v52;  // xmm1
    int v53;  // xmm2
    unsigned long long v54;  // rdx
    unsigned long long v55[2];  // rcx
    unsigned long v56;  // r8
    unsigned long v57;  // rdi
    int v58;  // xmm0
    int v59;  // xmm1
    int v60;  // xmm2
    int v61;  // xmm0
    int v62;  // xmm0
    unsigned int v63;  // ecx
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm0
    unsigned int v68;  // esi
    int v69;  // xmm0
    unsigned long long v70;  // rdx
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    int v74;  // xmm3

    v48 = a3->field_8;
    if (!v48)
        core::option::unwrap_failed(&g_4f0488); /* do not return */
    v49 = v48.path();
    if (v49)
    {
        (char)v11.to_vec(v49, a2);
        if (!((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63)))
        {
            *((int128_t *)&v21) = *((int128_t *)&v10);
            v24 = v14;
            v50 = v48.access_path();
            if (!v50)
            {
                (char)v11.from_io1("File name validation: changing security context of Modifying root pathAccessingReading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting securit", 20, &(char)v21, 85899345923);
                v51 = *((int *)&v10);
                v50 = v12;
                memcpy(&v0, &v15, 16);
                *((int128_t *)&v3) = *((int128_t *)&v17);
                memcpy(&v6, &v19, 16);
                v13 = v14;
                if (v51 != 18)
                {
                    v52 = *((int128_t *)&v0);
                    v53 = (int128_t)v3;
                    a0[56] = v6;
                    a0[40] = v53;
                    a0[24] = v52;
                    *((unsigned long long *)a0) = v10;
                    *((unsigned long long *)&a0[8]) = v12;
                    *((unsigned long long *)&a0[16]) = v14;
                    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>((long long)v21, v22);
                }
            }
            v54 = v13;
            v55 = v48->field_68;
            if (!v55)
            {
                (char)v11.from_io1("Getting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursiv", 17, &(char)v21, 85899345923);
                *((long long *)&a0[64]) = (long long)v20;
                v71 = *((int128_t *)&v10);
                v72 = *((int128_t *)&v13);
                v73 = *((int128_t *)&v16);
                v71 = *((int128_t *)&v10);
                v72 = *((int128_t *)&v13);
                v73 = *((int128_t *)&v16);
                v74 = *((int128_t *)&v18);
                *((int128_t *)&a0[48]) = *((int128_t *)&v18);
                a0[32] = v73;
                a0[16] = v72;
                *(a0) = v71;
                return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>((long long)v21, v22);
            }
            v40 = v13;
            v56 = v55[0];
            v57 = v55[1];
            v25 = 18;
            switch (v48->field_62)
            {
            case 1:
                if (a1[123])
                {
                    if (a4->field_0 != 1 || a4->field_8 != v56 || a4->field_10 != v57)
                        goto LABEL_464912;
                    uu_chcon::root_dev_ino_warn(v22, v24);
                    v43.set(a3->field_0, v48, 4);
                    v0.read_next_entry(a3);
                    (char)v11.from_io1("Modifying root pathAccessingReading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/st", 19, &(char)v21, 4294967299);
                    *((long long *)&a0[64]) = (long long)v20;
                    v58 = *((int128_t *)&v10);
                    v59 = *((int128_t *)&v14);
                    v60 = *((int128_t *)&v16);
                    *((int128_t *)&a0[48]) = *((int128_t *)&v18);
                    a0[32] = v60;
                    a0[16] = v59;
                    *(a0) = v58;
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v0);
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v43);
                    break;
                }
                break;
            case 2:
                v63 = a1[123];
                if (v63 < 2 || (char)v63 != 2 && v48->field_60)
                {
                    uu_chcon::emit_cycle_warning(v22, v24);
                    (char)v11.from_io1("Reading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: warning: It is dange", 24, &(char)v21, 90194313219);
                    *((long long *)&a0[64]) = (long long)v20;
                    v64 = *((int128_t *)&v10);
                    v65 = *((int128_t *)&v14);
                    v66 = *((int128_t *)&v16);
                    *((int128_t *)&a0[48]) = *((int128_t *)&v18);
                    a0[32] = v66;
                    a0[16] = v65;
                    *(a0) = v64;
                    break;
                }
                break;
            case 4:
                v37 = v56;
                v38 = v57;
                v39 = v50;
                (char)v11.from_io1("Reading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_metadata: war", 17, &(char)v21, v48->field_38 * 0x100000000 | 2);
                v9 = (long long)v20;
                v61 = *((int128_t *)&v10);
                memcpy(&v8, &v18, 16);
                memcpy(&v6, &v16, 16);
                *((int128_t *)&v4) = *((int128_t *)&v14);
                v0 = v61;
                core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v25);
                goto LABEL_4649b0;
            case 6:
                if (!a1[123])
                {
LABEL_464912:
                    *((unsigned int *)a0) = 18;
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v25);
                    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>((long long)v21, v22);
                }
                break;
            case 7:
                v37 = v56;
                v38 = v57;
                v39 = v50;
                (char)v11.from_io1("AccessingReading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_meta", 9, &(char)v21, v48->field_38 * 0x100000000 | 2);
                v9 = (long long)v20;
                v67 = *((int128_t *)&v10);
                memcpy(&v8, &v18, 16);
                memcpy(&v6, &v16, 16);
                *((int128_t *)&v4) = *((int128_t *)&v14);
                v0 = v67;
                core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v25);
LABEL_4649b0:
                v35 = v9;
                v33 = v8;
                v31 = v6;
                memcpy(&v28, &v4, 16);
                memcpy(&v25, &v1, 16);
                v50 = v39;
                v57 = v38;
                v56 = v37;
                goto LABEL_464a08;
            case 10:
                if (v48->field_60 || v48->field_18)
                {
                    v37 = v56;
                    v38 = v57;
                    v39 = v50;
                    (char)v11.from_io1("AccessingReading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/std::fs::symlink_meta", 9, &(char)v21, v48->field_38 * 0x100000000 | 2);
                    v9 = (long long)v20;
                    v62 = *((int128_t *)&v10);
                    memcpy(&v8, &v18, 16);
                    memcpy(&v6, &v16, 16);
                    *((int128_t *)&v4) = *((int128_t *)&v14);
                    v0 = v62;
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v25);
                    goto LABEL_4649b0;
                }
                else
                {
                    v48->field_18 = 1;
                    (char)v11.set(a3->field_0, v48, 1);
                    *((unsigned int *)a0) = 18;
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&(char)v11);
                    break;
                }
            default:
LABEL_464a08:
                v68 = v27;
                v29 = v28;
                if ((v27 == 18 & v48->field_62 == 6))
                {
                    if (a4->field_0 != 1 || a4->field_8 != v56 || a4->field_10 != v57)
                        goto LABEL_464b1b;
                    uu_chcon::root_dev_ino_warn(v22, v24);
                    (char)v11.from_io1("Modifying root pathAccessingReading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting security contextCreating security contextCString::new()/st", 19, &(char)v21, 4294967299);
                    v9 = (long long)v20;
                    v69 = *((int128_t *)&v10);
                    memcpy(&v8, &v18, 16);
                    memcpy(&v6, &v16, 16);
                    *((int128_t *)&v3) = *((int128_t *)&v14);
                    v0 = v69;
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v26);
                    v35 = v9;
                    v33 = v8;
                    v31 = v7;
                    memcpy(&v28, &v4, 16);
                    memcpy(&v25, &v1, 16);
                    v68 = v27;
                    v26 = v27;
                    v29 = v30;
                }
                v25 = v26;
                if (v68 != 18)
                    goto LABEL_464c41;
LABEL_464b1b:
                if (a1[120])
                {
                    v41 = uucore::util_name();
                    v42 = v70;
                    v1 = 1;
                    *((int128_t *)&v2) = *((int128_t *)&v22);
                    v5 = 1;
                    v43 = &v41;
                    v44 = <&T as core::fmt::Display>::fmt;
                    v45 = &v1;
                    v46 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v11 = &g_4f0458;
                    v12 = 3;
                    v16 = 0;
                    v13 = &v43;
                    v15 = 2;
                    std::io::stdio::_print(&v11);
                }
                uu_chcon::change_file_context(&(char)v11, a1, a2, v50, v40);
                core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v26);
                v35 = (long long)v20;
                memcpy(&v33, &v18, 16);
                memcpy(&v31, &v16, 16);
                memcpy(&v28, &v13, 16);
                memcpy(&v25, &v11, 16);
                v25 = v27;
                v33 = v34;
                v31 = v32;
                v29 = v30;
LABEL_464c41:
                if (!a1[123])
                {
                    (char)v11.set(a3->field_0, v48, 4);
                    core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&(char)v11);
                }
                *((unsigned long *)&a0[64]) = v35;
                a0[48] = v74;
                a0[32] = v73;
                a0[16] = v72;
                *(a0) = v71;
                return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>((long long)v21, v22);
            }
        }
    }
    *((unsigned int *)a0) = 16;
    *((char **)&a0[8]) = "File name validation: changing security context of Modifying root pathAccessingReading directoryReading cyclic directoryGetting meta dataGetting security contextApplying partial security context to unlabeled fileSetting security context userSetting securit";
    *((unsigned long long *)&a0[16]) = 20;
    *((unsigned long long *)&a0[24]) = 85899345923;
    return 85899345923;
}
