void ruff_python_formatter::other::parameters::find_parameter_separators(unsigned int a0[10], unsigned int *a1, unsigned long long a2, struct_0 *a3, unsigned long a4, unsigned long a5)
{
    unsigned int v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x9c]
    int v2;  // [bp-0x98]
    unsigned int v3;  // [bp-0x94]
    unsigned long long v4;  // [bp-0x90]
    int v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    unsigned int *v7;  // [bp-0x68]
    char v8;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x5c]
    int v10;  // [bp-0x50]
    char v11;  // [bp-0x40]
    void* v13;  // rax
    char v14;  // r13b
    struct_0 *v15;  // 4096
    struct_0 *v16;  // 4096
    void* v18;  // rax
    unsigned int v19;  // eax
    unsigned long long v20;  // rcx
    unsigned long long v21;  // r8
    unsigned int v22;  // r9d
    unsigned long v23;  // r11
    unsigned int v24;  // ebp
    unsigned int v25;  // r15d
    unsigned int v26;  // r12d
    unsigned long long v27;  // rdi
    char v28;  // r10b
    unsigned int v29;  // esi
    unsigned int v30;  // esi
    unsigned int v32;  // r8d

    v13 = a3->field_10;
    v14 = 1;
    if (v13)
    {
        v13 = v13 * 88 + a3->field_8;
        if (v13 == 88)
            goto LABEL_714d39;
        v24 = (int)v13[84];
        if (v24 > a3->field_4c)
            core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97e490); /* do not return */
        v25 = (unsigned int)a1;
        v8.new(a1, a2, v24, a3->field_4c);
        memcpy(&v6, &v11, 16);
        v5 = v10;
        *((int128_t *)&v2) = *((int128_t *)&v8);
        v8.try_fold(&(char)v2);
        if ((&v8)[8] == 90)
            core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e4a8); /* do not return */
        v8.try_fold(&(char)v2);
        if ((&v8)[8] == 90)
            core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e4c0); /* do not return */
        v1 = v8;
        v13 = v9;
        v14 = 0;
        v26 = (unsigned int)v13;
        v27 = 0;
        if (!a3->field_50)
            goto LABEL_714d42;
    }
    else
    {
LABEL_714d39:
        v27 = 0;
        v15 = a3;
        v16 = a3;
        if (!v15->field_50)
        {
LABEL_714d42:
            v16 = v15;
            if (a3->field_40)
            {
                v7 = &a3->field_38->field_0;
                if (a3->field_28)
                {
                    v18 = &a3->field_20[22 * a3->field_28];
                    if (v18 == 88)
                        goto LABEL_714d98;
                    v25 = (int)v18[84];
                }
                else
                {
LABEL_714d98:
                    v25 = v26;
                    if (v14)
                    {
                        v8.new(a1, a2, a3->field_48, a3->field_4c);
                        (char)v2.try_fold(&v8);
                        switch (v19)
                        {
                        case 5:
                            (char)v2.try_fold(&v8);
                            if ((char)v4 == 90)
                                core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e538); /* do not return */
                            v13 = (int)v2;
                            v20 = v3;
                            break;
                        case 90:
                            core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e520); /* do not return */
                        default:
                            v13 = (long long)v2;
                            v20 = v13 >> 32;
                            break;
                        }
                        v25 = a3->field_48;
                        goto LABEL_714e8b;
                    }
                }
                v0 = v26;
                if (v25 > a3->field_4c)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97e4d8); /* do not return */
                v8.new(a1, a2, v25, a3->field_4c);
                (char)v2.try_fold(&v8);
                if ((char)v4 == 90)
                    core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e4f0); /* do not return */
                (char)v2.try_fold(&v8);
                if ((char)v4 == 90)
                    core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e508); /* do not return */
                v26 = v0;
                if ((char)v4 == 90)
                    core::option::expect_failed("The function definition can't end hereThe last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found ''.The positional argument separator must be present for a function that has positional only parameters but found '", 38, &g_97e508); /* do not return */
                v13 = (int)v2;
                v20 = v3;
LABEL_714e8b:
                a2 = *(v7);
                v27 = 1;
                v21 = a3->field_28;
                if (!v21)
                {
LABEL_714ea4:
                    v23 = a3->field_50;
                    if (v23)
                    {
LABEL_714d90:
                        a1 = *((int *)v23);
                    }
LABEL_714eb1:
                    v28 = v21 || v23;
                    v29 = (!v23 ? (unsigned int)v13 : (unsigned int)a1);
                    if (v21)
                        v29 = v22;
                    if (a3->field_58)
                    {
                        v30 = v29;
                        if (!(char)v27)
                            v30 = a3->field_58->field_0;
                        if (v28)
                            v32 = v29;
                    }
                    else
                    {
                        v32 = v29;
                        if (!v28 && !(char)v27)
                            v32 = a3->field_4c;
                    }
                    a0[0] = v14 ^ 1;
                    a0[1] = v1;
                    a0[2] = v26;
                    a0[3] = v24;
                    a0[4] = v32;
                    a0[5] = v27;
                    a0[6] = (unsigned int)v13;
                    a0[7] = v20;
                    a0[8] = v25;
                    a0[9] = a2;
                    return;
                }
LABEL_714d7c:
                a1 = a3->field_20;
                v22 = *(a1);
                v23 = a3->field_50;
                if (v23)
                    goto LABEL_714d90;
                goto LABEL_714eb1;
            }
        }
    }
    v20 = v16;
    v21 = a3->field_28;
    if (!v21)
        goto LABEL_714ea4;
    goto LABEL_714d7c;
}
