long long fish::timer::TimerSnapshot::get_delta(unsigned long long a0, struct_1 *a1, struct_0 *a2)
{
    unsigned int v0;  // [bp-0x1a4]
    unsigned int v1;  // [bp-0x1a0]
    unsigned int v2;  // [bp-0x19c]
    unsigned int v3;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x198]
    unsigned int v5;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    unsigned int v8;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned int v9;  // [bp-0x178]
    unsigned long long v10;  // [bp-0x170]
    unsigned long v11;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x30]
    unsigned long long v14;  // [bp-0x28]
    unsigned long long v15;  // [bp-0x20]
    unsigned long long v16;  // [bp-0x18]
    unsigned long long v17;  // [bp-0x10]
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14
    unsigned long long v21;  // r13
    unsigned long long v22;  // r12
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rax
    unsigned int v25;  // edx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // r13
    unsigned long long v34;  // r14
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rbx
    unsigned long long v39;  // r14
    unsigned long long v40;  // rax
    int v41;  // xmm0

    v17 = v19;
    v16 = v20;
    v15 = v21;
    v14 = v22;
    v13 = v23;
    v12 = a0;
    v24 = fish::nix::timeval_to_duration(&a2->padding_0[16]);
    v26 = v24.checked_sub(v25, fish::nix::timeval_to_duration(&a1->padding_0[16]), v25);
    if (v25 != 0x3b9aca00)
    {
        v6 = v25;
        v27 = fish::nix::timeval_to_duration(a2);
        v28 = v27.checked_sub(v25, fish::nix::timeval_to_duration(a1), v25);
        if (v25 != 0x3b9aca00)
        {
            v1 = v25;
            v10 = v28;
            v29 = fish::nix::timeval_to_duration(&a2->padding_0[160]);
            v30 = v29.checked_sub(v25, fish::nix::timeval_to_duration(&a1->padding_0[160]), v25);
            if (v25 != 0x3b9aca00)
            {
                v3 = v25;
                v7 = v30;
                v8 = v26;
                v31 = fish::nix::timeval_to_duration(&a2->padding_0[144]);
                v32 = v31.checked_sub(v25, fish::nix::timeval_to_duration(&a1->padding_0[144]), v25);
                if (v25 != 0x3b9aca00)
                {
                    v5 = v8.max(v5, 0, 0);
                    v8 = v25;
                    v10 = v10.max(v1, 0, 0);
                    v1 = v25;
                    v33 = v7.max(v4, 0, 0);
                    v34 = v32.max(v25, 0, 0);
                    v35 = a2->field_120.sub(a2->field_128, a1->field_120, a1->field_128);
                    v7 = v33;
                    v2 = v25;
                    v36 = v5.checked_add(v9, v33, v25);
                    if (v25 != 0x3b9aca00)
                    {
                        v3 = v34;
                        v37 = v10.checked_add(v1, v34, v25);
                        v0 = v25;
                        if (v25 != 0x3b9aca00)
                        {
                            v38 = v25 / 1000 + v35 * 1000000;
                            if (v38 > 0x35a4e900)
                            {
                                v39 = 0;
                            }
                            else
                            {
                                v39 = 1;
                                if (v38 <= 999994)
                                    v39 = 1000 <= v38 ^ 3;
                            }
                            v40 = v25 / 1000 + v36 * 1000000.max(v25 / 1000 + v37 * 1000000);
                            switch (v40)
                            {
                            case 0:
                                v11 = (unsigned long long)(DivV(v41 & 0xffffffffffffffff0000000000000000 | v38, 0x408f400000000000));
                                break;
                            case 1:
                                v11 = v38;
                                break;
                            default:
                                if (v40 > 999994)
                                    goto (long long)(g_9f5efc[v39] + (char *)&g_9f5efc[0]);
                                else
                                    goto (long long)(g_9f5efc[v39] + (char *)&g_9f5efc[0]);
                            }
                        }
                    }
                    core::option::expect_failed("overflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 30, &g_14e3280); /* do not return */
                }
            }
        }
    }
    core::option::expect_failed("overflow when subtracting durationsoverflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 35, &g_14e3268); /* do not return */
}
