void fish::reader::Reader::completion_insert(void* a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4, unsigned int a5, char a6)
{
    unsigned long v0;  // [bp-0x90]
    char v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char v4;  // [bp-0x70]
    unsigned int v5;  // eax
    unsigned long long v6[16];  // rdx

    v5 = a0.active_edit_line();
    if (v6[15] != a4)
        a0.update_buff_pos(v5 & 1, 1, a4);
    a0.active_edit_line();
    v0 = v6[15];
    v4.background_interruptible(a1 + 472, &g_14c7518);
    fish::reader::completion_apply_to_command_line(&v1, &v4, a2, a3, a5, v6[5], v6[6], &v0, 0, a6);
    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v4);
    a0.set_buffer_maintaining_pager(v2, v3, v0);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    return;
}
