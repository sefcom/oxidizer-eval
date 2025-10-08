long long fish::signal::signal_handle(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c8]
    int v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    uint128_t v2;  // [bp-0x98]
    uint128_t v3;  // [bp-0x88]
    uint128_t v4;  // [bp-0x78]
    uint128_t v5;  // [bp-0x68]
    uint128_t v6;  // [bp-0x58]
    uint128_t v7;  // [bp-0x48]
    uint128_t v8;  // [bp-0x38]
    int v9;  // [bp-0x28]
    unsigned int v10;  // [bp-0x20]
    void* v11;  // [bp-0x18]

    *((uint128_t *)&v9) = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    *((uint128_t *)&v1) = 0;
    v11 = 0;
    if (a0 <= 22)
    {
        *((unsigned int **)&v0) = &g_72000c;
        if ((*((char *)&v0 + ((a0 & 31) >> 3)) >> ((char)a0 & 31 & 7) & 1))
            return "mn_width in $column_widths\n                printf %s\\t (string sub -l $column_width -- $line | string trim -r)\n                set line (string sub -s (math $column_width + 1) -- $line)\n            end\n            printf \"\\n\"\n        end\n    else if set -q column_widths[1]\n        # only take lines starting with `  `, i.e., no `No devices ...`\n        # then take the first column as substring\n        string match \"  *\" $results[5..] | string sub -s (math $leading_ws + 1) -l $column_widths[1] | string trim -r\n    end\nend\n\nfunction __iwctl_match_subcoms\n    set -l match (string split --no-empty \" \" -- $argv)\n\n    set argv (commandline -pxc)\n    # iwctl allows to specify arguments for username, password, passphrase and dont-ask regardless of any following commands\n    argparse -u \'u/username=\' \'p/password=\' \'P/passphrase=\' v/dont-ask -- $argv\n    set argv $argv[2..]\n\n    if test (count $argv) != (count $match)\n        return 1\n    end\n\n    while set -q argv[1]\n        string match -q -- $match[1] $argv[1]\n      ";
    }
    v10 = 0;
    sigemptyset(&(char)v1);
    v10 = 4;
    v1 = fish::signal::fish_signal_handler;
    return fish::signal::sigaction(a0, &v1);
}
