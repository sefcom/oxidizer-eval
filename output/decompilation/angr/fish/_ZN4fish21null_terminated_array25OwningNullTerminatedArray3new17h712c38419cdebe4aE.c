long long fish::null_terminated_array::OwningNullTerminatedArray::new(struct_0 *a0, unsigned long long a1)
{
    unsigned long long *v1;  // rax
    unsigned int v2;  // rdx
    unsigned long long v3;  // rax

    v1 = a1.into_boxed_slice();
    v3 = v1.new(v2);
    a0->field_0 = v1;
    a0->field_8 = v2;
    a0->field_10 = v3;
    a0->field_18 = v2;
    return a0;
}
