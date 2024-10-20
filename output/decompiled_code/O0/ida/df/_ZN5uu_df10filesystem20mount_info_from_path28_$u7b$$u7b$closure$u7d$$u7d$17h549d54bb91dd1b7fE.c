__int64 __fastcall uu_df::filesystem::mount_info_from_path::{{closure}}(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _BYTE v4[24]; // [rsp+10h] [rbp-18h] BYREF

  v1 = core::slice::<impl [T]>::iter(*a1, a1[1]);
  core::iter::traits::iterator::Iterator::filter(v4, v1, v2, a1[2]);
  return core::iter::traits::iterator::Iterator::max_by_key(v4);
}
