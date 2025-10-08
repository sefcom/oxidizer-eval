__int64 __fastcall fd::fmt::input::remove_extension(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h] BYREF
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]

  v4 = a2;
  fd::fmt::input::dirname(&v14);
  v5 = std::path::Path::file_stem(a2, a3);
  v7 = v6;
  if ( v5 )
    v4 = v5;
  else
    v7 = a3;
  v8 = v14;
  v9 = v15;
  std::path::Path::join(&v17, v15, v16, v4, v7);
  core::mem::drop(v8, v9);
  v10 = v18;
  v11 = fd::filesystem::strip_current_dir(v18, v19);
  std::path::Path::to_path_buf(&v20, v11, v12);
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)a1 = v20;
  return core::mem::drop(v17, v10);
}