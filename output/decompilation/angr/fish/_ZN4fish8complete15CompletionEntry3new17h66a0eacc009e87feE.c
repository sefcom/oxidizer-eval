long long fish::complete::CompletionEntry::new(struct_0 *a0)
{
    unsigned long long v1;  // 4096

    v1 = atomic_exchange_add(&_ZN4fish8complete14complete_order17hf964e665e7b16f40E, 1);
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = v1;
    return v1;
}
