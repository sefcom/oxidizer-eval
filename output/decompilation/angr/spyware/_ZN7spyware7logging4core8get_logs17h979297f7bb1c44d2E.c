long long spyware::logging::core::get_logs(struct_0 *a0)
{
    unsigned long v1;  // rax

    v1 = spyware::logging::core::MemoryLogger::global();
    if (v1)
    {
        a0.get_logs(v1);
    }
    else
    {
        a0->field_8 = 0;
        a0->field_0 = 0x8000000000000000;
    }
    return a0;
}
