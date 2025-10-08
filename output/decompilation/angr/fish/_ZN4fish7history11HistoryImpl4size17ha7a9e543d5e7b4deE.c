long long fish::history::HistoryImpl::size(struct_0 *a0)
{
    a0.load_old_if_needed();
    return a0->field_50 + a0->field_68 - (a0->field_50 & a0->field_fc);
}
