long long fish::topic_monitor::TopicMonitor::generation_for_topic(unsigned int a0, unsigned int a1)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long v4;  // rbx

    v4 = a1;
    v0.current_generations(a0);
    if (!(char)v4)
    {
        return v0;
    }
    else if ((unsigned int)v4 == 1)
    {
        return v1;
    }
    else
    {
        return *((long long *)&v2);
    }
}
