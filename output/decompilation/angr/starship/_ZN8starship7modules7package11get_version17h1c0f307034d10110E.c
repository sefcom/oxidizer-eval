void starship::modules::package::get_version(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[21];  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v3[21];  // rax
    unsigned long long v4[21];  // rbx

    v3 = 8.alloc_impl(168, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 168); /* do not return */
    v4 = v3;
    v4[0] = starship::modules::package::get_cargo_version;
    v4[1] = starship::modules::package::get_nimble_version;
    v4[2] = starship::modules::package::get_node_package_version;
    v4[3] = starship::modules::package::get_jsr_package_version;
    v4[4] = starship::modules::package::get_pyproject_version;
    v4[5] = starship::modules::package::get_setup_cfg_version;
    v4[6] = starship::modules::package::get_composer_version;
    v4[7] = starship::modules::package::get_gradle_version;
    v4[8] = starship::modules::package::get_julia_project_version;
    v4[9] = starship::modules::package::get_mix_version;
    v4[10] = starship::modules::package::get_helm_package_version;
    v4[11] = starship::modules::package::get_maven_version;
    v4[12] = starship::modules::package::get_meson_version;
    v4[13] = starship::modules::package::get_shard_version;
    v4[14] = starship::modules::package::get_vmod_version;
    v4[15] = starship::modules::package::get_vpkg_version;
    v4[16] = starship::modules::package::get_sbt_version;
    v4[17] = starship::modules::package::get_daml_project_version;
    v4[18] = starship::modules::package::get_dart_pub_version;
    v4[19] = starship::modules::package::get_rlang_version;
    v4[20] = starship::modules::package::get_galaxy_version;
    v0[0] = v4;
    v1 = v0 + 1;
    a0.find_map(&v0, a1, a2);
    core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(21, v0);
    return;
}
