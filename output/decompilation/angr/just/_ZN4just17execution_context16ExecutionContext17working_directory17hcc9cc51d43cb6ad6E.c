long long just::execution_context::ExecutionContext::working_directory(unsigned long long a0, struct_0 *a1, unsigned long a2)
{
    unsigned long v1;  // rdx
    unsigned long v2;  // rax
    unsigned long v3;  // rax

    v1 = a2 + 24;
    v2 = &a1->padding_0[120];
    if (a1->field_230 != 37)
        v3 = v2;
    else
        v3 = v1;
    if ((char)(((0 ^ a1->field_1c8) & (0 ^ -(a1->field_1c8))) >> 63))
        return a0.to_vec(*((long long *)(v3 + 8)), *((long long *)(v3 + 16)));
    return a0.join(*((long long *)(v3 + 8)), *((long long *)(v3 + 16)), &a1->field_1c8);
}
