__int64 __fastcall bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _DWORD v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  _QWORD v7[2]; // [rsp+10h] [rbp-38h] BYREF
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::path::Path::join(v7, a2, a3, aMetadataYaml_0, 13LL);
  std::fs::File::open(v5, v7);
  if ( v5[0] == 1 )
  {
    result = v6;
    *(_BYTE *)a1 = 0;
LABEL_5:
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  serde_yaml::de::from_reader(v7, v5[1]);
  v4 = v7[0];
  result = v7[1];
  if ( v7[0] == 0x8000000000000001LL )
  {
    *(_BYTE *)a1 = 6;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 40) = v9;
  *(_OWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = result;
  *(_BYTE *)a1 = 13;
  return result;
}