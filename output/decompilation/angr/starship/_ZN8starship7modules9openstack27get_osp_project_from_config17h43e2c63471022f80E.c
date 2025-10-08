void starship::modules::openstack::get_osp_project_from_config(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xe8], Other Possible Types: char *, unsigned long long
    char *v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char *v3;  // [bp-0xd8]
    int v4;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v5;  // [bp-0xc0]
    char v6;  // [bp-0xb8]
    int v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa8]
    char v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x90]
    char v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    int v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x38]
    char v19;  // [bp-0x30]

    v15 = a2;
    v16 = a3;
    v6.get_env("PWDReceived completed pipestatus of src/context.rs", 3);
    if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
    {
        v13 = 0x8000000000000000;
    }
    else
    {
        v18 = v8;
        v17 = v7;
        (char)v13.add(&v17, "/clouds.yaml.config/openstack/clouds.yamlcloudssrc/modules/openstack.rs", 12);
    }
    v19.get_home();
    if (*((long long *)&v19) == 0x8000000000000000)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        starship::modules::openstack::get_osp_project_from_config::{{closure}}(&v6, &v19);
        v2 = v8;
        v0 = v7;
    }
    v4.to_vec("/etc/openstack/clouds.yaml/clouds.yaml.config/openstack/clouds.yamlcloudssrc/modules/openstack.rs", 26);
    v12 = v5;
    memcpy(&v11, &v4, 16);
    memcpy(&v7, &v13, 16);
    v8 = v14;
    memcpy(&v9, &v0, 16);
    v10 = v2;
    v0 = &v7;
    v1 = &v13;
    v3 = &v15;
    v4.try_fold(&v0, &v2);
    if (*((long long *)&v4) == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<versions::Chunk>(&v4);
    }
    else
    {
        *((unsigned long long *)&a0[16]) = v5;
        *(a0) = v4;
    }
    core::ptr::drop_in_place<starship::modules::kubernetes::KubeCtxComponents>(&v7);
    return;
}
