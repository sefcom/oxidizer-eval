long long uu_ls::colors::color_name::ha1958c939bfc2826(unsigned long long a0, unsigned long a1, unsigned long a2, struct_0 *a3, unsigned long long *a4, unsigned long long a5)
{
    char v2;  // [bp-0x230], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v3;  // [sp-0x228], Other Possible Types: unsigned long
    char v4;  // [bp-0x220]
    unsigned long v5;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x178]
    char v7;  // [bp-0x170]
    char v8;  // [bp-0xd0]
    unsigned long long v9[6];  // [bp+0x8]
    char v10;  // [bp+0x10]
    unsigned long long v11[6];  // rax
    unsigned long long v12;  // rax
    unsigned long v13;  // r9
    unsigned long long v15;  // rbp
    unsigned long long v16;  // r15
    unsigned long long v17;  // r15
    unsigned long long v18;  // r14
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r14
    unsigned long long v21;  // rbp
    unsigned long long v22;  // r14
    void* v23;  // rax
    unsigned long long v24;  // rax
    void* v25;  // rdx
    void* v26;  // 4096

    v11 = v9;
    if (!a3->field_128)
    {
        if (a3->field_100)
        {
            v12 = lscolors::LsColors::style_for::hd27456393461d963(*(a4), &a3->field_100);
            v13 = v10;
            goto LABEL_4e35bd;
        }
        if (v11)
        {
            a1 = a1;
            std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v2, v11[4], v11[5]);
            goto LABEL_4e3383;
        }
        else
        {
LABEL_4e3480:
            a1 = a1;
            a2 = a2;
            v15 = &a3->field_48;
            v16 = a3->field_48;
            if (v16 == 3)
            {
                _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(v15, a3, a5, a3, a4, a5);
                v16 = a3->field_48;
            }
            std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v2, a3->field_20, a3->field_28);
            v19 = v2;
            v20 = v3;
            if (v19 != 2)
            {
                memcpy(&v7, &v4, 160);
                v5 = v19;
                v6 = v20;
                v23 = &v5;
            }
            else
            {
                v5 = 2;
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15944453427201852302(v20);
                v23 = 0;
            }
            v12 = lscolors::LsColors::style_for_path_with_metadata::h0433aec394f7f3e4(*(a4), &a3->padding_0[24], v24);
            v13 = v10;
        }
    }
    else
    {
        if (!v11)
            goto LABEL_4e3480;
        a1 = a1;
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v2, v11[4], v11[5]);
LABEL_4e3383:
        v17 = v2;
        v18 = v3;
        if (v17 != 2)
            memcpy(&v8, &v4, 160);
        if ((unsigned int)v17 != 2)
        {
            memcpy(&v5, &v8, 160);
            goto LABEL_4e356f;
        }
        else
        {
            a2 = a2;
            std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v2, a3->field_20, a3->field_28);
            v17 = v2;
            v21 = v3;
            if (v17 == 2)
            {
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15944453427201852302(v18);
                v2 = 2;
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15944453427201852302(v21);
                v25 = 0;
            }
            else
            {
                memcpy(&v5, &v4, 160);
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h5fe6eaabeda97e49E.llvm.15944453427201852302(v18);
LABEL_4e356f:
                memcpy(&v4, &v5, 160);
                v2 = v17;
                v3 = v22;
                v25 = &v2;
            }
        }
        v12 = lscolors::LsColors::style_for_path_with_metadata::h0433aec394f7f3e4(*(a4), &a3->padding_0[24], v25);
        v13 = v10;
LABEL_4e35bd:
    }
    uu_ls::colors::StyleManager::apply_style::hd112e0fa1899c311(v26, a4, v12, a1, a2, v13);
    return a0;
}
