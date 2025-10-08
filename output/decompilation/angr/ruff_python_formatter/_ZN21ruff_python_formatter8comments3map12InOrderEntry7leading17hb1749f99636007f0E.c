long long ruff_python_formatter::comments::map::InOrderEntry::leading(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v1;  // eax
    unsigned long long v2;  // rax

    v1 = a1.from_len();
    v2 = a2.from_len();
    a0->field_0 = v1;
    a0->field_4 = v2;
    a0->field_8 = 0;
    return v2;
}
