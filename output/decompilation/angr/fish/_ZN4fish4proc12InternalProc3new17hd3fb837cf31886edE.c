long long fish::proc::InternalProc::new(struct_0 *a0)
{
    a0->field_0 = atomic_exchange_add(&_ZN4fish4proc12InternalProc3new12NEXT_PROC_ID17hdb21da5639e70f79E, 1);
    a0->field_10 = 0;
    return a0;
}
