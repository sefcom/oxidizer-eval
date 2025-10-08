long long fish::input_common::InputEventQueuer::enqueue_interrupt_key(struct_1 *a0)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x30]
    struct_0 *v13;  // rax
    char v14;  // dl
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v13 = fish::common::shell_modes();
    v15 = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v13, v14 & 1);
    if (!v13->field_19)
        return v15;
    v6.from_single_byte(v13->field_19);
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v7 = 0;
    if (!(char)fish::input_common::stop_query(a0.blocking_query(), v16))
        return a0.push_front(&v3);
    if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v10.to_flog_str(&g_15a99a0);
        v8.into_iter(&v10);
        v0.spec_extend(&v8);
        v0.push(58, &g_14db508);
        v0.push(32, &g_14db508);
        v11.to_vec("Received interrupt, giving up on waiting for terminal responseIllegal input encodingIllegal codepointclose %d\nfile %d -> %d\npipe {%d} (input: %s) -> %d\nnoyesInvalid target fd", 62);
        v8.into_iter(&v11);
        v0.spec_extend(&v8);
        v0.push(10, &g_14db508);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    a0.truncate();
    a0->field_10 = 0;
    v9 = 2;
    v8 = 9223372036854775810;
    a0.push_front(&v8);
    return (unsigned long long)core::ptr::drop_in_place<fish::input_common::CharEvent>(&v3);
}
