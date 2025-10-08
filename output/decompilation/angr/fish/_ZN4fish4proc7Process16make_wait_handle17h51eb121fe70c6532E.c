long long fish::proc::Process::make_wait_handle(unsigned long long a0[26], unsigned long long a1)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x38]
    unsigned int *v8;  // rax
    unsigned int v9;  // ebp
    unsigned long v10;  // r15
    unsigned long long v12;  // rdx

    v8 = a0[18].get();
    if (!v8)
    {
        return 0;
    }
    else if (a0[24] < 9223372036854775807)
    {
        v9 = *(v8);
        v10 = &a0[24];
        a0[24] = a0[24] + 1;
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v10);
        if (a0[25])
            return a0.get_wait_handle();
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a0[7], a0[8]);
        v3.to_vec(fish::wutil::wbasename(v1, v2), v12);
        v6 = v4;
        memcpy(&v5, &v3, 16);
        v3 = v10.replace(v9.new(a1, &v5));
        core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(&v3);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        return a0.get_wait_handle();
    }
    else
    {
        core::cell::panic_already_mutably_borrowed(&g_14df2f8); /* do not return */
    }
}
