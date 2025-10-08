__int64 __fastcall bat::assets::assets_metadata::AssetsMetadata::save_to_folder(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _DWORD v5[2]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h]
  _BYTE v7[48]; // [rsp+18h] [rbp-30h] BYREF

  std::path::Path::join(v7, a3, a4, aMetadataYaml_0, 13LL);
  std::fs::File::create(v5, v7);
  if ( v5[0] == 1 )
  {
    result = v6;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    result = serde_yaml::ser::to_writer(v5[1], a2);
    if ( result )
    {
      *(_BYTE *)a1 = 6;
      *(_QWORD *)(a1 + 8) = result;
    }
    else
    {
      *(_BYTE *)a1 = 13;
    }
  }
  return result;
}