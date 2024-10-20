__int64 __fastcall uu_pr::uumain::uumain::{{closure}}(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // [rsp+20h] [rbp-8h]

  v7 = alloc::alloc::exchange_malloc(16LL, 8LL);
  if ( (v7 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(8LL, v7, &off_2C5070);
  *(_QWORD *)v7 = a3;
  *(_QWORD *)(v7 + 8) = a4;
  alloc::slice::<impl [T]>::into_vec(a1, v7, 1LL);
  return a1;
}
