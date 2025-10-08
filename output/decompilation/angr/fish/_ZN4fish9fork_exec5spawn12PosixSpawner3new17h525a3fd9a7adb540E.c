long long fish::fork_exec::spawn::PosixSpawner::new(unsigned int a0[2], unsigned long long a1, unsigned int a2, unsigned int a3, unsigned long long a4[3])
{
    int v0;  // [bp-0x478]
    int v1;  // [bp-0x468]
    int v2;  // [bp-0x458]
    int v3;  // [bp-0x448]
    char v4;  // [bp-0x438]
    int v5;  // [bp-0x428]
    int v6;  // [bp-0x418]
    int v7;  // [bp-0x408]
    int v8;  // [bp-0x3f8]
    int v9;  // [bp-0x3e8]
    char v10;  // [bp-0x3d8]
    int v11;  // [bp-0x3c8]
    char v12;  // [bp-0x3b8]
    int v13;  // [bp-0x3a0], Other Possible Types: unsigned int (32 bits)[4]
    int v14;  // [bp-0x390]
    int v15;  // [bp-0x380]
    int v16;  // [bp-0x370]
    int v17;  // [bp-0x360]
    char v18;  // [bp-0x350]
    int v19;  // [bp-0x340]
    char v20;  // [bp-0x330]
    char v21;  // [bp-0x320], Other Possible Types: unsigned int
    unsigned int v22;  // [bp-0x31c]
    int v23;  // [bp-0x318], Other Possible Types: char
    int v24;  // [bp-0x308]
    int v25;  // [bp-0x2f8]
    int v26;  // [bp-0x2e8]
    char v27;  // [bp-0x2d8]
    int v28;  // [bp-0x1d0]
    int v29;  // [bp-0x1c0]
    int v30;  // [bp-0x1b0]
    int v31;  // [bp-0x1a0]
    char v32;  // [bp-0x190]
    char v33;  // [bp-0x180]
    void* v35;  // r13
    unsigned long long v36;  // rdx

    v21.new();
    if (v21 == 1)
    {
        a0[1] = v22;
        a0[0] = 1;
        return a0;
    }
    memcpy(&v33, &v23, 336);
    v21.new();
    if (v21 == 1)
    {
        a0[1] = v22;
        a0[0] = 1;
    }
    else
    {
        memcpy(&v4, &v27, 16);
        v3 = v26;
        v2 = v25;
        v1 = v24;
        v0 = v23;
        if (a2)
        {
            if (!((char)v33.set_flags(14) & 1) && !((char)fish::fork_exec::spawn::Attr::set_pgroup() & 1))
                goto LABEL_13b2ceb;
        }
        else
        {
            if (!((char)v33.set_flags(12) & 1))
            {
LABEL_13b2ceb:
                once_cell::sync::OnceCell<T>::get_or_try_init();
                if (!((char)fish::fork_exec::spawn::Attr::set_sigdefault() & 1))
                {
                    sigemptyset(&v13);
                    memcpy(&v12, &v20, 16);
                    v11 = v19;
                    memcpy(&v10, &v18, 16);
                    v9 = v17;
                    v8 = v16;
                    v7 = v15;
                    v6 = v14;
                    v5 = v13;
                    fish::fork_exec::blocked_signals_for_job(a1, &v5);
                    if (!((char)fish::fork_exec::spawn::Attr::set_sigmask() & 1))
                    {
                        if (a4[2])
                        {
                            v35 = 0;
                            do
                            {
                                if (*((int *)(4 + a4[1] + (char *)v35)) < 0)
                                {
                                    if (!((char)fish::fork_exec::spawn::FileActions::add_close() & 1))
                                        goto LABEL_13b2e24;
                                    else
                                        goto LABEL_13b2db1;
                                }
                                else if (!((char)fish::fork_exec::spawn::FileActions::add_dup2() & 1))
                                {
                                    continue;
                                }
LABEL_13b2e24:
                                v35 += 8;
                            } while (a4[2] * 8 != v35);
                        }
                        memcpy(&v21, &v33, 336);
                        v28 = v0;
                        v29 = v1;
                        v30 = v2;
                        v31 = v3;
                        memcpy(&v32, &v4, 16);
                        memcpy(a0 + 1, &v21, 416);
                        a0[0] = 0;
                        return a0;
                    }
                }
            }
        }
LABEL_13b2db1:
        a0[1] = v36;
        a0[0] = 1;
        core::ptr::drop_in_place<fish::fork_exec::spawn::FileActions>();
    }
    core::ptr::drop_in_place<fish::fork_exec::spawn::Attr>();
    return a0;
}
