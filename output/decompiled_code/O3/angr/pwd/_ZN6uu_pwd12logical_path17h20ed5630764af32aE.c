long long uu_pwd::logical_path::h20ed5630764af32a(unsigned long long a0[3])
{
    unsigned long long v0;  // [sp-0xf8]
    unsigned long long v1;  // [sp-0xf0]
    unsigned long long v2;  // [sp-0xe8]
    char v3;  // [bp-0xe0]
    char v4;  // [bp-0xd8]
    char v5;  // [bp-0xd0]
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xa6]
    unsigned long long v10;  // rbx
    char v11[4];  // rdi
    char v12[4];  // rax
    char v13[4];  // rcx
    char v15[4];  // r11
    char v17[4];  // r9
    char v18[4];  // rsi
    char v19[4];  // rdx
    char v20[4];  // r8
    unsigned long long v21;  // r10
    char v22[4];  // r9
    unsigned int v23;  // r11d
    unsigned int v24;  // r14d
    unsigned int v25;  // ebp
    char v29[4];  // r8
    unsigned long long v31;  // r8
    unsigned long long v32;  // rbp
    unsigned long long v35;  // r14
    char v36;  // r13b

    std::env::_var_os::h952923dbab063a4b(&v3, "PWD.0.0.27Display the full filename of the current working directory.{} [OPTION]... [FILE]...logical", 3);
    v10 = *((long long *)&v3);
    if (v10 != 0x8000000000000000)
    {
        v0 = *((long long *)&v4);
        v1 = *((long long *)&v5);
        std::path::Path::components::h4f3217acf0fc8653(&v3, *((long long *)&v4), v1);
        if (v8 || v5 - 5 >= 2)
        {
            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v3, v0, v1);
            v11 = *((long long *)&v4);
            v12 = *((long long *)&v5);
            v13 = v11 + v12;
            v15 = 0;
            do
            {
                v18 = 0;
                do
                {
                    v19 = v17;
                    v20 = v15;
                    if (v19 == v13)
                        break;
                    v21 = v19[0];
                    if ((char)v21 >= 0)
                    {
                        v22 = &v19[1];
                    }
                    else
                    {
                        v23 = (unsigned int)v21 & 31;
                        v24 = v19[1] & 63;
                        if ((v21 & 255) <= 223)
                        {
                            v22 = &v19[2];
                            v21 = v23 * 64 | v24;
                        }
                        else
                        {
                            v25 = v19[2] & 63 | v24 * 64;
                            if ((v21 & 255) >= 240)
                            {
                                v22 = v19 + 1;
                                v21 = v19[3] & 63 | v25 * 64 | (v23 & 7) * 0x40000;
                            }
                            else
                            {
                                v22 = &v19[3];
                                v21 = v25 | v23 * 0x1000;
                            }
                        }
                    }
                    v15 = v22 - v19 + (char *)v20;
                } while ((unsigned int)v21 != 47);
                v31 = v29 - v18;
                if (v31 == 2)
                {
                    if (!(*((short *)(v11 + v18)) == 11822))
                        goto LABEL_47b700;
LABEL_47b7dd:
                    if (*((long long *)&v3) << 1)
                    {
                        __rust_dealloc(v11);
                        goto LABEL_47b65f;
                    }
                }
                if (v31 == 1 && *((char *)(v11 + v18)) == 46)
                    goto LABEL_47b7dd;
LABEL_47b700:
            } while (v19 != v13);
            if (*((long long *)&v3) << 1)
                __rust_dealloc(v11);
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v3, v0, v1);
            v32 = *((long long *)&v3);
            v2 = *((long long *)&v4);
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v3, ".0.0.27Display the full filename of the current working directory.{} [OPTION]... [FILE]...logical", 1);
            v35 = *((long long *)&v3);
            if (v35 == 2 || (unsigned int)v32 == 2)
                v36 = 0;
            else
                v36 = *((long long *)&v7) ^ *((long long *)&v7) | *((long long *)&v6) ^ *((long long *)&v6) | -0x100 | (!(*((long long *)&v7) ^ *((long long *)&v7)) && !(*((long long *)&v6) ^ *((long long *)&v6)));
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h018207573433bc03(v32, v2);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h018207573433bc03(v35, *((long long *)&v4));
            if (v36)
            {
                a0[0] = v10;
                a0[1] = v0;
                a0[2] = v1;
                return a0;
            }
        }
    }
LABEL_47b65f:
    std::env::current_dir::h8e5fbaefdf378c8c(a0);
    if (v10 << 1)
    {
        __rust_dealloc(v0);
        return a0;
    }
    return a0;
}
