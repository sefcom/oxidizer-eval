long long fish::highlight::highlight::HighlightColorResolver::new(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rdx

    v1 = std::thread::local::LocalKey<T>::with();
    a0->field_0 = g_14bd810;
    a0->field_10 = g_14bd820;
    a0->field_20 = v1;
    a0->field_28 = v2;
    return a0;
}
