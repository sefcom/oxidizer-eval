long long fish::event::fire(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    char v6;  // dl

    fish::event::fire_delayed(a0);
    if (!a0.is_blocked())
    {
        fish::event::fire_internal(a0, a1);
        return (unsigned long long)core::ptr::drop_in_place<fish::event::Event>(a1);
    }
    v0.lock();
    v5 = v0.expect("Mutex poisoned!Mutex poisonedEvent %ls\nExecuted job %d from command '%ls'src/exec.rs", 15, &g_14d78d0);
    v3 = a1->field_30;
    *((uint128_t *)&v2) = a1->field_20;
    *((uint128_t *)&v1) = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v5 + 8.push(&v0, &g_14d78e8);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v6 & 1);
}
