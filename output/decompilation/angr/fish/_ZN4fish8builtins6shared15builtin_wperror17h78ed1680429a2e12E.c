void fish::builtins::shared::builtin_wperror(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    unsigned int v0;  // [bp-0x54]
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v6;  // rbx

    v0 = errno::errno();
    v6 = a2->field_10;
    v6.append(a0, a1);
    v6.append(":", 2);
    if (!v0)
        return;
    v1.spec_to_string(&v0);
    v4.from_str(v2, v3);
    core::ptr::drop_in_place<alloc::string::String>(&v1);
    v6.append(&v4);
    v6.push(10);
    return;
}
