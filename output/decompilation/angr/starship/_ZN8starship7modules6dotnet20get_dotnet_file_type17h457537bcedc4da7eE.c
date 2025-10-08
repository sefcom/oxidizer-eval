long long starship::modules::dotnet::get_dotnet_file_type(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long long v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    unsigned long long v8;  // rdx
    unsigned long v9;  // rbx
    unsigned long long v10;  // rbx
    unsigned long long v12;  // r15

    starship::modules::dotnet::map_str_to_lower(&v0, a0.file_name(a1), v8);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
LABEL_b91dfc:
        starship::modules::dotnet::map_str_to_lower(&v3, std::path::Path::extension(), v8);
        if (v3 == 0x8000000000000000)
        {
LABEL_b91e26:
            v10 = v10 & 0xffffffffffffff00 | 5;
        }
        else
        {
            v12 = *((long long *)&v5);
            v10 = v10 & 0xffffffffffffff00 | 3;
            if (!(char)v4.equal(v12, "slnpropstargetsReceived a non-success exit code from `dotnet --list-sdks`. Falling back to `dotnet --version`.--list-sdksUnable to parse the output from `dotnet --list-sdks`.Error in module `elixir`:\nsrc/modules/elixir.rs", 3))
            {
                v10 = v10 & 0xffffffffffffff00 | 1;
                if (!(char)v4.equal(v12, "csprojfsprojxprojglobal.jsonproject.jsonDirectory.Build.propsDirectory.Build.targetsPackages.props", 6) && !(char)v4.equal(v12, "fsprojxprojglobal.jsonproject.jsonDirectory.Build.propsDirectory.Build.targetsPackages.props", 6) && !(char)v4.equal(v12, "xprojglobal.jsonproject.jsonDirectory.Build.propsDirectory.Build.targetsPackages.props", 5))
                {
                    v10 = v10 & 0xffffffffffffff00 | 4;
                    if (!(char)v4.equal(v12, "propstargetsReceived a non-success exit code from `dotnet --list-sdks`. Falling back to `dotnet --version`.--list-sdksUnable to parse the output from `dotnet --list-sdks`.Error in module `elixir`:\nsrc/modules/elixir.rs", 5) && !(char)v4.equal(v12, "targetsReceived a non-success exit code from `dotnet --list-sdks`. Falling back to `dotnet --version`.--list-sdksUnable to parse the output from `dotnet --list-sdks`.Error in module `elixir`:\nsrc/modules/elixir.rs", 7))
                        goto LABEL_b91e26;
                }
            }
        }
        core::ptr::drop_in_place<regex::error::Error>(&v3);
    }
    else
    {
        v10 = v9 & 0xffffffffffffff00 | 2;
        if (!(char)v1.equal(v2, "global.jsonproject.jsonDirectory.Build.propsDirectory.Build.targetsPackages.props", 11))
        {
            if (!(char)v1.equal(v2, "project.jsonDirectory.Build.propsDirectory.Build.targetsPackages.props", 12))
                goto LABEL_b91dfc;
            v10 = 0;
        }
    }
    core::ptr::drop_in_place<regex::error::Error>(&v0);
    return v10 & 4294967295;
}
