long long fish::common::read_unquoted_escape(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x84]
    unsigned int v2;  // [bp-0x80]
    unsigned int v3;  // [bp-0x7c]
    void* v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    void* v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    uint128_t v10;  // [bp-0x48]
    unsigned int v12;  // eax
    unsigned long long v13;  // cc_op
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long long v16;  // rbx
    unsigned long long v17;  // cc_ndep
    unsigned int v18;  // eax
    unsigned long long v19;  // cc_ndep
    unsigned int v20;  // r14d
    unsigned int v21;  // r12d
    unsigned int v22;  // r15d
    unsigned long v23;  // rax
    unsigned int v24;  // r14d
    unsigned long long v25;  // rax
    unsigned long v26;  // r14
    unsigned long long v27;  // cc_op
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    unsigned long long v30;  // rbx
    unsigned long v31;  // r13
    char v32;  // r15b
    unsigned long v33;  // cc_dep1
    unsigned long v34;  // rbx
    unsigned int v35;  // edx
    unsigned long v36;  // r14
    unsigned int v37;  // r12d
    unsigned int v38;  // r12d
    unsigned long v39;  // rax
    unsigned long v40;  // r14
    unsigned long v41;  // rax
    unsigned long long v43;  // r14
    unsigned long long v44;  // r15
    char v45;  // al
    unsigned long v46;  // cc_dep1
    char v47;  // al
    unsigned long long v48;  // r15
    unsigned int v49;  // eax
    unsigned int v50;  // eax
    unsigned int v51;  // r14d
    char v52;  // dil

    v2 = a3;
    v12 = a0.char_at(a1, 0);
    v13 = 7;
    v14 = v12;
    v15 = 92;
    if (v12 != 92)
    {
        v7 = &g_14c0bf8;
        v8 = 1;
        v9 = 8;
        v10 = 0;
        core::panicking::panic_fmt(&v7, &g_14c0ce0); /* do not return */
    }
    v1 = a4;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v16 = 1;
    while (true)
    {
        v18 = a0.char_at(a1, v16);
        v19 = _ccall(v13, v14, v15, v17);
        v30 = v16 + 1;
        if (!((char)_ccall(4, 24, v16 + 1, 0, _ccall(v13, v14, v15, v17))))
        {
            v20 = v18;
            v21 = 5;
            v22 = 16;
            v0 = 65535;
            switch (v20)
            {
            case 0:
                if (!(char)v2)
                    goto LABEL_12e63cc;
                v20 = 0x110000;
                goto LABEL_12e6360;
            case 10:
LABEL_12e62a3:
                v20 = 0x110000;
                goto LABEL_12e6360;
            case 85:
                v21 = 9;
                v25 = 1114111;
LABEL_12e60fb:
                v0 = v25;
            case 88: case 120:
LABEL_12e60a4:
                v21 = 3;
                v24 = v20 & 0xffffff00 | 1;
                v0 = 255;
                continue;
            case 97:
                v20 = 7;
                goto LABEL_12e6360;
            case 98:
                v20 = 8;
                goto LABEL_12e6360;
            case 99:
                v50 = a0.char_at(a1, v30);
                if (!((char)_ccall(4, 24, v30 + 1, 0, (v23 + &g_9ec32c[0] <= v23 ? 1 : 0))))
                {
                    v51 = v50;
                    if (v51 - 97 < 33)
                    {
                        v20 = v51 - 96;
                        goto LABEL_12e6360;
                    }
                    else
                    {
                        if (v51 - 65 >= 33)
                            goto LABEL_12e63cc;
                        v20 = v51 - 64;
                        goto LABEL_12e6360;
                    }
                }
                else
                {
                    goto LABEL_12e6485;
                }
            case 101:
                v20 = 27;
                goto LABEL_12e6360;
            case 102:
                v20 = 12;
                goto LABEL_12e6360;
            case 110:
                v20 = 10;
                goto LABEL_12e6360;
            case 114:
                v20 = 13;
                goto LABEL_12e6360;
            case 116:
                v20 = 9;
                goto LABEL_12e6360;
            case 117:
LABEL_12e6100:
                v24 = 0;
                v31 = v22;
                v32 = ::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)a0.char_at(a1, v30), v31 & 4294967295);
                v33 = v32 & 1;
                v3 = v24;
                if ((v32 & 1))
                {
                    v19 = _ccall(17, v33, 0, v19);
                    v34 = v30 + 1;
                    if (!((char)_ccall(4, 24, v30 + 1, 0, _ccall(17, v33, 0, v19))))
                    {
                        v36 = v35;
                        v37 = v21 - 2;
                        while (true)
                        {
                            v30 = v34;
                            v38 = v37;
                            if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)a0.char_at(a1, v30), v31 & 4294967295) & 1))
                                break;
                            v39 = v36;
                            if ((char)_ccall(0, 48, v39, v31, v19))
                                core::panicking::panic_const::panic_const_mul_overflow(&g_14c0c38); /* do not return */
                            v40 = v39 * v31;
                            v41 = v35;
                            v36 = v40 + v41;
                            if ((char)__CFADD__(v40, v41))
                                goto LABEL_12e6485;
                            if ((char)_ccall(4, 24, v30 + 1, 0, (v40 + v41 <= v40 ? 1 : 0)))
                                goto LABEL_12e6455;
                            v19 = _ccall(24, v30 + 1, 0, (v40 + v41 <= v40 ? 1 : 0));
                            v37 = v38 - 1;
                            v34 = v30 + 1;
                            if (v38 == 1)
                            {
                                if (v36 > v0)
                                    goto LABEL_12e625e;
                                goto LABEL_12e61b4;
                            }
                        }
                    }
                    else
                    {
LABEL_12e6455:
                        goto LABEL_12e6485;
                    }
                }
                else
                {
                    v36 = 0;
                }
                if (!(v36 <= v0 & v32))
                {
LABEL_12e625e:
                    v48 = 0;
                    break;
                }
