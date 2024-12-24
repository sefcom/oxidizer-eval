_QWORD *__fastcall uu_pr::open(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  _OWORD v7[2]; // [rsp+0h] [rbp-E8h] BYREF
  int v8; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-C0h]
  unsigned int v10; // [rsp+58h] [rbp-90h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_75606, 1LL) )
  {
    v4 = std::io::stdio::stdin();
    a1[1] = alloc::boxed::Box<T>::new(v4);
    a1[2] = &unk_308A70;
    *a1 = 0x8000000000000005LL;
  }
  else
  {
    std::fs::metadata(&v8, a2, a3);
    if ( v8 == 2 )
    {
      uu_pr::open::{{closure}}(a1, a2, a3, v9);
    }
    else
    {
      uu_pr::open::{{closure}}(v7, a2, a3, v10);
      v5 = v7[0];
      *((_OWORD *)a1 + 1) = v7[1];
      *(_OWORD *)a1 = v5;
    }
  }
  return a1;
}
