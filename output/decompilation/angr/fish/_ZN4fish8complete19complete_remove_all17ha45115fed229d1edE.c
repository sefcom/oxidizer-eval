long long fish::complete::complete_remove_all(struct_0 *a0, char a1, char a2)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    unsigned long v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x38]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    char v7;  // dl

    v0.lock();
    v5 = v0.expect("mutex poisoned -%lc %ls --%ls %ls -%lc --%lspoisoned mutex", &g_14d62d8);
    v3 = a0->field_10;
    *((uint128_t *)&v2) = a0->field_0;
    v0.remove(v5 + 8, &v2);
    core::ptr::drop_in_place<core::option::Option<fish::complete::CompletionEntry>>(&v0);
    if (!a2 || !((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)) || a1)
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
    }
    else
    {
        v0.lock();
        v6 = v0.unwrap(&g_14d62f0);
        v1 = v3;
        v0 = v2;
        v6 + 8.insert(&v0);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v7 & 1);
    }
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v7 & 1);
}
