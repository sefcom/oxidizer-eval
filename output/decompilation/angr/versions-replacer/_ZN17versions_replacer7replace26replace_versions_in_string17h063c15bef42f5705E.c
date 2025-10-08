long long versions_replacer::replace::replace_versions_in_string(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = 0;
    a0.replacen(once_cell::sync::OnceCell<T>::get_or_try_init(), a1, a2, a3, &v0);
    a0->field_18 = v0;
    return a0;
}
