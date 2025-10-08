__int64 __fastcall bat::assets::assets_metadata::AssetsMetadata::new(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int128 v3; // [rsp+8h] [rbp-20h] BYREF
  __int64 v4; // [rsp+18h] [rbp-10h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v3);
  result = std::time::SystemTime::now();
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  *(_QWORD *)(a1 + 24) = result;
  *(_DWORD *)(a1 + 32) = v2;
  return result;
}