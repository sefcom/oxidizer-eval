long long fish::reader::reader_schedule_prompt_repaint()
{
    unsigned long long v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    void* v3;  // [bp-0x18]
    char v4;  // [bp-0x10]
    struct_0 *v6;  // rax

    fish::threads::assert_is_main_thread();
    v6 = fish::reader::current_data();
    if (!v6)
    {
        return v6;
    }
    else if (!v6->field_84d)
    {
        v6->field_84d = 1;
        v1 = 0;
        v2 = 4;
        v3 = 0;
        v4 = 61;
        v0 = 0x8000000000000000;
        return v6->padding_0[1328].queue_char(&v0);
    }
    else
    {
        return v6;
    }
}
