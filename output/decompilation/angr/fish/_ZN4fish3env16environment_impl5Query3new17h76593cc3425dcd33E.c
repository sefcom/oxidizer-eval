long long fish::env::environment_impl::Query::new(char a0[12], unsigned long a1)
{
    char v1;  // cl
    char v2;  // al
    char v3;  // dl
    char v4;  // r8b
    char v5;  // cc_dep1

    if (((char)a1 & 15))
    {
        v1 = (char)a1 & 1;
        v2 = (char)((a1 & 255) >> 1) & 1;
        v3 = (char)((a1 & 255) >> 2) & 1;
        v4 = (char)((a1 & 255) >> 3) & 1;
    }
    else
    {
        v4 = 1;
        v3 = 1;
        v2 = 1;
        v1 = 1;
    }
    a0[0] = ((char)a1 & 15);
    v5 = (char)a1 & 48;
    a0[5] = v5;
    a0[1] = v1;
    a0[2] = v2;
    a0[3] = v3;
    a0[4] = v4;
    *((int *)&a0[6]) = (!((char)a1 & 48) ? 1 : (char)((a1 & 255) >> 4) & 1);
    *((int *)&a0[7]) = (!v5 ? 1 : (char)((a1 & 255) >> 5) & 1);
    a0[8] = ((char)a1 & 192);
    a0[9] = (char)((a1 & 255) >> 6) & 1;
    a0[10] = (a1 & 4294967295 & 255) >> 7;
    a0[11] = (char)((unsigned int)a1 >> 8) & 1;
    return a1 & 4294967295 & 0xffffffffffffff00 | (a1 & 4294967295 & 255) >> 7 & 255;
}
