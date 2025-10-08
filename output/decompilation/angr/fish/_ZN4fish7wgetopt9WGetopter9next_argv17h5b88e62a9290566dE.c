long long fish::wgetopt::WGetopter::next_argv(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x30]
    unsigned long long v4;  // r12
    unsigned long v5;  // r14
    unsigned long v6;  // r14
    unsigned long v7;  // r14, Other Possible Types: unsigned long long
    unsigned long long v8;  // r15
    unsigned long v9;  // r13
    unsigned long long v10;  // r15
    unsigned long v11;  // r14
    unsigned long long v12;  // rax
    void* v13;  // r12
    unsigned long long v14;  // rax
    unsigned long long v16;  // rcx

    v4 = a0->field_20;
    if (*((char *)&a0->field_78 + 6) != 1)
    {
        if (*((long long *)((char *)&a0->field_58 + 8)) != v4)
            goto LABEL_1424f42;
        goto LABEL_1425001;
    }
    v5 = *((long long *)((char *)&a0->field_58 + 8));
    if (a0->field_70 == v5)
    {
        v6 = a0->field_70;
        v7 = v6;
        if (v7 < v4)
            goto LABEL_1424ecb;
    }
    else if (a0->field_68 == v6)
    {
        a0->field_68 = v5;
        v7 = v5;
        if (v7 < v4)
            goto LABEL_1424ecb;
    }
    else
    {
        a0.exchange();
        v7 = *((long long *)((char *)&a0->field_58 + 8));
        if (v7 < v4)
        {
LABEL_1424ecb:
            v8 = a0->field_20;
            v9 = v7 * 16 + a0->field_18 + 8;
            while (true)
            {
                if (v7 >= v8)
                    core::panicking::panic_bounds_check(v7, v8, &g_14e4b08); /* do not return */
                if ((int)*((long long *)(v9 - 8)).char_at(*((long long *)v9), 0) == 45 && *((long long *)v9) != 1)
                    break;
                v7 += 1;
                *((unsigned long *)((char *)&a0->field_58 + 8)) = v7;
                v9 += 16;
                if (v4 == v7)
                {
                    v7 = v4;
                    a0->field_70 = v7;
LABEL_1424f42:
                    if (v7 >= a0->field_20)
                        core::panicking::panic_bounds_check(v7, a0->field_20, &g_14e4b20); /* do not return */
                    v10 = v7 * 16;
                    if (*((long long *)(a0->field_18 + v10)).eq_by(*((long long *)(a0->field_18 + v10)) + *((long long *)(a0->field_18 + v10 + 8)) * 4, "--", &g_9ff4e2))
                    {
                        v11 = v7 + 1;
                        *((unsigned long *)((char *)&a0->field_58 + 8)) = v11;
                        if (a0->field_68 == a0->field_70)
                        {
                            a0->field_68 = v11;
                        }
                        else
                        {
                            if (a0->field_70 != v11)
                                a0.exchange();
                        }
                        a0->field_70 = v4;
                        *((unsigned long long *)((char *)&a0->field_58 + 8)) = v4;
                    }
                    else if (v7 != v4)
                    {
                        if (v7 >= a0->field_20)
                            core::panicking::panic_bounds_check(v7, a0->field_20, &g_14e4b38); /* do not return */
                        v12 = a0->field_18;
                        v13 = v12 + v10;
                        v14 = *((long long *)(v12 + v10)).char_at(*((long long *)(v12 + v10 + 8)), 0);
                        if ((unsigned int)v14 == 45 && (long long)v13[8] != 1)
                        {
                            v1 = *((long long *)v13);
                            v2 = (long long)v13[8];
                            v0 = 0x8000000000000000;
                            a0.push(&v0, &g_14e4b50);
                            v16 = (!a0->field_40 ? 1 : ((int)v1.char_at(v2, 1) == 45) + 1);
                            if (v2 < v16)
                                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e4b68); /* do not return */
                            a0->field_48 = v1 + v16 * 4;
                            a0->field_50 = v2 - v16;
                            return v1 + v16 * 4 & 0xffffffffffffff00 | 2;
                        }
                        if (*((char *)&a0->field_78 + 6))
                        {
                            *((int128_t *)&(&a0->field_50)[1]) = *((int128_t *)v13);
                            *((unsigned long long *)((char *)&a0->field_58 + 8)) = v7 + 1;
                            return v14 & 0xffffffffffffff00 | 1;
                        }
                        goto LABEL_142500f;
                    }
LABEL_1425001:
                    if (a0->field_68 != a0->field_70)
                        *((unsigned long long *)((char *)&a0->field_58 + 8)) = a0->field_68;
LABEL_142500f:
                    return 0;
                }
            }
        }
    }
    a0->field_70 = v7;
    if (v7 != v4)
        goto LABEL_1424f42;
    goto LABEL_1425001;
}
