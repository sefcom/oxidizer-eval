long long uu_cp::platform::linux::copy_on_write::h0f57c2729634b69a(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0;  // [sp-0x128]
    unsigned long long v1;  // [sp-0x120]
    unsigned long long v2;  // [sp-0x118]
    unsigned int v3;  // [sp-0x10c]
    char v4;  // [bp-0x108]
    char v5;  // [bp-0x104]
    char v6;  // [bp-0x100]
    char v7;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned int v8;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xe8]
    char v10;  // [bp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned int v11;  // [bp-0xd8], Other Possible Types: char
    unsigned short v12;  // [sp-0xd4]
    char v13;  // [bp-0xd0]
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0x90]
    char v16;  // [bp-0x80]
    unsigned long v17;  // [bp+0x8]
    char v18;  // [bp+0x10]
    char v19;  // [bp+0x18]
    char v20;  // [bp+0x20]
    unsigned long long v21;  // rdx
    char v22;  // al
    unsigned long long v23;  // rax
    uint128_t v24[3];  // rax
    char v25;  // r13b
    char v26;  // r13b
    char v27;  // r13b
    unsigned long long v28;  // r12
    unsigned long long v29;  // rbp
    unsigned long long v30;  // r12
    unsigned long long v31;  // r12
    unsigned long long v32;  // r12
    unsigned long long v33;  // r12
    unsigned long long v34;  // r13
    unsigned long long v41;  // r12
    unsigned long long v42;  // r12
    unsigned long long v43;  // r12
    unsigned long long v44;  // r12
    unsigned long long v45;  // rax
    unsigned long long v46;  // r12
    unsigned long long v47;  // r13
    char v48;  // r12b
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rsi
    unsigned long long v51;  // r12
    char v52;  // r12b
    void* v54;  // r12
    void* v56;  // r12
    char v57;  // r12b
    void* v58;  // r12
    char v59;  // r12b
    char v60;  // r12b
    unsigned int v61;  // r9
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v64;  // r8
    unsigned int v65;  // r9
    unsigned long long v66;  // rax
    unsigned int v67;  // r9
    unsigned int v68;  // r9
    unsigned long long v69;  // r15
    unsigned long long v70;  // r12

    v21 = (char)v17;
    if (!(char)a5)
    {
        if ((char)v21 == 1)
        {
            v23 = uu_cp::platform::linux::clone::h261e001df141f054(a1, a2, a3, a4, 0, a5);
            goto LABEL_4c800e;
        }
        else
        {
            v24 = __rust_alloc(54, 1);
            if (v24)
            {
                v24[2] = 153455117660069442438878859420629560430;
                v24[1] = 147712497310335928920445021816348500083;
                v24[0] = 161342662478731382748276060726915575136;
                *((long long *)((char *)&v24[2] + 14)) = 8031173096010773362;
                *((long long *)&a0->field_8) = 54;
                a0->field_10 = v24;
                a0->field_18 = 54;
                a0->field_0 = 4;
                return a0;
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
    }
    v22 = v20;
    if (a5 == 1)
    {
        if (!(char)v21)
        {
            if (v22)
            {
                if (!(!uu_cp::platform::linux::copy_fifo_contents::h9b01689231ae8f64(a1, a2, a3, a4)))
                    goto LABEL_4c7ca8;
LABEL_4c7c18:
                a0->field_8 = 3;
                a0->padding_9[0] = 4;
                a0->padding_9[1] = 2;
                a0->field_0 = 13;
                return a0;
            }
            v2 = a3;
            v1 = a4;
            uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(&v10, a1, a2);
            v25 = v11;
            if (v25 == 2)
                goto LABEL_4c7e5a;
            v29 = *((long long *)&v13);
            v10 = 0x1b600000000;
            v11 = 0;
            v12 = 0;
            v11 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v10, a1, a2);
            if (*((int *)&v4))
            {
LABEL_4c7e5a:
                v0 = *((long long *)&v6);
LABEL_4c7e5e:
                v48 = 0;
                goto LABEL_4c7e66;
            }
            v0 = v29;
            v3 = *((int *)&v5);
            std::fs::File::metadata::he899a18112e6f19e(&v10, &v3);
            if ((int)v10 == 2)
            {
                v0 = *((long long *)&v11);
                close(v3);
                goto LABEL_4c7e5e;
            }
            v7 = v10;
            v41 = *((long long *)&v15);
            v8 = *((long long *)&v16);
            v42 = v41 >> 9;
            close(v3);
            if (v8 >= v42)
            {
                v49 = v1;
                v50 = v2;
                if (!v25)
                    goto LABEL_4c8630;
                else
                    v58 = v42 | -0x100 | !v0;
            }
            else
            {
                v49 = v1;
                v50 = v2;
                if (v25)
                {
                    v57 = !v0;
                    v58 = v42 | -0x100 | v57;
                }
                else
                {
LABEL_4c8630:
                    v58 = 0;
                }
            }
            std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v10, v50, v49);
            if ((int)v10 == 2)
            {
                ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(*((long long *)&v11));
                if (!v57)
                    goto LABEL_4c866b;
LABEL_4c868c:
                v64 = 1;
                goto LABEL_4c87a1;
            }
            else
            {
                if (!(!(*((int *)&v14) & 0xf000) == 0x1000) || !(!v57))
                    goto LABEL_4c868c;
LABEL_4c866b:
                v48 = v58 | -0x100 | 1;
LABEL_4c7e66:
                v66 = uu_cp::platform::linux::clone::h261e001df141f054(a1, a2, v2, v1, 2, v65);
LABEL_4c7e81:
                v23 = v66;
                if (!v48)
                    goto LABEL_4c8005;
            }
        }
        else if ((unsigned int)v21 != 1)
        {
            if (v22)
            {
LABEL_4c7c92:
                if (!(!uu_cp::platform::linux::copy_fifo_contents::h9b01689231ae8f64(a1, a2, a3, a4)))
                    goto LABEL_4c7ca8;
                goto LABEL_4c8131;
            }
            v2 = a3;
            v1 = a4;
            uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(&v10, a1, a2);
            v28 = v11;
            if ((char)v28 == 2)
                goto LABEL_4c7f5d;
            v10 = 0x1b600000000;
            v11 = 0;
            v12 = 0;
            v11 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v10, a1, a2);
            if (!*((int *)&v4))
            {
                v3 = *((int *)&v5);
                std::fs::File::metadata::he899a18112e6f19e(&v10, &v3);
                if ((int)v10 == 2)
                {
                    v0 = *((long long *)&v11);
                    close(v3);
                    goto LABEL_4c7f61;
                }
                else
                {
                    v0 = v10;
                    close(v3);
                    v52 = v28 | -0x100 | 1;
                }
            }
            else
            {
LABEL_4c7f5d:
                v0 = *((long long *)&v6);
LABEL_4c7f61:
                v52 = 0;
            }
            v62 = uu_cp::platform::linux::clone::h261e001df141f054(a1, a2, v2, v1, 1, v61);
LABEL_4c7ffa:
            v23 = v62;
            if (!v52)
            {
LABEL_4c8005:
                ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v0);
            }
        }
        else
        {
            if (v22)
            {
                if (!(!uu_cp::platform::linux::copy_fifo_contents::h9b01689231ae8f64(a1, a2, a3, a4)))
                    goto LABEL_4c7ca8;
                goto LABEL_4c7c18;
            }
            v2 = a3;
            v1 = a4;
            uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(&v10, a1, a2);
            v27 = v11;
            if (v27 == 2)
                goto LABEL_4c7dde;
            v33 = *((long long *)&v13);
            v10 = 0x1b600000000;
            v11 = 0;
            v12 = 0;
            v11 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v10, a1, a2);
            if (*((int *)&v4))
            {
LABEL_4c7dde:
                v0 = *((long long *)&v6);
LABEL_4c7de2:
                v48 = 0;
                goto LABEL_4c7dea;
            }
            else
            {
                v0 = v10;
                v3 = *((int *)&v5);
                std::fs::File::metadata::he899a18112e6f19e(&v10, &v3);
                if ((int)v10 == 2)
                {
                    v0 = *((long long *)&v11);
                    close(v3);
                    goto LABEL_4c7de2;
                }
                v9 = v33;
                v45 = *((long long *)&v16);
                v46 = *((long long *)&v15) >> 9;
                v7 = v45;
                v8 = v45 | -0x100 | v45 < v46;
                close(v3);
                if (!v27)
                {
                    v56 = v8;
                    v2 = v2;
                    v1 = v1;
                }
                else if (v7 >= v46)
                {
                    goto LABEL_4c8740;
                }
                else if (v9)
                {
                    v56 = v46 | -0x100 | 1;
                    v2 = v2;
                    v1 = v1;
                }
                else
                {
LABEL_4c8740:
                    v56 = 0;
                    v2 = v2;
                    v1 = v1;
                }
                std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v10, v2, v1);
                if ((int)v10 == 2)
                {
                    ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(*((long long *)&v11));
                    if (!(v56 & 255 & 255))
                        goto LABEL_4c876a;
LABEL_4c878b:
                    v64 = 3;
                }
                else
                {
                    if (!(!((char)v56 & (*((int *)&v14) & 0xf000) != 0x1000)))
                        goto LABEL_4c878b;
LABEL_4c876a:
                    v48 = v56 | -0x100 | 1;
LABEL_4c7dea:
                    v66 = uu_cp::platform::linux::clone::h261e001df141f054(a1, a2, v2, v1, 1, v67);
                    goto LABEL_4c7e81;
                }
            }
