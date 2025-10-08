__int64 __fastcall just::search::Search::search_parent_directory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __int128 v9; // [rsp+10h] [rbp-38h]

  v4 = std::path::Path::parent(a2, a3);
  if ( v4 && std::path::Path::parent(v4, v5) )
    return just::search::Search::find_in_directory(a1);
  <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v8, a2, a3);
  result = v8;
  v7 = v9;
  *(_QWORD *)(a1 + 8) = 0x8000000000000003LL;
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)(a1 + 24) = v7;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}