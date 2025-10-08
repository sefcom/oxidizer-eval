long long zoxide::db::stream::StreamOptions::new(struct_0 *a0, unsigned long a1)
{
    a0->field_48 = a1;
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_20 = 8;
    a0->field_28 = 0;
    a0->field_58 = 0;
    *((int *)&a0->field_50) = (0x76a700 <= a1 ? a1 - 0x76a700 : 0);
    a0->field_30 = 0x8000000000000000;
    return 0x8000000000000000;
}
