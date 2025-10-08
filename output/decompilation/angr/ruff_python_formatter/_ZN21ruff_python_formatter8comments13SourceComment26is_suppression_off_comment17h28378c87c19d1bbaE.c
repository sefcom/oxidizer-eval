long long ruff_python_formatter::comments::SourceComment::is_suppression_off_comment(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a0.text(a1, a2);
    return v1.is_suppression_off(v2, a0->field_9);
}
