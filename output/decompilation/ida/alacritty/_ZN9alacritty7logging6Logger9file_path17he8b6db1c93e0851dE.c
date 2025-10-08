__int64 __fastcall alacritty::logging::Logger::file_path(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  unsigned __int8 v4; // bp
  __int128 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+18h] [rbp-20h]

  std::sync::poison::mutex::Mutex<T>::lock(&v5, a2 + 48);
  if ( (v5 & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<std::sync::poison::mutex::MutexGuard<alacritty::logging::OnDemandLogFile>,std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alacritty::logging::OnDemandLogFile>>>>(&v5);
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v3 = *((_QWORD *)&v5 + 1);
    v4 = v6;
    <&str as alloc::string::SpecToString>::spec_to_string(
      &v5,
      *(_QWORD *)(*((_QWORD *)&v5 + 1) + 16LL),
      *(_QWORD *)(*((_QWORD *)&v5 + 1) + 24LL));
    a1[2] = v6;
    *(_OWORD *)a1 = v5;
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alacritty::logging::OnDemandLogFile>>(v3, v4);
  }
  return result;
}