long long fish::complete::Completion::prepend_token_prefix(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v1;  // rax

    if ((a0->field_32 & 2))
        return a0.insert_slice(0, a1, a2);
    return v1;
}
