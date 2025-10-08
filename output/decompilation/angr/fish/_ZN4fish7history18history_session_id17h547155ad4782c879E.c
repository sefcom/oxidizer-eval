long long fish::history::history_session_id(unsigned long long a0, unsigned long a1, struct_1 *a2)
{
    char v0;  // [bp-0x28]

    a2->field_18(&v0);
    fish::history::history_session_id_from_var(a0, &v0);
    return a0;
}