LABEL_4c87a1:
            v23 = uu_cp::platform::linux::clone::h261e001df141f054(a1, a2, v2, v1, v64, v68);
        }
    }
    else
    {
        if (!(char)v21)
        {
            if (v22)
            {
                if (!(!uu_cp::platform::linux::copy_fifo_contents::h9b01689231ae8f64(a1, a2, a3, a4)))
                    goto LABEL_4c7ca8;
                goto LABEL_4c7c18;
            }
            v2 = a3;
            v1 = a4;
            uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(&v10, a1, a2);
            v26 = v11;
            if (v26 == 2)
                goto LABEL_4c7fd9;
            v32 = *((long long *)&v13);
            v10 = 0x1b600000000;
            v11 = 0;
            v12 = 0;
            v11 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v10, a1, a2);
            if (*((int *)&v4))
            {
LABEL_4c7fd9:
                v0 = *((long long *)&v6);
LABEL_4c7fdd:
                v52 = 0;
                goto LABEL_4c7fe5;
            }
            else
            {
                v0 = v10;
                v3 = *((int *)&v5);
                std::fs::File::metadata::he899a18112e6f19e(&v10, &v3);
                if ((int)v10 == 2)
                {
                    v0 = *((long long *)&v11);
                    close(v3);
                    goto LABEL_4c7fdd;
                }
                v7 = v32;
                v43 = *((long long *)&v15);
                v8 = *((long long *)&v16);
                v44 = v43 >> 9;
                close(v3);
                if (v8 >= v44)
                {
                    v54 = (!v26 ? 0 : v44 | -0x100 | !v7);
                    v2 = v2;
                    v1 = v1;
                }
                else
                {
                    if (v26)
                    {
                        v60 = !v7;
                        v54 = v44 | -0x100 | v60;
                        v2 = v2;
                        v1 = v1;
                    }
                    else
                    {
                        v54 = 0;
                        v2 = v2;
                        v1 = v1;
                    }
                }
                std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v10, v2, v1);
                if ((int)v10 != 2)
                {
                    if (!(*((int *)&v14) & 0xf000) == 0x1000 && !v60)
                        goto LABEL_4c86fb;
LABEL_4c871c:
                    if (std::sys::pal::unix::fs::copy::h1e127c57175e5969(a1, a2, v2, v1))
                    {
LABEL_4c7ca8:
                        goto LABEL_4c8017;
                    }
                }
                else
                {
                    ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(*((long long *)&v11));
                    if (!(!v60))
                        goto LABEL_4c871c;
LABEL_4c86fb:
                    v52 = v54 | -0x100 | 1;
LABEL_4c7fe5:
                    v62 = uu_cp::platform::linux::sparse_copy::hb1415e2514337eae(a1, a2, v2, v1);
                    goto LABEL_4c7ffa;
                }
            }
