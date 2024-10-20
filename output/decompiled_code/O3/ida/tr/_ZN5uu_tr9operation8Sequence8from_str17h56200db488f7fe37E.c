__int64 __fastcall uu_tr::operation::Sequence::from_str(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r13
  __int64 v14; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int128 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  _QWORD v23[10]; // [rsp+58h] [rbp-50h] BYREF

  v22 = a1;
  v5 = _rust_alloc(96LL, 8LL);
  if ( !v5 )
    alloc::raw_vec::handle_error(8LL, 96LL);
  v14 = 4LL;
  v15 = v5;
  v16 = 0LL;
  while ( 1 )
  {
    <(A,B,C,D,E,F) as nom::branch::Alt<Input,Output,Error>>::choice(&v17, 8LL, a2, a3);
    if ( v17 )
      break;
    v8 = v19;
    if ( v19 == a3 )
    {
      v10 = 1LL;
      v12 = 8LL;
      if ( (_QWORD)v20 == 0x800000000000000ALL )
        goto LABEL_14;
      v13 = 0LL;
      if ( (((unsigned __int64)v20 ^ 0x8000000000000000LL) == 4 || ((unsigned __int64)v20 ^ 0x8000000000000000LL) >= 0xA)
        && (_QWORD)v20 )
      {
        _rust_dealloc(*((_QWORD *)&v20 + 1), v20, 1LL);
LABEL_14:
        v13 = 0LL;
      }
LABEL_15:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v14);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14);
      v17 = v10;
      v18 = a2;
      v19 = a3;
      *(_QWORD *)&v20 = v12 | v13;
      core::result::unwrap_failed(aCalledResultUn, 43LL, &v17, &unk_EE510, &off_EE838);
    }
    a2 = v18;
    v9 = v16;
    if ( v16 == v14 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v14);
    v6 = v15;
    v7 = 3 * v9;
    *(_QWORD *)(v15 + 8 * v7 + 16) = v21;
    *(_OWORD *)(v6 + 8 * v7) = v20;
    v16 = v9 + 1;
    a3 = v8;
  }
  v10 = v18;
  if ( v18 != 1 )
  {
    a2 = v19;
    a3 = v20;
    v12 = BYTE8(v20);
    v13 = ((unsigned __int64)((HIBYTE(v20) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v20 + 13)) << 40) | ((unsigned __int64)*(unsigned int *)((char *)&v20 + 9) << 8);
    goto LABEL_15;
  }
  v23[0] = v15;
  v23[2] = v14;
  v23[1] = v15;
  v23[3] = v15 + 24 * v16;
  return core::iter::adapters::try_process(v22, v23);
}
