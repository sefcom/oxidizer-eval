char fish::topic_monitor::topic_to_bit(char a0)
{
    return 1 << (a0 & 31);
}
