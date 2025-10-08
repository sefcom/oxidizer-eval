long long fish::signal::SigChecker::check(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // ecx
    unsigned int v4;  // ecx

    v1 = fish::topic_monitor::topic_monitor_principal();
    v2 = v1.generation_for_topic(a0->field_8);
    v4 = v3 & 0xffffff00 | a0->field_0 != v2;
    a0->field_0 = v2;
    return v4;
}
