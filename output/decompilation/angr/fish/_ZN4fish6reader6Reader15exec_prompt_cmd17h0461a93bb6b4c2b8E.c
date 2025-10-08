void fish::reader::Reader::exec_prompt_cmd(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    int v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    void* v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    void* v6;  // [bp-0x40]
    int v7;  // [bp-0x38], Other Possible Types: char
    char v8;  // [bp-0x28]
    unsigned long long v10;  // r15

    v10 = a3;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    if (a4 && (char)fish::function::exists(a2, a3, a1))
    {
        v7.to_vec(a2, a3);
        v3 = *((long long *)&v8);
        v0 = v7;
        v7.add(&(char)v0, " ", 18);
        v0 = v7;
        v10 = *((long long *)&v8);
        v3 = *((long long *)&v8);
    }
    else
    {
        v2 = a2;
        v3 = a3;
        v1 = 0x8000000000000000;
        v2 = a2;
    }
    fish::exec::exec_subshell(v2, v10, a1, &v4, 0);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v4);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(char)v0);
    return;
}
