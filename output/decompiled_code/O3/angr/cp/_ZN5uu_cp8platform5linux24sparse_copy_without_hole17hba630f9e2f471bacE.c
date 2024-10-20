long long uu_cp::platform::linux::sparse_copy_without_hole::hba630f9e2f471bac(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0x130]
    unsigned int v1;  // [sp-0x12c]
    unsigned long long v2;  // [sp-0x128]
    unsigned long long v3;  // [sp-0x120]
    unsigned long long v4;  // [sp-0x118]
    char v5;  // [bp-0x110]
    char v6;  // [bp-0x10c]
    char v7;  // [bp-0x108]
    unsigned int v8;  // [sp-0xfc]
    unsigned long v9;  // [sp-0xf8]
    unsigned long long v10;  // [sp-0xf0]
    unsigned long long v11;  // [sp-0xe8]
    unsigned long long v12;  // [sp-0xe0]
    char v13;  // [bp-0xd8], Other Possible Types: unsigned int
    char v14;  // [sp-0xd7]
    char v15;  // [sp-0xd5]
    char v16;  // [bp-0xd4], Other Possible Types: unsigned short
    char v17;  // [bp-0x90]
    unsigned long long v19;  // rbp
    unsigned long long v20;  // r14
    unsigned int v21;  // ebp
    unsigned long long v22;  // r14
    unsigned long v24;  // r14
    unsigned long long v25;  // rax
    unsigned long v26;  // r12
    unsigned long long v27;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // r15
    unsigned long long v33;  // r13
    unsigned long long v34;  // r15
    unsigned long long v35;  // rbx
    unsigned long long v37;  // rax
    unsigned long long v38;  // r14
    unsigned long long v39;  // rax
    unsigned long long v40;  // r13
    unsigned int v41;  // ebp

    v12 = 0x1b600000000;
    v13 = 0;
    v16 = 0;
    v13 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v12, a0, a1);
    if (*((int *)&v5))
    {
        v19 = *((long long *)&v7);
        return v19;
    }
    v0 = *((int *)&v6);
    v12 = 0x1b600000000;
    v13 = 0;
    v16 = 0;
    v14 = 1;
    v16 = 1;
    v15 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v12, a2, a3);
    v1 = *((int *)&v6);
    std::fs::File::metadata::he899a18112e6f19e(&v12, &v0);
    if ((int)v12 == 2)
    {
        close(v1);
        close(v0);
        return v19;
    }
    v20 = *((long long *)&v17);
    if (v20 < 0)
    {
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    else if (ftruncate(v1, v20) >= 0)
    {
        v21 = v0;
        v4 = v20;
        v3 = v22;
        if (!v20)
        {
            v24 = lseek(v21, 0, 3);
            v25 = lseek(v21, v24, 4);
            if (v24 == -1)
            {
                close(v1);
                close(v0);
                return 0;
            }
            else if (v25 == -1)
            {
                close(v1);
                close(v0);
                return 0;
            }
            else
            {
                v2 = 1;
                if (v24 >= -1 && v25 >= -1)
                {
                    v2 = 1;
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
                }
            }
            goto LABEL_4c7517;
        }
        v2 = __rust_alloc_zeroed(v3, 1);
        if (!v2)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v26 = lseek(v21, 0, 3);
        v27 = lseek(v21, v26, 4);
        if (v26 != -1 && v27 != -1)
        {
            v11 = -(v3);
            v8 = v21;
            do
            {
                if (v26 < -1 || v27 < -1)
                {
LABEL_4c7517:
                    v19 = (std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() & 4294967295 & 4294967295) * 0x100000000 | 2;
LABEL_4c7527:
                    if (v4)
                        __rust_dealloc(v2);
                    close(v1);
                    close(v0);
                    return v19;
                }
                v9 = v27;
                v10 = v27 - v26;
                if (v27 > v26)
                {
                    v19 = std::os::unix::fs::FileExt::read_exact_at::hb258de642e8368cd(&v0, v2, v30, v26);
                    if (!(!v19) || !((v19 = std::os::unix::fs::FileExt::write_all_at::h4ea001ca8a8f9875(&v1, v2, v30, v26), !v19)))
                        goto LABEL_4c7527;
                    v31 = v11 + v9 - v26;
                    while (true)
                    {
                        v33 = 0;
                        v34 = v31;
                        v35 = v3 + v33;
                        if (!(v35 >= v33 + 1) || !(v35 < v10))
                            break;
                        v37 = v3;
                        v38 = v34 - v37;
                        v40 = v33 + v26 + v3;
                        v19 = std::os::unix::fs::FileExt::read_exact_at::hb258de642e8368cd(&v0, v2, v39, v40);
                        if (!(!v19) || !((v19 = std::os::unix::fs::FileExt::write_all_at::h4ea001ca8a8f9875(&v1, v2, v39, v40), !v19)))
                            goto LABEL_4c7527;
                        continue;
                        v19 = std::os::unix::fs::FileExt::write_all_at::h4ea001ca8a8f9875(&v1, v2, v39, v40);
                        if (v19)
                            goto LABEL_4c7527;
                    }
                }
                v41 = v8;
                v26 = lseek(v41, v9, 3);
                v27 = lseek(v41, v26, 4);
            } while (!(v26 == -1) && !(v27 == -1));
            if (!v4)
            {
                close(v1);
                close(v0);
                return 0;
            }
        }
        __rust_dealloc(v2);
        close(v1);
        close(v0);
        return 0;
    }
    else
    {
        v19 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
        close(v1);
        close(v0);
        return v19;
    }
}
