long long fish::reader::Reader::eval_bind_cmd(unsigned long long a0[229], unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x98]
    void* v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    void* v3;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x80]
    char v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x68]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x3c]
    unsigned long long v10;  // rdx
    char v11;  // al
    struct_0 *v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v7.get_last_statuses(a1 + 472);
    v4 = *((long long *)(a1.libdata() + 96));
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v10);
    v5.new(fish::reader::reader_save_screen_state);
    v11 = v5.disable_tty_protocols();
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v8.eval(a1, a2, a3, &v1);
    core::ptr::drop_in_place<fish::io::IoChain>(&v1);
    a1.set_last_statuses(&v7);
    v3 = v6;
    memcpy(&v1, &v5, 16);
    if (!v11 && !(char)v1.reclaim())
    {
        v12 = a1.libdata();
        v13 = (unsigned long long)core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v10);
        if (v12->field_60 == v4)
            return v13;
        v0 = 10;
        v14 = v0.slice_contains(a0[227], a0[228]);
        if (!(char)v14)
            return v14;
    }
    return a0.save_screen_state();
}
