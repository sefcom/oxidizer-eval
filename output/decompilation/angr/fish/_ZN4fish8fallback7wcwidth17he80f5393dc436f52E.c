long long fish::fallback::wcwidth()
{
    unsigned int v1;  // eax

    v1 = wcwidth();
    0.unwrap(&g_14d89b8);
    return v1;
}
