long long fish::reader::reader_change_history(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x30]
    struct_0 *v2;  // rax
    unsigned long v3;  // rbx
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r14
    struct_1 *v6;  // rbx
    char v7;  // dl

    v2 = fish::reader::current_data();
    if (!v2)
        return 0;
    v3 = &v2->field_830;
    v4 = v2->field_830;
    v2->field_830 + 16.save();
    v5 = a0.with_name(a1);
    core::ptr::drop_in_place<alloc::sync::Arc<fish::history::History>>(v3);
    v2->field_830 = v5;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v5) + 1, 0, (v4 + 16 <= v4 ? 1 : 0))))
    {
        v0 = *((long long *)v3);
        v6 = fish::reader::commandline_state_snapshot();
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v6->field_60);
        v6->field_60 = *((long long *)v3);
        return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v7 & 1);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20941006()
}
