void fish::complete::Completer::complete_custom(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_2 *a5)
{
    unsigned long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4[1][3];  // [bp-0x48]
    unsigned long v6;  // r13

    v6 = a0->field_38;
    if ((char)v6.check_cancel())
        return;
    v0 = v6;
    v1 = a3;
    v2 = a4;
    if (a0->field_70 == 1)
        v3 = 9223372036854775810;
    else
        fish::complete::Completer::complete_custom::{{closure}}(&(char)v3, &v0);
    v4.apply_var_assignments(v6, a5->field_30->field_8, *((long long *)&a5->field_30->field_10));
    if (!(char)v6.check_cancel())
        a0.complete_param_for_command(a1, a2, a5->field_8, a5->field_10, a5->field_20, a5->field_28, a5->field_70 ^ 1, a5 + 1);
    core::ptr::drop_in_place<core::option::Option<fish::common::ScopeGuard<(),fish::complete::Completer::apply_var_assignments<widestring::utfstring::Utf32String>::{{closure}}>>>(&v4);
    core::ptr::drop_in_place<core::option::Option<fish::common::ScopeGuard<(),fish::complete::Completer::complete_custom::{{closure}}::{{closure}}>>>(&v3);
    return;
}
