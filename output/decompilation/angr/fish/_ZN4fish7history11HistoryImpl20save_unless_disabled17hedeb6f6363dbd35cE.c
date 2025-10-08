void fish::history::HistoryImpl::save_unless_disabled(struct_0 *a0)
{
    char v0;  // [bp-0x30]
    unsigned long long *v2;  // rax
    unsigned long long v3;  // r14
    unsigned long v4;  // rsi
    char *v5;  // rdi
    unsigned long long v6;  // rdx

    if (a0->field_f8)
        return;
    v2 = a0->padding_0[24].get_or_insert_with();
    v3 = *(v2);
    if (v3)
    {
        *(v2) = v3 - 1;
        v4 = "save no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0";
        v5 = &v0;
        v6 = 14;
    }
    else
    {
        *(v2) = 24;
        v4 = "save vacuumsave no vacuumassertion failed: self.first_unwritten_new_item_index <= self.new_items.len()assertion failed: self.disable_automatic_save_counter > 0";
        v5 = &v0;
        v6 = 11;
    }
    v5.new(v4, v6);
    a0.save(!v3);
    core::ptr::drop_in_place<fish::history::TimeProfiler>(&v0);
    return;
}
