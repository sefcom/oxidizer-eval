__int64 __fastcall bat::config::system_config_file(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h] BYREF
  __int64 v3; // [rsp+10h] [rbp-18h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v2, "/etc ─JSON\x1B[3J[^/]:", 4LL);
  std::path::PathBuf::push(&v2, aBat, 3LL);
  std::path::PathBuf::push(&v2, aConfig_0, 6LL);
  result = v3;
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  return result;
}