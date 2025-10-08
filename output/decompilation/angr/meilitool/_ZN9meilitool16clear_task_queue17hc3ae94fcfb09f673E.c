long long meilitool::clear_task_queue(unsigned long long a0[3])
{
    void* v0;  // [bp-0x1d8], Other Possible Types: int, unsigned long long, unsigned int, unsigned long
    int v1;  // [bp-0x1d0], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x1c8], Other Possible Types: unsigned int, unsigned long long
    unsigned int v3;  // [bp-0x1c8]
    int v4;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x1b8], Other Possible Types: unsigned int
    char *v6;  // [bp-0x1a0]
    int v7;  // [bp-0x198], Other Possible Types: char
    unsigned long long v8;  // [bp-0x188]
    unsigned long long v9;  // [bp-0x180]
    unsigned int v10;  // [bp-0x174]
    unsigned int v11;  // [bp-0x170]
    unsigned int v12;  // [bp-0x16c]
    unsigned int v13;  // [bp-0x168]
    unsigned int v14;  // [bp-0x164]
    unsigned int v15;  // [bp-0x160]
    unsigned int v16;  // [bp-0x15c]
    char *v17;  // [bp-0x158], Other Possible Types: char
    unsigned long long v18;  // [bp-0x150]
    unsigned long long v19;  // [bp-0x148]
    int v20;  // [bp-0x140]
    int v21;  // [bp-0x130]
    void* v22;  // [bp-0x120]
    char v23;  // [bp-0x118]
    unsigned long long v24;  // [bp-0x110]
    unsigned long long v25;  // [bp-0x108]
    char *v26;  // [bp-0x100]
    char v27;  // [bp-0xf8]
    char *v28;  // [bp-0xf0]
    char *v29;  // [bp-0xe8]
    char *v30;  // [bp-0xe0]
    char *v31;  // [bp-0xd8]
    char *v32;  // [bp-0xd0]
    char *v33;  // [bp-0xc8]
    char v34;  // [bp-0xc0]
    unsigned long long v35;  // [bp-0xb8]
    unsigned long long v36;  // [bp-0xb0]
    unsigned long long v37;  // [bp-0xa8]
    char *v38;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long v39;  // [bp-0x98]
    unsigned long long v40;  // [bp-0x98]
    char *v41;  // [bp-0x90]
    int v42;  // [bp-0x90]
    unsigned long long v43;  // [bp-0x88]
    unsigned long long v44;  // [bp-0x80]
    char *v45;  // [bp-0x78]
    int v46;  // [bp-0x78]
    unsigned long long v47;  // [bp-0x70]
    char *v48;  // [bp-0x68]
    unsigned long long v49;  // [bp-0x60]
    unsigned long long v50;  // [bp-0x58]
    unsigned long long v51;  // [bp-0x58]
    int v52;  // [bp-0x50]
    int v53;  // [bp-0x40]
    unsigned long long v55;  // r14
    unsigned long long v56;  // r15
    char *v57;  // rdx
    char *v58;  // r12
    unsigned long long v59;  // rcx
    unsigned long long v60;  // r8
    char *v61;  // r13
    char *v62;  // rax
    void* v63;  // r14
    unsigned long long v64;  // rax

    v55 = a0[1];
    v56 = a0[2];
    v34.join(v55, v56, "tasks", 5);
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v4 = 429496729601;
    v17.open(&(char)v0, &v34);
    if (((char)v17.with_context(v35, v36) & 1))
    {
        core::ptr::drop_in_place<std::path::PathBuf>(&v34);
        core::ptr::drop_in_place<std::path::PathBuf>(a0);
        return v57;
    }
    v6 = v57;
    v0 = &g_926978;
    v1 = 1;
    v2 = 8;
    *((uint128_t *)&v4) = 0;
    std::io::stdio::_eprint(&(char)v0);
    (char)v0.new(&v6, v57, v59, v60);
    memcpy(&v17, &v1, 16);
    v19 = v4;
    if (v0 == 1)
    {
        v2 = v19;
        *((int128_t *)&v0) = *((int128_t *)&v17);
        v58 = (char)v0.from();
        goto LABEL_75b586;
    }
    v8 = v19;
    memcpy(&v7, &v17, 16);
    meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "all-tasks", 9);
    v58 = v1;
    if (((char)v0 & 1))
    {
LABEL_75b57c:
        core::ptr::drop_in_place<heed::txn::RwTxn>(&v7);
LABEL_75b586:
        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v6);
        core::ptr::drop_in_place<std::path::PathBuf>(&v34);
        core::ptr::drop_in_place<std::path::PathBuf>(a0);
        return v58;
    }
    (char)v0.len(v58, v3, &v7);
    if (v0 == 5)
    {
        v37 = v1;
        meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "status", 6);
        v61 = v1;
        if (((char)v0 & 1))
            goto LABEL_75b579;
        v16 = v3;
        meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "kind", 4);
        v62 = v1;
        if (!((char)v0 & 1))
        {
            v33 = v62;
            v15 = v3;
            meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "index-tasks", 11);
            v62 = v1;
            if (!((char)v0 & 1))
            {
                v32 = v62;
                v14 = v3;
                meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "canceled_by", 11);
                v62 = v1;
                if (!((char)v0 & 1))
                {
                    v31 = v62;
                    v13 = v3;
                    meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "enqueued-at", 11);
                    v62 = v1;
                    if (!((char)v0 & 1))
                    {
                        v30 = v62;
                        v12 = v3;
                        meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "started-at", 10);
                        v62 = v1;
                        if (!((char)v0 & 1))
                        {
                            v29 = v62;
                            v11 = v3;
                            meilitool::try_opening_poly_database(&(char)v0, &v6, &v7, "finished-atWhile trying to read the content of While opening the  databaseMissing the  poly databaseWhile clearing the Impossible to parse instance-uid: Impossible to read Dumping the keys...\nSuccessfully dumped  keys!\nDumping the queue\nDumping the tasks\nDumping the enqueued tasks reading them in obkv format...\nDumping the enqueued tasks reading them in JSON stream format...\n tasks including  enqueued tasks!\nDumping the batches\n batches!\nDumping the indexes...\n indexes!\nThe tool is not dumping experimental features, please set them by hand afterward\n.dumpDump exported at path ", 11);
                            v62 = v1;
                            if (!((char)v0 & 1))
                            {
                                v28 = v62;
                                v10 = v3;
                                v62 = meilitool::try_clearing_poly_database(&v7, v58, v3, "all-tasks", 9);
                                if (!v62)
                                {
                                    v61 = meilitool::try_clearing_poly_database(&v7, v61, v16, "status", 6);
                                    if (!v61)
                                    {
                                        v61 = meilitool::try_clearing_poly_database(&v7, v33, v15, "kind", 4);
                                        if (!v61)
                                        {
                                            v61 = meilitool::try_clearing_poly_database(&v7, v32, v14, "index-tasks", 11);
                                            if (!v61)
                                            {
                                                v61 = meilitool::try_clearing_poly_database(&v7, v31, v13, "canceled_by", 11);
                                                if (!v61)
                                                {
                                                    v61 = meilitool::try_clearing_poly_database(&v7, v30, v12, "enqueued-at", 11);
                                                    if (!v61)
                                                    {
                                                        v61 = meilitool::try_clearing_poly_database(&v7, v29, v11, "started-at", 10);
                                                        if (!v61)
                                                        {
                                                            v61 = meilitool::try_clearing_poly_database(&v7, v28, v10, "finished-atWhile trying to read the content of While opening the  databaseMissing the  poly databaseWhile clearing the Impossible to parse instance-uid: Impossible to read Dumping the keys...\nSuccessfully dumped  keys!\nDumping the queue\nDumping the tasks\nDumping the enqueued tasks reading them in obkv format...\nDumping the enqueued tasks reading them in JSON stream format...\n tasks including  enqueued tasks!\nDumping the batches\n batches!\nDumping the indexes...\n indexes!\nThe tool is not dumping experimental features, please set them by hand afterward\n.dumpDump exported at path ", 11);
                                                            if (!v61)
                                                            {
                                                                v2 = v8;
                                                                v0 = v7;
                                                                v17.commit(&(char)v0);
                                                                v58 = v17.context("While committing the transaction", 32);
                                                                if (!v58)
                                                                {
                                                                    v17 = &v37;
                                                                    v18 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                                                    v0 = &g_926988;
                                                                    v1 = 2;
                                                                    v5 = 0;
                                                                    v2 = &v17;
                                                                    v4 = 1;
                                                                    std::io::stdio::_eprint(&(char)v0);
                                                                    v0 = &g_9269a8;
                                                                    v1 = 1;
                                                                    v2 = 8;
                                                                    *((uint128_t *)&v4) = 0;
                                                                    std::io::stdio::_eprint(&(char)v0);
                                                                    v22 = 0;
                                                                    v23.join(v55, v56, "update_files", 12);
                                                                    std::fs::read_dir(&(char)v0, &v23);
                                                                    v17.with_context(v0, v1, v24, v25);
                                                                    v58 = v17;
                                                                    if ((char)v18 == 2)
                                                                    {
                                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v23);
                                                                        goto LABEL_75b586;
                                                                    }
                                                                    else
                                                                    {
                                                                        v26 = v58;
                                                                        v27 = v18;
                                                                        v63 = 0;
                                                                        while (true)
                                                                        {
                                                                            v17.next(&v26);
                                                                            if ((int)v17 != 1)
                                                                                break;
                                                                            if (v18)
                                                                            {
                                                                                v38 = v18;
                                                                                v39 = v51;
                                                                                v44 = (long long)v21;
                                                                                v42 = v20;
                                                                                (char)v0.path(&v38);
                                                                                v64 = std::fs::remove_file(&(char)v0);
                                                                                if (!v64)
                                                                                {
                                                                                    v63 += 1;
                                                                                    v22 = v63;
                                                                                }
                                                                                else
                                                                                {
                                                                                    v9 = v64;
                                                                                    v50.path(&v38);
                                                                                    v53 = v52;
                                                                                    v45 = &v53;
                                                                                    v47 = <std::path::Display as core::fmt::Debug>::fmt;
                                                                                    v48 = &v9;
                                                                                    v49 = <std::io::error::Error as core::fmt::Display>::fmt;
                                                                                    v0 = &g_9269b8;
                                                                                    v1 = 3;
                                                                                    v5 = 0;
                                                                                    v2 = &v45;
                                                                                    v4 = 2;
                                                                                    std::io::stdio::_eprint(&(char)v0);
                                                                                    core::ptr::drop_in_place<std::path::PathBuf>(&v50);
                                                                                    core::ptr::drop_in_place<std::io::error::Error>(&v9);
                                                                                }
                                                                                core::ptr::drop_in_place<std::fs::DirEntry>(&v38);
                                                                            }
                                                                            else
                                                                            {
                                                                                v51 = v39;
                                                                                *((int128_t *)&v46) = *((int128_t *)&v24);
                                                                                v38 = &(unsigned long long)v46;
                                                                                v40 = <std::path::Display as core::fmt::Debug>::fmt;
                                                                                v41 = &v51;
                                                                                v43 = <std::io::error::Error as core::fmt::Display>::fmt;
                                                                                v0 = &g_9269e8;
                                                                                v1 = 3;
                                                                                v5 = 0;
                                                                                v2 = &v38;
                                                                                v4 = 2;
                                                                                std::io::stdio::_eprint(&(char)v0);
                                                                                core::ptr::drop_in_place<std::io::error::Error>(&v51);
                                                                                v50 = v51;
                                                                            }
                                                                        }
                                                                        core::ptr::drop_in_place<std::fs::ReadDir>(&v26);
                                                                        v17 = &v22;
                                                                        v18 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                                                        v0 = &g_926a18;
                                                                        v1 = 2;
                                                                        v5 = 0;
                                                                        v2 = &v17;
                                                                        v4 = 1;
                                                                        std::io::stdio::_eprint(&(char)v0);
                                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v23);
                                                                        core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v6);
                                                                        core::ptr::drop_in_place<std::path::PathBuf>(&v34);
                                                                        core::ptr::drop_in_place<std::path::PathBuf>(a0);
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        *((int128_t *)&v1) = *((int128_t *)&v1);
        v62 = v0.from();
    }
    v61 = v62;
LABEL_75b579:
    v58 = v61;
    goto LABEL_75b57c;
}
