long long fish::reader::ReaderData::pager_selection_changed(struct_1 *a0)
{
    unsigned long v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v6;  // al
    struct_0 *v7;  // rax
    unsigned int v9;  // rcx

    fish::threads::assert_is_main_thread();
    v0 = a0->field_838;
    v6 = a0->field_850;
    a0->field_850 = 2;
    if ((!(v6 & 1) & v6 != 2))
        a0.undo(0);
    v7 = a0->padding_38[296].selected_completion(&a0->padding_38[576]);
    if (!v7)
        return a0.update_buff_pos(0, 0, v9);
    v4.background_interruptible(fish::env::environment::EnvStack::globals(), &g_14c7518);
    fish::reader::completion_apply_to_command_line(&v1, &v4, v7->field_8, v7->field_10, v7->field_32, a0->field_760, a0->field_768, &v0, 0, 0);
    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v4);
    if ((char)v2.equal(v3, a0->field_28, a0->field_30) || (char)v2.eq(v3, a0->field_760, a0->field_768))
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    a0.set_buffer_maintaining_pager(v2, v3, v0);
    a0->field_850 = 0;
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
}
