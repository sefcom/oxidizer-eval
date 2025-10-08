long long starship::modules::package::get_gradle_version(unsigned long long a0, unsigned long long a1[25], unsigned long long a2[8])
{
    unsigned long long v0[25];  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x38]

    v4.read_file_from_pwd(a1, "gradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 17);
    if ((char)(((0 ^ *((long long *)&v4)) & (0 ^ -(*((long long *)&v4)))) >> 63))
        v3 = 0x8000000000000000;
    else
        starship::modules::package::get_gradle_version::{{closure}}(&(char)v3, a2[6], a2[7], &v4);
    v0[0] = a1;
    v1 = a2[6];
    v2 = a2[7];
    a0.or_else(&v3, &v0);
    return a0;
}
