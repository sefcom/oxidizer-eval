double forc_publish::forc_pub_client::ForcPubClient::publish(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    int v1;  // xmm0

    a0->field_c8 = a1;
    v1 = *(a2);
    *((void*)&a0->field_0) = v1;
    a0->field_30 = a3;
    a0->field_38 = a4;
    a0->field_d4 = 0;
    return (unsigned long long)v1;
}
