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
  _DWORD v13[14]; // [rsp+38h] [rbp-B0h]
  __int128 v14; // [rsp+70h] [rbp-78h]
  unsigned __int64 v15; // [rsp+80h] [rbp-68h] BYREF
  int v16; // [rsp+88h] [rbp-60h]
  __int128 v17; // [rsp+8Ch] [rbp-5Ch]
  __int128 v18; // [rsp+9Ch] [rbp-4Ch]
  __int128 v19; // [rsp+ACh] [rbp-3Ch]
  int v20; // [rsp+BCh] [rbp-2Ch]

  v4 = 0x8000000000000000LL;
  if ( !a2 )
    goto LABEL_6;
  v7 = 0x1B600000000LL;
  v8 = 256;
  v9 = 1;
  std::fs::OpenOptions::open(v10, &v7, a2, a3);
  if ( v10[0] != 1 )
  {
    v3 = v10[1];
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, a2, a3);
    v4 = v12;
    v14 = *(_OWORD *)v13;
LABEL_6:
    *(_QWORD *)a1 = v4;
    *(_OWORD *)(a1 + 8) = v14;
    *(_DWORD *)(a1 + 24) = v3;
    return a1;
  }
  uu_sort::Output::new::{{closure}}(&v15, a2, a3, v11);
  v13[13] = v20;
  *(_OWORD *)&v13[9] = v19;
  *(_OWORD *)&v13[5] = v18;
  *(_OWORD *)&v13[1] = v17;
  v12 = v15;
  v13[0] = v16;
  *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v12);
  *(_QWORD *)(a1 + 16) = &off_18C448;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return a1;
}