LABEL_4c8131:
            goto LABEL_4c7c18;
        }
        else if ((unsigned int)v21 != 1)
        {
            if (!(!v22))
                goto LABEL_4c7c92;
            v2 = a3;
            v1 = a4;
            uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(&v10, a1, a2);
            v31 = v11;
            if ((char)v31 == 2)
                goto LABEL_4c80df;
            v10 = 0x1b600000000;
            v11 = 0;
            v12 = 0;
            v11 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v10, a1, a2);
            if (!*((int *)&v4))
            {
                v3 = *((int *)&v5);
                std::fs::File::metadata::he899a18112e6f19e(&v10, &v3);
                if ((int)v10 == 2)
                {
                    v0 = *((long long *)&v11);
                    close(v3);
                    goto LABEL_4c80e3;
                }
                else
                {
                    v0 = v10;
                    close(v3);
                    v59 = v31 | -0x100 | 1;
                }
            }
            else
            {
LABEL_4c80df:
                v0 = *((long long *)&v6);
LABEL_4c80e3:
                v59 = 0;
            }
            v63 = std::sys::pal::unix::fs::copy::h1e127c57175e5969(a1, a2, v2, v1);
LABEL_4c8101:
            if (!v63)
            {
                if (!(!v59))
                    goto LABEL_4c7c18;
                ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v0);
            }
            else if (!v59)
            {
                ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(v0);
                goto LABEL_4c8017;
            }
        }
        else
        {
            if (!(!v22))
                goto LABEL_4c7c92;
            v2 = a3;
            v1 = a4;
            uu_cp::platform::linux::check_for_data::h6327ddeb5395db6f(&v10, a1, a2);
            v30 = v11;
            if ((char)v30 == 2)
                goto LABEL_4c7ee8;
            v34 = *((long long *)&v13);
            v10 = 0x1b600000000;
            v11 = 0;
            v12 = 0;
            v11 = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v10, a1, a2);
            if (*((int *)&v4))
            {
LABEL_4c7ee8:
                v0 = *((long long *)&v6);
LABEL_4c7eec:
                v59 = 0;
                goto LABEL_4c7ef4;
            }
            else
            {
                v0 = v10;
                v3 = *((int *)&v5);
                std::fs::File::metadata::he899a18112e6f19e(&v10, &v3);
                if ((int)v10 == 2)
                {
                    v0 = *((long long *)&v11);
                    close(v3);
                    goto LABEL_4c7eec;
                }
                v9 = v34;
                v7 = (v30 & 255 & 255);
                v47 = *((long long *)&v15);
                v8 = *((long long *)&v16);
                close(v3);
                v51 = (v8 < v47 >> 9 ? 0 : (!v0 < 0x200 && !v7 ? v30 | -0x100 | v9 | !(char)v30 : v30 | -0x100 | 1));
                v2 = v2;
                v1 = v1;
                std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v10, v2, v1);
                if ((int)v10 != 2)
                {
                    if (!((char)v51 & (*((int *)&v14) & 0xf000) != 0x1000))
                        goto LABEL_4c85be;
LABEL_4c85df:
                    v23 = uu_cp::platform::linux::sparse_copy_without_hole::hba630f9e2f471bac(a1, a2, v2, v1);
                }
                else
                {
                    ::0x4c6d50::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h94632dc869fb5d57(*((long long *)&v11));
                    if (!(!(v51 & 255 & 255)))
                        goto LABEL_4c85df;
LABEL_4c85be:
                    v59 = v51 | -0x100 | 1;
LABEL_4c7ef4:
                    v63 = std::sys::pal::unix::fs::copy::h1e127c57175e5969(a1, a2, v2, v1);
                    goto LABEL_4c8101;
                }
            }
        }
    }
LABEL_4c800e:
    if (!v23)
        goto LABEL_4c7c18;
LABEL_4c8017:
    v69 = *((long long *)&v19);
    v10 = v23;
    if (!v69)
    {
        memcpy(0x1, *((long long *)&v18), v69);
        a0->field_20 = v10;
        *((unsigned long long *)&a0->field_8) = v69;
        a0->field_10 = 1;
        a0->field_18 = v69;
        a0->field_0 = 3;
        return a0;
    }
    if (v69 < 0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v70 = __rust_alloc(v69, 1);
    if (v70)
    {
        memcpy(v70, *((long long *)&v18), v69);
        a0->field_20 = v10;
        *((unsigned long long *)&a0->field_8) = v69;
        a0->field_10 = v70;
        a0->field_18 = v69;
        a0->field_0 = 3;
        return a0;
    }
}
