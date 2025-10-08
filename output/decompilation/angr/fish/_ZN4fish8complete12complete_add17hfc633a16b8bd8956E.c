long long fish::complete::complete_add(struct_3 *a0, char a1, struct_2 *a2, char a3, unsigned int a4, struct_1 *a5, struct_0 *a6, struct_4 *a7, unsigned short a8)
{
    int v0;  // [bp-0xf8]
    unsigned long v1;  // [bp-0xe8]
    char v2;  // [bp-0xe0]
    int v3;  // [bp-0xd8]
    unsigned long v4;  // [bp-0xc8]
    int v5;  // [bp-0xc0]
    unsigned long v6;  // [bp-0xb0]
    int v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0x98]
    int v9;  // [bp-0x90]
    unsigned long v10;  // [bp-0x80]
    unsigned short v11;  // [bp-0x78]
    unsigned short v12;  // [bp-0x76]
    char v13;  // [bp-0x74]
    char v14;  // [bp-0x73]
    char v15;  // [bp-0x70]
    unsigned long v16;  // rbp
    unsigned long long v17;  // rax
    struct_3 *v18;  // rcx
    unsigned long long v19;  // rax
    struct_0 *v20;  // rsi
    struct_1 *v21;  // rdx
    char v22;  // dl

    if (!(a3 ^ !a2->field_10))
        core::panicking::panic("assertion failed: option.is_empty() == (option_type == CompleteOptionType::ArgsOnly)mutex poisoned -%lc %ls --%ls %ls -%lc --%lspoisoned mutex", 84, &g_14d6290); /* do not return */
    v16 = a4;
    v15.lock();
    v17 = v15.expect("mutex poisoned -%lc %ls --%ls %ls -%lc --%lspoisoned mutex", &g_14d62a8);
    v18 = a0;
    v1 = a0->field_10;
    *((uint128_t *)&v0) = a0->field_0;
    v2 = a1;
    v15.entry(v17 + 8, &v0);
    v19 = v15.or_insert_with();
    v4 = a2->field_10;
    *((uint128_t *)&v3) = a2->field_0;
    v20 = a6;
    v6 = a6->field_10;
    *((uint128_t *)&v5) = a6->field_0;
    *((uint128_t *)&v9) = a7->field_0;
    v10 = a7->field_10;
    v21 = a5;
    *((uint128_t *)&v7) = a5->field_0;
    v8 = a5->field_10;
    v14 = a3;
    v13 = (v16 & 4294967295) >> 16;
    v12 = v16;
    v11 = a8;
    v19.add_option(&v3);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v17, v22 & 1);
}
