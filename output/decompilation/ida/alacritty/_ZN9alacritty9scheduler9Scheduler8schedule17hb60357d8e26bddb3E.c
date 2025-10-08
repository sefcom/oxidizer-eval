__int64 __fastcall alacritty::scheduler::Scheduler::schedule(
        __int64 a1,
        const void *a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r15
  int v12; // edx
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r14
  int v16; // r13d
  __int64 v20; // [rsp+28h] [rbp-140h] BYREF
  __int64 v21; // [rsp+30h] [rbp-138h] BYREF
  int v22; // [rsp+38h] [rbp-130h]
  _BYTE dest[192]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v24; // [rsp+100h] [rbp-68h]
  int v25; // [rsp+108h] [rbp-60h]
  __int64 v26; // [rsp+110h] [rbp-58h]
  int v27; // [rsp+118h] [rbp-50h]
  __int64 v28; // [rsp+120h] [rbp-48h]
  char v29; // [rsp+128h] [rbp-40h]

  v9 = std::time::Instant::now(a1);
  v11 = <std::time::Instant as core::ops::arith::Add<core::time::Duration>>::add(v9, v10, a3, a4);
  v13 = v12;
  v21 = v11;
  v22 = v12;
  alloc::collections::vec_deque::VecDeque<T,A>::iter(dest, a1 + 32);
  v20 = 0LL;
  if ( (<alloc::collections::vec_deque::iter::Iter<T> as core::iter::traits::iterator::Iterator>::try_fold(
          dest,
          &v21,
          &v20) & 1) != 0 )
    v15 = v14;
  else
    v15 = *(_QWORD *)(a1 + 56);
  v16 = 1000000000;
  if ( a5 )
    v16 = a4;
  v24 = v11;
  v25 = v13;
  memcpy(dest, a2, sizeof(dest));
  v28 = a6;
  v29 = a7;
  v26 = a3;
  v27 = v16;
  return alloc::collections::vec_deque::VecDeque<T,A>::insert(a1 + 32, v15, dest);
}