__int64 __fastcall uu_dd::bufferedoutput::BufferedOutput::new(__int64 a1, char *a2)
{
  char v3; // bp
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+10h] [rbp-28h]

  v3 = *a2;
  v4 = *((_DWORD *)a2 + 1);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v8, *(_QWORD *)(*((_QWORD *)a2 + 2) + 120LL), 0LL);
  v5 = v9;
  if ( v8 )
    alloc::raw_vec::handle_error(v9, v10);
  v6 = v10;
  *(_BYTE *)(a1 + 24) = v3;
  *(_WORD *)(a1 + 25) = *(_WORD *)(a2 + 1);
  *(_BYTE *)(a1 + 27) = a2[3];
  *(_DWORD *)(a1 + 28) = v4;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = 0LL;
  return a1;
}
