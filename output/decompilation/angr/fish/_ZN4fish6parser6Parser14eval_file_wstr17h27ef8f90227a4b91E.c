long long fish::parser::Parser::eval_file_wstr(struct_0 *a0, unsigned long long a1, void* a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    int v3;  // [bp-0x70], Other Possible Types: char
    unsigned long v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx

    v0 = a3;
    v5.scoped_mod(a1 + 64);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a3) + 1, 0, (a1 + 64 <= a1 ? 1 : 0))))
    {
        v3.source_block(a3);
        v7 = a1.push_block(&v3);
        v1 = a1 + 128.scoped_set(a3);
        v2 = v8;
        v3.eval_wstr(a1, a2, a4, a5, 8);
        a1.pop_block(v7);
        *((char *)(a1.libdata_mut() + 128)) = 0;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v8);
        a0->field_10 = v4;
        *((void*)&a0->field_0) = v3;
        core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedRefCell<fish::parser::LibraryData>,fish::common::ScopedRefCell<fish::parser::LibraryData>::scoped_set<fish::builtins::source::source::{{closure}},core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>::{{closure}}>>(&v1);
        core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v5);
        return a0;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20882114()
}
