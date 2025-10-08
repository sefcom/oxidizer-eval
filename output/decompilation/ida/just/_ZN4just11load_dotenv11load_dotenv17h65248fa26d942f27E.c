__int64 __fastcall just::load_dotenv::load_dotenv(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 result; // rax
  _BYTE v25[8]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-38h]

  v5 = a5;
  v7 = *(_QWORD *)(a2 + 144);
  v8 = *(_QWORD *)(a2 + 168);
  v9 = *(_QWORD *)(a3 + 24);
  v10 = a3;
  if ( __OFSUB__(-*(_QWORD *)a3, 1LL) )
    v10 = 0LL;
  if ( !__OFSUB__(-v7, 1LL) )
    v10 = a2 + 144;
  v11 = a2 + 168;
  v12 = a3 + 24;
  if ( __OFSUB__(-v9, 1LL) )
    v12 = 0LL;
  if ( !__OFSUB__(-v8, 1LL) )
    v12 = v11;
  if ( *(_BYTE *)(a3 + 314)
    || *(_BYTE *)(a3 + 315) == 1
    || v7 != 0x8000000000000000LL
    || *(_QWORD *)a3 != 0x8000000000000000LL
    || *(_BYTE *)(a3 + 316) )
  {
    if ( !(v9 ^ 0x8000000000000000LL | v8 ^ 0x8000000000000000LL) )
      goto LABEL_20;
  }
  else if ( !(v9 ^ 0x8000000000000000LL | v8 ^ 0x8000000000000000LL) )
  {
LABEL_27:
    result = a1;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)a1 = 56;
    return result;
  }
  std::path::Path::join(v25, a4, a5, v12);
  v13 = v26;
  v14 = v27;
  v11 = v27;
  if ( (unsigned __int8)std::path::Path::is_file(v26, v27) )
  {
    just::load_dotenv::load_from_file(a1, v13, v14, *(unsigned __int8 *)(a3 + 315));
    return core::ptr::drop_in_place<std::path::PathBuf>(v25);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v25);
LABEL_20:
  v28 = core::option::Option<T>::map_or(v10, v11, a3, v12);
  v16 = v15;
  do
  {
    v17 = std::path::Path::parent(a4, v5);
    v19 = v18;
    std::path::Path::join(v25, a4, v5, v28, v16);
    v20 = v26;
    v21 = v27;
    if ( (unsigned __int8)std::path::Path::is_file(v26, v27) )
    {
      just::load_dotenv::load_from_file(a1, v20, v21, *(unsigned __int8 *)(a3 + 315));
      return core::ptr::drop_in_place<std::path::PathBuf>(v25);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v25);
    a4 = v17;
    v5 = v19;
  }
  while ( v17 );
  if ( !*(_BYTE *)(a3 + 316) )
    goto LABEL_27;
  result = a1;
  *(_BYTE *)a1 = 17;
  return result;
}