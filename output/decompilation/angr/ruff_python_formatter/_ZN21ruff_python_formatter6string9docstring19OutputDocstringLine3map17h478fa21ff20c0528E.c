void ruff_python_formatter::string::docstring::OutputDocstringLine::map(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]

    ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::{{closure}}(&v0, a2, a1->field_8, a1->field_10);
    a0->field_10 = *((long long *)&v1);
    *((void*)&a0->field_0) = v0;
    a0->field_18 = a1->field_18;
    a0->field_1c = a1->field_1c;
    core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(a1);
    return;
}
