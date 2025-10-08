long long fish::proc::Process::check_generations_before_launch(struct_0 *a0)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v4;  // rax

    v0.current_generations(fish::topic_monitor::topic_monitor_principal());
    *((void*)&(&a0->padding_0)[1]) = v0;
    v4 = *((long long *)&v1);
    *((unsigned long long *)((char *)&a0->field_78 + 8)) = v4;
    return v4;
}
