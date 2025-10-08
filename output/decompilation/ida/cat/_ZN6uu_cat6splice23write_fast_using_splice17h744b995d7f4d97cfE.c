__int64 __fastcall uu_cat::splice::write_fast_using_splice(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  int v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]

  v3 = uucore::features::pipes::pipe();
  v4 = HIDWORD(v3);
  if ( (_DWORD)v3 == -1 )
  {
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_DWORD *)(a1 + 8) = v4;
    return result;
  }
  v13 = v3;
  do
  {
    v5 = a2;
    nix::fcntl::splice(&v14, a2, (char *)&v13 + 4);
    if ( v14 == 1 )
    {
      *(_BYTE *)(a1 + 8) = 1;
LABEL_11:
      *(_QWORD *)a1 = 0x8000000000000006LL;
      goto LABEL_12;
    }
    v8 = v15;
    if ( !v15 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      goto LABEL_11;
    }
  }
  while ( (unsigned int)uucore::features::pipes::splice_exact(&v13, v15) == 134 );
  v5 = v8;
  v9 = uu_cat::splice::copy_exact((unsigned int)v13, v8);
  v7 = 0x8000000000000006LL;
  if ( v9 == 134 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = 0x8000000000000006LL;
  }
  else
  {
    v7 = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_DWORD *)(a1 + 8) = v9;
  }
LABEL_12:
  core::ptr::drop_in_place<std::fs::File>(HIDWORD(v13), v5, v6, v7);
  return core::ptr::drop_in_place<std::fs::File>((unsigned int)v13, v5, v11, v12);
}