__int64 __fastcall uu_cat::splice::write_fast_using_splice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  int v18; // [rsp+18h] [rbp-40h] BYREF
  __int64 v19; // [rsp+20h] [rbp-38h]

  v5 = uucore::features::pipes::pipe();
  v6 = HIDWORD(v5);
  if ( (_DWORD)v5 == -1 )
  {
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_DWORD *)(a1 + 8) = v6;
    return result;
  }
  v17 = a1;
  v16 = v5;
  do
  {
    v7 = a2;
    nix::fcntl::splice(&v18, a2, 0LL, (char *)&v16 + 4, 0LL, &unk_20000, 0);
    if ( v18 )
    {
      v11 = (_QWORD *)v17;
      *(_BYTE *)(v17 + 8) = 1;
LABEL_11:
      *v11 = 0x8000000000000006LL;
      goto LABEL_12;
    }
    v9 = v19;
    if ( !v19 )
    {
      v11 = (_QWORD *)v17;
      *(_BYTE *)(v17 + 8) = 0;
      goto LABEL_11;
    }
  }
  while ( (unsigned int)uucore::features::pipes::splice_exact(&v16, a3, v19) == 134 );
  v7 = a3;
  v10 = uu_cat::splice::copy_exact(v16, a3, v9);
  v11 = (_QWORD *)0x8000000000000006LL;
  if ( v10 == 134 )
  {
    v12 = (_QWORD *)v17;
    *(_BYTE *)(v17 + 8) = 1;
    *v12 = 0x8000000000000006LL;
  }
  else
  {
    v11 = (_QWORD *)0x8000000000000001LL;
    v8 = v17;
    *(_QWORD *)v17 = 0x8000000000000001LL;
    *(_DWORD *)(v8 + 8) = v10;
  }
LABEL_12:
  core::ptr::drop_in_place<std::fs::File>(HIDWORD(v16), v7, v8, v11);
  return core::ptr::drop_in_place<std::fs::File>((unsigned int)v16, v7, v14, v15);
}
