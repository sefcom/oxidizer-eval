long long fish::locale::invalidate_numeric_locale()
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long
    char v1;  // [bp-0x18]
    struct_0 *v3;  // rax
    char v4;  // dl

    v0.lock();
    v3 = v0.unwrap(&g_14dbf68);
    v3->field_8 = 0x110000;
    *((unsigned long *)&(&v3->field_8)[1]) = v0;
    *((int *)((char *)&v3->field_c + 4)) = *((int *)&v1);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
