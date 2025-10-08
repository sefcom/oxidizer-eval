long long just::recipe::Recipe::spaced_namepath(unsigned long long a0, unsigned long long a1[17])
{
    unsigned long long v1;  // rdx

    return alloc::str::<impl str>::replace(a0, a1.namepath(), v1, ":: [private]\nexport ", 2, " [private]\nexport ", 1);
}
