double forc_publish::forc_pub_client::ForcPubClient::upload(long long a0, long long a1, long long a2)
{
    int v1;  // xmm0

    a0->field_18 = a1;
    v1 = a2->field_0;
    *((void*)&a0->field_0) = v1;
    a0->field_10 = a2->field_10;
    a0->field_20 = "0.69.6forc-plugins/forc-publish/src/main.rs ";
    a0->field_28 = 6;
    a0->field_c8 = 0;
    return (unsigned long long)v1;
}
