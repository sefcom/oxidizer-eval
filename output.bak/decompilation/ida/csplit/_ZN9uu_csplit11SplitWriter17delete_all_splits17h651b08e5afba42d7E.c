__int64 __fastcall uu_csplit::SplitWriter::delete_all_splits(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v9[72]; // [rsp+10h] [rbp-48h] BYREF

  v8 = 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = 0LL;
  do
  {
    v5 = <usize as core::iter::range::Step>::forward_unchecked(v4);
    uu_csplit::split_name::SplitName::get((__int64)v9, v2, v4);
    v6 = std::fs::remove_file(v9);
    if ( v6 )
    {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v8);
      v8 = v6;
      v3 = v6;
    }
    v4 = v5;
  }
  while ( v5 < v1 );
  return v3;
}
