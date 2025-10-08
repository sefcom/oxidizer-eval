long long fish::reader::reader_reading_interrupted(char a0[2124])
{
    unsigned int v1;  // ecx

    v1 = fish::reader::reader_test_and_clear_interrupted();
    if (!v1)
    {
        return 0;
    }
    else if (a0[1274])
    {
        a0[2123] = 1;
        return 0;
    }
    else
    {
        return v1;
    }
}
