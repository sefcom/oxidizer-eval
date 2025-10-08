long long fish::operation_context::OperationContext::parser(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a0->field_0 == 1)
    {
        v0 = v2;
        fish::operation_context::OperationContext::parser::panic_cold_explicit(); /* do not return */
    }
    return a0->field_8;
}
