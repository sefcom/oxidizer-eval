void fish::builtins::complete::builtin_complete_print(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long long a4)
{
    char v0;  // [bp-0xc8]
    void* v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8]
    char v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    char v7;  // [bp-0x88], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x80]
    char v9;  // [bp-0x78]
    char v10;  // [bp-0x48]

    fish::complete::complete_print(&v4, a0, a1);
    if (!(a3 & 1) && fish::nix::isatty(1))
    {
        v1 = 0;
        v2 = 1;
        v3 = 0;
        v7.context(a4);
        fish::highlight::highlight::highlight_shell(v5, v6, &v1, &v7, 0, 0, *((long long *)&v0));
        core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v7);
        fish::highlight::highlight::colorize(&v7, v5, v6, 1, 0, a4 + 472, &g_14c7518);
        fish::common::str2wcstring(&v10, v8, *((long long *)&v9));
        a2.append(&v10);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v7, v8);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v1, 1);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        return;
    }
    a2.append(&v4);
    return;
}
