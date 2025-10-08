long long just::function::replace_regex(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char v2;  // [bp-0x88]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x58], Other Possible Types: unsigned long long
    int v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x40]
    int v8;  // [bp-0x38], Other Possible Types: char
    char v9;  // [bp-0x28]

    v5.new(a4, a5);
    if (!v5)
    {
        v4 = v7;
        memcpy(&(char)v3, &v6, 16);
        just::function::replace_regex::{{closure}}(&v0, &(char)v3);
        v4 = *((long long *)&v2);
        memcpy(&v3, &v0, 16);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v2);
        *((void*)&(&a0->field_0)[1]) = v3;
        a0->field_0 = 1;
        return a0;
    }
    v3 = v6;
    v4 = v7;
    v6 = v3;
    v7 = v4;
    v0.replacen(&v5, a2, a3, a6, a7);
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v8, v1, *((long long *)&v2));
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v9);
    *((void*)&(&a0->field_0)[1]) = v8;
    a0->field_0 = 0;
    core::ptr::drop_in_place<just::request::Request>(&v0);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v5);
    return a0;
}
