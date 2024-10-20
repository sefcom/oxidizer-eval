__int64 __fastcall uu_cp::disk_usage_directory(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  _BYTE *v8; // rdi
  __int64 v9; // rsi
  volatile signed __int64 *v10; // [rsp+0h] [rbp-158h] BYREF
  bool v11; // [rsp+8h] [rbp-150h]
  __int64 v12; // [rsp+10h] [rbp-148h]
  __int64 v13; // [rsp+18h] [rbp-140h]
  volatile signed __int64 *v14; // [rsp+20h] [rbp-138h] BYREF
  _BYTE *v15; // [rsp+28h] [rbp-130h]
  __int128 v16; // [rsp+30h] [rbp-128h]
  __int64 v17; // [rsp+40h] [rbp-118h]
  __int64 v18; // [rsp+48h] [rbp-110h] BYREF
  volatile signed __int64 *v19; // [rsp+50h] [rbp-108h]
  _BYTE *v20; // [rsp+58h] [rbp-100h]
  __int128 v21; // [rsp+60h] [rbp-F8h]
  __int64 v22; // [rsp+70h] [rbp-E8h]
  volatile signed __int64 *dest; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-D8h]
  __int64 v25; // [rsp+88h] [rbp-D0h]
  __int64 v26; // [rsp+C8h] [rbp-90h]

  std::sys::pal::unix::fs::readdir(&dest, a1, a2);
  if ( (_BYTE)v24 == 2 )
    return 1LL;
  v10 = dest;
  v11 = (_BYTE)v24 != 0;
  for ( i = 0LL; ; i += v13 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v18, &v10);
    if ( !v18 )
      break;
    if ( !v19 )
      goto LABEL_28;
    v17 = v22;
    v16 = v21;
    v14 = v19;
    v15 = v20;
    std::fs::DirEntry::file_type(&dest, &v14);
    if ( (_DWORD)dest )
      goto LABEL_24;
    if ( (WORD2(dest) & 0xF000) == 0x4000 )
    {
      std::fs::DirEntry::path(&dest, &v14);
      v12 = v24;
      v3 = uu_cp::disk_usage_directory(v24, v25);
      v13 = v4;
      if ( v3 )
      {
        if ( dest )
          _rust_dealloc(v12, dest, 1LL);
LABEL_24:
        if ( !_InterlockedDecrement64(v14) )
          alloc::sync::Arc<T,A>::drop_slow(&v14);
        v8 = v15;
        v9 = v16;
        *v15 = 0;
        if ( v9 )
          _rust_dealloc(v8, v9, 1LL);
LABEL_28:
        if ( !_InterlockedDecrement64(v10) )
          alloc::sync::Arc<T,A>::drop_slow(&v10);
        return 1LL;
      }
      if ( dest )
        _rust_dealloc(v12, dest, 1LL);
    }
    else
    {
      std::fs::DirEntry::metadata(&dest);
      if ( (_DWORD)dest == 2 )
        goto LABEL_24;
      v13 = v26;
    }
    if ( !_InterlockedDecrement64(v14) )
      alloc::sync::Arc<T,A>::drop_slow(&v14);
    v5 = v15;
    v6 = v16;
    *v15 = 0;
    if ( v6 )
      _rust_dealloc(v5, v6, 1LL);
  }
  if ( !_InterlockedDecrement64(v10) )
    alloc::sync::Arc<T,A>::drop_slow(&v10);
  return 0LL;
}
