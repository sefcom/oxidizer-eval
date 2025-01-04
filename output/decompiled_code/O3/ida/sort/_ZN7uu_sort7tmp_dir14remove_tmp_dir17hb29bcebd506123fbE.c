__int64 __fastcall uu_sort::tmp_dir::remove_tmp_dir(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v5; // [rsp+8h] [rbp-130h] BYREF
  char v6; // [rsp+10h] [rbp-128h]
  __int64 v7; // [rsp+18h] [rbp-120h]
  __int64 v8; // [rsp+20h] [rbp-118h]
  __int64 v9; // [rsp+28h] [rbp-110h] BYREF
  _OWORD v10[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v11; // [rsp+50h] [rbp-E8h]
  _OWORD v12[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+78h] [rbp-C0h]
  _QWORD v14[13]; // [rsp+80h] [rbp-B8h] BYREF
  char v15; // [rsp+E8h] [rbp-50h]
  _BYTE v16[72]; // [rsp+F0h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1;
  std::fs::read_dir(&v5, a1, a2);
  if ( v6 == 2 )
    goto LABEL_6;
  v7 = a1;
  v8 = a2;
  v14[0] = 0LL;
  v14[6] = 0LL;
  v14[12] = v5;
  v15 = v6;
  while ( 1 )
  {
    <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v12, v14);
    if ( !*(_QWORD *)&v12[0] )
      break;
    v11 = v13;
    v10[1] = v12[1];
    v10[0] = v12[0];
    std::fs::DirEntry::path(v16, v10);
    v9 = std::fs::remove_file(v16);
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::fs::DirEntry>(v10);
  }
  core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::fs::ReadDir>>(v14);
  v2 = v8;
  v3 = v7;
  if ( v6 == 2 )
LABEL_6:
    core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v5);
  return std::fs::remove_dir(v3, v2);
}
