long long uu_cp::copy_helper(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_0 *a5, unsigned long long a6, unsigned long long a7, char a8, char a9, unsigned long long a10, char a11)
{
    unsigned short v0;  // [bp-0x78]
    char v1;  // [bp-0x76]
    unsigned short v2;  // [bp-0x74]
    char v3;  // [bp-0x72]
    char v4;  // [bp-0x68], Other Possible Types: unsigned long
    unsigned short v5;  // [bp-0x60]
    char v6;  // [bp-0x5e]
    char v7;  // [bp-0x5d]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x4d]
    char v10;  // [bp-0x48]
    int v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v13;  // r13
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // 4096
    unsigned long long v18;  // rax
    unsigned int v19;  // eax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm0
    int v25;  // xmm1

    v13 = 9223372036854775820;
    if (a5->padding_58[2])
    {
        v14 = a3.parent(a4);
        if (!v14)
        {
            v15 = a4;
            if (v14)
                goto LABEL_4a5098;
LABEL_4a5097:
            v17 = a3;
        }
        else
        {
            v15 = v16;
            if (!v14)
                goto LABEL_4a5097;
LABEL_4a5098:
            v17 = v14;
        }
        v18 = std::fs::create_dir_all(v17, v15);
        if (v18)
        {
            *((unsigned long long *)a0) = 9223372036854775809;
            *((unsigned long long *)&a0[8]) = v18;
            return v18;
        }
    }
    if (a4)
    {
        v19 = *((char *)(a3 + a4 - 1));
        if (v19 != 47 && v19 != 92 || (char)a3.is_dir(a4))
            goto LABEL_4a50e3;
        v20 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0 + 8, a3, a4);
        v13 = 9223372036854775819;
    }
    else
    {
LABEL_4a50e3:
        if (!(!a9 || a5->field_5c != 1 || a5->field_54[3]))
        {
            v20 = uu_cp::copy_fifo(&v4, a3, a4, (unsigned long long)a5->field_54, (unsigned long long)a5->padding_5d);
            if (v4 != 9223372036854775820)
            {
                v21 = *((long long *)&v12);
                *((unsigned long long *)&a0[48]) = v21;
                v22 = *((int128_t *)&v4);
                v23 = *((int128_t *)&v8);
                *((int128_t *)&a0[32]) = *((int128_t *)&v10);
                a0[16] = v23;
                *(a0) = v22;
                return v21;
            }
        }
        else if (a8)
        {
            v20 = uu_cp::copy_link(&(char)v4, a1, a2, a3, a4, a10);
            if (v4 != 9223372036854775820)
            {
                v21 = *((long long *)&v12);
                *((unsigned long long *)&a0[48]) = v21;
                v22 = *((int128_t *)&v4);
                v23 = *((int128_t *)&v8);
                *((int128_t *)&a0[32]) = *((int128_t *)&v10);
                a0[16] = v23;
                *(a0) = v22;
                return v21;
            }
        }
        else
        {
            uu_cp::platform::linux::copy_on_write(&(char)v4, a1, a2, a3, a4, *((int *)&a5->padding_60[2]), a5->padding_60[1], a6, a7, a9, a11);
            v0 = v5;
            v1 = v6;
            if (v4 != 9223372036854775820)
            {
                v24 = *((int128_t *)&v7);
                v25 = *((int128_t *)&v9);
                *((int128_t *)&a0[40]) = (int128_t)v11;
                a0[27] = v25;
                a0[11] = v24;
                *((char *)&a0[10]) = v1;
                *((unsigned short *)&a0[8]) = v0;
                *((unsigned long *)a0) = v4;
                return v4;
            }
            v2 = v0;
            v20 = v1;
            v3 = v20;
            if (!a5->field_54[2] && a5->padding_5d)
                v20 = uu_cp::show_debug(&v2);
        }
    }
    *((unsigned long long *)a0) = v13;
    return v20;
}
