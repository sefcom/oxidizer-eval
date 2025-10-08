long long uu_more::more(unsigned int a0, unsigned long long a1, unsigned int a2, unsigned long long a3, void* a4, unsigned long long a5, unsigned long long a6, void* a7)
{
    unsigned int v0;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x148]
    char v3;  // [bp-0x140]
    int v4;  // [bp-0x13f]
    char v5;  // [bp-0x13c]
    unsigned long long v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    int v8;  // [bp-0x128]
    int v9;  // [bp-0x118]
    int v10;  // [bp-0x108]
    char v11;  // [bp-0xf8]
    int v12;  // [bp-0xe8]
    char v13;  // [bp-0xd8]
    int v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    unsigned long long v17;  // [bp-0xa8]
    int v18;  // [bp-0xa0]
    int v19;  // [bp-0x90]
    int v20;  // [bp-0x80]
    char v21;  // [bp-0x70]
    unsigned long long v22;  // [bp-0x68]
    int v23;  // [bp-0x60], Other Possible Types: unsigned long long, unsigned long
    unsigned long v24;  // [bp-0x60]
    char v25;  // [bp-0x50]
    int v26;  // [bp-0x40]
    unsigned long long v27;  // r12
    void* v28;  // rbp
    unsigned long long v29;  // r14
    char v30;  // r13b
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    void* v33;  // rax
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    void* v36;  // r12
    char *v37;  // r15
    void* v38;  // r15
    unsigned long long v39;  // rbp
    unsigned long long v40;  // r13
    unsigned long v41;  // rax
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rax
    unsigned long long v44;  // r14
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax

    v2 = a3;
    crossterm::terminal::size(&v3);
    if (v3 == 1)
    {
        v27 = v6.from();
        core::ptr::drop_in_place<std::fs::File>(a0);
        return v27;
    }
    v1 = a2;
    v3.new(a0, (!(char)a7[32] ? *((short *)&v5) : (short)a7[34]), a5, a6, a7);
    if (*((long long *)&v3) == 2)
        return v16;
    v28 = a7;
    v26 = v14;
    memcpy(&v25, &v13, 16);
    v23 = v12;
    memcpy(&v21, &v11, 16);
    v20 = v10;
    v19 = v9;
    v18 = v8;
    v15 = *((long long *)&v3);
    v16 = v6;
    v17 = v7;
    v29 = a1;
    v30 = v0;
    if (!((char)(((0 ^ *((long long *)a7)) & (0 ^ -(*((long long *)a7)))) >> 63)))
    {
        if (((char)v15 & 1))
        {
            v22 = v16;
            goto LABEL_4714b0;
        }
        v31 = crossterm::command::write_command_ansi(v29, 4);
        if (!v31)
        {
            v31 = v29.flush();
            if (v31)
                goto LABEL_471504;
            v32 = v29.write_all("\rPattern not found\n\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/more/src/more.rs", 19);
            if (v32)
            {
                v33 = v32.from();
            }
            else
            {
                v23 = v24 - 1;
                if (!v30)
                    goto LABEL_4715c5;
LABEL_4714b9:
                v34 = crossterm::command::write_command_ansi(v29, 4);
                if (!v34)
                {
                    v34 = v29.flush();
                    if (v34)
                        goto LABEL_4714d9;
                    if (!v2)
                        a4 = 0;
                    if (!v2)
                        v2 = 1;
                    alloc::str::<impl str>::replace(&v3, v2, a4);
                    v35 = v29.write_all(v6, v7);
                    if (v35)
                    {
                        v36 = v35.from();
                        core::ptr::drop_in_place<alloc::string::String>(*((long long *)&v3), v6);
                        core::ptr::drop_in_place<uu_more::Pager>(&v15);
                        return v36;
                    }
                    core::ptr::drop_in_place<alloc::string::String>(*((long long *)&v3), v6);
                    v24 = v23 - 3;
                    v30 = v0;
LABEL_4715c5:
                    v36 = v15.draw(v29, 0x110000);
                    if (v36)
                    {
                        core::ptr::drop_in_place<uu_more::Pager>(&v15);
                        return v36;
                    }
                    if (v30)
                    {
                        *((unsigned long long *)&a7[24]) = 0;
                        v23 += 3;
                    }
                    if (((char)v15.should_close() & !a5))
                    {
                        core::ptr::drop_in_place<uu_more::Pager>(&v15);
                        return 0;
                    }
                    v37 = &v3;
                    v2 = 9223372036854775814;
                    while (true)
                    {
                        crossterm::event::poll(v37, 0, 10000000);
                        if (v3 == 1)
                        {
                            v33 = v6.from();
                            break;
                        }
                        if (!((char)v4 & 1))
                            continue;
                        crossterm::event::read(v37);
                        v38 = v28;
                        v39 = *((long long *)&v3);
                        v40 = v6;
                        if (v39 == 9223372036854775814)
                        {
                            v33 = v40.from();
                            break;
                        }
                        switch (v41)
                        {
                        case 2:
                            v42 = v7 >> 16;
                            if ((char)v42)
                            {
                                if ((unsigned int)v42 != 1)
                                    goto LABEL_47165f;
                            }
                            else
                            {
                                if ((char)v40 == 15)
                                {
                                    if ((char)v7 != 2)
                                    {
                                        if (!(unsigned int)v7 && (unsigned int)(v40 >> 32) == 113)
                                            break;
                                    }
                                    else
                                    {
                                        if ((unsigned int)(v40 >> 32) == 99)
                                            break;
                                    }
                                }
                            }
                            if ((v7 & 255))
                                goto LABEL_47182d;
                            switch ((unsigned int)v40)
                            {
                            case 4: case 8:
                                v36 = v15.page_up();
                                if (v36)
                                {
                                    core::ptr::drop_in_place<crossterm::event::Event>(v39, v40);
                                    core::ptr::drop_in_place<uu_more::Pager>(&v15);
                                    return v36;
                                }
                                v0 = 0x110000;
                                if (uu_more::paging_add_back_message(v38, a1))
                                {
                                    core::ptr::drop_in_place<crossterm::event::Event>(v39, v40);
                                    core::ptr::drop_in_place<uu_more::Pager>(&v15);
                                    return v36;
                                }
                            case 5: case 9:
LABEL_4718dc:
                                if ((char)v15.should_close())
                                    break;
                                v0 = 0x110000;
                                v15.page_down();
                                break;
                            case 15:
                                v43 = v40 >> 32;
                                if (v43 == 32)
                                    goto LABEL_4718dc;
                                if ((unsigned int)v43 != 106)
                                {
                                    if ((unsigned int)v43 != 107)
                                        goto LABEL_47182d;
                                    v0 = 0x110000;
                                    v15.prev_line();
                                    break;
                                }
                                else if (!(char)v15.should_close())
                                {
                                    v0 = 0x110000;
                                    v15.next_line();
                                    break;
                                }
                                else
                                {
                                    core::ptr::drop_in_place<crossterm::event::Event>(v39, v40);
                                    core::ptr::drop_in_place<uu_more::Pager>(&v15);
                                    return 0;
                                }
                            default:
LABEL_47182d:
                                if ((char)v40 != 15)
                                    goto LABEL_47165f;
                                v0 = v40 >> 32;
                                break;
                            }
                        case 5:
                            v0 = 0x110000;
                            v15.page_resize(v40 & 4294967295, v40 >> 16, (int)v38[32]);
                        default:
LABEL_47165f:
                            core::ptr::drop_in_place<crossterm::event::Event>(v39, v40);
                            v28 = v38;
                            continue;
                        }
                        core::ptr::drop_in_place<crossterm::event::Event>(v39, v40);
                        v28 = v38;
                        if ((char)v38[37])
                        {
                            v44 = a1;
                            v45 = crossterm::command::write_command_ansi(v44);
                            v37 = v37;
                            if (!v45)
                            {
                                v45 = crossterm::command::write_command_ansi(v44, 2);
                                if (!v45)
                                {
                                    v45 = v44.flush();
                                    if (!v45)
                                        goto LABEL_4717d1;
                                }
                            }
                            v33 = v45.from();
                            break;
                        }
                        v44 = a1;
                        if ((char)v28[36])
                        {
                            v46 = crossterm::command::write_command_ansi(v44, 0);
                            if (!v46)
                            {
                                v46 = crossterm::command::write_command_ansi(v44);
                                if (!v46)
                                {
                                    v46 = v44.flush();
                                    if (!v46)
                                        goto LABEL_4717d1;
                                }
                            }
                            v33 = v46.from();
                            break;
                        }
                        else
                        {
LABEL_4717d1:
                            v36 = v15.draw(v44, v0);
                            if (v36)
                            {
                                core::ptr::drop_in_place<uu_more::Pager>(&v15);
                                return v36;
                            }
                        }
                    }
                }
                else
                {
LABEL_4714d9:
                    v33 = v34.from();
                }
            }
        }
        else
        {
LABEL_471504:
            v33 = v31.from();
        }
        core::ptr::drop_in_place<uu_more::Pager>(&v15);
        return v33;
    }
LABEL_4714b0:
    if (v30)
        goto LABEL_4714b9;
    goto LABEL_4715c5;
}
