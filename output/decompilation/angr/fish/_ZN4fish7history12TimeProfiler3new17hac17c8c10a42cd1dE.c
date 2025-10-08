long long fish::history::TimeProfiler::new(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx

    v1 = std::time::SystemTime::now();
    a0->field_0 = a1;
    a0->field_8 = a2;
    a0->field_10 = v1;
    a0->field_18 = v2;
    return v1;
}
