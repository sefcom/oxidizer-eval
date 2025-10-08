int fish::history::HistoryImpl::clear_file_state(struct_0 *a0)
{
    unsigned int v1;  // eax

    v1 = core::ptr::drop_in_place<core::option::Option<fish::history::file::HistoryFileContents>>(a0);
    a0->field_0 = 0;
    a0->field_fd = 0;
    a0->field_68 = 0;
    return v1;
}
