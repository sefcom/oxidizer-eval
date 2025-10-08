fn starship::modules::package::get_version(a1: i64, a2: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x30], Other Possible Types: struct24
    let v3: i64;  // rbx

    v3 = alloc::alloc::Global::alloc_impl(8, 168, 0);
    *(v3 as &void*) = starship::modules::package::get_cargo_version;
    *((v3 + 8) as &void*) = starship::modules::package::get_nimble_version;
    *((v3 + 16) as &void*) = starship::modules::package::get_node_package_version;
    *((v3 + 24) as &void*) = starship::modules::package::get_jsr_package_version;
    *((v3 + 32) as &void*) = starship::modules::package::get_pyproject_version;
    *((v3 + 40) as &void*) = starship::modules::package::get_setup_cfg_version;
    *((v3 + 48) as &void*) = starship::modules::package::get_composer_version;
    *((v3 + 56) as &void*) = starship::modules::package::get_gradle_version;
    *((v3 + 64) as &void*) = starship::modules::package::get_julia_project_version;
    *((v3 + 72) as &void*) = starship::modules::package::get_mix_version;
    *((v3 + 80) as &void*) = starship::modules::package::get_helm_package_version;
    *((v3 + 88) as &void*) = starship::modules::package::get_maven_version;
    *((v3 + 96) as &void*) = starship::modules::package::get_meson_version;
    *((v3 + 104) as &void*) = starship::modules::package::get_shard_version;
    *((v3 + 112) as &void*) = starship::modules::package::get_vmod_version;
    *((v3 + 120) as &void*) = starship::modules::package::get_vpkg_version;
    *((v3 + 128) as &void*) = starship::modules::package::get_sbt_version;
    *((v3 + 136) as &void*) = starship::modules::package::get_daml_project_version;
    *((v3 + 144) as &void*) = starship::modules::package::get_dart_pub_version;
    *((v3 + 152) as &void*) = starship::modules::package::get_rlang_version;
    *((v3 + 160) as &void*) = starship::modules::package::get_galaxy_version;
    v0 = struct16 {
        field_0: v3
        field_8: v0 + 168
    };
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(a0, &v0, a1, a2);
    return;
}
