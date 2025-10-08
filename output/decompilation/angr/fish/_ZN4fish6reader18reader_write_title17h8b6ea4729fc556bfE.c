long long fish::reader::reader_write_title(unsigned int a0, unsigned int a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: void*
    unsigned long long v4;  // [bp-0x90]
    void* v5;  // [bp-0x88], Other Possible Types: unsigned long long
    int v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    v11.scoped_mod(a2 + 64);
    v0.to_vec("e", 38);
    v8 = v2;
    *((int128_t *)&v6) = *((int128_t *)&v0);
    if ((char)fish::function::exists("f", 10, a2))
    {
        v0.to_vec("f", 10);
        v5 = v2;
        *((int128_t *)&v3) = *((int128_t *)&v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v6);
        v8 = v5;
        *((int128_t *)&v6) = (int128_t)v3;
        if (a1)
        {
            (char)v6.push(32);
            fish::common::escape_string(&v0, a0, a1, 0);
            (char)v6.spec_extend(v1, v1 + v2 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        }
    }
    v3 = 0;
    v4 = 8;
    v5 = 0;
    fish::exec::exec_subshell(v7, v8, a2, &v3, 0);
    fish::terminal::Outputter::stdoutput();
    v13 = _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E.new();
    v9 = v13;
    v10 = v14;
    v13.reset_text_face();
    core::ptr::drop_in_place<fish::terminal::BufferedOutputter>(&v9);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v3);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v6);
    return core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v11);
}
