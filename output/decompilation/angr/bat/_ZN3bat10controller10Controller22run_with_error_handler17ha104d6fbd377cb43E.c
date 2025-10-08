long long bat::controller::Controller::run_with_error_handler(void* a0, struct_0 **a1, unsigned long long a2[3], char *a3)
{
    unsigned int v0;  // [bp-0x2a4]
    unsigned long long v1[3];  // [bp-0x2a0]
    void* v2;  // [bp-0x298]
    unsigned long long v3;  // [bp-0x290]
    unsigned long long v4;  // [bp-0x288]
    int v5;  // [bp-0x288]
    unsigned long v6;  // [bp-0x280]
    unsigned long long v7;  // [bp-0x278]
    unsigned long v8;  // [bp-0x268]
    unsigned long long v9;  // [bp-0x260]
    char v10;  // [bp-0x258]
    char v11;  // [bp-0x23b]
    int v12;  // [bp-0x238], Other Possible Types: char
    int v13;  // [bp-0x229]
    int v14;  // [bp-0x228]
    int v15;  // [bp-0x218]
    int v16;  // [bp-0x209]
    int v17;  // [bp-0x208]
    int v18;  // [bp-0x1f8]
    unsigned long long v19;  // [bp-0x1b0]
    int v20;  // [bp-0x1a8]
    unsigned long long v21;  // [bp-0x190]
    int v22;  // [bp-0x18f]
    unsigned long long v23;  // [bp-0x188]
    int v24;  // [bp-0x180]
    char v25;  // [bp-0x178], Other Possible Types: unsigned long long
    char v26;  // [bp-0x170]
    char v27;  // [bp-0x16f]
    char v28;  // [bp-0x168]
    char v29;  // [bp-0x160]
    unsigned long long v30;  // [bp-0x158]
    char v31;  // [bp-0x150]
    unsigned long long v32;  // [bp-0x100]
    int v33;  // [bp-0xf8]
    int v34;  // [bp-0xe8]
    int v35;  // [bp-0xd8]
    int v36;  // [bp-0xc8]
    int v37;  // [bp-0xb8]
    int v38;  // [bp-0xa8]
    char v39;  // [bp-0x98]
    char v40;  // [bp-0x88]
    char v41;  // [bp-0x78]
    unsigned long long v42;  // [bp-0x68]
    char v43;  // [bp-0x58]
    void* v44;  // [bp-0x38]
    unsigned long long v46[3];  // r15
    struct_0 *v47;  // r14
    unsigned long long v48;  // rax
    unsigned long v49;  // rcx
    char v50;  // al
    char v51;  // al
    char *v53;  // rbx
    unsigned long long v54;  // rax
    unsigned int v55;  // edx
    int v56;  // xmm0
    int v57;  // xmm2
    int v58;  // xmm3
    char v59;  // bpl
    unsigned long long v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    int v64;  // xmm0

    v47 = *(a1);
    if (v47->field_12a != 2)
    {
        v48 = a2[1];
        v49 = a2[2];
        v21 = a2[1];
        v23 = v49 * 160 + v48;
    }
    (char)v21.from_mode(2, v47->field_129, v47->field_110, v47->field_118);
    v50 = v21;
    if (v50 != 13)
    {
        v61 = (int128_t)v22;
        v62 = (int128_t)v24;
        v63 = *((int128_t *)&v27);
        *((int128_t *)&v16) = *((int128_t *)&v29);
        v15 = v63;
        v14 = v62;
        v12 = v61;
        *((int128_t *)&a0[64]) = *((int128_t *)&v31);
        *((int128_t *)&a0[48]) = (int128_t)(&v15)[15];
        v64 = (int128_t)v12;
        *((int128_t *)&a0[33]) = (int128_t)v15;
        a0[17] = v14;
        a0[1] = v64;
        *((char *)a0) = v50;
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(a2);
    }
    memcpy(&v39, &v23, 16);
    memcpy(&v40, &v25, 16);
    memcpy(&v41, &v28, 16);
    v42 = v30;
    v8 = *((long long *)&v39) - 3;
    v1[0] = a2;
    if (v8 == 2)
    {
        v10.stdout();
        if (!a3)
            goto LABEL_83723a;
LABEL_83716a:
        v6 = a3 + 8;
        v2 = a0;
        if ((*(a3) & 1))
        {
            v7 = &g_ace2a0;
            v4 = 1;
        }
        else
        {
            v7 = &g_ace250;
            v4 = 0;
        }
    }
    else
    {
        v11 = 2;
        if (a3)
            goto LABEL_83716a;
LABEL_83723a:
        (char)v21.handle(&v39);
        v51 = v21;
        if (v51 == 13)
        {
            v2 = a0;
            *((int128_t *)&v5) = *((int128_t *)&v23);
            v7 = v25;
            v46 = v1;
        }
        else
        {
            v56 = (int128_t)v22;
            v57 = *((int128_t *)&v26);
            v58 = *((int128_t *)&v29);
            *((int128_t *)&v13) = (int128_t)v24;
            v12 = v56;
            *((int128_t *)&a0[64]) = *((int128_t *)&v31);
            a0[48] = v58;
            a0[32] = v57;
            *((int128_t *)&a0[16]) = (int128_t)(&v12)[15];
            *((int128_t *)&a0[1]) = (int128_t)v12;
            *((char *)a0) = v51;
            v59 = 1;
LABEL_837612:
            v10.drop_in_place<core::option::Option<clircle::Identifier>>();
            v60 = core::ptr::drop_in_place<bat::output::OutputType>(&v39);
            if (!v59)
                return v60;
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(v46);
        }
    }
    v9 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v43.into_iter(v46);
    v44 = 0;
    v0 = (int)(char)v21.next(&v43) & 0xffffff00 | 1;
    if ((int)v23 != 2)
    {
        v0 = v0 & 0xffffff00 | 1;
        do
        {
            v53 = &v10;
            if (v11 == 2)
                v53 = 0;
            if (v32 == 0x8000000000000000)
            {
                ::libc.so.0::memcpy(&(char)v12, &v23, 136);
                v19 = 0x8000000000000000;
                v20 = v33;
                v3 = std::io::stdio::stdin();
                v54 = v3.lock();
                v34.print_input(a1, &(char)v12, &v4, v54, v55 & 1, v53, !v21);
            }
            else
            {
                ::libc.so.0::memcpy(&v12, &v23, 136);
                v19 = v32;
                v20 = v33;
                v34.print_input(a1, &v12, &v4, v53, !v21);
            }
            if ((char)v34 == 13)
                continue;
            v18 = v38;
            v17 = v37;
            v15 = v36;
            v14 = v35;
            v12 = v34;
            if ((int)v4 != 1)
            {
                if (v8 != 2)
                {
                    (char)v12.call_mut(&v6, &g_ace250);
                }
                else
                {
                    v3 = v9.lock();
                    (char)v12.call_mut(&v3, &g_ace2d0);
                    core::ptr::drop_in_place<std::io::stdio::StderrLock>(&v3);
                }
                core::ptr::drop_in_place<bat::error::Error>(&(char)v12);
                v0 = 0;
            }
            else
            {
                v2[64] = v38;
                v2[48] = v37;
                v2[32] = v36;
                v2[16] = v35;
                *(v2) = v34;
                core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<bat::input::Input>>>(&v43);
                goto LABEL_837612;
            }
            (char)v21.next(&v43);
        } while ((int)v23 != 2);
        goto LABEL_837612;
    }
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<bat::input::Input>>>(&v43);
    *((char *)&v2[1]) = v0;
    *((char *)v2) = 13;
    v10.drop_in_place<core::option::Option<clircle::Identifier>>();
    return core::ptr::drop_in_place<bat::output::OutputType>(&v39);
}
