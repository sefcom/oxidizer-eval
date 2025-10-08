__int64 __fastcall uu_csplit::SplitWriter::delete_all_splits(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v9[72]; // [rsp+10h] [rbp-48h] BYREF

  v7 = 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = 0LL;
  do
  {
    while ( 1 )
    {
      uu_csplit::split_name::SplitName::get((__int64)v9, v2, v3);
      v5 = std::fs::remove_file(v9);
      v8 = v5;
      if ( v5 )
        break;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v8);
      if ( v1 == ++v3 )
        return v4;
    }
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v7);
    v7 = v5;
    v4 = v5;
    ++v3;
  }
  while ( v1 != v3 );
  return v4;
}