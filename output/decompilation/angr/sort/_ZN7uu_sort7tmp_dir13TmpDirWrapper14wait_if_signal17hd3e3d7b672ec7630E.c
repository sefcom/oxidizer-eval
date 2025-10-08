long long uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(struct_0 *a0)
{
    char v0;  // [bp-0x20]
    char v2;  // dl

    v0.lock(a0->field_30 + 16);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>>>(v0.unwrap(&g_58cbb8), v2 & 1);
}
