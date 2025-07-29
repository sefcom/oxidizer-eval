long long spyware::logging::memory_logger::CircularMemoryLogs::write_log(struct_2 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    unsigned long v1;  // [bp-0x38]
    struct_0 *v3;  // r14
    unsigned long v4;  // r15
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    char v7;  // dl

    if (a1->field_10 >= a0->field_28)
        return (unsigned long long)::0x4565a0::core::ptr::drop_in_place<alloc::string::String>(a1);
    v0.write(a0);
    v3 = v0.unwrap();
    v4 = &v3->padding_0[16];
    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v4.push(&v0, &g_4b9c28);
    v5 = spyware::logging::memory_logger::compute_used_chars(v3->field_18, *((long long *)&v3->field_20));
    if (v5 < a0->field_28)
        return core::ptr::drop_in_place<std::sync::rwlock::RwLockWriteGuard<alloc::vec::Vec<alloc::string::String>>>(v3, v7 & 1);
    do
    {
        v0.remove(v4, 0, &g_4b9c40);
        ::0x4565a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
        v6 = spyware::logging::memory_logger::compute_used_chars(v3->field_18, *((long long *)&v3->field_20));
    } while (v6 >= a0->field_28);
    return core::ptr::drop_in_place<std::sync::rwlock::RwLockWriteGuard<alloc::vec::Vec<alloc::string::String>>>(v3, v7 & 1);
}
