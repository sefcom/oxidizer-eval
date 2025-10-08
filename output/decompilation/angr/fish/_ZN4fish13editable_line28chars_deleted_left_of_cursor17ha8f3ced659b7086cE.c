long long fish::editable_line::chars_deleted_left_of_cursor(unsigned long long a0[13])
{
    if (a0[10] <= a0[11])
        return 0;
    return a0[11].len(a0[12]).min(a0[10] - a0[11]);
}
