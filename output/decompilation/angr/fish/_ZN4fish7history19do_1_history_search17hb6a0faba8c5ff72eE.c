void fish::history::do_1_history_search(unsigned long long a0, unsigned int a1, unsigned long long a2, char a3, unsigned long long a4, unsigned long long a5, struct_1 *a6)
{
    char v0;  // [bp-0xf8]

    v0.new_with(a0, a2, a1, a3 ^ 1, 0);
    do
    { } while (!(char)a6->field_28(a5) && (char)v0.go_to_next_match(1) && !(char)a4.call_mut(v0.current_item()));
    core::ptr::drop_in_place<fish::history::HistorySearch>(&v0);
    return;
}
