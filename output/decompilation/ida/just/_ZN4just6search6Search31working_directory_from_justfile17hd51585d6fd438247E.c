__int64 __fastcall just::search::Search::working_directory_from_justfile(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int128 v8; // xmm0
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]

  v4 = 0x8000000000000003LL;
  v5 = std::path::Path::parent(a2, a3);
  if ( v5 )
  {
    result = std::path::Path::to_path_buf(a1 + 8, v5, v6);
    v4 = 0x8000000000000006LL;
  }
  else
  {
    std::path::Path::to_path_buf(&v9, a2, a3);
    result = v9;
    v8 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_OWORD *)(a1 + 16) = v8;
  }
  *(_QWORD *)a1 = v4;
  return result;
}