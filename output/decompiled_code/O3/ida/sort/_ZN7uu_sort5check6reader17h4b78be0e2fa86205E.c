__int64 __fastcall uu_sort::check::reader(__int64 a1, void (__fastcall **a2)(__int64), __int64 a3, int a4, __int64 a5)
{
  int v7; // r13d
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // r14
  void (__fastcall **v11)(__int64); // r15
  void (__fastcall *v12)(__int64); // rsi
  __int64 v13; // r15
  void (__fastcall **v14)(__int64); // r12
  void (__fastcall *v15)(__int64); // rsi
  char v17; // [rsp+Fh] [rbp-E9h] BYREF
  __int64 v18; // [rsp+10h] [rbp-E8h] BYREF
  void (__fastcall **v19)(__int64); // [rsp+18h] [rbp-E0h]
  __int64 v20; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-D0h]
  __int64 v22; // [rsp+30h] [rbp-C8h]
  __int64 v23; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B0h]
  _QWORD v26[21]; // [rsp+50h] [rbp-A8h] BYREF

  v18 = a1;
  v19 = a2;
  v20 = 0LL;
  v21 = 1LL;
  v22 = 0LL;
  v23 = a3;
  v7 = *(unsigned __int8 *)(a5 + 153);
  while ( 1 )
  {
    <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(v26, &v23);
    if ( v26[0] == 0x8000000000000000LL )
    {
LABEL_5:
      if ( v20 )
        _rust_dealloc(v21, v20, 1LL);
      v10 = v18;
      v11 = v19;
      if ( *v19 )
        (*v19)(v18);
      v12 = v11[1];
      if ( v12 )
        _rust_dealloc(v10, v12, v11[2]);
      return 0LL;
    }
    uu_sort::chunks::read(
      (unsigned int)&v24,
      a4,
      (unsigned int)v26,
      0,
      v8,
      (unsigned int)&v20,
      (__int64)&v18,
      (unsigned int)&v17,
      v7,
      a5);
    v9 = v24;
    if ( v24 )
      break;
    if ( !(_BYTE)v25 )
      goto LABEL_5;
  }
  if ( v20 )
    _rust_dealloc(v21, v20, 1LL);
  v13 = v18;
  v14 = v19;
  if ( *v19 )
    (*v19)(v18);
  v15 = v14[1];
  if ( v15 )
    _rust_dealloc(v13, v15, v14[2]);
  return v9;
}
