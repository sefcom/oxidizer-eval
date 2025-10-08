__int64 __fastcall forc_publish::md_pre_process::MarkdownFlattener::get_file(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 inner; // rax
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h] BYREF
  __int128 v9; // [rsp+20h] [rbp-28h]

  std::fs::canonicalize(&v8, a2);
  v2 = v8;
  if ( __OFSUB__(-v8, 1LL) )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v8);
    return 0LL;
  }
  else
  {
    v7 = v9;
    v6 = v8;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, &v6);
    if ( inner )
      v3 = *(_QWORD *)(inner + 32);
    else
      v3 = 0LL;
    core::ptr::drop_in_place<std::path::PathBuf>(v2, v7);
  }
  return v3;
}