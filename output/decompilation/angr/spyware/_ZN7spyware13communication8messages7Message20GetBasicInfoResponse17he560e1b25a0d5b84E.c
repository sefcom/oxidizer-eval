double spyware::communication::messages::Message::GetBasicInfoResponse(long long a0, long long a1)
{
    int v1;  // xmm0
    int v2;  // xmm1
    int v3;  // xmm2

    v1 = a1[0];
    v2 = a1[1];
    v3 = a1[2];
    a0[3] = a1[3];
    *((void*)&a0[2]) = v3;
    *((void*)&a0[1]) = v2;
    *((void*)&a0[0]) = v1;
    return (unsigned long long)v1;
}
