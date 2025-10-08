char bat::style::StyleComponents::header(unsigned long long a0)
{
    if (!a0.header_filename())
        return a0.header_filesize();
    return 1;
}
