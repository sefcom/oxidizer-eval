__int64 __fastcall rg::search::SearchWorkerBuilder::preprocessor(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  _BYTE v4[24]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+18h] [rbp-40h]
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-28h]

  if ( __OFSUB__(0LL, *a2) )
  {
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a1 + 104);
    *(_QWORD *)(a1 + 104) = 0x8000000000000000LL;
LABEL_6:
    v2 = 0LL;
    goto LABEL_7;
  }
  grep_cli::decompress::resolve_binary(v4, a2);
  v6 = *(_OWORD *)&v4[8];
  v7 = v5;
  if ( *(_DWORD *)v4 != 1 )
  {
    *(_QWORD *)&v4[16] = v7;
    *(_OWORD *)v4 = v6;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a1 + 104);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)&v4[16];
    *(_OWORD *)(a1 + 104) = *(_OWORD *)v4;
    goto LABEL_6;
  }
  *(_QWORD *)&v4[16] = v7;
  *(_OWORD *)v4 = v6;
  ((void (__fastcall *)(_BYTE *))anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from)(v4);
  v2 = 1LL;
LABEL_7:
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a2);
  return v2;
}