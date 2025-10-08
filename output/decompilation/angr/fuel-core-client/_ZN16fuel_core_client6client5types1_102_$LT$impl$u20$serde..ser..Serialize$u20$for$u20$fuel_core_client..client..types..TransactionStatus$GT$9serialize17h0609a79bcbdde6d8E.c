void fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionStatus>::serialize(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = 0x8000000000000000 ^ a1;
    if (v3 >= 6)
        v3 = 4;
    goto (long long)(g_48a5cc[v3] + (char *)&g_48a5cc[0]);
}
