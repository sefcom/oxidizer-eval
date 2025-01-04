__int64 __fastcall uu_sort::Output::new(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned __int64 v4; // r12
  __int64 v7; // [rsp+10h] [rbp-D8h] BYREF
  int v8; // [rsp+18h] [rbp-D0h]
  __int16 v9; // [rsp+1Ch] [rbp-CCh]
  _DWORD v10[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+38h] [rbp-B0h]
  __int128 v14; // [rsp+48h] [rbp-A0h]
  __int128 v15; // [rsp+58h] [rbp-90h]
  __int64 v16; // [rsp+68h] [rbp-80h]
  unsigned __int64 v17; // [rsp+70h] [rbp-78h] BYREF
  __int128 v18; // [rsp+78h] [rbp-70h]
  __int128 v19; // [rsp+88h] [rbp-60h]
  __int128 v20; // [rsp+98h] [rbp-50h]
  __int64 v21; // [rsp+A8h] [rbp-40h]
  __int128 v22; // [rsp+B0h] [rbp-38h]

  v4 = 0x8000000000000000LL;
  if ( !a2 )
    goto LABEL_6;
  v7 = 0x1B600000000LL;
  v8 = 256;
  v9 = 1;
  std::fs::OpenOptions::open(v10, &v7, a2, a3);
  if ( !v10[0] )
  {
    v3 = v10[1];
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v12, a2, a3);
    v4 = v12;
    v22 = v13;
LABEL_6:
    *(_QWORD *)a1 = v4;
    *(_OWORD *)(a1 + 8) = v22;
    *(_DWORD *)(a1 + 24) = v3;
    return a1;
  }
  uu_sort::Output::new::{{closure}}(&v17, a2, a3, v11);
  v12 = v17;
  v13 = v18;
  v14 = v19;
  v15 = v20;
  v16 = v21;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v12);
  *(_QWORD *)(a1 + 16) = &off_1FF678;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return a1;
}
