long long fuel_core_version::find_dependency_version(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned int v4;  // ecx
    struct_1 *v5;  // rax

    v1 = a1.get("workspacedependenciesfuel-corefuel-core-versionmanifest_paththe following required argument was not provided: manifest_pathAppMANIFEST_PATHmanifest-path", 9);
    if (!v1)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v2 = v1.get("dependenciesfuel-corefuel-core-versionmanifest_paththe following required argument was not provided: manifest_pathAppMANIFEST_PATHmanifest-path", 12);
    if (!v2)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v3 = v2.get("fuel-corefuel-core-versionmanifest_paththe following required argument was not provided: manifest_pathAppMANIFEST_PATHmanifest-path", 9);
    if (!v3)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v4 = v3->field_0;
    switch (v4)
    {
    case 0:
        return a0.clone(&v3->field_8);
    case 6:
        v5 = v3->field_8.get(v3->field_10);
        if (v5 && !v5->field_0)
            return a0.to_vec(v5->field_10, v5->field_18);
    default:
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
}
