__int64 __fastcall uu_ls::uumain::uumain::{{closure}}(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = alloc::alloc::exchange_malloc(16LL, 8LL);
  v1 = std::path::Path::new(asc_292BD, 1LL);
  if ( (v4 & 7) != 0 )
    core::panicking::panic_misaligned_pointer_dereference(8LL, v4, &off_1FB750);
  *(_QWORD *)v4 = v1;
  *(_QWORD *)(v4 + 8) = v2;
  alloc::slice::<impl [T]>::into_vec(a1, v4, 1LL);
  return a1;
}
