long long fish::proc::Process::set_argv(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&(&a0->padding_0)[1]);
    v3 = a1->field_10;
    *((unsigned long long *)((char *)&a0->field_48 + 8)) = v3;
    *((uint128_t *)&(&a0->padding_0)[1]) = a1->field_0;
    return v3;
}
