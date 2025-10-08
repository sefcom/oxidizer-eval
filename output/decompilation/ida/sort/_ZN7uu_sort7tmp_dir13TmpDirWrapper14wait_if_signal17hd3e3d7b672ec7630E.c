__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  _BYTE v4[32]; // [rsp+8h] [rbp-20h] BYREF

  std::sync::poison::mutex::Mutex<T>::lock(v4, *(_QWORD *)(a1 + 48) + 16LL);
  v1 = core::result::Result<T,E>::unwrap(v4, &off_18CBB8);
  return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>>>(
           v1,
           v2 & 1);
}