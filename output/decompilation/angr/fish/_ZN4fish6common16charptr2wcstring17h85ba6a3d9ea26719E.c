long long fish::common::charptr2wcstring(void* a0, char *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    return fish::common::str2wcstring(a0, a1, strlen(a1));
}
