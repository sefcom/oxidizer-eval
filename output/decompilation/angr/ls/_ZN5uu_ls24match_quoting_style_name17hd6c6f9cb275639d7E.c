long long uu_ls::match_quoting_style_name(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    char v1;  // al
    unsigned int v2;  // ecx

    if ((char)a0.equal(a1, "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei", 7))
    {
        v1 = 3;
    }
    else if ((char)a0.equal(a1, "shellshell-alwaysshell-escapeshell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap", 5))
    {
        a2 *= 0x100;
    }
    else if ((char)a0.equal(a1, "shell-alwaysshell-escapeshell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap", 12))
    {
        a2 = a2 * 0x100 + 1;
    }
    else if ((char)a0.equal(a1, "shell-escapeshell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap", 12))
    {
        a2 *= 0x100;
        v1 = 1;
    }
    else if ((char)a0.equal(a1, "shell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap", 19))
    {
        a2 = a2 * 0x100 + 1;
        v1 = 1;
    }
    else if ((char)a0.equal(a1, "cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol", 1))
    {
        v1 = 2;
        a2 = v2 & 0xffff0000 | 2;
    }
    else
    {
        v1 = ((char)a0.equal(a1, "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull", 6) ^ 1) * 2 + 2;
        a2 = 0;
    }
    return v1 | a2 * 0x100;
}
