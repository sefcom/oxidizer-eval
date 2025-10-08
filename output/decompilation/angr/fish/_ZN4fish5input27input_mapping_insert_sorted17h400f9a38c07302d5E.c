long long fish::input::input_mapping_insert_sorted(unsigned long long a0[3], struct_0 *a1)
{
    unsigned long v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = a1->field_10;
    return a0.insert(core::slice::<impl [T]>::binary_search_by(a0[1], a0[2], &v0), a1);
}
