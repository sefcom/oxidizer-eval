long long fish::widecharwidth::widechar_width::WcLookupTable::new(void* a0)
{
    unsigned int v0;  // [bp-0x10034]
    unsigned int v1;  // [sp-0x10030]
    char v2;  // [sp-0x1002c]
    int v3;  // [bp-0x10028]
    void* v4;  // [bp-0x2028]
    unsigned int v6[2];  // r12
    unsigned int v7[2];  // rax
    unsigned int v8[2];  // r12
    unsigned int v9[2];  // r12
    unsigned int v10;  // eax
    unsigned long long v11;  // rdx
    unsigned int v12[2];  // r12
    unsigned int v13[2];  // rax
    unsigned int v14[2];  // r12
    unsigned int v15[2];  // r12
    unsigned int v16;  // eax
    unsigned long long v17;  // rdx
    unsigned int v18[2];  // r12
    unsigned int v19[2];  // rax
    unsigned int v20[2];  // r12
    unsigned int v21[2];  // r12
    unsigned int v22;  // eax
    unsigned long long v23;  // rdx
    unsigned int v24[2];  // r12
    unsigned int v25[2];  // rax
    unsigned int v26[2];  // r12
    unsigned int v27[2];  // r12
    unsigned int v28;  // eax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rdi
    unsigned long long v32;  // rdx
    unsigned int v33[2];  // r12
    unsigned int v34[2];  // rax
    unsigned int v35[2];  // r12
    unsigned int v36[2];  // r12
    unsigned int v37;  // eax
    unsigned long long v38;  // rdx
    unsigned int v39[2];  // r12
    unsigned int v40[2];  // rax
    unsigned int v41[2];  // r12
    unsigned int v42[2];  // r12
    unsigned int v43;  // eax
    unsigned long long v44;  // rdx
    unsigned int v45[2];  // r12
    unsigned int v46[2];  // rax
    unsigned int v47[2];  // r12
    unsigned int v48[2];  // r12
    unsigned int v49;  // eax
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rdi
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rdx

    do
    {
        v4 = 0;
    } while (&v4 != &v3);
    memset(&v3, 0, 0x10000);
    v6 = &g_10e145c[0];
    v7 = &g_10e1464[0];
    do
    {
        v8 = v6;
        v9 = v7;
        v10 = v8[1].min(65535);
        v0 = v8[0];
        v1 = v10;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v11 >= 0x10000)
                    core::panicking::panic_bounds_check(v11 & 4294967295, 0x10000, &g_150ced8); /* do not return */
                *((char *)&v3 + (v11 & 4294967295)) = 7;
            } while (((char)v0.spec_next() & 1));
        }
        v7 = v9 + 1;
        v6 = v9;
    } while (v6 != "src/widecharwidth/widechar_width.rs");
    v12 = &g_10dfce4[0];
    v13 = &g_10dfcec[0];
    do
    {
        v14 = v12;
        v15 = v13;
        v16 = v14[1].min(65535);
        v0 = v14[0];
        v1 = v16;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v17 >= 0x10000)
                    core::panicking::panic_bounds_check(v17 & 4294967295, 0x10000, &g_150cec0); /* do not return */
                *((char *)&v3 + (v17 & 4294967295)) = 6;
            } while (((char)v0.spec_next() & 1));
        }
        v13 = v15 + 1;
        v12 = v15;
    } while (v12 != 17699932);
    v18 = &g_10df74c[0];
    v19 = &g_10df754[0];
    do
    {
        v20 = v18;
        v21 = v19;
        v22 = v20[1].min(65535);
        v0 = v20[0];
        v1 = v22;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v23 >= 0x10000)
                    core::panicking::panic_bounds_check(v23 & 4294967295, 0x10000, &g_150cea8); /* do not return */
                *((char *)&v3 + (v23 & 4294967295)) = 4;
            } while (((char)v0.spec_next() & 1));
        }
        v19 = v21 + 1;
        v18 = v21;
    } while (v18 != 17693924);
    v24 = &g_10df504[0];
    v25 = ")#";
    do
    {
        v26 = v24;
        v27 = v25;
        v28 = v26[1].min(65535);
        v0 = v26[0];
        v1 = v28;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v29 >= 0x10000)
                    core::panicking::panic_bounds_check(v29 & 4294967295, 0x10000, &g_150ce90); /* do not return */
                *((char *)&v3 + (v29 & 4294967295)) = 1;
            } while (((char)v0.spec_next() & 1));
        }
        v25 = v27 + 1;
        v24 = v27;
    } while (v24 != 17692492);
    v0 = 4448;
    v1 = 4607.min(65535);
    v2 = 0;
    if (((char)v0.spec_next() & 1))
    {
        do
        {
            v31 = v30 & 4294967295;
            if ((unsigned int)v30 >= 0x10000)
                core::panicking::panic_bounds_check(v31, 0x10000, &g_150ce78); /* do not return */
            *((char *)&v3 + v31) = 3;
        } while (((char)v0.spec_next() & 1));
    }
    v0 = 55216;
    v1 = 55295.min(65535);
    v2 = 0;
    if (((char)v0.spec_next() & 1))
    {
        do
        {
            v31 = v32 & 4294967295;
            if ((unsigned int)v32 > 65535)
                core::panicking::panic_bounds_check(v31, 0x10000, &g_150ce78); /* do not return */
            *((char *)&v3 + v31) = 3;
        } while (((char)v0.spec_next() & 1));
    }
    v33 = &g_10deafc[0];
    v34 = &g_10deb04[0];
    do
    {
        v35 = v33;
        v36 = v34;
        v37 = v35[1].min(65535);
        v0 = v35[0];
        v1 = v37;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v38 >= 0x10000)
                    core::panicking::panic_bounds_check(v38 & 4294967295, 0x10000, &g_150ce60); /* do not return */
                *((char *)&v3 + (v38 & 4294967295)) = 3;
            } while (((char)v0.spec_next() & 1));
        }
        v34 = v36 + 1;
        v33 = v36;
    } while (v33 != 17691908);
    v39 = &g_10dea6c[0];
    v40 = &g_10dea74[0];
    do
    {
        v41 = v39;
        v42 = v40;
        v43 = v41[1].min(65535);
        v0 = v41[0];
        v1 = v43;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v44 >= 0x10000)
                    core::panicking::panic_bounds_check(v44 & 4294967295, 0x10000, &g_150ce48); /* do not return */
                *((char *)&v3 + (v44 & 4294967295)) = 8;
            } while (((char)v0.spec_next() & 1));
        }
        v40 = v42 + 1;
        v39 = v42;
    } while (v39 != 17689340);
    v45 = &g_10de9ac[0];
    v46 = &g_10de9b4[0];
    do
    {
        v47 = v45;
        v48 = v46;
        v49 = v47[1].min(65535);
        v0 = v47[0];
        v1 = v49;
        v2 = 0;
        if (((char)v0.spec_next() & 1))
        {
            do
            {
                if ((unsigned int)v50 >= 0x10000)
                    core::panicking::panic_bounds_check(v50 & 4294967295, 0x10000, &g_150ce30); /* do not return */
                *((char *)&v3 + (v50 & 4294967295)) = 2;
            } while (((char)v0.spec_next() & 1));
        }
        v46 = v48 + 1;
        v45 = v48;
    } while (v45 != 17689196);
    v0 = 0xe000;
    v1 = 63743.min(65535);
    v2 = 0;
    if (((char)v0.spec_next() & 1))
    {
        do
        {
            v52 = v51 & 4294967295;
            if ((unsigned int)v51 >= 0x10000)
                core::panicking::panic_bounds_check(v52, 0x10000, &g_150ce18); /* do not return */
            *((char *)&v3 + v52) = 5;
        } while (((char)v0.spec_next() & 1));
    }
    v0 = 0xf0000;
    v1 = 1048573.min(65535);
    v2 = 0;
    if (((char)v0.spec_next() & 1))
    {
        do
        {
            v52 = v53 & 4294967295;
            if ((unsigned int)v53 > 65535)
                core::panicking::panic_bounds_check(v52, 0x10000, &g_150ce18); /* do not return */
            *((char *)&v3 + v52) = 5;
        } while (((char)v0.spec_next() & 1));
    }
    v0 = 0x100000;
    v1 = 1114109.min(65535);
    v2 = 0;
    if (!((char)v0.spec_next() & 1))
    {
        memcpy(a0, &v3, 0x10000);
        return a0;
    }
    while (true)
    {
        v52 = v54 & 4294967295;
        if ((unsigned int)v54 > 65535)
            core::panicking::panic_bounds_check(v52, 0x10000, &g_150ce18); /* do not return */
        *((char *)&v3 + v52) = 5;
        if (!((char)v0.spec_next() & 1))
        {
            memcpy(a0, &v3, 0x10000);
            return a0;
        }
    }
}
