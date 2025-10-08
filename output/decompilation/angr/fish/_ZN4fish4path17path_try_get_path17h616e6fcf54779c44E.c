long long fish::path::path_try_get_path(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 *a4)
{
    char v0;  // [bp-0x30], Other Possible Types: unsigned long
    char v1;  // [bp-0x28]
    unsigned long long v3[2];  // rax

    a4->field_18(&v0, a3, "P", 4);
    if (!v0)
    {
        v3 = once_cell::sync::OnceCell<T>::get_or_try_init();
        fish::path::path_get_path_core(a0, a1, a2, v3[0], v3[1]);
        return a0;
    }
    fish::path::path_get_path_core(a0, a1, a2, v0 + 16, *((long long *)&v1));
    core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
    return a0;
}
