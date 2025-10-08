void zoxide::db::dir::_::<impl serde::ser::Serialize for zoxide::db::dir::Dir>::serialize(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14

    v0 = v2;
    v3 = a1.serialize_struct();
    v3.serialize_field(a0);
    v3.serialize_field();
    v3.serialize_field();
    return;
}