LABEL_12e61b4:
                if (!(char)v3)
                {
                    0.unwrap(&g_14c0c68);
                    v49 = (0xffef0800 <= ((unsigned int)v36 ^ 0xd800) - 0x110000 ? (unsigned int)v36 : 0x110000);
                    v20 = (v49 != 0x110000 ? v49 : 65533);
                    goto LABEL_12e6360;
                }
                0x100 <= v36.unwrap(&g_14c0c80);
                v4.push(v36 & 4294967295, &g_14c0c98);
                v43 = a1 - v30;
                if (a1 < v30)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c0cb0); /* do not return */
                v44 = v30 * 4 + a0;
                v45 = v44.starts_with(v43, "\\Xsrc/common.rs/.~-___\\n", 2);
                v46 = v45;
                if (!v45)
                {
                    v47 = v44.starts_with(v43, "\\xPosition overflowed length", 2);
                    v46 = v47;
                    if (!v47)
                        goto LABEL_12e62a3;
                }
                v17 = _ccall(17, v46, 0, v19);
                v13 = 24;
                v14 = v30 + 1;
                v15 = 0;
                v16 = v30 + 1;
                if ((char)_ccall(4, 24, v30 + 1, 0, _ccall(17, v46, 0, v19)))
                {
LABEL_12e6485:
                    core::panicking::panic_const::panic_const_add_overflow(v52); /* do not return */
                }
                break;
            case 118:
                v20 = 11;
                goto LABEL_12e6360;
            default:
                if ((v20 & 0xfffffff8) == 48)
                {
                    v26 = v20 - 85;
                    v27 = 7;
                    v28 = v26 & 4294967295;
                    v29 = 35;
                    switch ((unsigned int)v26)
                    {
                    case 0:
                        break;
                    case 3: case 35:
                        goto LABEL_12e60a4;
                    case 32:
                        goto LABEL_12e6100;
                    default:
                        v19 = _ccall(v27, v28, v29, v19);
                        v30 -= 1;
                        v21 = 4;
                        v22 = 8;
                        v25 = 127;
                        goto LABEL_12e60fb;
                    }
                }
                else
                {
                    if ((char)v1)
                        a2.push(64984);
LABEL_12e6360:
                    v48 = 1;
                    if (v20 == 0x110000)
                        break;
                    if (v20 - 0xf500 < 0x200 || v20 - 64976 < 32)
                    {
LABEL_12e63cc:
                        v48 = 0;
                        break;
                    }
                    else
                    {
                        a2.push(v20);
                        break;
                    }
                }
            }
        }
        else
        {
            goto LABEL_12e6485;
        }
    }
}
