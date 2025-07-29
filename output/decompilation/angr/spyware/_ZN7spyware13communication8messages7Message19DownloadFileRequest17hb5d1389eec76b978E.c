double spyware::communication::messages::Message::DownloadFileRequest(long long a0, long long a1)
{
    int v1;  // xmm0

    *((unsigned long long *)((char *)&a0->field_8 + 8)) = a1->field_10;
    v1 = a1->field_0;
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 9223372036854775810;
    return (unsigned long long)v1;
}
