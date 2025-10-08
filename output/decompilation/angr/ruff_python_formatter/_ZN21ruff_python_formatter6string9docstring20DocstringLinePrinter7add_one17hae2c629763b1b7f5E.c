long long ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one(unsigned long long a0, struct_4 *a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x40]
    int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x28]
    char v3;  // [bp-0x24]
    struct_3 *v5;  // r12

    v5 = a1->field_88;
    if (*((char *)(v5->field_0.options(v5->field_8) + 13)) == 1 && *((char *)(v5->field_8->field_30(v5->field_0) + 60)) == 2)
    {
        a1->padding_0[32].add(a2, a1);
        return a0.run_action_queue(a1);
    }
    v0 = 0x8000000000000000;
    *((uint128_t *)&v1) = a2->field_0;
    v2 = a2->field_20;
    v3 = !a2->field_10;
    a0.print_one(a1, &v0);
    return (unsigned long long)core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v0);
}
