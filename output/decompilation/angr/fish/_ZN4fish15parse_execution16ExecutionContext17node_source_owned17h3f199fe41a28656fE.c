long long fish::parse_execution::ExecutionContext::node_source_owned(struct_0 *a0, unsigned int a1, unsigned long a2, unsigned int a3)
{
    int v0;  // [bp-0x20], Other Possible Types: char
    char v1;  // [bp-0x10]
    unsigned long long v4;  // rax

    v0.to_vec((unsigned long long)a1.node_source(a2, a3), a2);
    v4 = *((long long *)&v1);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v0;
    return v4;
}
