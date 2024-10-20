__int64 __fastcall uu_tr::operation::SqueezeOperation::new(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v12; // [rsp+8h] [rbp-90h]
  __int128 v13; // [rsp+10h] [rbp-88h] BYREF
  __int128 v14; // [rsp+20h] [rbp-78h]
  __int128 v15; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v16[10]; // [rsp+48h] [rbp-50h] BYREF

  v12 = *a2;
  v2 = a2[1];
  v3 = a2[2];
  if ( *(_QWORD *)(__readfsqword(0) - 48) )
  {
    v4 = __readfsqword(0) - 48;
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 16);
  }
  else
  {
    v5 = std::sys::pal::unix::rand::hashmap_random_keys();
    v6 = v7;
    v8 = (_QWORD *)(__readfsqword(0) - 48);
    *v8 = 1LL;
    v8[1] = v5;
    v8[2] = v7;
  }
  *(_QWORD *)(__readfsqword(0) - 48 + 8) = v5 + 1;
  v13 = *(_OWORD *)&off_EE4D0;
  v14 = xmmword_EE4E0;
  *(_QWORD *)&v15 = v5;
  *((_QWORD *)&v15 + 1) = v6;
  if ( v3 )
    hashbrown::raw::RawTable<T,A>::reserve_rehash(&v13, v3, &v15);
  v16[0] = v2;
  v16[1] = v2;
  v16[2] = v12;
  v16[3] = v2 + v3;
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(v16, &v13);
  v9 = v13;
  v10 = v14;
  *(_OWORD *)(a1 + 32) = v15;
  *(_OWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}
