long long fish::parse_execution::profiling_cmd_name_for_redirectable_block(struct_0 *a0, struct_2 *a1, unsigned long long a2[5])
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x6c]
    char v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x60]
    uint128_t v4;  // [bp-0x58]
    int v5;  // [bp-0x40], Other Possible Types: char
    char v6;  // [bp-0x30]
    unsigned long v8;  // rax
    unsigned long v9;  // rax
    unsigned int v10;  // eax
    void* v11;  // rsi
    unsigned int v13;  // edi
    unsigned long long v14;  // rax
    unsigned int v16;  // edi
    unsigned long long v19;  // r15
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    v8 = a1->field_0;
    v9 = v8 - 1;
    if ((unsigned int)(v8 - 2) >= 5)
        v9 = 0;
    if (v9 < 2)
        core::panicking::panic("assertion failed: statement_is_redirectable_block(node)src/parse_tree.rs", 55, &g_14dd410); /* do not return */
    v0.try_source_range(a1);
    if (*((int *)&v0) != 1)
        core::option::expect_failed("No source range for blockNot a redirectable block_typeInvalid source end", 25, &g_14dd428); /* do not return */
    switch (v9)
    {
    case 2:
        v10 = a1->field_8->field_10 - 2;
        goto (long long)(g_9f5218[(v10 < 4 ? v10 : 2)] + (char *)&g_9f5218[0]);
    case 3:
        v0.try_source_range(a1->field_8);
        v16 = 0;
        if (v0)
        {
LABEL_13e28ea:
            v16 = v1;
            break;
        }
        break;
    case 4:
        v0.try_source_range(&a1->field_8[1].padding_0[12]);
        v11 = 0;
        v13 = 0;
        if (v0)
        {
            v11 = *((int *)&v2);
            v13 = v1;
        }
        v14 = v13.end(v11);
        goto LABEL_13e28f4;
    case 5:
        v0.try_source_range(&a1->field_8->field_10);
        v16 = 0;
        if (v0)
            goto LABEL_13e28ea;
        break;
    default:
        v0 = &g_14dd3f0;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v0, &g_14dd470); /* do not return */
    }
    v14 = v16.start();
LABEL_13e28f4:
    v19 = v14;
    if ((unsigned int)v19 < (int)v1.start())
    {
        v0 = &g_14dd400;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v0, &g_14dd440); /* do not return */
    }
    v20 = v1.start();
    v21 = a2[3].index(a2[4], v20, v19, &g_14dd458);
    v5.to_vec(v21, a2);
    v5.spec_extend(".", "%ls-\nmicrosoft-standardMicrosoftFISH_NO_WSL_CHECKThis version of WSL has known bugs that prevent fish from working.\nPlease upgrade to Windows 10 1809 (17763) or higher to use fish! (deleted)uv");
    v22 = *((long long *)&v6);
    a0->field_10 = v22;
    *((void*)&a0->field_0) = v5;
    return v22;
}
